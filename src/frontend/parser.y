// =============================================================================
// parser.y – Simplified, conflict‑free version (with fixed proc_decl)
// =============================================================================

%{
#include "../frontend/ast.hpp"
#include "../frontend/token.hpp"
#include "../frontend/lexer_extra.hpp"   // defines yyscan_t and LexerExtra at global scope

#include "../support/error.hpp"

#include "../flex_bison/parser.tab.hpp"
#include "../flex_bison/lexer.h"

#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

using namespace ZedLang;

inline void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg);

inline static SourceRange to_sourcerange(YYLTYPE loc, const char* filename) {
    return SourceRange(
        SourceLoc(filename, loc.first_line, loc.first_column),
        SourceLoc(filename, loc.last_line, loc.last_column)
    );
}
%}

%pure-parser
%locations
%error-verbose

%lex-param   { yyscan_t scanner }
%parse-param { yyscan_t scanner }
%parse-param { ErrorReporter* err }
%parse-param { const char* filename }
%parse-param { ZedLang::Program** result }

%union {
    /* ZedLang::Token omitted — contains std::string, illegal in C union */
    ZedLang::Decl*   decl;
    std::vector<ZedLang::Decl*>* decl_list;
    ZedLang::Stmt*   stmt;
    std::vector<ZedLang::Stmt*>* stmt_list;
    ZedLang::Expr*   expr;
    std::vector<ZedLang::Expr*>* expr_list;
    ZedLang::Type*   type;
    std::vector<ZedLang::Type*>* type_list;
    ZedLang::BlockStmt* block;
    ZedLang::VarDecl* var_decl;
    ZedLang::ConstDecl* const_decl;
    ZedLang::StructDecl* struct_decl;
    ZedLang::ProcDecl* proc_decl;
    ZedLang::Field*  field;
    std::vector<ZedLang::Field>* field_list;
    ZedLang::ParamGroup* param_group;
    std::vector<ZedLang::ParamGroup>* param_list;
    std::vector<std::string>* ident_list;
    ZedLang::FieldInit* field_init;
    std::vector<ZedLang::FieldInit>* field_init_list;
    int  op;
    uint64_t         int_val;
    double           float_val;
    bool             bool_val;
    std::string*     str;
    std::vector<std::pair<ZedLang::Expr*, ZedLang::BlockStmt*>>* else_if_list;
    ZedLang::MatchCase*                          match_case;
    std::vector<ZedLang::MatchCase>*             match_case_list;
    ZedLang::EnumVariantAST*                     enum_variant;
    std::vector<ZedLang::EnumVariantAST>*        enum_variant_list;
}

// =============================================================================
// Terminals — declaration order determines bison's assigned numeric values
// (starting at 258).  Must stay in sync with tok_defs.hpp.
// =============================================================================

%token END 0 "end of file"

// ── Literals & identifier ─────────────────────────────────────────────────
%token <int_val>   TOK_INT_LIT    "integer literal"
%token <float_val> TOK_FLOAT_LIT  "float literal"
%token <bool_val>  TOK_BOOL_LIT   "boolean literal"
%token <str>       TOK_STRING_LIT "string literal"
%token <str>       TOK_IDENT      "identifier"

// ── Declaration keywords ──────────────────────────────────────────────────
%token TOK_KW_PROC    "proc"
%token TOK_KW_STRUCT  "struct"
%token TOK_KW_UNION   "union"
%token TOK_KW_ENUM    "enum"

// ── Control-flow keywords ─────────────────────────────────────────────────
%token TOK_KW_IF       "if"
%token TOK_KW_ELSE     "else"
%token TOK_KW_FOR      "for"
%token TOK_KW_IN       "in"
%token TOK_KW_STEP     "step"
%token TOK_KW_BREAK    "break"
%token TOK_KW_CONTINUE "continue"
%token TOK_KW_RETURN   "return"
%token TOK_KW_DEFER    "defer"

// ── match / when ──────────────────────────────────────────────────────────
%token TOK_KW_MATCH  "match"
%token TOK_KW_CASE   "case"
%token TOK_KW_WHEN   "when"

// ── Value keywords ────────────────────────────────────────────────────────
%token TOK_KW_NIL   "nil"
%token TOK_KW_TRUE  "true"
%token TOK_KW_FALSE "false"

// ── Type / expression keywords ────────────────────────────────────────────
%token TOK_KW_STRING   "string"
%token TOK_KW_DYNAMIC  "dynamic"
%token TOK_KW_CAST     "cast"
%token TOK_KW_SIZEOF   "sizeof"
%token TOK_KW_ALIGNOF  "alignof"
%token TOK_KW_TYPEID   "typeid"

// ── Builtin-call keywords (also usable as soft identifiers) ───────────────
%token TOK_KW_LEN        "len"
%token TOK_KW_CAP        "cap"
%token TOK_KW_APPEND     "append"
%token TOK_KW_RESERVE    "reserve"
%token TOK_KW_CLEAR      "clear"
%token TOK_KW_TO_CSTR    "to_cstr"
%token TOK_KW_FROM_CSTR  "from_cstr"
%token TOK_KW_OR_RETURN  "or_return"

// ── Import keywords ───────────────────────────────────────────────────────
%token TOK_KW_CIMPORT "cimport"
%token TOK_KW_IMPORT  "import"

// ── Declaration / assignment operators ───────────────────────────────────
%token TOK_DECL  "':='"
%token TOK_DEF   "'::'"
%token TOK_COLON "':'"
%token TOK_ARROW "'->'"
%token TOK_NOBODY "'---'"

// ── Compile-time directive ────────────────────────────────────────────────
%token TOK_HASH_ASSERT "'#assert'"

