#pragma once

#include <cstdint>
#include <string>

namespace ZedLang {

// ---------------------------------------------------------------------------
// SourceLoc
// ---------------------------------------------------------------------------
struct SourceLoc {
    const char* file = nullptr;
    uint32_t    line = 0;
    uint32_t    col  = 0;

    SourceLoc() = default;
    SourceLoc(const char* f, uint32_t l, uint32_t c) : file(f), line(l), col(c) {}

    bool is_valid() const { return file != nullptr && line != 0; }

    std::string to_string() const {
        if (!is_valid()) return "<unknown>";
        return std::string(file) + ":" +
               std::to_string(line) + ":" +
               std::to_string(col);
    }

    bool operator==(const SourceLoc& o) const {
        return file == o.file && line == o.line && col == o.col;
    }
    bool operator!=(const SourceLoc& o) const { return !(*this == o); }
    bool operator<(const SourceLoc& o) const {
        if (file != o.file) return file < o.file;
        if (line != o.line) return line < o.line;
        return col < o.col;
    }
};

inline constexpr SourceLoc NO_LOC{};

// ---------------------------------------------------------------------------
// SourceRange
// ---------------------------------------------------------------------------
struct SourceRange {
    SourceLoc begin;
    SourceLoc end;

    explicit SourceRange(SourceLoc loc) : begin(loc), end(loc) {}
    SourceRange(SourceLoc b, SourceLoc e) : begin(b), end(e) {}
    SourceRange() = default;

    bool is_valid() const { return begin.is_valid(); }

    SourceRange extend(SourceRange other) const {
        SourceRange r;
        r.begin = (begin < other.begin) ? begin : other.begin;
        r.end   = (other.end < end)     ? end   : other.end;
        return r;
    }
};

} // namespace ZedLang
