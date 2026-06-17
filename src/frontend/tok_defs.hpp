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
    TOK_KW_READ           = 292,
    TOK_KW_READ_ALL       = 293,
    TOK_KW_READ_BYTES     = 294,
    TOK_KW_WRITE          = 295,
    TOK_KW_CLEAR          = 296,
    TOK_KW_TO_CSTR        = 297,
    TOK_KW_FROM_CSTR      = 298,
    TOK_KW_OR_RETURN      = 299,
    // Import keywords
    TOK_KW_CIMPORT        = 300,
    TOK_KW_IMPORT         = 301,
    // Declaration / assignment operators
    TOK_DECL              = 302,
    TOK_DEF               = 303,
    TOK_COLON             = 304,
    TOK_ARROW             = 305,
    TOK_NOBODY            = 306,
    // Compile-time directive
    TOK_HASH_ASSERT       = 307,
    // Delimiters
    TOK_LPAREN            = 308,
    TOK_RPAREN            = 309,
    TOK_LBRACE            = 310,
    TOK_RBRACE            = 311,
    TOK_LBRACKET          = 312,
    TOK_RBRACKET          = 313,
    // Dot variants
    TOK_DOT               = 314,
    TOK_DOTDOT            = 315,
    TOK_DOTDOTLT          = 316,
    TOK_DOTDOTEQ          = 317,
    // Other punctuation
    TOK_COMMA             = 318,
    TOK_SEMI              = 319,
    // Unary / address operators
    TOK_AMP               = 320,
    TOK_DEREF             = 321,
    TOK_NOT               = 322,
    // Arithmetic operators
    TOK_PLUS              = 323,
    TOK_MINUS             = 324,
    TOK_STAR              = 325,
    TOK_SLASH             = 326,
    TOK_PERCENT           = 327,
    // Bitwise operators
    TOK_PIPE              = 328,
    TOK_XOR               = 329,
    TOK_SHL               = 330,
    TOK_SHR               = 331,
    // Comparison operators
    TOK_EQ                = 332,
    TOK_NEQ               = 333,
    TOK_LT                = 334,
    TOK_LEQ               = 335,
    TOK_GT                = 336,
    TOK_GEQ               = 337,
    // Logical operators
    TOK_AND               = 338,
    TOK_OR                = 339,
    // Assignment
    TOK_ASSIGN            = 340,
    TOK_PLUS_ASSIGN       = 341,
    TOK_MINUS_ASSIGN      = 342,
    TOK_STAR_ASSIGN       = 343,
    TOK_SLASH_ASSIGN      = 344,
    TOK_PERCENT_ASSIGN    = 345,
    TOK_AMP_ASSIGN        = 346,
    TOK_PIPE_ASSIGN       = 347,
    TOK_XOR_ASSIGN        = 348,
    TOK_SHL_ASSIGN        = 349,
    TOK_SHR_ASSIGN        = 350,
    // New builtin-call keywords
    TOK_KW_PANIC          = 351,
    TOK_KW_FREE           = 352,
    TOK_KW_COPY           = 353,
    TOK_KW_ENUM_NAME      = 354,
    // Feature batch 2
    TOK_KW_BIT_CAST       = 355,
    TOK_KW_MIN            = 356,
    TOK_KW_MAX            = 357,
    TOK_KW_ABS            = 358,
    TOK_KW_SWAP           = 359,
    TOK_KW_CLAMP          = 360,
    TOK_KW_OR_ELSE        = 361,
    // Ternary operator
    TOK_QUESTION          = 362,
    // Tagged union keyword
    TOK_KW_VARIANT        = 363,
};