// ── Delimiters ────────────────────────────────────────────────────────────
%token TOK_LPAREN   "'('"
%token TOK_RPAREN   "')'"
%token TOK_LBRACE   "'{'"
%token TOK_RBRACE   "'}'"
%token TOK_LBRACKET "'['"
%token TOK_RBRACKET "']'"

// ── Dot variants ──────────────────────────────────────────────────────────
%token TOK_DOT      "'.'"
%token TOK_DOTDOT   "'..'"
%token TOK_DOTDOTLT "'..<'"
%token TOK_DOTDOTEQ "'..='"

// ── Other punctuation ─────────────────────────────────────────────────────
%token TOK_COMMA "','"
%token TOK_SEMI  "';'"

// ── Unary / address operators ─────────────────────────────────────────────
%token TOK_AMP   "'&'"
%token TOK_DEREF "'.*'"
%token TOK_NOT   "'!'"

// ── Arithmetic operators ──────────────────────────────────────────────────
%token TOK_PLUS    "'+'"
%token TOK_MINUS   "'-'"
%token TOK_STAR    "'*'"
%token TOK_SLASH   "'/'"
%token TOK_PERCENT "'%'"

// ── Bitwise operators ─────────────────────────────────────────────────────
%token TOK_PIPE    "'|'"
%token TOK_XOR     "'^'"
%token TOK_SHL     "'<<'"
%token TOK_SHR     "'>>'"

// ── Comparison operators ──────────────────────────────────────────────────
%token TOK_EQ  "'=='"
%token TOK_NEQ "'!='"
%token TOK_LT  "'<'"
%token TOK_LEQ "'<='"
%token TOK_GT  "'>'"
%token TOK_GEQ "'>='"

// ── Logical operators ─────────────────────────────────────────────────────
%token TOK_AND "'&&'"
%token TOK_OR  "'||'"

// ── Assignment ────────────────────────────────────────────────────────────
%token TOK_ASSIGN         "'='"
%token TOK_PLUS_ASSIGN    "'+='"
%token TOK_MINUS_ASSIGN   "'-='"
%token TOK_STAR_ASSIGN    "'*='"
%token TOK_SLASH_ASSIGN   "'/='"
%token TOK_PERCENT_ASSIGN "'%='"
%token TOK_AMP_ASSIGN     "'&='"
%token TOK_PIPE_ASSIGN    "'|='"
%token TOK_XOR_ASSIGN     "'^='"

// =============================================================================
// Non-terminals
// =============================================================================
%type <decl>          top_decl
%type <decl_list>     top_decl_list
%type <decl>          var_decl const_decl struct_decl proc_decl cimport_decl import_decl union_decl
%type <stmt>          stmt
%type <stmt>          if_stmt for_stmt return_stmt
%type <stmt>          break_stmt continue_stmt expr_stmt hash_assert_stmt
%type <block>         block
%type <expr>          expr expr_no_struct expr_or expr_and expr_cmp expr_bitor expr_bitxor expr_bitand
%type <expr>          expr_shift expr_add expr_mul expr_unary expr_postfix expr_primary
%type <expr>          struct_lit cast_expr
%type <type>          type named_type ptr_type array_type slice_type proc_type dyn_array_type string_type
%type <expr>          array_size_expr
%type <type_list>     type_list opt_type_list
%type <ident_list>    ident_list
%type <field>         field_group
%type <field_list>    field_group_list
%type <param_group>   param_group
%type <param_list>    param_list opt_param_list named_ret_list
%type <field_init>    field_init
%type <field_init_list> field_init_list field_init_list_commas
%type <expr_list>     arg_list opt_arg_list multi_ret_expr_list
%type <stmt_list>     stmt_list
%type <op>            cmp_op shift_op add_op mul_op
%type <expr>          sizeof_expr array_init_expr builtin_call_expr proc_lit_expr
%type <str>           soft_ident kw_ident
%type <stmt>          multi_decl_stmt multi_assign_stmt
%type <else_if_list>  else_if_chain
%type <block>         else_block
%type <stmt>          defer_stmt match_stmt when_stmt
%type <match_case>    match_case
%type <match_case_list> match_case_list
%type <decl>          enum_decl
%type <enum_variant>  enum_variant
%type <enum_variant_list> enum_variant_list
%type <else_if_list>  when_else_chain
%type <block>         when_else_block

// =============================================================================
// Precedence — lowest to highest
// =============================================================================
// Dangling-else resolution: if/when without else has lower precedence than else
%nonassoc LOWER_THAN_ELSE
%nonassoc TOK_KW_ELSE

%left TOK_OR
%left TOK_AND
%left TOK_EQ TOK_NEQ TOK_LT TOK_LEQ TOK_GT TOK_GEQ
%left TOK_PIPE
%left TOK_XOR
%left TOK_DEREF
%left TOK_AMP
%left TOK_SHL TOK_SHR
%left TOK_PLUS TOK_MINUS
%left TOK_STAR TOK_SLASH TOK_PERCENT
%right TOK_NOT
%right UNARY_MINUS
%right UNARY_ADDR
%left POSTFIX_DEREF
%left TOK_DOT TOK_LBRACKET TOK_LPAREN

%%

program
    : top_decl_list END
        {
            Program* prog = new Program();
            prog->decls = *$1;
            prog->range = to_sourcerange(@$, filename);
            *result = prog;
            delete $1;
        }
    ;

top_decl_list
    : /* empty */ { $$ = new std::vector<Decl*>(); }
    | top_decl_list top_decl { $1->push_back($2); $$ = $1; }
    ;

top_decl
    : var_decl       { $$ = $1; }
    | const_decl     { $$ = $1; }
    | struct_decl    { $$ = $1; }
    | union_decl     { $$ = $1; }
    | proc_decl      { $$ = $1; }
    | enum_decl      { $$ = $1; }
    | cimport_decl   { $$ = $1; }
    | import_decl    { $$ = $1; }
    | TOK_HASH_ASSERT expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new HashAssertTopDecl(r, $2);
        }
    ;

