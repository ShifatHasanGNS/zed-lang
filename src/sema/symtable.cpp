// =============================================================================
// symtable.cpp
// =============================================================================

#include "../sema/symtable.hpp"

#include "../frontend/tok_defs.hpp"   // TOK_PLUS, TOK_STAR, etc. for const folding
#include <cassert>
#include <functional>

namespace ZedLang {

// ---------------------------------------------------------------------------
// resolve_ast_type
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
            // ZedLang::NamedType is the AST node — no collision.
            auto* nt = static_cast<ZedLang::NamedType*>(t);
            TypeRef prim = arena().lookup_primitive(nt->name);
            if (!prim->is_error()) return prim;
            if (sem::StructType* st = lookup_struct(nt->name)) return st;
            if (sem::EnumType* et   = lookup_enum(nt->name)) return et;
            // Unknown named type with cimports active → foreign named type.
            // The C compiler will validate it; we just carry the name forward.
            if (has_cimports_)
                return arena().make_foreign_named(nt->name);
            err_.error(t->range.begin, "unknown type '" + nt->name + "'");
            return arena().ty_error();
        }
        case ZedLang::Type::PTR: {
            // ZedLang::PtrType is the AST node (ast.hpp).
            auto* pt = static_cast<ZedLang::PtrType*>(t);
            return arena().make_ptr(resolve_ast_type(pt->pointee));
        }
        case ZedLang::Type::ARRAY: {
            // ZedLang::ArrayType is the AST node (ast.hpp).
            auto* at = static_cast<ZedLang::ArrayType*>(t);
            uint64_t count = at->size;
            if (!at->size_name.empty()) {
                Symbol* sym = lookup(at->size_name);
                if (sym && sym->has_const_val) {
                    count = static_cast<uint64_t>(sym->const_int_val);
                } else {
                    // Constant not yet folded (collect_globals ordering).
                    // Return a placeholder; type_checker::resolve_type will
                    // re-resolve with the correct value after folding.
                    count = 0;
                }
            }
            return arena().make_array(count, resolve_ast_type(at->elem));
        }
        case ZedLang::Type::SLICE: {
            // ZedLang::SliceType is the AST node (ast.hpp).
            auto* st = static_cast<ZedLang::SliceType*>(t);
            return arena().make_slice(resolve_ast_type(st->elem));
        }
        case ZedLang::Type::PROC_TYPE: {
            auto* pt = static_cast<ZedLang::ProcTypeAST*>(t);
            std::vector<sem::ProcParam> params;
            for (ZedLang::Type* ptype : pt->param_types)
                params.push_back({"", resolve_ast_type(ptype)});
            TypeRef ret = pt->return_type ? resolve_ast_type(pt->return_type) : nullptr;
            return arena().make_proc(std::move(params), ret);
        }
        case ZedLang::Type::DYN_ARRAY_TYPE: {
            auto* da = static_cast<ZedLang::DynArrayTypeAST*>(t);
            return arena().make_dyn_array(resolve_ast_type(da->elem));
        }
        case ZedLang::Type::STRING_TYPE:
            return arena().ty_string();
    }
    return arena().ty_error();
}

