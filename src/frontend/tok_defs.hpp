// =============================================================================
// tok_defs.hpp — Token constant definitions
// =============================================================================

#pragma once

enum {
    TOK_INT_LIT    = 258,
    TOK_FLOAT_LIT  = 259,
    TOK_BOOL_LIT   = 260,
    TOK_STRING_LIT = 261,
    TOK_IDENT      = 262,
    TOK_KW_PROC    = 263,
    TOK_KW_STRUCT  = 264,
    TOK_KW_IF      = 265,
    TOK_KW_ELSE    = 266,
    TOK_KW_LOOP    = 267,
    TOK_KW_IN      = 268,
    TOK_KW_RETURN  = 269,
    TOK_KW_BREAK   = 270,
    TOK_KW_CONTINUE= 271,
    TOK_KW_NIL     = 272,
    TOK_KW_TRUE    = 273,
    TOK_KW_FALSE   = 274,
    TOK_DECL       = 275,
    TOK_DEF        = 276,
    TOK_COLON      = 277,
    TOK_ARROW      = 278,
    TOK_NOBODY     = 279,
    TOK_KW_CIMPORT = 280,
    TOK_KW_IMPORT  = 281,
    TOK_KW_CAST    = 282,
    // ── new keywords ──────────────────────────────────────────────────────────
    TOK_KW_FOR     = 283,   // for i in lo..<hi { }
    TOK_KW_DEFER   = 284,   // defer expr
    TOK_KW_MATCH   = 285,   // match val { case X { } }
    TOK_KW_CASE    = 286,   // case inside match
    TOK_KW_WHEN    = 287,   // when CONST_COND { } else when { } else { }
    TOK_KW_ENUM    = 288,   // enum { A, B, C }
    TOK_KW_STEP    = 289,   // step N inside for-range
    // ── punctuation / multi-char ops ─────────────────────────────────────────
    TOK_LPAREN     = 290,
    TOK_RPAREN     = 291,
    TOK_LBRACE     = 292,
    TOK_RBRACE     = 293,
    TOK_LBRACKET   = 294,
    TOK_RBRACKET   = 295,
    TOK_DOT        = 296,
    TOK_COMMA      = 297,
    TOK_SEMI       = 298,
    TOK_DOTDOTLT   = 299,   // ..<
    TOK_DOTDOTEQ   = 300,   // ..=
    TOK_AMP        = 301,
    TOK_DEREF      = 302,   // .*
    TOK_NOT        = 303,
    TOK_PLUS       = 304,
    TOK_MINUS      = 305,
    TOK_STAR       = 306,
    TOK_SLASH      = 307,
    TOK_PERCENT    = 308,
    TOK_PIPE       = 309,
    TOK_SHL        = 310,
    TOK_SHR        = 311,
    TOK_EQ         = 312,
    TOK_NEQ        = 313,
    TOK_LT         = 314,
    TOK_LEQ        = 315,
    TOK_GT         = 316,
    TOK_GEQ        = 317,
    TOK_AND        = 318,
    TOK_OR         = 319,
    TOK_ASSIGN     = 320,
    TOK_XOR        = 321,
    // ── compound assignment operators ─────────────────────────────────────────
    TOK_PLUS_ASSIGN    = 322,   // +=
    TOK_MINUS_ASSIGN   = 323,   // -=
    TOK_STAR_ASSIGN    = 324,   // *=
    TOK_SLASH_ASSIGN   = 325,   // /=
    TOK_PERCENT_ASSIGN = 326,   // %=
    TOK_AMP_ASSIGN     = 327,   // &=
    TOK_PIPE_ASSIGN    = 328,   // |=
    TOK_XOR_ASSIGN     = 329,   // ^=
    // ── increment / decrement (statement-level only) ──────────────────────────
    TOK_INC        = 330,   // ++
    TOK_DEC        = 331,   // --
};
// Note: LOWER_THAN_ELSE, TOK_ELSE, UNARY_MINUS, UNARY_ADDR, POSTFIX_DEREF
// are parser-internal precedence tokens never used in hand-written code.