cimport_decl
    : TOK_KW_CIMPORT TOK_STRING_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new CImportDecl(r, *$2);
            delete $2;
        }
    ;

import_decl
    : TOK_KW_IMPORT TOK_STRING_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ImportDecl(r, *$2);
            delete $2;
        }
    ;

// Union declaration: Name :: union { x: f32; y: f32 }
union_decl
    : TOK_IDENT TOK_DEF TOK_KW_UNION TOK_LBRACE field_group_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new UnionDecl(r, *$1, *$5);
            delete $1; delete $5;
        }
    | TOK_IDENT TOK_DEF TOK_KW_UNION TOK_LBRACE TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new UnionDecl(r, *$1, {});
            delete $1;
        }
    ;

// ---------------------------------------------------------------------------
// Variable declarations
// Uses TOK_IDENT directly (not via a reducing nonterminal) so that the LALR
// state after shifting an identifier can deterministically choose between
// var_decl (next token is ':' or ':=') and expr_primary (any other token).
// kw_ident handles the rare case where a builtin keyword is used as a name.
// ---------------------------------------------------------------------------
var_decl
    // ── regular identifier ─────────────────────────────────────────────────
    : TOK_IDENT TOK_DECL expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, nullptr, $3); delete $1; }
    | TOK_IDENT TOK_DECL struct_lit
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, nullptr, $3); delete $1; }
    | TOK_IDENT TOK_COLON type
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, nullptr); delete $1; }
    | TOK_IDENT TOK_COLON type TOK_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, $5); delete $1; }
    | TOK_IDENT TOK_COLON type TOK_ASSIGN struct_lit
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, $5); delete $1; }
    // ── keyword used as variable name (e.g. `len := 0`) ───────────────────
    | kw_ident TOK_DECL expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, nullptr, $3); delete $1; }
    | kw_ident TOK_DECL struct_lit
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, nullptr, $3); delete $1; }
    | kw_ident TOK_COLON type
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, nullptr); delete $1; }
    | kw_ident TOK_COLON type TOK_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, $5); delete $1; }
    | kw_ident TOK_COLON type TOK_ASSIGN struct_lit
        { SourceRange r = to_sourcerange(@$, filename); $$ = new VarDecl(r, *$1, $3, $5); delete $1; }
    ;

const_decl
    : TOK_IDENT TOK_DEF expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ConstDecl(r, *$1, $3);
            delete $1;
        }
    | TOK_IDENT TOK_DEF struct_lit
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ConstDecl(r, *$1, $3);
            delete $1;
        }
    ;

struct_decl
    : TOK_IDENT TOK_DEF TOK_KW_STRUCT TOK_LBRACE field_group_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new StructDecl(r, *$1, *$5);
            delete $1;
            delete $5;
        }
    ;

field_group_list
    : /* empty */ { $$ = new std::vector<Field>(); }
    | field_group_list field_group { $1->push_back(*$2); delete $2; $$ = $1; }
    ;

field_group
    : ident_list TOK_COLON type TOK_COMMA
        {
            $$ = new Field();
            $$->names = *$1;
            $$->type = $3;
            delete $1;
        }
    | ident_list TOK_COLON type TOK_SEMI
        {
            $$ = new Field();
            $$->names = *$1;
            $$->type = $3;
            delete $1;
        }
    ;

// ident_list: used for struct/union field names and proc parameter names.
// Uses soft_ident so fields/params can be named after builtin keywords.
ident_list
    : soft_ident
        {
            $$ = new std::vector<std::string>();
            $$->push_back(*$1);
            delete $1;
        }
    | ident_list TOK_COMMA soft_ident
        {
            $1->push_back(*$3);
            delete $3;
            $$ = $1;
        }
    ;

// soft_ident: used ONLY for struct/union field names and proc parameter names
// (via ident_list).  NOT used for variable declarations — var_decl uses
// TOK_IDENT directly to avoid reduce/reduce conflicts with expr_primary.
soft_ident
    : TOK_IDENT         { $$ = $1; }
    | kw_ident          { $$ = $1; }
    ;

// kw_ident: builtin-call keywords that may also serve as identifiers.
// Does NOT include TOK_IDENT (keeps it disjoint from expr_primary).
kw_ident
    : TOK_KW_LEN        { $$ = new std::string("len");        }
    | TOK_KW_CAP        { $$ = new std::string("cap");        }
    | TOK_KW_APPEND     { $$ = new std::string("append");     }
    | TOK_KW_RESERVE    { $$ = new std::string("reserve");    }
    | TOK_KW_CLEAR      { $$ = new std::string("clear");      }
    | TOK_KW_TO_CSTR    { $$ = new std::string("to_cstr");    }
    | TOK_KW_FROM_CSTR  { $$ = new std::string("from_cstr");  }
    ;

