// =============================================================================
// error.hpp
// =============================================================================

#pragma once

#include "source_loc.hpp"

#include <exception>
#include <string>
#include <vector>

namespace ZedLang {

enum class Severity {
    NOTE,
    WARNING,
    ERROR,
    FATAL,
};

inline const char* severity_name(Severity s) {
    switch (s) {
        case Severity::NOTE:    return "note";
        case Severity::WARNING: return "warning";
        case Severity::ERROR:   return "error";
        case Severity::FATAL:   return "fatal error";
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
    void note(SourceLoc loc, const std::string& msg);

    bool has_errors()   const { return error_count_ > 0;  }
    bool has_warnings() const { return warn_count_  > 0;  }
    int  error_count()  const { return error_count_;       }
    int  warn_count()   const { return warn_count_;        }

    bool flush();
    void flush_and_exit_on_error();
    void reset();

private:
    std::vector<Diagnostic> diags_;
    int error_count_ = 0;
    int warn_count_  = 0;

    void print_diagnostic(const Diagnostic& d) const;
};

#define ICE(reporter, msg) \
    (reporter).ice(__FILE__, __LINE__, (msg))

} // namespace ZedLang
