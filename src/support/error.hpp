// =============================================================================
// error.hpp
// =============================================================================

#pragma once

#include "../support/source_loc.hpp"

#include <exception>
#include <string>
#include <vector>

namespace ZedLang {

enum class Severity {
    ERROR,
    FATAL,
};

inline const char* severity_name(Severity s) {
    switch (s) {
        case Severity::ERROR: return "error";
        case Severity::FATAL: return "fatal error";
    }
    return "error";
}

struct Diagnostic {
    Severity   severity;
    SourceLoc  loc;
    std::string message;
    SourceLoc  note_loc;
    std::string note_msg;

    Diagnostic(Severity sev, SourceLoc l, std::string msg)
        : severity(sev), loc(l), message(std::move(msg)) {}

    Diagnostic& with_note(SourceLoc nl, std::string nm) {
        note_loc = nl;
        note_msg = std::move(nm);
        return *this;
    }
};

struct FatalError : public std::exception {
    const char* what() const noexcept override {
        return "fatal zed error";
    }
};

class ErrorReporter {
public:
    static constexpr int MAX_ERRORS = 20;

    ErrorReporter() = default;
    ErrorReporter(const ErrorReporter&) = delete;
    ErrorReporter& operator=(const ErrorReporter&) = delete;

    Diagnostic& error(SourceLoc loc, const std::string& msg);
    [[noreturn]] void fatal(SourceLoc loc, const std::string& msg);
    [[noreturn]] void ice(const char* file, int line, const std::string& msg);

    bool has_errors()   const { return error_count_ > 0;  }
    int  error_count()  const { return error_count_;       }

    bool flush();
    void reset();

private:
    std::vector<Diagnostic> diags_;
    int error_count_ = 0;

    void print_diagnostic(const Diagnostic& d) const;
};

} // namespace ZedLang
