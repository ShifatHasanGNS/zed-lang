%{
// =============================================================================
// lexer.l
// =============================================================================


#include "token.hpp"
#include "ast.hpp"         // must precede parser.tab.hpp (see token.cpp comment)
#include "lexer_extra.hpp"

#include "../support/source_loc.hpp"
#include "../support/error.hpp"

#include "../flex_bison/parser.tab.hpp"

#include <string>
#include <cstdint>
#include <cstdlib>

using namespace ZedLang;

#define YY_EXTRA_TYPE LexerExtra*

// Update location tracking on every token action.
// yylloc is the YYLTYPE provided by bison-locations.
#define YY_USER_ACTION \
    yylloc->first_line   = yylineno; \
    yylloc->first_column = yyextra->column; \
    yylloc->last_line    = yylineno; \
    yylloc->last_column  = yyextra->column + yyleng - 1; \
    yyextra->column     += yyleng;

%}

%option noyywrap
%option reentrant
%option bison-bridge
%option bison-locations
%option extra-type="LexerExtra*"
%option yylineno


%x SC_COMMENT
%x SC_STRING

%%

[ \t\r]+                { /* ignore whitespace */ }
\n                      { yyextra->column = 1; }

    /* "---" must come before "--"[^\n]* — same length, first rule wins */
"---"                   { return TOK_NOBODY; }
    /* "--[" must come before "--"[^\n]* for the same reason */
"--["                   { BEGIN(SC_COMMENT); }
"--".*                  { /* single-line comment — .* matches any bytes incl. UTF-8 */ }
<SC_COMMENT>{
    "]--"               { BEGIN(INITIAL); }
    .|\n                { /* skip */ }
}

    /* ------------------------------------------------------------------ */
    /* Identifiers and keywords                                             */
    /* ------------------------------------------------------------------ */
[a-zA-Z_][a-zA-Z0-9_]* {
    int kw = keyword_lookup(std::string_view(yytext, yyleng));
    if (kw == TOK_KW_TRUE) {
        yylval->bool_val = true;
        return TOK_KW_TRUE;
    } else if (kw == TOK_KW_FALSE) {
        yylval->bool_val = false;
        return TOK_KW_FALSE;
    } else if (kw != TOK_IDENT) {
        /* Pure keyword — no value needed by the parser */
        return kw;
    } else {
        /* Identifier — parser reads $N as yylval->str */
        yylval->str = new std::string(yytext, yyleng);
        return TOK_IDENT;
    }
}

    /* ------------------------------------------------------------------ */
    /* Integer literals                                                     */
    /* ------------------------------------------------------------------ */
0[xX][0-9a-fA-F]+ |
0[bB][01]+         |
0[oO][0-7]+        |
[0-9]+             {
    uint64_t val;
    if (yytext[0]=='0' && (yytext[1]=='x'||yytext[1]=='X'))
        val = strtoull(yytext+2, nullptr, 16);
    else if (yytext[0]=='0' && (yytext[1]=='b'||yytext[1]=='B'))
        val = strtoull(yytext+2, nullptr, 2);
    else if (yytext[0]=='0' && (yytext[1]=='o'||yytext[1]=='O'))
        val = strtoull(yytext+2, nullptr, 8);
    else
        val = strtoull(yytext, nullptr, 10);
    /* Parser reads $N as yylval->int_val for TOK_INT_LIT */
    yylval->int_val = val;
    return TOK_INT_LIT;
}

    /* ------------------------------------------------------------------ */
    /* Float literals                                                       */
    /* ------------------------------------------------------------------ */
    /* Form 1: digit(s).digit(s) optional-exponent  e.g. 3.14  1.5e-3   */
    /* Form 2: digit(s) exponent, no decimal point  e.g. 1e-9  2E10     */
[0-9]+"."[0-9]+([eE][+-]?[0-9]+)? |
[0-9]+[eE][+-]?[0-9]+              {
    /* Parser reads $N as yylval->float_val for TOK_FLOAT_LIT */
    yylval->float_val = strtod(yytext, nullptr);
    return TOK_FLOAT_LIT;
}

    /* ------------------------------------------------------------------ */
    /* String literals                                                      */
    /* ------------------------------------------------------------------ */
\"  {
    BEGIN(SC_STRING);
    yylval->str = new std::string();   /* accumulate into yylval->str */
}

