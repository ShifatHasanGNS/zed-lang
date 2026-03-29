// =============================================================================
// Derived composite types live in namespace ZedLang::sem to avoid name collisions
// with the AST syntax nodes in ast.hpp (which also has PtrType, ArrayType,
// SliceType — all in namespace ZedLang).
// =============================================================================

#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <memory>

namespace ZedLang {

// Forward declarations (defined below)
struct SemanticType;
struct ProcParam;

using TypeRef = SemanticType*;  // non-owning; all types live in TypeArena

// ---------------------------------------------------------------------------
// SemanticType — base class for all resolved types
// ---------------------------------------------------------------------------
struct SemanticType {
  enum class Kind {
    VOID,
    BOOL,
    I8,
    I16,
    I32,
    I64,
    U8,
    U16,
    U32,
    U64,
    F32,
    F64,
    CSTR,
    PTR,
    ARRAY,
    SLICE,
    STRUCT,
    PROC,
    ERROR,
    FOREIGN,
    FOREIGN_NAMED,  // C type accessed via cimport — carries the original name
    ENUM,           // native Zed enum type (underlying i32)
    DYN_ARRAY,      // [dynamic]T  ->  std::vector<T>
    STRING,         // string  ->  std::string
    TUPLE,          // (T0, T1, ...) — multi-return only, not first-class
    };

    Kind kind;
    explicit SemanticType(Kind k) : kind(k) {}
    virtual ~SemanticType() = default;

    bool is_integer()    const;
    bool is_float()      const;
    bool is_numeric()    const;
    bool is_void()       const { return kind == Kind::VOID;         }
    bool is_bool()       const { return kind == Kind::BOOL;         }
    bool is_ptr()        const { return kind == Kind::PTR;          }
    bool is_slice()      const { return kind == Kind::SLICE;        }
    bool is_array()      const { return kind == Kind::ARRAY;        }
    bool is_struct()     const { return kind == Kind::STRUCT;       }
    bool is_proc()       const { return kind == Kind::PROC;         }
    bool is_error()      const { return kind == Kind::ERROR;        }
    bool is_cstr()       const { return kind == Kind::CSTR;         }
    bool is_enum()       const { return kind == Kind::ENUM;         }
    bool is_dyn_array()  const { return kind == Kind::DYN_ARRAY;    }
    bool is_string()     const { return kind == Kind::STRING;       }
    bool is_tuple()      const { return kind == Kind::TUPLE;        }
    // True for any value that originated from C (no Zed type info)
    bool is_any_foreign() const {
        return kind == Kind::FOREIGN || kind == Kind::FOREIGN_NAMED;
    }

    uint64_t    byte_size()  const;
    std::string to_string()  const;

    bool operator==(const SemanticType& o) const;
    bool operator!=(const SemanticType& o) const { return !(*this == o); }
};

// ---------------------------------------------------------------------------
// ZedLang::sem — derived semantic types
// ---------------------------------------------------------------------------
namespace sem {

struct PtrType final : SemanticType {
    TypeRef pointee;
    explicit PtrType(TypeRef p) : SemanticType(Kind::PTR), pointee(p) {}
};

struct ArrayType final : SemanticType {
    uint64_t count;
    TypeRef  elem;
    ArrayType(uint64_t n, TypeRef e)
        : SemanticType(Kind::ARRAY), count(n), elem(e) {}
};

struct SliceType final : SemanticType {
    TypeRef elem;
    explicit SliceType(TypeRef e) : SemanticType(Kind::SLICE), elem(e) {}
};

struct StructField {
    std::string name;
    TypeRef     type;
    uint64_t    offset = 0;
};

struct StructType final : SemanticType {
    std::string               name;
    std::vector<StructField>  fields;
    uint64_t                  total_size  = 0;
    bool                      layout_done = false;
    bool                      is_union    = false;  // true for union declarations

    explicit StructType(std::string n)
        : SemanticType(Kind::STRUCT), name(std::move(n)) {}

    const StructField* find_field(const std::string& fname) const {
        for (const auto& f : fields)
            if (f.name == fname) return &f;
        return nullptr;
    }
};

struct ProcParam {
    std::string name;
    TypeRef     type;
};

struct ProcType final : SemanticType {
    std::vector<ProcParam> params;
    TypeRef                return_type;  // nullptr == void
    bool                   is_variadic = false;  // proc(fmt: cstr, ..)

