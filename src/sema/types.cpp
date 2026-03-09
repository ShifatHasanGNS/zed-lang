// =============================================================================
// types.cpp
// =============================================================================

#include "types.hpp"

namespace ZedLang {

// ---------------------------------------------------------------------------
// SemanticType predicates
// ---------------------------------------------------------------------------
bool SemanticType::is_integer() const {
    switch (kind) {
        case Kind::I8:  case Kind::I16: case Kind::I32: case Kind::I64:
        case Kind::U8:  case Kind::U16: case Kind::U32: case Kind::U64:
            return true;
        default: return false;
    }
}
bool SemanticType::is_signed() const {
    switch (kind) {
        case Kind::I8: case Kind::I16: case Kind::I32: case Kind::I64:
            return true;
        default: return false;
    }
}
bool SemanticType::is_unsigned() const {
    switch (kind) {
        case Kind::U8: case Kind::U16: case Kind::U32: case Kind::U64:
            return true;
        default: return false;
    }
}
bool SemanticType::is_float()   const { return kind == Kind::F32 || kind == Kind::F64; }
bool SemanticType::is_numeric() const { return is_integer() || is_float(); }

// ---------------------------------------------------------------------------
// byte_size
// ---------------------------------------------------------------------------
uint64_t SemanticType::byte_size() const {
    switch (kind) {
        case Kind::VOID:   return 0;
        case Kind::BOOL:   return 1;
        case Kind::I8:     return 1;
        case Kind::I16:    return 2;
        case Kind::I32:    return 4;
        case Kind::I64:    return 8;
        case Kind::U8:     return 1;
        case Kind::U16:    return 2;
        case Kind::U32:    return 4;
        case Kind::U64:    return 8;
        case Kind::F32:    return 4;
        case Kind::F64:    return 8;
        case Kind::CSTR:   return 8;
        case Kind::PTR:    return 8;
        case Kind::SLICE:  return 16;  // { ptr(8) + len(8) }
        case Kind::ARRAY: {
            auto* a = static_cast<const sem::ArrayType*>(this);
            return a->count * a->elem->byte_size();
        }
        case Kind::STRUCT: {
            auto* s = static_cast<const sem::StructType*>(this);
            return s->total_size;
        }
        case Kind::PROC:   return 8;
        case Kind::ERROR:   return 0;
        case Kind::FOREIGN: return 0;
        case Kind::FOREIGN_NAMED: return 0;
        case Kind::ENUM:         return 4;  // underlying i32
    }
    return 0;
}

// ---------------------------------------------------------------------------
// to_string
// ---------------------------------------------------------------------------
std::string SemanticType::to_string() const {
    switch (kind) {
        case Kind::VOID:   return "void";
        case Kind::BOOL:   return "bool";
        case Kind::I8:     return "i8";
        case Kind::I16:    return "i16";
        case Kind::I32:    return "i32";
        case Kind::I64:    return "i64";
        case Kind::U8:     return "u8";
        case Kind::U16:    return "u16";
        case Kind::U32:    return "u32";
        case Kind::U64:    return "u64";
        case Kind::F32:    return "f32";
        case Kind::F64:    return "f64";
        case Kind::CSTR:   return "cstr";
        case Kind::ERROR:  return "<error>";
        case Kind::FOREIGN: return "<foreign>";
        case Kind::ENUM:
            return static_cast<const sem::EnumType*>(this)->name;
        case Kind::FOREIGN_NAMED:
            return static_cast<const sem::ForeignNamedType*>(this)->name;
        case Kind::PTR: {
            auto* p = static_cast<const sem::PtrType*>(this);
            return "*" + p->pointee->to_string();
        }
        case Kind::ARRAY: {
            auto* a = static_cast<const sem::ArrayType*>(this);
            return "[" + std::to_string(a->count) + "]" + a->elem->to_string();
        }
        case Kind::SLICE: {
            auto* s = static_cast<const sem::SliceType*>(this);
            return "[]" + s->elem->to_string();
        }
        case Kind::STRUCT:
            return static_cast<const sem::StructType*>(this)->name;
        case Kind::PROC: {
            auto* p = static_cast<const sem::ProcType*>(this);
            std::string s = "proc(";
            for (size_t i = 0; i < p->params.size(); ++i) {
                if (i) s += ", ";
                s += p->params[i].type->to_string();
            }
            s += ")";
            if (p->return_type) s += " -> " + p->return_type->to_string();
            return s;
        }
    }
    return "<unknown>";
}

// ---------------------------------------------------------------------------
// operator==
// ---------------------------------------------------------------------------
bool SemanticType::operator==(const SemanticType& o) const {
    if (kind != o.kind) return false;
    switch (kind) {
        case Kind::PTR: {
            auto& a = static_cast<const sem::PtrType&>(*this);
            auto& b = static_cast<const sem::PtrType&>(o);
            return *a.pointee == *b.pointee;
        }
        case Kind::ARRAY: {
            auto& a = static_cast<const sem::ArrayType&>(*this);
            auto& b = static_cast<const sem::ArrayType&>(o);
            return a.count == b.count && *a.elem == *b.elem;
        }
        case Kind::SLICE: {
            auto& a = static_cast<const sem::SliceType&>(*this);
            auto& b = static_cast<const sem::SliceType&>(o);
            return *a.elem == *b.elem;
        }
        case Kind::STRUCT: {
            // Nominal typing — equal iff same name
            auto& a = static_cast<const sem::StructType&>(*this);
            auto& b = static_cast<const sem::StructType&>(o);
            return a.name == b.name;
        }
        case Kind::ENUM: {
            auto& a = static_cast<const sem::EnumType&>(*this);
            auto& b = static_cast<const sem::EnumType&>(o);
            return a.name == b.name;
        }
        case Kind::PROC: {
            auto& a = static_cast<const sem::ProcType&>(*this);
            auto& b = static_cast<const sem::ProcType&>(o);
            if (a.params.size() != b.params.size()) return false;
            for (size_t i = 0; i < a.params.size(); ++i)
                if (*a.params[i].type != *b.params[i].type) return false;
            if (a.return_type && b.return_type)
                return *a.return_type == *b.return_type;
            return a.return_type == b.return_type;
        }
        default:
            return true;  // primitives — kind equality is sufficient
    }
}

// ---------------------------------------------------------------------------
// TypeArena
// ---------------------------------------------------------------------------
TypeArena::TypeArena() {
    void_  = alloc<SemanticType>(SemanticType::Kind::VOID);
    bool_  = alloc<SemanticType>(SemanticType::Kind::BOOL);
    i8_    = alloc<SemanticType>(SemanticType::Kind::I8);
    i16_   = alloc<SemanticType>(SemanticType::Kind::I16);
    i32_   = alloc<SemanticType>(SemanticType::Kind::I32);
    i64_   = alloc<SemanticType>(SemanticType::Kind::I64);
    u8_    = alloc<SemanticType>(SemanticType::Kind::U8);
    u16_   = alloc<SemanticType>(SemanticType::Kind::U16);
    u32_   = alloc<SemanticType>(SemanticType::Kind::U32);
    u64_   = alloc<SemanticType>(SemanticType::Kind::U64);
    f32_   = alloc<SemanticType>(SemanticType::Kind::F32);
    f64_   = alloc<SemanticType>(SemanticType::Kind::F64);
    cstr_  = alloc<SemanticType>(SemanticType::Kind::CSTR);
    error_   = alloc<SemanticType>(SemanticType::Kind::ERROR);
    foreign_ = alloc<SemanticType>(SemanticType::Kind::FOREIGN);
}

TypeRef TypeArena::lookup_primitive(const std::string& name) const {
    if (name == "void")  return void_;
    if (name == "bool")  return bool_;
    if (name == "i8")    return i8_;
    if (name == "i16")   return i16_;
    if (name == "i32")   return i32_;
    if (name == "i64")   return i64_;
    if (name == "u8")    return u8_;
    if (name == "u16")   return u16_;
    if (name == "u32")   return u32_;
    if (name == "u64")   return u64_;
    if (name == "f32")   return f32_;
    if (name == "f64")   return f64_;
    if (name == "cstr")  return cstr_;
    return error_;
}

TypeRef TypeArena::make_ptr(TypeRef pointee) {
    for (auto& t : owned_) {
        if (t->kind == SemanticType::Kind::PTR) {
            auto* p = static_cast<sem::PtrType*>(t.get());
            if (*p->pointee == *pointee) return p;
        }
    }
    return alloc<sem::PtrType>(pointee);
}

TypeRef TypeArena::make_array(uint64_t count, TypeRef elem) {
    for (auto& t : owned_) {
        if (t->kind == SemanticType::Kind::ARRAY) {
            auto* a = static_cast<sem::ArrayType*>(t.get());
            if (a->count == count && *a->elem == *elem) return a;
        }
    }
    return alloc<sem::ArrayType>(count, elem);
}

TypeRef TypeArena::make_slice(TypeRef elem) {
    for (auto& t : owned_) {
        if (t->kind == SemanticType::Kind::SLICE) {
            auto* s = static_cast<sem::SliceType*>(t.get());
            if (*s->elem == *elem) return s;
        }
    }
    return alloc<sem::SliceType>(elem);
}

TypeRef TypeArena::make_struct(std::string name) {
    return alloc<sem::StructType>(std::move(name));
}

TypeRef TypeArena::make_proc(std::vector<sem::ProcParam> params, TypeRef ret) {
    return alloc<sem::ProcType>(std::move(params), ret);
}


TypeRef TypeArena::make_enum(std::string name) {
    return alloc<sem::EnumType>(std::move(name));
}

TypeRef TypeArena::make_foreign_named(const std::string& name) {
    for (auto& t : owned_) {
        if (t->kind == SemanticType::Kind::FOREIGN_NAMED) {
            auto* fn = static_cast<sem::ForeignNamedType*>(t.get());
            if (fn->name == name) return fn;
        }
    }
    return alloc<sem::ForeignNamedType>(name);
}

} // namespace ZedLang
