#pragma once

#include "../support/error.hpp"

// yyscan_t at global scope — matches Flex's own generated declarations.
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

// LexerExtra at global scope: the Flex-generated lexer.h expands
// YY_EXTRA_TYPE (which is #defined as "LexerExtra*") at global scope.
// Putting this struct inside a namespace would make it invisible there.
struct LexerExtra {
    const char*          filename;
    ZedLang::ErrorReporter* err;
    int                  column;   // current column (1-based)

    LexerExtra(const char* fname, ZedLang::ErrorReporter* e)
        : filename(fname), err(e), column(1) {}
};
