// =============================================================================
// symtable.cpp
// =============================================================================

#include "../sema/symtable.hpp"
#include "../frontend/tok_defs.hpp"

#include <cassert>

namespace ZedLang {

// ---------------------------------------------------------------------------
// eval_const_int_simple — minimal constant folder used by collect_globals
// sub-pass B0 to resolve integer constants before struct fields are typed.
// Handles: integer literals, ident refs to already-folded consts, and
// binary +/-/*/// over those. This mirrors the logic in type_checker.cpp
// but operates only on the symbol table (no full type-checker dependency).
// ---------------------------------------------------------------------------
static bool eval_const_int_simple(Expr* e, SymbolTable& sym, int64_t& out);

static bool eval_const_int_simple(Expr* e, SymbolTable& sym, int64_t& out) {
    if (!e) return false;
    if (auto* lit = dynamic_cast<LitExpr*>(e)) {
        if (lit->lit_kind == LitExpr::INT) { out = static_cast<int64_t>(lit->int_val); return true; }
        return false;
    }
    if (auto* id = dynamic_cast<IdentExpr*>(e)) {
        Symbol* s = sym.lookup(id->name);
        if (s && s->has_const_val) { out = s->const_int_val; return true; }
        return false;
    }
    if (auto* bin = dynamic_cast<BinaryExpr*>(e)) {
        int64_t lv, rv;
        if (!eval_const_int_simple(bin->left, sym, lv)) return false;
        if (!eval_const_int_simple(bin->right, sym, rv)) return false;
        switch (bin->op) {
            case TOK_PLUS:    out = lv + rv; return true;
            case TOK_MINUS:   out = lv - rv; return true;
            case TOK_STAR:    out = lv * rv; return true;
            case TOK_SLASH:   if (rv == 0) return false; out = lv / rv; return true;
            case TOK_PERCENT: if (rv == 0) return false; out = lv % rv; return true;
            default: return false;
        }
    }
    if (auto* un = dynamic_cast<UnaryExpr*>(e)) {
        int64_t v;
        if (!eval_const_int_simple(un->expr, sym, v)) return false;
        if (un->op == TOK_MINUS) { out = -v; return true; }
        return false;
    }
    return false;
}


// Translates an AST syntax Type node (ZedLang::Type from ast.hpp) into a
// SemanticType (ZedLang::SemanticType from types.hpp).
// The AST nodes ZedLang::PtrType / ZedLang::ArrayType / ZedLang::SliceType are in the
// same namespace as the semantic ones, but the semantic derived structs are
// in ZedLang::sem — accessed here via the sem::PtrType / sem::ArrayType / sem::SliceType
// aliases defined in types.hpp.
// ---------------------------------------------------------------------------
TypeRef SymbolTable::resolve_ast_type(ZedLang::Type* t) {
    if (!t) return arena().ty_void();

    switch (t->kind()) {
        case ZedLang::Type::NAMED: {
            auto* nt = static_cast<ZedLang::NamedType*>(t);
            TypeRef prim = arena().lookup_primitive(nt->name);
            if (!prim->is_error()) return prim;
            if (sem::StructType* st = lookup_struct(nt->name)) return st;
            if (sem::EnumType*   et = lookup_enum(nt->name))   return et;
            // Unknown named type — if cimports are active, treat as a C/foreign named type.
            // The type checker will validate further.
            return arena().make_foreign_named(nt->name);
        }
        case ZedLang::Type::PTR: {
            auto* pt = static_cast<ZedLang::PtrType*>(t);
            return arena().make_ptr(resolve_ast_type(pt->pointee));
        }
        case ZedLang::Type::ARRAY: {
            auto* at = static_cast<ZedLang::ArrayType*>(t);
            uint64_t count = at->size;
            if (!at->size_name.empty()) {
                Symbol* sym = lookup(at->size_name);
                if (sym && sym->has_const_val) {
                    count = static_cast<uint64_t>(sym->const_int_val);
                } else {
                    count = 0;
                }
            }
            return arena().make_array(count, resolve_ast_type(at->elem));
        }
        case ZedLang::Type::SLICE: {
            auto* st = static_cast<ZedLang::SliceType*>(t);
            return arena().make_slice(resolve_ast_type(st->elem));
        }
        case ZedLang::Type::DYN_ARRAY_TYPE: {
            auto* da = static_cast<ZedLang::DynArrayTypeAST*>(t);
            return arena().make_dyn_array(resolve_ast_type(da->elem));
        }
        case ZedLang::Type::STRING_TYPE:
            return arena().ty_string();
        case ZedLang::Type::PROC_TYPE: {
            auto* pt = static_cast<ZedLang::ProcTypeAST*>(t);
            std::vector<sem::ProcParam> params;
            for (ZedLang::Type* pt2 : pt->param_types)
                params.push_back({"", resolve_ast_type(pt2)});
            TypeRef ret = pt->return_type ? resolve_ast_type(pt->return_type)
                                          : arena().ty_void();
            return arena().make_proc(std::move(params), ret);
        }
    }
    return arena().ty_error();
}

// ---------------------------------------------------------------------------
// collect_globals — three-sub-pass global registration
// ---------------------------------------------------------------------------
void SymbolTable::collect_globals(Program* prog) {
    push_scope(Scope::Kind::GLOBAL);

    // Sub-pass A: register struct/union names (so proc signatures can use them).
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::STRUCT && d->kind() != Decl::UNION_DECL) continue;
        std::string tname = (d->kind() == Decl::STRUCT)
            ? static_cast<StructDecl*>(d)->struct_name
            : static_cast<UnionDecl*>(d)->union_name;
        TypeRef ty = arena().make_struct(tname);
        if (d->kind() == Decl::UNION_DECL) {
            auto* ud = static_cast<UnionDecl*>(d);
            if (!ud->is_tagged)
                static_cast<sem::StructType*>(ty)->is_union = true;
            // For tagged unions the wrapper looks like a struct to the type checker
            // (it has a .tag field and a .data field).
        }
        Symbol sym(Symbol::Kind::STRUCT, tname, ty, d->range.begin);
        sym.initialized = true;
        declare(sym);
    }

    // Sub-pass B0: register all top-level constants and fold their integer values.
    // This must run before sub-pass B so that array sizes like [SNAKE_MAX_SIZE]
    // inside struct fields resolve correctly (resolve_ast_type looks up has_const_val).
    // Multi-pass to handle chains like A :: 1; B :: A * 2; C :: B + 1.
    {
        // First: register all const symbols (with placeholder type).
        for (Decl* d : prog->decls) {
            if (d->kind() != Decl::CONST) continue;
            auto* cd = static_cast<ConstDecl*>(d);
            if (lookup(cd->const_name)) continue; // already declared
            Symbol sym(Symbol::Kind::CONST, cd->const_name,
                       arena().ty_error(), d->range.begin);
            sym.initialized = true;
            declare(sym);
        }
        // Then: fold integer values, iterating until no more progress.
        // This resolves dependency chains in declaration order.
        bool progress = true;
        while (progress) {
            progress = false;
            for (Decl* d : prog->decls) {
                if (d->kind() != Decl::CONST) continue;
                auto* cd = static_cast<ConstDecl*>(d);
                Symbol* sym = lookup(cd->const_name);
                if (!sym || sym->has_const_val) continue;
                int64_t val = 0;
                if (eval_const_int_simple(cd->value, *this, val)) {
                    sym->has_const_val = true;
                    sym->const_int_val = val;
                    progress = true;
                }
            }
        }
    }

    // Sub-pass B: fill struct/union field lists.
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::STRUCT && d->kind() != Decl::UNION_DECL) continue;
        std::string tname;
        const std::vector<Field>* fields_ptr;
        bool is_tagged_union = false;
        if (d->kind() == Decl::STRUCT) {
            auto* sd = static_cast<StructDecl*>(d);
            tname = sd->struct_name; fields_ptr = &sd->fields;
        } else {
            auto* ud = static_cast<UnionDecl*>(d);
            tname = ud->union_name;  fields_ptr = &ud->fields;
            is_tagged_union = ud->is_tagged;
        }
        Symbol* s = lookup(tname);
        if (!s) continue;
        auto* st = static_cast<sem::StructType*>(s->type);

        if (is_tagged_union) {
            // Wrapper struct has exactly two semantic fields: tag and data.
            // Register the tag enum so .Variant match lookup works.
            TypeRef ety = arena().make_enum(tname + "_Tag");
            auto* et = static_cast<sem::EnumType*>(ety);
            int64_t idx = 0;
            for (const Field& f : *fields_ptr)
                for (const std::string& fname : f.names)
                    et->variants.push_back({fname, idx++});
            Symbol esym(Symbol::Kind::ENUM_TYPE, tname + "_Tag", ety, d->range.begin);
            esym.initialized = true;
            declare(esym);

            // Shape_Data is a C-level union generated by codegen.
            // Do NOT register it as a struct symbol — check_struct_lit must fall
            // through to the foreign (cimport) path so field names are not validated.
            TypeRef dty = arena().make_foreign_named(tname + "_Data");

            // Wrapper struct: tag field (enum) + data field (inner union)
            sem::StructField tag_field;
            tag_field.name   = "tag";
            tag_field.type   = ety;
            tag_field.offset = 0;
            st->fields.push_back(tag_field);

            sem::StructField data_field;
            data_field.name   = "data";
            data_field.type   = dty;
            data_field.offset = 4;
            st->fields.push_back(data_field);
            st->layout_done  = true;
        } else {
            uint64_t offset = 0;
            for (const Field& f : *fields_ptr) {
                TypeRef fty = resolve_ast_type(f.type);
                for (const std::string& fname : f.names) {
                    sem::StructField sf;
                    sf.name   = fname;
                    sf.type   = fty;
                    sf.offset = offset;
                    st->fields.push_back(sf);
                    if (!st->is_union) offset += fty->byte_size();
                }
                if (st->is_union) {
                    uint64_t sz = resolve_ast_type(f.type)->byte_size();
                    if (sz > offset) offset = sz;
                }
            }
            st->total_size  = offset;
            st->layout_done = true;
        }
    }

    // Sub-pass C: procedures, consts, global vars.
    for (Decl* d : prog->decls) {
        if (d->kind() == Decl::STRUCT)     continue;
        if (d->kind() == Decl::UNION_DECL) continue;
        if (d->kind() == Decl::CIMPORT)    continue;
        if (d->kind() == Decl::IMPORT)     continue;

        if (d->kind() == Decl::ENUM_DECL) {
            auto* ed = static_cast<EnumDecl*>(d);
            TypeRef ety = arena().make_enum(ed->enum_name);
            auto* et = static_cast<sem::EnumType*>(ety);
            int64_t next_val = 0;
            for (auto& vt : ed->variants) {
                int64_t val = next_val;
                if (vt.value) {
                    if (auto* lit = dynamic_cast<LitExpr*>(vt.value))
                        if (lit->lit_kind == LitExpr::INT)
                            val = static_cast<int64_t>(lit->int_val);
                }
                et->variants.push_back({vt.name, val});
                next_val = val + 1;
            }
            Symbol sym(Symbol::Kind::ENUM_TYPE, ed->enum_name, ety, d->range.begin);
            sym.initialized = true;
            declare(sym);
            continue;
        }

        if (d->kind() == Decl::PROC) {
            auto* pd = static_cast<ProcDecl*>(d);
            std::vector<sem::ProcParam> params;
            bool is_variadic = false;
            for (const ParamGroup& pg : pd->params) {
                if (pg.is_vararg_sentinel) { is_variadic = true; continue; }
                TypeRef pty = resolve_ast_type(pg.type);
                for (const std::string& pname : pg.names)
                    params.push_back({pname, pty});
            }
            TypeRef ret = pd->return_type
                        ? resolve_ast_type(pd->return_type)
                        : arena().ty_void();
            TypeRef proc_ty = arena().make_proc(std::move(params), ret);
            static_cast<sem::ProcType*>(proc_ty)->is_variadic = is_variadic;
            Symbol sym(Symbol::Kind::PROC, pd->proc_name,
                       proc_ty, d->range.begin);
            sym.initialized = true;
            declare(sym);

        } else if (d->kind() == Decl::CONST) {
            auto* cd = static_cast<ConstDecl*>(d);
            if (lookup(cd->const_name)) continue; // already registered by sub-pass B0
            Symbol sym(Symbol::Kind::CONST, cd->const_name,
                       arena().ty_error(), d->range.begin);
            sym.initialized = true;
            declare(sym);

        } else if (d->kind() == Decl::VAR) {
            auto* vd = static_cast<VarDecl*>(d);
            TypeRef ty = vd->type ? resolve_ast_type(vd->type)
                                  : arena().ty_error();
            Symbol sym(Symbol::Kind::VAR, vd->var_name, ty, d->range.begin);
            sym.initialized = (vd->init != nullptr);
            declare(sym);
        }
    }
}

