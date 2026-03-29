// =============================================================================
// Low-level C99 text emitter
// =============================================================================
// CEmitter is a thin wrapper around std::ostream that tracks indentation and
// provides helpers for emitting C tokens, punctuation, and lines.
// The higher-level CodeGen class uses it but does not inherit from it.
// =============================================================================

#pragma once

#include <ostream>
#include <string>

namespace ZedLang {

class CEmitter {
public:
    explicit CEmitter(std::ostream& out, int indent_size = 4)
        : out_(out), indent_size_(indent_size) {}

    // ---- Indentation -------------------------------------------------------
    void indent()   { depth_++; }
    void dedent()   { if (depth_ > 0) depth_--; }

    // Emit leading whitespace for the current depth (call at start of a line).
    void emit_indent();

    // ---- Raw emission ------------------------------------------------------
    void emit(const std::string& s) { out_ << s; }
    void emit(char c)               { out_ << c; }
    void emit(int64_t  v)           { out_ << v; }
    void emit(uint64_t v)           { out_ << v; }
    void emit(double   v);          // handles inf/nan portably

    // Emit a newline (no indent).
    void nl() { out_ << '\n'; }

    // Emit indentation + text + newline — the most common pattern.
    void line(const std::string& s) { emit_indent(); out_ << s << '\n'; }

    // Emit indentation + text (no newline) — for starting a line manually.
    void begin_line(const std::string& s) { emit_indent(); out_ << s; }

    // ---- Structured helpers ------------------------------------------------
    // Emit "{\n" and increase indent.
    void open_brace()       { out_ << " {\n"; depth_++; }
    // Standard closing brace
    void close_brace()      { depth_--; emit_indent(); out_ << "}\n"; }
    // Closing brace with semicolon — for C struct definitions
    void close_brace_semi() { depth_--; emit_indent(); out_ << "};\n"; }

    // Emit a blank separator line.
    void blank() { out_ << '\n'; }

    // Emit a C-style block comment.
    void comment(const std::string& text) {
        emit_indent();
        out_ << "/* " << text << " */\n";
    }

    // Current indent depth (for diagnostics).
    int depth() const { return depth_; }

private:
    std::ostream& out_;
    int           indent_size_;
    int           depth_ = 0;
};

} // namespace ZedLang
