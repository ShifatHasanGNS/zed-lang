// =============================================================================
// error.cpp
// =============================================================================

#include "../support/error.hpp"

#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstdlib>

namespace ZedLang {

namespace {
    const char* colour_for(Severity s) {
        switch (s) {
            case Severity::ERROR: return "\033[31m";
            case Severity::FATAL: return "\033[35m";
        }
        return "";
    }
    const char* RESET  = "\033[0m";
    const char* BOLD   = "\033[1m";

    std::string format_header(const Diagnostic& d) {
        std::ostringstream os;
        if (d.loc.is_valid()) {
            os << BOLD << d.loc.to_string() << ": " << RESET;
        }
        os << BOLD << colour_for(d.severity)
           << severity_name(d.severity) << ": "
           << RESET << d.message;
        return os.str();
    }
}

Diagnostic& ErrorReporter::error(SourceLoc loc, const std::string& msg) {
    ++error_count_;
    diags_.emplace_back(Severity::ERROR, loc, msg);
    if (error_count_ >= MAX_ERRORS) {
        flush();
        std::cerr << BOLD << "error: " << RESET
                  << "too many errors (limit " << MAX_ERRORS
                  << "); stopping compilation.\n";
        std::exit(1);
    }
    return diags_.back();
}

void ErrorReporter::fatal(SourceLoc loc, const std::string& msg) {
    ++error_count_;
    diags_.emplace_back(Severity::FATAL, loc, msg);
    print_diagnostic(diags_.back());
    throw FatalError{};
}

void ErrorReporter::ice(const char* src_file, int src_line, const std::string& msg) {
    std::cerr << BOLD << "\033[35m"
              << "internal zed error" << RESET << ": "
              << msg << "\n"
              << "  at " << src_file << ":" << src_line << "\n"
              << "Please report this as a bug.\n";
    std::exit(2);
}

bool ErrorReporter::flush() {
    std::stable_sort(diags_.begin(), diags_.end(),
        [](const Diagnostic& a, const Diagnostic& b) {
            if (!a.loc.is_valid() && !b.loc.is_valid()) return false;
            if (!a.loc.is_valid()) return true;
            if (!b.loc.is_valid()) return false;
            return a.loc < b.loc;
        });
    for (const Diagnostic& d : diags_) {
        print_diagnostic(d);
    }
    return error_count_ > 0;
}

void ErrorReporter::reset() {
    diags_.clear();
    error_count_ = 0;
}

void ErrorReporter::print_diagnostic(const Diagnostic& d) const {
    std::cerr << format_header(d) << "\n";
    if (!d.note_msg.empty()) {
        if (d.note_loc.is_valid()) {
            std::cerr << "  " << BOLD << d.note_loc.to_string() << ": "
                      << RESET << "\033[36m" << "note: " << RESET
                      << d.note_msg << "\n";
        } else {
            std::cerr << "  " << "\033[36m" << "note: " << RESET
                      << d.note_msg << "\n";
        }
    }
}

} // namespace ZedLang