// ---------------------------------------------------------------------------
// declare
// ---------------------------------------------------------------------------
bool SymbolTable::declare(Symbol sym) {
    if (Symbol* existing = lookup_local(sym.name)) {
        err_.error(sym.decl_loc,
                   "'" + sym.name + "' is already declared in this scope")
            .with_note(existing->decl_loc, "previous declaration here");
        return false;
    }
    scopes_.insert(std::move(sym));
    return true;
}

// ---------------------------------------------------------------------------
// lookup_struct
// ---------------------------------------------------------------------------
sem::StructType* SymbolTable::lookup_struct(const std::string& name) {
    Symbol* s = lookup(name);
    if (!s || s->kind != Symbol::Kind::STRUCT) return nullptr;
    return static_cast<sem::StructType*>(s->type);
}

sem::EnumType* SymbolTable::lookup_enum(const std::string& name) {
    Symbol* s = lookup(name);
    if (!s || s->kind != Symbol::Kind::ENUM_TYPE) return nullptr;
    return static_cast<sem::EnumType*>(s->type);
}

} // namespace ZedLang

// ---------------------------------------------------------------------------
// import_from — inject exported symbols from another module's global scope
// ---------------------------------------------------------------------------
void ZedLang::SymbolTable::import_from(SymbolTable& other) {
    Scope* global = other.current_scope();
    // Walk up to the global scope of the other module.
    while (global->parent() != nullptr) global = global->parent();

    global->for_each_symbol([this](const Symbol& sym) {
        // Only import public declarations (proc, struct, const, global var).
        // Skip params — they're never in the global scope anyway.
        if (sym.kind == Symbol::Kind::PARAM) return;
        // Don't re-declare if the name is already known in this scope.
        if (lookup_local(sym.name)) return;
        scopes_.insert(sym);
    });
}