// Procedure declarations – expanded to avoid pair in union
proc_decl
    : TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, nullptr, {}, $7);
            delete $1;
            delete $5;
        }
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_NOBODY
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, nullptr, {}, nullptr);
            delete $1;
            delete $5;
        }
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW type block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, $8, {}, $9);
            delete $1;
            delete $5;
        }
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW type TOK_NOBODY
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, $8, {}, nullptr);
            delete $1;
            delete $5;
        }
    // Multi-return: proc() -> (T1, T2)
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW TOK_LPAREN type_list TOK_RPAREN block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, nullptr, *$9, $11);
            delete $1; delete $5; delete $9;
        }
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW TOK_LPAREN type_list TOK_RPAREN TOK_NOBODY
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            $$ = new ProcDecl(r, *$1, params, nullptr, *$9, nullptr);
            delete $1; delete $5; delete $9;
        }
    // Named multi-return: proc() -> (val: i32, ok: bool)
    // Uses named_ret_list (requires at least one `name: type` entry with a colon)
    // so it is unambiguous vs the unnamed type_list alternatives above.
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW TOK_LPAREN named_ret_list TOK_RPAREN block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            std::vector<std::string> ret_names;
            std::vector<Type*>       ret_types;
            for (const ParamGroup& pg : *$9) {
                for (const std::string& nm : pg.names) {
                    ret_names.push_back(nm);
                    ret_types.push_back(pg.type);
                }
            }
            auto* pd = new ProcDecl(r, *$1, params, nullptr, ret_types, $11);
            pd->return_names = ret_names;
            $$ = pd;
            delete $1; delete $5; delete $9;
        }
    | TOK_IDENT TOK_DEF TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW TOK_LPAREN named_ret_list TOK_RPAREN TOK_NOBODY
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $5 ? *$5 : std::vector<ParamGroup>();
            std::vector<std::string> ret_names;
            std::vector<Type*>       ret_types;
            for (const ParamGroup& pg : *$9) {
                for (const std::string& nm : pg.names) {
                    ret_names.push_back(nm);
                    ret_types.push_back(pg.type);
                }
            }
            auto* pd = new ProcDecl(r, *$1, params, nullptr, ret_types, nullptr);
            pd->return_names = ret_names;
            $$ = pd;
            delete $1; delete $5; delete $9;
        }
    ;

opt_param_list
    : /* empty */   { $$ = nullptr; }
    | param_list    { $$ = $1; }
    ;

param_list
    : param_group
        {
            $$ = new std::vector<ParamGroup>();
            $$->push_back(*$1);
            delete $1;
        }
    | param_list TOK_COMMA param_group
        {
            $1->push_back(*$3);
            delete $3;
            $$ = $1;
        }
    | param_list TOK_COMMA TOK_DOTDOT
        {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            $1->push_back(sentinel);
            $$ = $1;
        }
    ;

param_group
    : ident_list TOK_COLON type
        {
            $$ = new ParamGroup();
            $$->names = *$1;
            $$->type = $3;
            delete $1;
        }
    ;

// named_ret_list: one or more `name: type` groups for named return values.
// Uses TOK_IDENT TOK_COLON to anchor the first entry, making this rule
// syntactically distinct from type_list (which starts with a bare type).
// This prevents the LALR conflict between -> (i32, bool) and -> (val: i32, ok: bool).
named_ret_list
    : TOK_IDENT TOK_COLON type
        {
            $$ = new std::vector<ParamGroup>();
            ParamGroup pg;
            pg.names.push_back(*$1);
            pg.type = $3;
            $$->push_back(pg);
            delete $1;
        }
    | named_ret_list TOK_COMMA TOK_IDENT TOK_COLON type
        {
            ParamGroup pg;
            pg.names.push_back(*$3);
            pg.type = $5;
            $1->push_back(pg);
            $$ = $1;
            delete $3;
        }
    ;

// Types
type
    : named_type      { $$ = $1; }
    | ptr_type        { $$ = $1; }
    | array_type      { $$ = $1; }
    | slice_type      { $$ = $1; }
    | proc_type       { $$ = $1; }
    | dyn_array_type  { $$ = $1; }
    | string_type     { $$ = $1; }
    ;

dyn_array_type
    : TOK_LBRACKET TOK_KW_DYNAMIC TOK_RBRACKET type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new DynArrayTypeAST(r, $4);
        }
    ;

string_type
    : TOK_KW_STRING
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new StringTypeAST(r);
        }
    ;

named_type
    : TOK_IDENT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new NamedType(r, *$1);
            delete $1;
        }
    ;

ptr_type
    : TOK_STAR type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new PtrType(r, $2);
        }
    ;

array_type
    : TOK_LBRACKET TOK_INT_LIT TOK_RBRACKET type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ArrayType(r, $2, $4);
        }
    | TOK_LBRACKET TOK_IDENT TOK_RBRACKET type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ArrayType(r, std::string(*$2), $4);
            delete $2;
        }
    | TOK_LBRACKET array_size_expr TOK_RBRACKET type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ArrayType(r, $2, $4);
        }
    ;

// Constant expressions valid as array sizes: INT OP INT, IDENT OP expr, etc.
// Only binary arithmetic between literals/idents is needed here.
array_size_expr
    : array_size_expr TOK_STAR   array_size_expr { SourceRange r = to_sourcerange(@$, filename); $$ = new BinaryExpr(r,$1,TOK_STAR,$3); }
    | array_size_expr TOK_PLUS   array_size_expr { SourceRange r = to_sourcerange(@$, filename); $$ = new BinaryExpr(r,$1,TOK_PLUS,$3); }
    | array_size_expr TOK_MINUS  array_size_expr { SourceRange r = to_sourcerange(@$, filename); $$ = new BinaryExpr(r,$1,TOK_MINUS,$3); }
    | array_size_expr TOK_SLASH  array_size_expr { SourceRange r = to_sourcerange(@$, filename); $$ = new BinaryExpr(r,$1,TOK_SLASH,$3); }
    | array_size_expr TOK_PERCENT array_size_expr { SourceRange r = to_sourcerange(@$, filename); $$ = new BinaryExpr(r,$1,TOK_PERCENT,$3); }
    | TOK_INT_LIT   { SourceRange r = to_sourcerange(@$, filename); $$ = new LitExpr(r, $1); }
    | TOK_IDENT     { SourceRange r = to_sourcerange(@$, filename); $$ = new IdentExpr(r, *$1); delete $1; }
    ;

slice_type
    : TOK_LBRACKET TOK_RBRACKET type
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SliceType(r, $3);
        }
    ;

