// =============================================================================
// token.cpp
// =============================================================================

#include "../frontend/tok_defs.hpp"
#include "../frontend/token.hpp"

#include <unordered_map>

namespace ZedLang {

// ---------------------------------------------------------------------------
// token_kind_name
// ---------------------------------------------------------------------------
std::string_view token_kind_name(int k) {
    switch (k) {
        case 0:                    return "end of file";
        // Literals & identifier
        case TOK_INT_LIT:          return "integer literal";
        case TOK_FLOAT_LIT:        return "float literal";
        case TOK_BOOL_LIT:         return "boolean literal";
        case TOK_STRING_LIT:       return "string literal";
        case TOK_IDENT:            return "identifier";
        // Declaration keywords
        case TOK_KW_PROC:          return "'proc'";
        case TOK_KW_STRUCT:        return "'struct'";
        case TOK_KW_UNION:         return "'union'";
        case TOK_KW_ENUM:          return "'enum'";
        // Control-flow keywords
        case TOK_KW_IF:            return "'if'";
        case TOK_KW_ELSE:          return "'else'";
        case TOK_KW_FOR:           return "'for'";
        case TOK_KW_IN:            return "'in'";
        case TOK_KW_STEP:          return "'step'";
        case TOK_KW_BREAK:         return "'break'";
        case TOK_KW_CONTINUE:      return "'continue'";
        case TOK_KW_RETURN:        return "'return'";
        case TOK_KW_DEFER:         return "'defer'";
        // match / when
        case TOK_KW_MATCH:         return "'match'";
        case TOK_KW_CASE:          return "'case'";
        case TOK_KW_WHEN:          return "'when'";
        // Value keywords
        case TOK_KW_NIL:           return "'nil'";
        case TOK_KW_TRUE:          return "'true'";
        case TOK_KW_FALSE:         return "'false'";
        // Type / expression keywords
        case TOK_KW_STRING:        return "'string'";
        case TOK_KW_DYNAMIC:       return "'dynamic'";
        case TOK_KW_CAST:          return "'cast'";
        case TOK_KW_SIZEOF:        return "'sizeof'";
        case TOK_KW_ALIGNOF:       return "'alignof'";
        case TOK_KW_TYPEID:        return "'typeid'";
        // Builtin-call keywords
        case TOK_KW_LEN:           return "'len'";
        case TOK_KW_CAP:           return "'cap'";
        case TOK_KW_APPEND:        return "'append'";
        case TOK_KW_RESERVE:       return "'reserve'";
        case TOK_KW_CLEAR:         return "'clear'";
        case TOK_KW_TO_CSTR:       return "'to_cstr'";
        case TOK_KW_FROM_CSTR:     return "'from_cstr'";
        case TOK_KW_OR_RETURN:     return "'or_return'";
        // Import keywords
        case TOK_KW_CIMPORT:       return "'cimport'";
        case TOK_KW_IMPORT:        return "'import'";
        // Declaration / assignment operators
        case TOK_DECL:             return "':='";
        case TOK_DEF:              return "'::'";
        case TOK_COLON:            return "':'";
        case TOK_ARROW:            return "'->'";
        case TOK_NOBODY:           return "'---'";
        // Compile-time
        case TOK_HASH_ASSERT:      return "'#assert'";
        // Delimiters
        case TOK_LPAREN:           return "'('";
        case TOK_RPAREN:           return "')'";
        case TOK_LBRACE:           return "'{'";
        case TOK_RBRACE:           return "'}'";
        case TOK_LBRACKET:         return "'['";
        case TOK_RBRACKET:         return "']'";
        // Dot variants
        case TOK_DOT:              return "'.'";
        case TOK_DOTDOT:           return "'..'";
        case TOK_DOTDOTLT:         return "'..<'";
        case TOK_DOTDOTEQ:         return "'..='";
        // Other punctuation
        case TOK_COMMA:            return "','";
        case TOK_SEMI:             return "';'";
        // Operators
        case TOK_AMP:              return "'&'";
        case TOK_DEREF:            return "'.*'";
        case TOK_NOT:              return "'!'";
        case TOK_PLUS:             return "'+'";
        case TOK_MINUS:            return "'-'";
        case TOK_STAR:             return "'*'";
        case TOK_SLASH:            return "'/'";
        case TOK_PERCENT:          return "'%'";
        case TOK_PIPE:             return "'|'";
        case TOK_XOR:              return "'^'";
        case TOK_SHL:              return "'<<'";
        case TOK_SHR:              return "'>>'";
        case TOK_EQ:               return "'=='";
        case TOK_NEQ:              return "'!='";
        case TOK_LT:               return "'<'";
        case TOK_LEQ:              return "'<='";
        case TOK_GT:               return "'>'";
        case TOK_GEQ:              return "'>='";
        case TOK_AND:              return "'&&'";
        case TOK_OR:               return "'||'";
        // Assignment
        case TOK_ASSIGN:           return "'='";
        case TOK_PLUS_ASSIGN:      return "'+='";
        case TOK_MINUS_ASSIGN:     return "'-='";
        case TOK_STAR_ASSIGN:      return "'*='";
        case TOK_SLASH_ASSIGN:     return "'/='";
        case TOK_PERCENT_ASSIGN:   return "'%='";
        case TOK_AMP_ASSIGN:       return "'&='";
        case TOK_PIPE_ASSIGN:      return "'|='";
        case TOK_XOR_ASSIGN:       return "'^='";
        case TOK_SHL_ASSIGN:       return "'<<='";
        case TOK_SHR_ASSIGN:       return "'>>='";
        case TOK_KW_PANIC:         return "'panic'";
        case TOK_KW_FREE:          return "'free'";
        case TOK_KW_COPY:          return "'copy'";
        case TOK_KW_ENUM_NAME:     return "'enum_name'";
        case TOK_KW_BIT_CAST:      return "'bit_cast'";
        case TOK_KW_MIN:           return "'min'";
        case TOK_KW_MAX:           return "'max'";
        case TOK_KW_ABS:           return "'abs'";
        case TOK_KW_SWAP:          return "'swap'";
        case TOK_KW_CLAMP:         return "'clamp'";
        case TOK_KW_OR_ELSE:       return "'or_else'";
        case TOK_QUESTION:         return "'?'";
        case TOK_KW_VARIANT:       return "'variant'";
        default:                   return "<unknown token>";
    }
}

// ---------------------------------------------------------------------------
// keyword_lookup
// ---------------------------------------------------------------------------
int keyword_lookup(std::string_view s) {
    static const std::unordered_map<std::string_view, int> table = {
        // Declaration keywords
        { "proc",         TOK_KW_PROC      },
        { "struct",       TOK_KW_STRUCT    },
        { "union",        TOK_KW_UNION     },
        { "enum",         TOK_KW_ENUM      },
        // Control-flow keywords
        { "if",           TOK_KW_IF        },
        { "else",         TOK_KW_ELSE      },
        { "for",          TOK_KW_FOR       },
        { "in",           TOK_KW_IN        },
        { "step",         TOK_KW_STEP      },
        { "break",        TOK_KW_BREAK     },
        { "continue",     TOK_KW_CONTINUE  },
        { "return",       TOK_KW_RETURN    },
        { "defer",        TOK_KW_DEFER     },
        // match / when
        { "match",        TOK_KW_MATCH     },
        { "case",         TOK_KW_CASE      },
        { "when",         TOK_KW_WHEN      },
        // Value keywords
        { "nil",          TOK_KW_NIL       },
        { "true",         TOK_KW_TRUE      },
        { "false",        TOK_KW_FALSE     },
        // Type / expression keywords
        { "string",       TOK_KW_STRING    },
        { "dynamic",      TOK_KW_DYNAMIC   },
        { "variant",      TOK_KW_VARIANT   },
        { "cast",         TOK_KW_CAST      },
        { "sizeof",       TOK_KW_SIZEOF    },
        { "alignof",      TOK_KW_ALIGNOF   },
        { "typeid",       TOK_KW_TYPEID    },
        // Builtin-call keywords
        { "len",          TOK_KW_LEN       },
        { "cap",          TOK_KW_CAP       },
        { "append",       TOK_KW_APPEND    },
        { "reserve",      TOK_KW_RESERVE   },
        { "clear",        TOK_KW_CLEAR     },
        { "to_cstr",      TOK_KW_TO_CSTR   },
        { "from_cstr",    TOK_KW_FROM_CSTR },
        { "or_return",    TOK_KW_OR_RETURN },
        // New builtins
        { "panic",        TOK_KW_PANIC     },
        { "free",         TOK_KW_FREE      },
        { "copy",         TOK_KW_COPY      },
        { "enum_name",    TOK_KW_ENUM_NAME },
        // Feature batch 2
        { "bit_cast",     TOK_KW_BIT_CAST  },
        { "min",          TOK_KW_MIN       },
        { "max",          TOK_KW_MAX       },
        { "abs",          TOK_KW_ABS       },
        { "swap",         TOK_KW_SWAP      },
        { "clamp",        TOK_KW_CLAMP     },
        { "or_else",      TOK_KW_OR_ELSE   },
        // Import keywords
        { "cimport",      TOK_KW_CIMPORT   },
        { "import",       TOK_KW_IMPORT    },
        // Readable keyword aliases for logical operators
        { "and",          TOK_AND          },
        { "or",           TOK_OR           },
        { "not",          TOK_NOT          },
    };
    auto it = table.find(s);
    return (it != table.end()) ? it->second : TOK_IDENT;
}

// ---------------------------------------------------------------------------
// Token member functions
// ---------------------------------------------------------------------------
std::string_view Token::kind_name() const {
    return token_kind_name(kind);
}

} // namespace ZedLang
