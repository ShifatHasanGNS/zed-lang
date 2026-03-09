// =============================================================================
// token.hpp
// =============================================================================
// NOTE: This header intentionally does NOT include parser.tab.hpp.
// parser.tab.hpp is Bison-generated and does not exist before the build runs.
// All functions that reference TOK_* constants are defined in token.cpp,
// which includes parser.tab.hpp explicitly.
// =============================================================================

#pragma once

#include "../support/source_loc.hpp"

#include <string>
#include <string_view>

namespace ZedLang {

struct Token {
    int         kind = 0;         // token code from Bison (int, not an enum)
    SourceLoc   loc;

    uint64_t    int_val   = 0;
    double      float_val = 0.0;
    bool        bool_val  = false;
    std::string str_val;          // for IDENT, STRING_LIT

    Token() = default;
    Token(int k, SourceLoc l)             : kind(k), loc(l) {}
    Token(int k, SourceLoc l, uint64_t v) : kind(k), loc(l), int_val(v) {}
    Token(int k, SourceLoc l, double v)   : kind(k), loc(l), float_val(v) {}
    Token(int k, SourceLoc l, bool v)     : kind(k), loc(l), bool_val(v) {}
    Token(int k, SourceLoc l, std::string v)
        : kind(k), loc(l), str_val(std::move(v)) {}

    bool is(int k)    const { return kind == k; }
    bool is_eof()     const { return kind == 0; }

    // Implemented in token.cpp (require parser.tab.hpp for TOK_* constants).
    bool             is_keyword()    const;
    bool             is_type_start() const;
    bool             is_expr_start() const;
    bool             is_stmt_start() const;
    std::string_view kind_name()     const;
    std::string      display()       const;
};

// Free functions — also implemented in token.cpp.
std::string_view token_kind_name(int k);
int              keyword_lookup(std::string_view s);

} // namespace ZedLang