// proc(T1, T2) -> RetType   — first-class proc type annotation
// proc(T1, T2)              — void return
proc_type
    : TOK_KW_PROC TOK_LPAREN opt_type_list TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            std::vector<Type*> pts = $3 ? *$3 : std::vector<Type*>();
            $$ = new ProcTypeAST(r, std::move(pts), nullptr);
            delete $3;
        }
    | TOK_KW_PROC TOK_LPAREN opt_type_list TOK_RPAREN TOK_ARROW type
        {
            SourceRange r = to_sourcerange(@$, filename);
            std::vector<Type*> pts = $3 ? *$3 : std::vector<Type*>();
            $$ = new ProcTypeAST(r, std::move(pts), $6);
            delete $3;
        }
    ;

opt_type_list
    : /* empty */ { $$ = nullptr; }
    | type_list   { $$ = $1; }
    ;

type_list
    : type
        {
            $$ = new std::vector<Type*>();
            $$->push_back($1);
        }
    | type_list TOK_COMMA type
        {
            $1->push_back($3);
            $$ = $1;
        }
    ;
stmt
    : var_decl
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new DeclStmt(r, $1);
        }
    | const_decl
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new DeclStmt(r, $1);
        }
    | if_stmt           { $$ = $1; }
    | for_stmt          { $$ = $1; }
    | return_stmt       { $$ = $1; }
    | multi_decl_stmt   { $$ = $1; }
    | multi_assign_stmt { $$ = $1; }
    | break_stmt        { $$ = $1; }
    | continue_stmt     { $$ = $1; }
    | expr_stmt         { $$ = $1; }
    | defer_stmt        { $$ = $1; }
    | match_stmt        { $$ = $1; }
    | when_stmt         { $$ = $1; }
    | hash_assert_stmt  { $$ = $1; }
    | block             { $$ = $1; }
    ;

// If statement with precedence to resolve dangling else
if_stmt
    : TOK_KW_IF expr_no_struct block else_if_chain else_block %prec LOWER_THAN_ELSE
        {
            SourceRange r = to_sourcerange(@$, filename);
            IfStmt* ifs = new IfStmt(r, $2, $3);
            ifs->else_ifs = *$4;
            ifs->else_block = $5;
            $$ = ifs;
            delete $4;
        }
    ;

else_if_chain
    : /* empty */ { $$ = new std::vector<std::pair<Expr*, BlockStmt*>>(); }
    | else_if_chain TOK_KW_ELSE TOK_KW_IF expr_no_struct block
        {
            $1->push_back(std::make_pair($4, $5));
            $$ = $1;
        }
    ;

else_block
    : /* empty */               { $$ = nullptr; }
    | TOK_KW_ELSE block         { $$ = $2; }
    ;

// ---------------------------------------------------------------------------
// Unified for_stmt:
//   for { }                               -- infinite loop
//   for cond { }                          -- while loop
//   for i in lo..<hi { }                  -- exclusive range, step=1
//   for i in lo..=hi { }                  -- inclusive range, step=1
//   for i in lo..<hi step s { }           -- exclusive range, custom step
//   for i in lo..=hi step s { }           -- inclusive range, custom step
//
// Note: Bison resolves the shift/reduce conflict on `for IDENT` with
// lookahead `in` via its default (shift), which is the correct behaviour.
// ---------------------------------------------------------------------------
for_stmt
    : TOK_KW_FOR block
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LoopStmt(r, $2);
        }
    | TOK_KW_FOR expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LoopStmt(r, $2, $3);
        }
    // ── labeled loop: IDENT ':' for ...  ─────────────────────────────────
    // Uses TOK_IDENT directly (not soft_ident) so LALR can unambiguously
    // decide between labeled loop and var_decl by looking at the token
    // AFTER the colon (TOK_KW_FOR vs a type-starting token).
    | TOK_IDENT TOK_COLON TOK_KW_FOR block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new LoopStmt(r, $4);
            s->label = *$1; delete $1; $$ = s;
        }
    | TOK_IDENT TOK_COLON TOK_KW_FOR expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new LoopStmt(r, $4, $5);
            s->label = *$1; delete $1; $$ = s;
        }
    // ── exclusive range ───────────────────────────────────────────────────
    | TOK_KW_FOR TOK_IDENT TOK_KW_IN expr TOK_DOTDOTLT expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new ForRangeStmt(r, *$2, $4, $6, false, $7);
            delete $2; $$ = s;
        }
    | TOK_KW_FOR TOK_IDENT TOK_KW_IN expr TOK_DOTDOTLT expr TOK_KW_STEP expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new ForRangeStmt(r, *$2, $4, $6, false, $9);
            s->step_expr = $8; delete $2; $$ = s;
        }
    // ── inclusive range ───────────────────────────────────────────────────
    | TOK_KW_FOR TOK_IDENT TOK_KW_IN expr TOK_DOTDOTEQ expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new ForRangeStmt(r, *$2, $4, $6, true, $7);
            delete $2; $$ = s;
        }
    | TOK_KW_FOR TOK_IDENT TOK_KW_IN expr TOK_DOTDOTEQ expr TOK_KW_STEP expr_no_struct block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto* s = new ForRangeStmt(r, *$2, $4, $6, true, $9);
            s->step_expr = $8; delete $2; $$ = s;
        }
    ;

defer_stmt
    : TOK_KW_DEFER expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new DeferStmt(r, new ExprStmt(r,$2));
        }
    ;

match_stmt
    : TOK_KW_MATCH expr_no_struct TOK_LBRACE match_case_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new MatchStmt(r,$2,*$4); delete $4;
        }
    ;

match_case_list
    : /* empty */ { $$ = new std::vector<MatchCase>(); }
    | match_case_list match_case { $1->push_back(*$2); delete $2; $$ = $1; }
    ;

