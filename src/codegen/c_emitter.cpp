// =============================================================================
// codegen/c_emitter.cpp
// =============================================================================

#include "../codegen/c_emitter.hpp"

#include <cmath>
#include <limits>
#include <sstream>

namespace ZedLang {

void CEmitter::emit_indent() {
    for (int i = 0; i < depth_ * indent_size_; ++i)
        out_ << ' ';
}

void CEmitter::emit(double v) {
    if (std::isinf(v)) {
        out_ << (v > 0 ? "(1.0/0.0)" : "(-1.0/0.0)");
    } else if (std::isnan(v)) {
        out_ << "(0.0/0.0)";
    } else {
        // Always emit a decimal point so C treats it as a double literal.
        out_.precision(std::numeric_limits<double>::max_digits10);
        out_ << std::defaultfloat << v;
        // Ensure there's a decimal point for C's parser.
        std::string s;
        {
            std::ostringstream tmp;
            tmp.precision(std::numeric_limits<double>::max_digits10);
            tmp << std::defaultfloat << v;
            s = tmp.str();
        }
        bool has_dot = s.find('.') != std::string::npos ||
                       s.find('e') != std::string::npos ||
                       s.find('E') != std::string::npos;
        if (!has_dot) out_ << ".0";
    }
}

} // namespace ZedLang
