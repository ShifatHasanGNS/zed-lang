// =============================================================================
// tok_defs.hpp — Token constant definitions
// =============================================================================
// IMPORTANT: Values must stay stable — Bison assigns the same values by
// declaration order in parser.y.  Never reorder or delete entries; only append.
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
    TOK_KW_LOOP    = 267,   // RETIRED — slot kept for ABI stability; lexer never emits this
    TOK_KW_IN      = 268,
    TOK_KW_RETURN  = 269,
    TOK_KW_BREAK   = 270,
    TOK_KW_CONTINUE= 271,
    TOK_KW_NIL     = 272,
    TOK_KW_TRUE    = 273,
    TOK_KW_FALSE   = 274,
    TOK_DECL       = 275,   // :=
    TOK_DEF        = 276,   // ::
    TOK_COLON      = 277,
    TOK_ARROW      = 278,   // ->
    TOK_NOBODY     = 279,   // ---
    TOK_KW_CIMPORT = 280,
    TOK_KW_IMPORT  = 281,
    TOK_KW_CAST    = 282,
    // ── loop / range / control keywords ──────────────────────────────────────
    TOK_KW_FOR     = 283,   // for { } / for cond { } / for i in lo..<hi { }
    TOK_KW_DEFER   = 284,   // defer expr
    TOK_KW_MATCH   = 285,   // match val { case X { } }
    TOK_KW_CASE    = 286,   // case inside match
    TOK_KW_WHEN    = 287,   // when CONST { } else when { } else { }
    TOK_KW_ENUM    = 288,   // Name :: enum { A, B = 2, C }
    TOK_KW_STEP    = 289,   // step N  (optional, inside for-range)
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
    TOK_DOTDOT     = 333,   // ..   (struct update spread: Rect{ ..base, width=10 })
    TOK_KW_SIZEOF    = 334,   // sizeof(T) / sizeof(expr)
    TOK_KW_ALIGNOF   = 335,   // alignof(T)
    // Stage 2 ─────────────────────────────────────────────────────
    TOK_KW_STRING    = 336,   // string  (built-in type)
    TOK_KW_DYNAMIC   = 337,   // dynamic (used in [dynamic]T)
    TOK_KW_APPEND    = 338,   // append(&arr, val)
    TOK_KW_LEN       = 339,   // len(x)
    TOK_KW_CAP       = 340,   // cap(arr)
    TOK_KW_RESERVE   = 341,   // reserve(&arr, n)
    TOK_KW_DELETE_DYN= 342,   // delete_dyn(&arr)
    TOK_KW_OR_RETURN = 343,   // or_return (postfix)
    TOK_KW_TO_CSTR   = 344,   // to_cstr(s)
    TOK_KW_FROM_CSTR = 345,   // from_cstr(cs)
    TOK_AMP        = 301,
    TOK_DEREF      = 302,   // .*
    TOK_NOT        = 303,   // !  (also keyword alias: "not")
    TOK_PLUS       = 304,
    TOK_MINUS      = 305,
    TOK_STAR       = 306,
    TOK_SLASH      = 307,
    TOK_PERCENT    = 308,
    TOK_PIPE       = 309,
    TOK_SHL        = 310,   // <<
    TOK_SHR        = 311,   // >>
    TOK_EQ         = 312,   // ==
    TOK_NEQ        = 313,   // !=
    TOK_LT         = 314,
    TOK_LEQ        = 315,   // <=
    TOK_GT         = 316,
    TOK_GEQ        = 317,   // >=
    TOK_AND        = 318,   // &&  (also keyword alias: "and")
    TOK_OR         = 319,   // ||  (also keyword alias: "or")
    TOK_ASSIGN     = 320,   // =
    TOK_XOR        = 321,   // ^
    // ── compound assignment ───────────────────────────────────────────────────
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
    // ── compile-time directives ───────────────────────────────────────────────
    TOK_HASH_ASSERT = 332,  // #assert <const-expr>  →  static_assert(...)
};