match_case
    : TOK_KW_CASE expr_no_struct block
        {
            $$ = new MatchCase();
            $$->value = $2; $$->body = $3;
            $$->loc = SourceLoc(filename,@1.first_line,@1.first_column);
        }
    | TOK_KW_CASE TOK_DOT TOK_IDENT block
        {
            // .VARIANT shorthand — the enum type is inferred from the match value.
            // Emitted as a bare IdentExpr; codegen/type-checker resolves the enum variant.
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new MatchCase();
            $$->value = new IdentExpr(r, *$3);
            $$->body = $4;
            $$->loc = SourceLoc(filename,@1.first_line,@1.first_column);
            delete $3;
        }
    | TOK_KW_CASE block
        {
            $$ = new MatchCase();
            $$->value = nullptr; $$->body = $2;
            $$->loc = SourceLoc(filename,@1.first_line,@1.first_column);
        }
    | TOK_KW_ELSE block                 /* idiomatic alias for bare `case` */
        {
            $$ = new MatchCase();
            $$->value = nullptr; $$->body = $2;
            $$->loc = SourceLoc(filename,@1.first_line,@1.first_column);
        }
    ;

when_stmt
    : TOK_KW_WHEN expr_no_struct block when_else_chain when_else_block %prec LOWER_THAN_ELSE
        {
            SourceRange r = to_sourcerange(@$, filename);
            WhenStmt* ws = new WhenStmt(r,$2,$3);
            ws->else_whens = *$4; ws->else_block = $5; $$ = ws; delete $4;
        }
    ;

when_else_chain
    : /* empty */ { $$ = new std::vector<std::pair<Expr*,BlockStmt*>>(); }
    | when_else_chain TOK_KW_ELSE TOK_KW_WHEN expr_no_struct block
        { $1->push_back(std::make_pair($4,$5)); $$ = $1; }
    ;

when_else_block
    : /* empty */        { $$ = nullptr; }
    | TOK_KW_ELSE block  { $$ = $2; }
    ;

enum_decl
    : TOK_IDENT TOK_DEF TOK_KW_ENUM TOK_LBRACE enum_variant_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new EnumDecl(r,*$1,*$5); delete $1; delete $5;
        }
    ;

enum_variant_list
    : /* empty */ { $$ = new std::vector<EnumVariantAST>(); }
    | enum_variant_list enum_variant { $1->push_back(*$2); delete $2; $$ = $1; }
    ;

enum_variant
    : TOK_IDENT TOK_COMMA
        {
            $$ = new EnumVariantAST(); $$->name=*$1; $$->value=nullptr;
            $$->loc=SourceLoc(filename,@1.first_line,@1.first_column); delete $1;
        }
    | TOK_IDENT TOK_ASSIGN expr TOK_COMMA
        {
            $$ = new EnumVariantAST(); $$->name=*$1; $$->value=$3;
            $$->loc=SourceLoc(filename,@1.first_line,@1.first_column); delete $1;
        }
    | TOK_IDENT
        {
            $$ = new EnumVariantAST(); $$->name=*$1; $$->value=nullptr;
            $$->loc=SourceLoc(filename,@1.first_line,@1.first_column); delete $1;
        }
    ;

// ---------------------------------------------------------------------------
// #assert <const-expr>  →  static_assert(expr, "file:line")
// ---------------------------------------------------------------------------
hash_assert_stmt
    : TOK_HASH_ASSERT expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new HashAssertStmt(r, $2);
        }
    ;

return_stmt
    : TOK_KW_RETURN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ReturnStmt(r, nullptr);
        }
    | TOK_KW_RETURN multi_ret_expr_list
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ReturnStmt(r, new TupleExpr(r, *$2));
            delete $2;
        }
    | TOK_KW_RETURN expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ReturnStmt(r, $2);
        }
    | TOK_KW_RETURN struct_lit
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ReturnStmt(r, $2);
        }
    ;

// multi_decl_stmt: a, b := f()
// Uses multi_ret_expr_list (same as multi_assign) for the LHS so that
// TOK_IDENT in `a, b` goes through expr_primary → expr, avoiding the
// reduce/reduce conflict between soft_ident and expr_primary.
// The parser extracts the identifier names here; the type checker validates them.
multi_decl_stmt
    : multi_ret_expr_list TOK_DECL expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            std::vector<std::string> names;
            for (Expr* e : *$1) {
                if (auto* id = dynamic_cast<IdentExpr*>(e))
                    names.push_back(id->name);
                else
                    names.push_back("_");
                delete e;
            }
            delete $1;
            $$ = new MultiDeclStmt(r, names, $3);
        }
    | multi_ret_expr_list TOK_DECL struct_lit
        {
            SourceRange r = to_sourcerange(@$, filename);
            std::vector<std::string> names;
            for (Expr* e : *$1) {
                if (auto* id = dynamic_cast<IdentExpr*>(e))
                    names.push_back(id->name);
                else
                    names.push_back("_");
                delete e;
            }
            delete $1;
            $$ = new MultiDeclStmt(r, names, $3);
        }
    ;

multi_assign_stmt
    : multi_ret_expr_list TOK_ASSIGN expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new MultiAssignStmt(r, *$1, $3);
            delete $1;
        }
    ;

multi_ret_expr_list
    : expr TOK_COMMA expr
        {
            $$ = new std::vector<Expr*>();
            $$->push_back($1);
            $$->push_back($3);
        }
    | multi_ret_expr_list TOK_COMMA expr
        {
            $1->push_back($3);
            $$ = $1;
        }
    ;

break_stmt
    : TOK_KW_BREAK
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BreakStmt(r);
        }
    | TOK_KW_BREAK TOK_IDENT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LabeledBreakStmt(r, *$2);
            delete $2;
        }
    ;

continue_stmt
    : TOK_KW_CONTINUE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ContinueStmt(r);
        }
    | TOK_KW_CONTINUE TOK_IDENT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LabeledContinueStmt(r, *$2);
            delete $2;
        }
    ;

