// =============================================================================
// token.cpp
// =============================================================================
// This is the ONE translation unit allowed to include parser.tab.hpp directly.
// Everything in token.hpp that references TOK_* constants is defined here.
// =============================================================================

#include "../frontend/tok_defs.hpp"   // stable TOK_* constants; never missing unlike parser.tab.hpp
#include "../frontend/token.hpp"

#include <unordered_map>

namespace ZedLang {

// ---------------------------------------------------------------------------
// token_kind_name
// ---------------------------------------------------------------------------
std::string_view token_kind_name(int k) {
    switch (k) {
        case 0:                return "end of file";
        case TOK_INT_LIT:      return "integer literal";
        case TOK_FLOAT_LIT:    return "float literal";
        case TOK_BOOL_LIT:     return "boolean literal";
        case TOK_STRING_LIT:   return "string literal";
        case TOK_IDENT:        return "identifier";
        case TOK_KW_PROC:      return "'proc'";
        case TOK_KW_STRUCT:    return "'struct'";
        case TOK_KW_IF:        return "'if'";
        case TOK_KW_ELSE:      return "'else'";
        // TOK_KW_LOOP = 267 retired
        case TOK_KW_IN:        return "'in'";
        case TOK_KW_RETURN:    return "'return'";
        case TOK_KW_BREAK:     return "'break'";
        case TOK_KW_CONTINUE:  return "'continue'";
        case TOK_KW_NIL:       return "'nil'";
        case TOK_KW_TRUE:      return "'true'";
        case TOK_KW_FALSE:     return "'false'";
        case TOK_DECL:         return "':='";
        case TOK_DEF:          return "'::'";
        case TOK_COLON:        return "':'";
        case TOK_ARROW:        return "'->'";
        case TOK_NOBODY:       return "'---'";
        case TOK_LPAREN:       return "'('";
        case TOK_RPAREN:       return "')'";
        case TOK_LBRACE:       return "'{'";
        case TOK_RBRACE:       return "'}'";
        case TOK_LBRACKET:     return "'['";
        case TOK_RBRACKET:     return "']'";
        case TOK_DOT:          return "'.'";
        case TOK_COMMA:        return "','";
        case TOK_SEMI:         return "';'";
        case TOK_DOTDOTLT:     return "'..<'";
        case TOK_DOTDOTEQ:     return "'..='";
        case TOK_DOTDOT:       return "'..'";
        case TOK_AMP:          return "'&'";
        case TOK_DEREF:        return "'.*'";
        case TOK_NOT:          return "'!'";
        case TOK_PLUS:         return "'+'";
        case TOK_MINUS:        return "'-'";
        case TOK_STAR:         return "'*'";
        case TOK_SLASH:        return "'/'";
        case TOK_PERCENT:      return "'%'";
        case TOK_PIPE:         return "'|'";
        case TOK_SHL:          return "'<<'";
        case TOK_SHR:          return "'>>'";
        case TOK_EQ:           return "'=='";
        case TOK_NEQ:          return "'!='";
        case TOK_LT:           return "'<'";
        case TOK_LEQ:          return "'<='";
        case TOK_GT:           return "'>'";
        case TOK_GEQ:          return "'>='";
        case TOK_AND:          return "'&&'";
        case TOK_OR:           return "'||'";
        case TOK_KW_CAST:      return "'cast'";
        case TOK_ASSIGN:       return "'='";
        case TOK_XOR:          return "'^'";
        case TOK_KW_FOR:       return "'for'";
        case TOK_KW_DEFER:     return "'defer'";
        case TOK_KW_MATCH:     return "'match'";
        case TOK_KW_CASE:      return "'case'";
        case TOK_KW_WHEN:      return "'when'";
        case TOK_KW_ENUM:      return "'enum'";
        case TOK_KW_STEP:      return "'step'";
        case TOK_PLUS_ASSIGN:  return "'+='";
        case TOK_MINUS_ASSIGN: return "'-='";
        case TOK_STAR_ASSIGN:  return "'*='";
        case TOK_SLASH_ASSIGN: return "'/='";
        case TOK_PERCENT_ASSIGN: return "'%='";
        case TOK_AMP_ASSIGN:   return "'&='";
        case TOK_PIPE_ASSIGN:  return "'|='";
        case TOK_XOR_ASSIGN:   return "'^='";
        case TOK_INC:          return "'++'";
        case TOK_DEC:          return "'--'";
        case TOK_HASH_ASSERT:  return "'#assert'";
        default:               return "<unknown token>";
    }
}

// ---------------------------------------------------------------------------
// keyword_lookup
// ---------------------------------------------------------------------------
int keyword_lookup(std::string_view s) {
    // Keys are string literals — their lifetimes exceed the static map,
    // so string_view keys are safe here.
    static const std::unordered_map<std::string_view, int> table = {
        { "proc",     TOK_KW_PROC     },
        { "struct",   TOK_KW_STRUCT   },
        { "if",       TOK_KW_IF       },
        { "else",     TOK_KW_ELSE     },
        // "loop" intentionally removed — use "for" instead
        { "in",       TOK_KW_IN       },
        { "return",   TOK_KW_RETURN   },
        { "break",    TOK_KW_BREAK    },
        { "continue", TOK_KW_CONTINUE },
        { "nil",      TOK_KW_NIL      },
        { "true",     TOK_KW_TRUE     },
        { "false",    TOK_KW_FALSE    },
        { "cimport",  TOK_KW_CIMPORT  },
        { "cast",     TOK_KW_CAST     },
        { "import",   TOK_KW_IMPORT   },
        { "for",      TOK_KW_FOR      },
        { "defer",    TOK_KW_DEFER    },
        { "match",    TOK_KW_MATCH    },
        { "case",     TOK_KW_CASE     },
        { "when",     TOK_KW_WHEN     },
        { "enum",     TOK_KW_ENUM     },
        { "step",     TOK_KW_STEP     },
        // ── readable keyword aliases ──────────────────────────────────────────
        { "and",      TOK_AND         },  // alias for &&
        { "or",       TOK_OR          },  // alias for ||
        { "not",      TOK_NOT         },  // alias for !
    };
    auto it = table.find(s);
    return (it != table.end()) ? it->second : TOK_IDENT;
}

// ---------------------------------------------------------------------------
// Token member functions
// ---------------------------------------------------------------------------
bool Token::is_keyword() const {
    return kind >= TOK_KW_PROC && kind <= TOK_KW_FALSE;
}

bool Token::is_type_start() const {
    return kind == TOK_IDENT || kind == TOK_STAR || kind == TOK_LBRACKET;
}

bool Token::is_expr_start() const {
    switch (kind) {
        case TOK_INT_LIT:
        case TOK_FLOAT_LIT:
        case TOK_BOOL_LIT:
        case TOK_STRING_LIT:
        case TOK_KW_TRUE:
        case TOK_KW_FALSE:
        case TOK_KW_NIL:
        case TOK_IDENT:
        case TOK_LPAREN:
        case TOK_MINUS:
        case TOK_NOT:
        case TOK_AMP:
            return true;
        default:
            return false;
    }
}

bool Token::is_stmt_start() const {
    switch (kind) {
        case TOK_KW_IF:
        case TOK_KW_FOR:
        case TOK_KW_RETURN:
        case TOK_KW_BREAK:
        case TOK_KW_CONTINUE:
        case TOK_LBRACE:
            return true;
        default:
            return kind == TOK_IDENT || is_expr_start();
    }
}

std::string_view Token::kind_name() const {
    return token_kind_name(kind);
}

std::string Token::display() const {
    switch (kind) {
        case TOK_IDENT:
        case TOK_STRING_LIT:
            return "'" + str_val + "'";
        case TOK_INT_LIT:
            return std::to_string(int_val);
        case TOK_FLOAT_LIT:
            return std::to_string(float_val);
        case TOK_BOOL_LIT:
        case TOK_KW_TRUE:
        case TOK_KW_FALSE:
            return bool_val ? "true" : "false";
        default:
            return std::string(kind_name());
    }
}

} // namespace ZedLang
