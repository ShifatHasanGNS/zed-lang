// =============================================================================
// toml_reader.hpp — Minimal TOML subset reader
// =============================================================================
// Supports the full subset used by zed.toml:
//
//   [section]
//   key = "string value"
//   key = ["array", "of", "strings"]
//   key = ["multi",          # multi-line arrays are supported
//          "line",
//          "too"]
//   key = 42                 # integers
//   key = true / false       # booleans
//   # comments (trailing inline comments are also supported)
//
// Does NOT support: inline tables, multi-line strings, floats, dates, nested
// sections, dotted keys. That's all zed.toml ever needs.
// =============================================================================

#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <unordered_map>
#include <stdexcept>
#include <fstream>

namespace zed {

struct TomlValue {
    enum Kind { STRING, INT, BOOL, ARRAY };
    Kind                     kind    = STRING;
    std::string              str;
    int64_t                  integer = 0;
    bool                     boolean = false;
    std::vector<std::string> array;
};

// Keys are stored as "section.key" (e.g. "build.sources").
using TomlDoc = std::unordered_map<std::string, TomlValue>;

namespace detail {

inline std::string_view trim(std::string_view s) {
    while (!s.empty() && (s.front() == ' ' || s.front() == '\t')) s.remove_prefix(1);
    while (!s.empty() && (s.back()  == ' ' || s.back()  == '\t' ||
                          s.back()  == '\r' || s.back() == '\n')) s.remove_suffix(1);
    return s;
}

inline std::string unescape(std::string_view s) {
    std::string out;
    out.reserve(s.size());
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '\\' && i + 1 < s.size()) {
            switch (s[++i]) {
                case 'n':  out += '\n'; break;
                case 't':  out += '\t'; break;
                case '\\': out += '\\'; break;
                case '"':  out += '"';  break;
                default:   out += '\\'; out += s[i]; break;
            }
        } else {
            out += s[i];
        }
    }
    return out;
}

// Parse a quoted string. pos must point to the character after the opening '"'.
// Advances pos past the closing '"'.
inline std::string parse_string(std::string_view line, size_t& pos) {
    std::string raw;
    while (pos < line.size() && line[pos] != '"') {
        if (line[pos] == '\\' && pos + 1 < line.size())
            raw += line[pos++]; // keep backslash; unescape() will handle it
        raw += line[pos++];
    }
    if (pos < line.size()) ++pos; // consume closing '"'
    return unescape(raw);
}

// Consume elements from a running position inside an array value.
// Returns true when the closing ']' has been seen (array is complete),
// false when the line ended without it (caller must feed more lines).
inline bool parse_array_chunk(std::string_view chunk,
                               size_t& pos,
                               std::vector<std::string>& out) {
    while (pos < chunk.size()) {
        char c = chunk[pos];

        if (c == ']')                              { ++pos; return true;  } // done
        if (c == '#')                              {         return false; } // rest is comment
        if (c == ' ' || c == '\t' || c == ',')    { ++pos; continue;     }

        if (c == '"') {
            ++pos;
            out.push_back(parse_string(chunk, pos));
            continue;
        }

        // Bare token (not standard TOML but tolerated for robustness).
        size_t start = pos;
        while (pos < chunk.size() &&
               chunk[pos] != ',' && chunk[pos] != ']' && chunk[pos] != '#')
            ++pos;
        std::string tok(trim(chunk.substr(start, pos - start)));
        if (!tok.empty()) out.push_back(tok);
    }
    return false; // hit end-of-line without seeing ']'
}

} // namespace detail

