// =============================================================================
// tok_defs.hpp — Token constant definitions
// =============================================================================
// Values assigned by bison in %token declaration order (starting at 258).
// The declaration order in parser.y is authoritative; this file must mirror it.
// To add a new token: append a %token to parser.y, then add the next value here.
// Never reorder or delete entries — append only.
// =============================================================================

#pragma once

enum {
    // Literals & identifier
    TOK_INT_LIT           = 258,
    TOK_FLOAT_LIT         = 259,
    TOK_BOOL_LIT          = 260,
    TOK_STRING_LIT        = 261,
    TOK_IDENT             = 262,
    // Declaration keywords
    TOK_KW_PROC           = 263,
    TOK_KW_STRUCT         = 264,
    TOK_KW_UNION          = 265,
    TOK_KW_ENUM           = 266,
    // Control-flow keywords
    TOK_KW_IF             = 267,
    TOK_KW_ELSE           = 268,
    TOK_KW_FOR            = 269,
    TOK_KW_IN             = 270,
    TOK_KW_STEP           = 271,
    TOK_KW_BREAK          = 272,
    TOK_KW_CONTINUE       = 273,
    TOK_KW_RETURN         = 274,
    TOK_KW_DEFER          = 275,
    // match / when
    TOK_KW_MATCH          = 276,
    TOK_KW_CASE           = 277,
    TOK_KW_WHEN           = 278,
    // Value keywords
    TOK_KW_NIL            = 279,
    TOK_KW_TRUE           = 280,
    TOK_KW_FALSE          = 281,
    // Type / expression keywords
    TOK_KW_STRING         = 282,
    TOK_KW_DYNAMIC        = 283,
    TOK_KW_CAST           = 284,
    TOK_KW_SIZEOF         = 285,
    TOK_KW_ALIGNOF        = 286,
    TOK_KW_TYPEID         = 287,
    // Builtin-call keywords (also usable as soft identifiers)
    TOK_KW_LEN            = 288,
    TOK_KW_CAP            = 289,
    TOK_KW_APPEND         = 290,
    TOK_KW_RESERVE        = 291,
    TOK_KW_CLEAR          = 292,
    TOK_KW_TO_CSTR        = 293,
    TOK_KW_FROM_CSTR      = 294,
    TOK_KW_OR_RETURN      = 295,
    // Import keywords
    TOK_KW_CIMPORT        = 296,
    TOK_KW_IMPORT         = 297,
    // Declaration / assignment operators
    TOK_DECL              = 298,
    TOK_DEF               = 299,
    TOK_COLON             = 300,
    TOK_ARROW             = 301,
    TOK_NOBODY            = 302,
    // Compile-time directive
    TOK_HASH_ASSERT       = 303,
    // Delimiters
    TOK_LPAREN            = 304,
    TOK_RPAREN            = 305,
    TOK_LBRACE            = 306,
    TOK_RBRACE            = 307,
    TOK_LBRACKET          = 308,
    TOK_RBRACKET          = 309,
    // Dot variants
    TOK_DOT               = 310,
    TOK_DOTDOT            = 311,
    TOK_DOTDOTLT          = 312,
    TOK_DOTDOTEQ          = 313,
    // Other punctuation
    TOK_COMMA             = 314,
    TOK_SEMI              = 315,
    // Unary / address operators
    TOK_AMP               = 316,
    TOK_DEREF             = 317,
    TOK_NOT               = 318,
    // Arithmetic operators
    TOK_PLUS              = 319,
    TOK_MINUS             = 320,
    TOK_STAR              = 321,
    TOK_SLASH             = 322,
    TOK_PERCENT           = 323,
    // Bitwise operators
    TOK_PIPE              = 324,
    TOK_XOR               = 325,
    TOK_SHL               = 326,
    TOK_SHR               = 327,
    // Comparison operators
    TOK_EQ                = 328,
    TOK_NEQ               = 329,
    TOK_LT                = 330,
    TOK_LEQ               = 331,
    TOK_GT                = 332,
    TOK_GEQ               = 333,
    // Logical operators
    TOK_AND               = 334,
    TOK_OR                = 335,
    // Assignment
    TOK_ASSIGN            = 336,
    TOK_PLUS_ASSIGN       = 337,
    TOK_MINUS_ASSIGN      = 338,
    TOK_STAR_ASSIGN       = 339,
    TOK_SLASH_ASSIGN      = 340,
    TOK_PERCENT_ASSIGN    = 341,
    TOK_AMP_ASSIGN        = 342,
    TOK_PIPE_ASSIGN       = 343,
    TOK_XOR_ASSIGN        = 344,
    TOK_SHL_ASSIGN        = 345,
    TOK_SHR_ASSIGN        = 346,
    // New builtin-call keywords
    TOK_KW_PANIC          = 347,
    TOK_KW_FREE           = 348,
    TOK_KW_COPY           = 349,
    TOK_KW_ENUM_NAME      = 350,
    // Feature batch 2
    TOK_KW_BIT_CAST       = 351,
    TOK_KW_MIN            = 352,
    TOK_KW_MAX            = 353,
    TOK_KW_ABS            = 354,
    TOK_KW_SWAP           = 355,
    TOK_KW_CLAMP          = 356,
    TOK_KW_OR_ELSE        = 357,
};