expr_stmt
    : expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ExprStmt(r, $1);
        }
    | struct_lit
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ExprStmt(r, $1);
        }
    | expr TOK_ASSIGN expr
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new AssignStmt(r, $1, $3);
        }
    | expr TOK_ASSIGN struct_lit
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new AssignStmt(r, $1, $3);
        }
    | expr TOK_PLUS_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_PLUS,   $3); }
    | expr TOK_MINUS_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_MINUS,  $3); }
    | expr TOK_STAR_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_STAR,   $3); }
    | expr TOK_SLASH_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_SLASH,  $3); }
    | expr TOK_PERCENT_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_PERCENT,$3); }
    | expr TOK_AMP_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_AMP,    $3); }
    | expr TOK_PIPE_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_PIPE,   $3); }
    | expr TOK_XOR_ASSIGN expr
        { SourceRange r = to_sourcerange(@$, filename); $$ = new CompoundAssignStmt(r,$1,TOK_XOR,    $3); }
    ;

block
    : TOK_LBRACE stmt_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BlockStmt(r, *$2);
            delete $2;
        }
    ;

stmt_list
    : /* empty */ { $$ = new std::vector<Stmt*>(); }
    | stmt_list stmt { $1->push_back($2); $$ = $1; }
    ;

// Expressions – same as before but ensure no conflicts
expr
    : expr_or { $$ = $1; }
    | array_init_expr { $$ = $1; }
    ;

// expr_no_struct is identical to expr but forbids bare struct literals.
// Used as the condition in if_stmt to prevent 'if ident {' being parsed
// as a struct literal consuming the block's opening brace.
expr_no_struct
    : expr_or { $$ = $1; }
    ;

expr_or
    : expr_and
    | expr_or TOK_OR expr_and
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, TOK_OR, $3);
        }
    ;

expr_and
    : expr_cmp
    | expr_and TOK_AND expr_cmp
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, TOK_AND, $3);
        }
    ;

expr_cmp
    : expr_bitor
    | expr_bitor cmp_op expr_bitor
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, $2, $3);
        }
    ;

cmp_op
    : TOK_EQ  { $$ = TOK_EQ; }
    | TOK_NEQ { $$ = TOK_NEQ; }
    | TOK_LT  { $$ = TOK_LT; }
    | TOK_LEQ { $$ = TOK_LEQ; }
    | TOK_GT  { $$ = TOK_GT; }
    | TOK_GEQ { $$ = TOK_GEQ; }
    ;

expr_bitor
    : expr_bitxor
    | expr_bitor TOK_PIPE expr_bitxor
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, TOK_PIPE, $3);
        }
    ;

expr_bitxor
    : expr_bitand
    | expr_bitxor TOK_XOR expr_bitand
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, TOK_XOR, $3);
        }
    ;

expr_bitand
    : expr_shift
    | expr_bitand TOK_AMP expr_shift
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, TOK_AMP, $3);
        }
    ;

expr_shift
    : expr_add
    | expr_shift shift_op expr_add
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, $2, $3);
        }
    ;

shift_op
    : TOK_SHL { $$ = TOK_SHL; }
    | TOK_SHR { $$ = TOK_SHR; }
    ;

expr_add
    : expr_mul
    | expr_add add_op expr_mul
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, $2, $3);
        }
    ;

add_op
    : TOK_PLUS  { $$ = TOK_PLUS; }
    | TOK_MINUS { $$ = TOK_MINUS; }
    ;

expr_mul
    : expr_unary
    | expr_mul mul_op expr_unary
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BinaryExpr(r, $1, $2, $3);
        }
    ;

mul_op
    : TOK_STAR   { $$ = TOK_STAR; }
    | TOK_SLASH  { $$ = TOK_SLASH; }
    | TOK_PERCENT { $$ = TOK_PERCENT; }
    ;

expr_unary
    : TOK_MINUS expr_unary %prec UNARY_MINUS
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new UnaryExpr(r, TOK_MINUS, $2);
        }
    | TOK_NOT expr_unary
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new UnaryExpr(r, TOK_NOT, $2);
        }
    | TOK_AMP expr_unary %prec UNARY_ADDR
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new AddrExpr(r, $2);
        }
    | expr_postfix
    ;

expr_postfix
    : expr_primary
        { $$ = $1; }
    | expr_postfix TOK_DOT TOK_IDENT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new FieldExpr(r, $1, *$3);
            delete $3;
        }
    | expr_postfix TOK_LBRACKET expr TOK_RBRACKET
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new IndexExpr(r, $1, $3);
        }
    | expr_postfix TOK_LBRACKET expr TOK_DOTDOTLT expr TOK_RBRACKET
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SliceExpr(r, $1, $3, $5, false);
        }
    | expr_postfix TOK_LBRACKET expr TOK_DOTDOTEQ expr TOK_RBRACKET
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SliceExpr(r, $1, $3, $5, true);
        }
    | expr_postfix TOK_LBRACKET TOK_COLON TOK_RBRACKET
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SliceExpr(r, $1);  // full slice
        }
    | expr_postfix TOK_LPAREN opt_arg_list TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            std::vector<Expr*> args = $3 ? *$3 : std::vector<Expr*>();
            $$ = new CallExpr(r, $1, args);
            delete $3;
        }
    | expr_postfix TOK_DEREF
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new DerefExpr(r, $1);
        }
    | expr_postfix TOK_KW_OR_RETURN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new OrReturnExpr(r, $1);
        }
    ;