// ---------------------------------------------------------------------------
// collect_globals — three-sub-pass global registration
// ---------------------------------------------------------------------------
void SymbolTable::collect_globals(Program* prog) {
    push_scope(Scope::Kind::GLOBAL);

    // Detect cimports early so resolve_ast_type can fall back to FOREIGN_NAMED.
    for (Decl* d : prog->decls)
        if (d->kind() == Decl::CIMPORT) { has_cimports_ = true; break; }

    // Sub-pass A0: pre-register all integer constants so array sizes that
    // reference them (e.g.  [SNAKE_MAX_SIZE]Vec2i) are available when struct
    // fields are resolved in Sub-pass B below.
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::CONST) continue;
        auto* cd = static_cast<ConstDecl*>(d);
        // Only register — don't evaluate yet; a second sweep below folds values.
        Symbol sym(Symbol::Kind::CONST, cd->const_name,
                   arena().ty_i32(),   // placeholder; type checker corrects later
                   d->range.begin);
        sym.initialized = true;
        if (!lookup_local(cd->const_name)) declare(sym);
    }
    // Fold integer const values in declaration order (handles chains like
    // GRID_SIZE=20, CANVAS_SIZE=GRID_SIZE*CELL_SIZE, SNAKE_MAX_SIZE=…).
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::CONST) continue;
        auto* cd = static_cast<ConstDecl*>(d);
        Symbol* sym = lookup(cd->const_name);
        if (!sym) continue;
        // Walk the expression tree for constant integers.
        std::function<bool(Expr*, int64_t&)> fold = [&](Expr* e, int64_t& out) -> bool {
            if (!e) return false;
            if (auto* lit = dynamic_cast<LitExpr*>(e)) {
                if (lit->lit_kind == LitExpr::INT) { out = (int64_t)lit->int_val; return true; }
                return false;
            }
            if (auto* id = dynamic_cast<IdentExpr*>(e)) {
                Symbol* s = lookup(id->name);
                if (s && s->has_const_val) { out = s->const_int_val; return true; }
                return false;
            }
            if (auto* bin = dynamic_cast<BinaryExpr*>(e)) {
                int64_t lv, rv;
                if (!fold(bin->left, lv) || !fold(bin->right, rv)) return false;
                switch (bin->op) {
                    case TOK_PLUS:    out = lv + rv; return true;
                    case TOK_MINUS:   out = lv - rv; return true;
                    case TOK_STAR:    out = lv * rv; return true;
                    case TOK_SLASH:   if (rv==0) return false; out = lv / rv; return true;
                    case TOK_PERCENT: if (rv==0) return false; out = lv % rv; return true;
                    case TOK_SHL:     out = lv << rv; return true;
                    case TOK_SHR:     out = lv >> rv; return true;
                    case TOK_AMP:     out = lv & rv; return true;
                    case TOK_PIPE:    out = lv | rv; return true;
                    case TOK_XOR:     out = lv ^ rv; return true;
                    default:          return false;
                }
            }
            if (auto* un = dynamic_cast<UnaryExpr*>(e)) {
                int64_t v;
                if (!fold(un->expr, v)) return false;
                if (un->op == TOK_MINUS) { out = -v; return true; }
                return false;
            }
            return false;
        };
        int64_t val;
        if (fold(cd->value, val)) {
            sym->has_const_val  = true;
            sym->const_int_val  = val;
        }
    }

    // Sub-pass A: register struct names (so proc signatures can use them).
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::STRUCT) continue;
        auto* sd = static_cast<StructDecl*>(d);
        TypeRef ty = arena().make_struct(sd->struct_name);
        Symbol sym(Symbol::Kind::STRUCT, sd->struct_name, ty, d->range.begin);
        sym.initialized = true;
        declare(sym);
    }

    // Sub-pass B: fill struct field lists.
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::STRUCT) continue;
        auto* sd = static_cast<StructDecl*>(d);
        Symbol* s = lookup(sd->struct_name);
        if (!s) continue;
        auto* st = static_cast<sem::StructType*>(s->type);

        uint64_t offset = 0;
        for (const Field& f : sd->fields) {
            TypeRef fty = resolve_ast_type(f.type);
            for (const std::string& fname : f.names) {
                sem::StructField sf;
                sf.name   = fname;
                sf.type   = fty;
                sf.offset = offset;
                st->fields.push_back(sf);
                offset += fty->byte_size();
            }
        }
        st->total_size  = offset;
        st->layout_done = true;
    }

    // Sub-pass B2: register enum types.
    for (Decl* d : prog->decls) {
        if (d->kind() != Decl::ENUM_DECL) continue;
        auto* ed = static_cast<EnumDecl*>(d);
        TypeRef ety = arena().make_enum(ed->enum_name);
        auto* et = static_cast<sem::EnumType*>(ety);
        int64_t next_val = 0;
        for (const auto& vt : ed->variants) {
            int64_t val = next_val;
            if (vt.value) {
                if (auto* lit = dynamic_cast<LitExpr*>(vt.value))
                    if (lit->lit_kind == LitExpr::INT) val = static_cast<int64_t>(lit->int_val);
            }
            et->variants.push_back({vt.name, val});
            next_val = val + 1;
        }
        Symbol sym(Symbol::Kind::ENUM_TYPE, ed->enum_name, ety, d->range.begin);
        sym.initialized = true;
        declare(sym);
    }

    // Sub-pass C: procedures, consts, global vars.
    for (Decl* d : prog->decls) {
        if (d->kind() == Decl::STRUCT)     continue;
        if (d->kind() == Decl::ENUM_DECL)  continue;
        if (d->kind() == Decl::CIMPORT)    continue;
        if (d->kind() == Decl::IMPORT)     continue;

        if (d->kind() == Decl::PROC) {
            auto* pd = static_cast<ProcDecl*>(d);
            std::vector<sem::ProcParam> params;
            for (const ParamGroup& pg : pd->params) {
                TypeRef pty = resolve_ast_type(pg.type);
                for (const std::string& pname : pg.names)
                    params.push_back({pname, pty});
            }
            TypeRef ret;
            if (!pd->return_types.empty()) {
                std::vector<TypeRef> elems;
                for (Type* t : pd->return_types) elems.push_back(resolve_ast_type(t));
                ret = arena().make_tuple(std::move(elems));
            } else {
                ret = pd->return_type
                    ? resolve_ast_type(pd->return_type)
                    : arena().ty_void();
            }
            TypeRef proc_ty = arena().make_proc(std::move(params), ret);
            Symbol sym(Symbol::Kind::PROC, pd->proc_name,
                       proc_ty, d->range.begin);
            sym.initialized = true;
            declare(sym);

        } else if (d->kind() == Decl::CONST) {
            auto* cd = static_cast<ConstDecl*>(d);
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
    // '_' is the discard name — silently allow multiple declarations in the
    // same scope, and skip any "already declared" error for it.
    if (sym.name == "_") {
        scopes_.insert(std::move(sym));
        return true;
    }
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