    ProcType(std::vector<ProcParam> p, TypeRef ret)
        : SemanticType(Kind::PROC),
          params(std::move(p)), return_type(ret) {}
};

// C type accessed via cimport
struct ForeignNamedType final : SemanticType {
    std::string name;
    explicit ForeignNamedType(std::string n)
        : SemanticType(Kind::FOREIGN_NAMED), name(std::move(n)) {}
};

// Native Zed enum — underlying i32
struct EnumVariant {
    std::string name;
    int64_t     value;
};

struct EnumType final : SemanticType {
    std::string              name;
    std::vector<EnumVariant> variants;

    explicit EnumType(std::string n)
        : SemanticType(Kind::ENUM), name(std::move(n)) {}

    const EnumVariant* find_variant(const std::string& vname) const {
        for (const auto& v : variants)
            if (v.name == vname) return &v;
        return nullptr;
    }
};

// [dynamic]T  ->  std::vector<T>
struct DynArrayType final : SemanticType {
    TypeRef elem;
    explicit DynArrayType(TypeRef e) : SemanticType(Kind::DYN_ARRAY), elem(e) {}
};

// Multi-return tuple — not first-class, only for proc returns
struct TupleType final : SemanticType {
    std::vector<TypeRef> elems;
    explicit TupleType(std::vector<TypeRef> e)
        : SemanticType(Kind::TUPLE), elems(std::move(e)) {}
};

} // namespace sem

// ---------------------------------------------------------------------------
// TypeArena — owns all SemanticType objects
// ---------------------------------------------------------------------------
class TypeArena {
public:
    TypeArena();

    TypeRef ty_void()    const { return void_;    }
    TypeRef ty_bool()    const { return bool_;    }
    TypeRef ty_i8()      const { return i8_;      }
    TypeRef ty_i16()     const { return i16_;     }
    TypeRef ty_i32()     const { return i32_;     }
    TypeRef ty_i64()     const { return i64_;     }
    TypeRef ty_u8()      const { return u8_;      }
    TypeRef ty_u16()     const { return u16_;     }
    TypeRef ty_u32()     const { return u32_;     }
    TypeRef ty_u64()     const { return u64_;     }
    TypeRef ty_f32()     const { return f32_;     }
    TypeRef ty_f64()     const { return f64_;     }
    TypeRef ty_cstr()    const { return cstr_;    }
    TypeRef ty_string()  const { return string_;  }
    TypeRef ty_error()   const { return error_;   }
    TypeRef ty_foreign() const { return foreign_; }

    TypeRef lookup_primitive(const std::string& name) const;

    TypeRef make_ptr(TypeRef pointee);
    TypeRef make_array(uint64_t count, TypeRef elem);
    TypeRef make_slice(TypeRef elem);
    TypeRef make_struct(std::string name);
    TypeRef make_proc(std::vector<sem::ProcParam> params, TypeRef ret);
    TypeRef make_foreign_named(const std::string& name);
    TypeRef make_enum(std::string name);
    TypeRef make_dyn_array(TypeRef elem);
    TypeRef make_tuple(std::vector<TypeRef> elems);

private:
    template<typename T, typename... Args>
    T* alloc(Args&&... args) {
        owned_.push_back(std::make_unique<T>(std::forward<Args>(args)...));
        return static_cast<T*>(owned_.back().get());
    }

    std::vector<std::unique_ptr<SemanticType>> owned_;

    TypeRef void_    = nullptr;
    TypeRef bool_    = nullptr;
    TypeRef i8_      = nullptr;
    TypeRef i16_     = nullptr;
    TypeRef i32_     = nullptr;
    TypeRef i64_     = nullptr;
    TypeRef u8_      = nullptr;
    TypeRef u16_     = nullptr;
    TypeRef u32_     = nullptr;
    TypeRef u64_     = nullptr;
    TypeRef f32_     = nullptr;
    TypeRef f64_     = nullptr;
    TypeRef cstr_    = nullptr;
    TypeRef string_  = nullptr;
    TypeRef error_   = nullptr;
    TypeRef foreign_ = nullptr;
};

} // namespace ZedLang