expr_primary
    : TOK_INT_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, $1);
        }
    | TOK_FLOAT_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, $1);
        }
    | TOK_BOOL_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, $1);
        }
    | TOK_KW_TRUE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, true);
        }
    | TOK_KW_FALSE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, false);
        }
    | TOK_KW_NIL
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, nullptr);
        }
    | TOK_STRING_LIT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new LitExpr(r, *$1);
            delete $1;
        }
    | TOK_IDENT
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new IdentExpr(r, *$1);
            delete $1;
        }
    | cast_expr
        { $$ = $1; }
    | TOK_LPAREN expr TOK_RPAREN
        {
            $$ = $2;
        }
    | sizeof_expr       { $$ = $1; }
    | builtin_call_expr { $$ = $1; }
    | proc_lit_expr     { $$ = $1; }
    | kw_ident
        {
            // Soft keyword used as a plain identifier (e.g. `len` after `len :=`).
            // When followed by '(' the builtin_call_expr alternative takes priority
            // via Bison's default shift-over-reduce preference.
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new IdentExpr(r, *$1);
            delete $1;
        }
    ;

// Anonymous proc literal: proc(x: i32) -> i32 { return x * 2 }
proc_lit_expr
    : TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $3 ? *$3 : std::vector<ParamGroup>();
            $$ = new ProcLitExpr(r, params, nullptr, {}, $5);
            delete $3;
        }
    | TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW type block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $3 ? *$3 : std::vector<ParamGroup>();
            $$ = new ProcLitExpr(r, params, $6, {}, $7);
            delete $3;
        }
    | TOK_KW_PROC TOK_LPAREN opt_param_list TOK_RPAREN TOK_ARROW TOK_LPAREN type_list TOK_RPAREN block
        {
            SourceRange r = to_sourcerange(@$, filename);
            auto params = $3 ? *$3 : std::vector<ParamGroup>();
            $$ = new ProcLitExpr(r, params, nullptr, *$7, $9);
            delete $3; delete $7;
        }
    ;

sizeof_expr
    : TOK_KW_SIZEOF TOK_LPAREN type TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SizeofExpr(r, false, $3, nullptr);
        }
    | TOK_KW_SIZEOF TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SizeofExpr(r, false, nullptr, $3);
        }
    | TOK_KW_ALIGNOF TOK_LPAREN type TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new SizeofExpr(r, true, $3, nullptr);
        }
    | TOK_KW_TYPEID TOK_LPAREN type TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new TypeIdExpr(r, $3);
        }
    ;

array_init_expr
    : TOK_LBRACE arg_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ArrayInitExpr(r, *$2);
            delete $2;
        }
    | TOK_LBRACE arg_list TOK_COMMA TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new ArrayInitExpr(r, *$2);
            delete $2;
        }
    ;

builtin_call_expr
    : TOK_KW_APPEND TOK_LPAREN arg_list TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_APPEND, *$3);
            delete $3;
        }
    | TOK_KW_LEN TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_LEN, {$3});
        }
    | TOK_KW_CAP TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_CAP, {$3});
        }
    | TOK_KW_RESERVE TOK_LPAREN arg_list TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_RESERVE, *$3);
            delete $3;
        }
    | TOK_KW_CLEAR TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_CLEAR, {$3});
        }
    | TOK_KW_TO_CSTR TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {$3});
        }
    | TOK_KW_FROM_CSTR TOK_LPAREN expr TOK_RPAREN
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {$3});
        }
    ;

opt_arg_list
    : /* empty */ { $$ = nullptr; }
    | arg_list    { $$ = $1; }
    ;

arg_list
    : expr
        {
            $$ = new std::vector<Expr*>();
            $$->push_back($1);
        }
    | struct_lit
        {
            $$ = new std::vector<Expr*>();
            $$->push_back($1);
        }
    | arg_list TOK_COMMA expr
        {
            $1->push_back($3);
            $$ = $1;
        }
    | arg_list TOK_COMMA struct_lit
        {
            $1->push_back($3);
            $$ = $1;
        }
    ;

// Struct literal
struct_lit
    : TOK_IDENT TOK_LBRACE field_init_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new StructLitExpr(r, *$1, *$3, nullptr);
            delete $1;
            delete $3;
        }
    // Struct update: TypeName{ ..base_expr, field = val, ... }
    | TOK_IDENT TOK_LBRACE TOK_DOTDOT expr TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new StructLitExpr(r, *$1, {}, $4);
            delete $1;
        }
    | TOK_IDENT TOK_LBRACE TOK_DOTDOT expr TOK_COMMA field_init_list TOK_RBRACE
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new StructLitExpr(r, *$1, *$6, $4);
            delete $1;
            delete $6;
        }
    ;

field_init_list
    : /* empty */ { $$ = new std::vector<FieldInit>(); }
    | field_init_list_commas
        {
            $$ = $1;
        }
    ;

field_init_list_commas
    : field_init
        {
            $$ = new std::vector<FieldInit>();
            $$->push_back(*$1);
            delete $1;
        }
    | field_init_list_commas TOK_COMMA field_init
        {
            $1->push_back(*$3);
            delete $3;
            $$ = $1;
        }
    | field_init_list_commas TOK_COMMA
        {
            $$ = $1;
        }
    ;

field_init
    : TOK_IDENT TOK_ASSIGN expr
        {
            $$ = new FieldInit();
            $$->name = *$1;
            $$->value = $3;
            $$->loc = SourceLoc(filename, @1.first_line, @1.first_column);
            delete $1;
        }
    | TOK_IDENT TOK_ASSIGN struct_lit
        {
            $$ = new FieldInit();
            $$->name = *$1;
            $$->value = $3;
            $$->loc = SourceLoc(filename, @1.first_line, @1.first_column);
            delete $1;
        }
    ;

// Cast expression
cast_expr
    : TOK_KW_CAST TOK_LPAREN type TOK_RPAREN expr_unary
        {
            SourceRange r = to_sourcerange(@$, filename);
            $$ = new CastExpr(r, $3, $5);
        }
    ;

%%

void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}