inline TomlDoc parse_toml(const std::string& path) {
    std::ifstream f(path);
    if (!f) throw std::runtime_error("cannot open '" + path + "'");

    TomlDoc     doc;
    std::string section;
    std::string line_str;
    int         lineno = 0;

    // State for multi-line array continuation.
    bool                     in_array  = false;
    std::string              array_key;
    std::vector<std::string> array_acc;

    auto flush_array = [&]() {
        TomlValue tv;
        tv.kind  = TomlValue::ARRAY;
        tv.array = std::move(array_acc);
        doc[array_key] = std::move(tv);
        array_acc.clear();
        in_array = false;
    };

    while (std::getline(f, line_str)) {
        ++lineno;
        auto line = detail::trim(std::string_view(line_str));

        // ---- Continuation of a multi-line array --------------------------------
        if (in_array) {
            size_t pos = 0;
            if (detail::parse_array_chunk(line, pos, array_acc))
                flush_array();
            continue;
        }

        // ---- Normal line -------------------------------------------------------
        if (line.empty() || line[0] == '#') continue;

        // Section header [section]
        if (line[0] == '[') {
            size_t end = line.find(']', 1);
            if (end == std::string_view::npos)
                throw std::runtime_error(path + ":" + std::to_string(lineno)
                                         + ": unterminated '['");
            section = std::string(detail::trim(line.substr(1, end - 1)));
            continue;
        }

        // key = value
        size_t eq = line.find('=');
        if (eq == std::string_view::npos) continue; // tolerate bare lines

        std::string key = std::string(detail::trim(line.substr(0, eq)));
        if (!section.empty()) key = section + "." + key;

        std::string val_str(detail::trim(line.substr(eq + 1)));
        if (val_str.empty()) continue;

        TomlValue tv;

        if (val_str[0] == '"') {
            // Quoted string.
            size_t pos = 1;
            tv.kind = TomlValue::STRING;
            tv.str  = detail::parse_string(val_str, pos);

        } else if (val_str[0] == '[') {
            // Array — may or may not close on this line.
            size_t pos = 1;
            if (detail::parse_array_chunk(val_str, pos, array_acc)) {
                // Closed on same line — store immediately.
                tv.kind  = TomlValue::ARRAY;
                tv.array = std::move(array_acc);
                array_acc.clear();
                doc[key] = std::move(tv);
            } else {
                // Continues on subsequent lines.
                array_key = key;
                in_array  = true;
            }
            continue; // doc[key] handled above

        } else if (val_str == "true") {
            tv.kind    = TomlValue::BOOL;
            tv.boolean = true;

        } else if (val_str == "false") {
            tv.kind    = TomlValue::BOOL;
            tv.boolean = false;

        } else {
            // Integer, or bare string fallback.
            try {
                size_t consumed;
                tv.integer = std::stoll(val_str, &consumed);
                tv.kind    = TomlValue::INT;
            } catch (...) {
                // Bare string — strip trailing inline comment.
                size_t hash = val_str.find('#');
                tv.str  = std::string(detail::trim(
                    std::string_view(val_str).substr(0, hash)));
                tv.kind = TomlValue::STRING;
            }
        }

        doc[key] = std::move(tv);
    }

    if (in_array)
        throw std::runtime_error(path + ": unterminated array for key '" + array_key + "'");

    return doc;
}

// ---- Convenience accessors --------------------------------------------------

inline std::string toml_str(const TomlDoc& doc, const std::string& key,
                             const std::string& def = "") {
    auto it = doc.find(key);
    if (it == doc.end() || it->second.kind != TomlValue::STRING) return def;
    return it->second.str;
}

inline int64_t toml_int(const TomlDoc& doc, const std::string& key,
                         int64_t def = 0) {
    auto it = doc.find(key);
    if (it == doc.end() || it->second.kind != TomlValue::INT) return def;
    return it->second.integer;
}

inline bool toml_bool(const TomlDoc& doc, const std::string& key,
                       bool def = false) {
    auto it = doc.find(key);
    if (it == doc.end() || it->second.kind != TomlValue::BOOL) return def;
    return it->second.boolean;
}

inline std::vector<std::string> toml_array(const TomlDoc& doc,
                                            const std::string& key) {
    auto it = doc.find(key);
    if (it == doc.end() || it->second.kind != TomlValue::ARRAY) return {};
    return it->second.array;
}

inline bool toml_has(const TomlDoc& doc, const std::string& key) {
    return doc.find(key) != doc.end();
}

} // namespace zed