<SC_STRING>{
    \\n                 { yylval->str->push_back('\n'); }
    \\t                 { yylval->str->push_back('\t'); }
    \\\\                { yylval->str->push_back('\\'); }
    \\\"                { yylval->str->push_back('"'); }
    [^\\\n\"]+          { *yylval->str += yytext; }
    \"                  {
        /* yylval->str already holds the full string content.
           The parser reads $N as yylval->str for TOK_STRING_LIT
           and is responsible for delete-ing it. */
        BEGIN(INITIAL);
        return TOK_STRING_LIT;
    }
    \n                  {
        yyextra->err->error(
            SourceLoc(yyextra->filename, yylloc->first_line, yylloc->first_column),
            "unterminated string literal");
        yyextra->column = 1;
        delete yylval->str;
        yylval->str = nullptr;
        BEGIN(INITIAL);
    }
    <<EOF>>             {
        yyextra->err->error(
            SourceLoc(yyextra->filename, yylloc->first_line, yylloc->first_column),
            "unterminated string literal at end of file");
        delete yylval->str;
        yylval->str = nullptr;
        BEGIN(INITIAL);
    }
}

    /* ------------------------------------------------------------------ */
    /* Multi-character operators (must come before single-char rules)      */
    /* ------------------------------------------------------------------ */
":="    { return TOK_DECL; }
"::"    { return TOK_DEF; }
"->"    { return TOK_ARROW; }
"..<"   { return TOK_DOTDOTLT; }
"..="   { return TOK_DOTDOTEQ; }
".*"    { return TOK_DEREF; }
"++"    { return TOK_INC; }
"--"    { return TOK_DEC; }
"+="    { return TOK_PLUS_ASSIGN; }
"-="    { return TOK_MINUS_ASSIGN; }
"*="    { return TOK_STAR_ASSIGN; }
"/="    { return TOK_SLASH_ASSIGN; }
"%="    { return TOK_PERCENT_ASSIGN; }
"&="    { return TOK_AMP_ASSIGN; }
"|="    { return TOK_PIPE_ASSIGN; }
"^="    { return TOK_XOR_ASSIGN; }
"<<"    { return TOK_SHL; }
">>"    { return TOK_SHR; }
"=="    { return TOK_EQ; }
"!="    { return TOK_NEQ; }
"<="    { return TOK_LEQ; }
">="    { return TOK_GEQ; }
"&&"    { return TOK_AND; }
"||"    { return TOK_OR; }

    /* ------------------------------------------------------------------ */
    /* Single-character tokens                                              */
    /* ------------------------------------------------------------------ */
":"     { return TOK_COLON; }
"("     { return TOK_LPAREN; }
")"     { return TOK_RPAREN; }
"{"     { return TOK_LBRACE; }
"}"     { return TOK_RBRACE; }
"["     { return TOK_LBRACKET; }
"]"     { return TOK_RBRACKET; }
"."     { return TOK_DOT; }
","     { return TOK_COMMA; }
";"     { return TOK_SEMI; }
"&"     { return TOK_AMP; }
"^"     { return TOK_XOR; }
"!"     { return TOK_NOT; }
"+"     { return TOK_PLUS; }
"-"     { return TOK_MINUS; }
"*"     { return TOK_STAR; }
"/"     { return TOK_SLASH; }
"%"     { return TOK_PERCENT; }
"|"     { return TOK_PIPE; }
"<"     { return TOK_LT; }
">"     { return TOK_GT; }
"="     { return TOK_ASSIGN; }

    /* ------------------------------------------------------------------ */
    /* Compile-time directives                                              */
    /* ------------------------------------------------------------------ */
"#assert"               { return TOK_HASH_ASSERT; }
"#"[a-zA-Z_][a-zA-Z0-9_]* {
    yyextra->err->error(
        SourceLoc(yyextra->filename, yylloc->first_line, yylloc->first_column),
        std::string("unknown directive: '") + yytext + "'");
}

    /* ------------------------------------------------------------------ */
    /* Unknown character                                                    */
    /* ------------------------------------------------------------------ */
. {
    yyextra->err->error(
        SourceLoc(yyextra->filename, yylloc->first_line, yylloc->first_column),
        std::string("unexpected character: '") + yytext[0] + "'");
}

%%
