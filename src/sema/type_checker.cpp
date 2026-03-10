// =============================================================================
// type_checker.cpp
// =============================================================================

#include "../sema/type_checker.hpp"

#include "../frontend/ast.hpp"         // must precede tok_defs.hpp
#include "../frontend/tok_defs.hpp"    // stable TOK_* constants

namespace ZedLang {

// ---------------------------------------------------------------------------
// Entry point
// ---------------------------------------------------------------------------
bool TypeChecker::check(Program* prog) {
    for (Decl* d : prog->decls)
        if (d->kind() == Decl::CIMPORT) { has_cimports_ = true; break; }

    // Global names were already collected by SymbolTable::collect_globals().
    // We now walk every top-level declaration and check bodies.
    for (Decl* d : prog->decls) {
        check_decl(d);
    }
    return !err_.has_errors();
}

TypeRef TypeChecker::type_of(Expr* e) const {
    auto it = expr_types_.find(e);
    return (it != expr_types_.end()) ? it->second : sym_.arena().ty_error();
}

// ---------------------------------------------------------------------------
// Declarations
// ---------------------------------------------------------------------------
void TypeChecker::check_decl(Decl* d) {
    switch (d->kind()) {
        case Decl::VAR:    check_var_decl(static_cast<VarDecl*>(d), true); break;
        case Decl::CONST:  check_const_decl(static_cast<ConstDecl*>(d));   break;
        case Decl::STRUCT: check_struct_decl(static_cast<StructDecl*>(d)); break;
        case Decl::PROC:   check_proc_body(static_cast<ProcDecl*>(d));     break;
        case Decl::CIMPORT: break;
        case Decl::IMPORT:  break;
        case Decl::ENUM_DECL: break;  // handled in collect_globals
    }
}

void TypeChecker::check_struct_decl(StructDecl* sd) {
    // Field types were already resolved in collect_globals.
    // Validate: no field with void type, no recursive non-pointer embedding.
    sem::StructType* st = sym_.lookup_struct(sd->struct_name);
    if (!st) return;
    for (const auto& f : st->fields) {
        if (f.type->is_void()) {
            err_.error(sd->range.begin,
                "struct '" + sd->struct_name + "': field '" +
                f.name + "' cannot have type void");
        }
        if (f.type->is_struct()) {
            auto* inner = static_cast<sem::StructType*>(f.type);
            if (inner->name == sd->struct_name) {
                err_.error(sd->range.begin,
                    "struct '" + sd->struct_name +
                    "' cannot contain itself by value; use a pointer");
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Constant integer expression evaluator
// Returns true and sets `out` if the expression is a compile-time integer.
// Handles: integer literals, identifier refs to already-folded consts,
// and binary arithmetic/bitwise over the above.
// ---------------------------------------------------------------------------
static bool eval_const_int(Expr* e, SymbolTable& sym, int64_t& out) {
    if (!e) return false;

    if (auto* lit = dynamic_cast<LitExpr*>(e)) {
        if (lit->lit_kind == LitExpr::INT) { out = static_cast<int64_t>(lit->int_val); return true; }
        return false;
    }

    if (auto* id = dynamic_cast<IdentExpr*>(e)) {
        const Symbol* s = sym.lookup(id->name);
        if (s && s->has_const_val) { out = s->const_int_val; return true; }
        return false;
    }

    if (auto* bin = dynamic_cast<BinaryExpr*>(e)) {
        int64_t lv, rv;
        if (!eval_const_int(bin->left, sym, lv)) return false;
        if (!eval_const_int(bin->right, sym, rv)) return false;
        switch (bin->op) {
            case TOK_PLUS:    out = lv + rv;              return true;
            case TOK_MINUS:   out = lv - rv;              return true;
            case TOK_STAR:    out = lv * rv;              return true;
            case TOK_SLASH:   if (rv == 0) return false;
                              out = lv / rv;              return true;
            case TOK_PERCENT: if (rv == 0) return false;
                              out = lv % rv;              return true;
            case TOK_SHL:     out = lv << rv;             return true;
            case TOK_SHR:     out = lv >> rv;             return true;
            case TOK_AMP:     out = lv & rv;              return true;
            case TOK_PIPE:    out = lv | rv;              return true;
            case TOK_XOR:     out = lv ^ rv;              return true;
            default:          return false;
        }
    }

    if (auto* un = dynamic_cast<UnaryExpr*>(e)) {
        int64_t v;
        if (!eval_const_int(un->expr, sym, v)) return false;
        if (un->op == TOK_MINUS) { out = -v; return true; }
        return false;
    }

    return false;
}

void TypeChecker::check_const_decl(ConstDecl* cd) {
    TypeRef vty = check_expr(cd->value);
    // Update the placeholder type stored during collect_globals.
    // Local consts (inside proc bodies) are NOT in collect_globals,
    // so declare them into the current scope here.
    Symbol* sym = sym_.lookup(cd->const_name);
    if (!sym) {
        Symbol local(Symbol::Kind::CONST, cd->const_name, vty, cd->range.begin);
        local.initialized = true;
        sym_.declare(local);
        sym = sym_.lookup(cd->const_name);
    } else {
        sym->type = vty;
    }
    // Attempt recursive integer constant folding (handles expressions like
    // GRID_SIZE * CELL_SIZE, not just bare literals).
    if (sym) {
        int64_t val;
        if (eval_const_int(cd->value, sym_, val)) {
            sym->has_const_val  = true;
            sym->const_int_val  = val;
        }
    }
}

void TypeChecker::check_var_decl(VarDecl* vd, bool is_global) {
    TypeRef declared = vd->type ? resolve_type(vd->type) : nullptr;
    TypeRef init_ty  = nullptr;

    if (vd->init) {
        init_ty = check_expr(vd->init);
        if (declared && !types_compatible(init_ty, declared)) {
            expect_type(init_ty, declared, vd->range.begin,
                        "initialiser of '" + vd->var_name + "'");
            declared = declared ? declared : init_ty;
        } else if (!declared) {
            declared = init_ty;
        }
    }

    if (!declared) {
        err_.error(vd->range.begin,
            "cannot infer type of '" + vd->var_name +
            "' without an initialiser; add an explicit type");
        declared = sym_.arena().ty_error();
    }

    // '_' is the discard variable — type-check the init but don't register
    // the name in the symbol table so it cannot be read back.
    if (vd->var_name == "_") {
        var_types_[vd] = declared;
        return;
    }

    if (!is_global) {
        // Insert into current (local) scope
        Symbol sym(Symbol::Kind::VAR, vd->var_name, declared, vd->range.begin);
        sym.initialized = (vd->init != nullptr) || (vd->type != nullptr);
        sym_.declare(sym);
    } else {
        // Global: update the placeholder inserted by collect_globals
        Symbol* s = sym_.lookup(vd->var_name);
        if (s) {
            s->type        = declared;
            s->initialized = (vd->init != nullptr) || (vd->type != nullptr);
        }
    }
    // Record in side table so codegen can find the type after scopes are popped
    var_types_[vd] = declared;
}

void TypeChecker::check_proc_body(ProcDecl* pd) {
    if (!pd->body) return;   // extern declaration — nothing to check

    defer_stacks_.push_back({});  // enter proc defer scope
    Scope* proc_scope = sym_.push_scope(Scope::Kind::PROC);

    // Resolve return type and store it on the scope for check_return()
    TypeRef ret;
    if (!pd->return_types.empty()) {
        // Multi-return: build a TupleType
        std::vector<TypeRef> elems;
        for (Type* t : pd->return_types) elems.push_back(resolve_type(t));
        ret = sym_.arena().make_tuple(std::move(elems));
    } else {
        ret = pd->return_type ? resolve_type(pd->return_type)
                              : sym_.arena().ty_void();
    }
    proc_scope->proc_return_type = ret;

    // Declare parameters in the proc scope
    for (const ParamGroup& pg : pd->params) {
        TypeRef pty = resolve_type(pg.type);
        for (const std::string& pname : pg.names) {
            Symbol sym(Symbol::Kind::PARAM, pname, pty, pd->range.begin);
            sym.initialized = true;
            sym_.declare(sym);
        }
    }

    check_block(pd->body);
    sym_.pop_scope();
    defer_stacks_.pop_back();  // leave proc defer scope
}

// ---------------------------------------------------------------------------
// Statements
// ---------------------------------------------------------------------------
void TypeChecker::check_stmt(Stmt* s) {
    switch (s->kind()) {
        case Stmt::BLOCK:     check_block(static_cast<BlockStmt*>(s));       break;
        case Stmt::RETURN:    check_return(static_cast<ReturnStmt*>(s));     break;
        case Stmt::IF:        check_if(static_cast<IfStmt*>(s));             break;
        case Stmt::LOOP:      check_loop(static_cast<LoopStmt*>(s));         break;
        case Stmt::ASSIGN:    check_assign(static_cast<AssignStmt*>(s));     break;
        case Stmt::EXPR:      check_expr_stmt(static_cast<ExprStmt*>(s));    break;
        case Stmt::DECL_STMT: check_decl_stmt(static_cast<DeclStmt*>(s));   break;
        case Stmt::BREAK:
            if (!sym_.in_loop())
                err_.error(s->range.begin, "'break' outside of loop");
            break;
        case Stmt::CONTINUE:
            if (!sym_.in_loop())
                err_.error(s->range.begin, "'continue' outside of loop");
            break;
        case Stmt::BREAK_LABEL:
        case Stmt::CONTINUE_LABEL:
            // Label validation would require a label stack — for now just verify
            // we are inside some loop. Full label resolution is a future pass.
            if (!sym_.in_loop())
                err_.error(s->range.begin,
                    (s->kind() == Stmt::BREAK_LABEL ? "'break'" : "'continue'")
                    + std::string(" outside of loop"));
            break;
        case Stmt::FOR_RANGE:      check_for_range(static_cast<ForRangeStmt*>(s));          break;
        case Stmt::DEFER:          check_defer(static_cast<DeferStmt*>(s));                 break;
        case Stmt::MATCH:          check_match(static_cast<MatchStmt*>(s));                 break;
        case Stmt::WHEN:           check_when(static_cast<WhenStmt*>(s));                   break;
        case Stmt::COMPOUND_ASSIGN:check_compound_assign(static_cast<CompoundAssignStmt*>(s)); break;
        case Stmt::INC_DEC:        check_inc_dec(static_cast<IncDecStmt*>(s));              break;
        case Stmt::HASH_ASSERT:    check_hash_assert(static_cast<HashAssertStmt*>(s));       break;
        case Stmt::MULTI_DECL:     check_multi_decl(static_cast<MultiDeclStmt*>(s));         break;
        case Stmt::MULTI_ASSIGN:   check_multi_assign(static_cast<MultiAssignStmt*>(s));      break;
    }
}

void TypeChecker::check_block(BlockStmt* b) {
    sym_.push_scope(Scope::Kind::BLOCK);
    for (Stmt* s : b->stmts) check_stmt(s);
    sym_.pop_scope();
}

void TypeChecker::check_if(IfStmt* s) {
    TypeRef cty = check_expr(s->cond);
    if (!cty->is_bool() && !cty->is_error() && !cty->is_any_foreign())
        err_.error(s->cond->range.begin,
            "condition must be bool, got '" + cty->to_string() + "'");
    check_block(s->then_block);
    for (auto& [econd, eblk] : s->else_ifs) {
        TypeRef ety = check_expr(econd);
        if (!ety->is_bool() && !ety->is_error() && !ety->is_any_foreign())
            err_.error(econd->range.begin,
                "condition must be bool, got '" + ety->to_string() + "'");
        check_block(eblk);
    }
    if (s->else_block) check_block(s->else_block);
}

void TypeChecker::check_loop(LoopStmt* s) {
    if (s->cond) {
        TypeRef cty = check_expr(s->cond);
        if (!cty->is_bool() && !cty->is_error() && !cty->is_any_foreign())
            err_.error(s->cond->range.begin,
                "loop condition must be bool, got '" + cty->to_string() + "'");
    }
    sym_.push_scope(Scope::Kind::LOOP);
    for (Stmt* st : s->body->stmts) check_stmt(st);
    sym_.pop_scope();
}

void TypeChecker::check_return(ReturnStmt* s) {
    TypeRef expected = sym_.current_return_type();
    if (!expected) {
        err_.error(s->range.begin, "'return' outside of procedure");
        return;
    }
    if (s->value) {
        TypeRef got = check_expr(s->value);
        if (expected->is_void()) {
            err_.error(s->range.begin,
                "procedure returns void but 'return' has a value");
        } else if (expected->is_tuple() && got->is_tuple()) {
            // Both are tuples — check element-wise
            auto* et = static_cast<sem::TupleType*>(expected);
            auto* gt = static_cast<sem::TupleType*>(got);
            if (et->elems.size() != gt->elems.size())
                err_.error(s->range.begin,
                    "wrong number of return values: expected " +
                    std::to_string(et->elems.size()) + ", got " +
                    std::to_string(gt->elems.size()));
            else
                for (size_t i = 0; i < et->elems.size(); ++i)
                    if (!et->elems[i]->is_any_foreign() && !gt->elems[i]->is_any_foreign())
                        expect_type(gt->elems[i], et->elems[i], s->range.begin,
                            "return value " + std::to_string(i));
        } else if (!got->is_any_foreign()) {
            expect_type(got, expected, s->range.begin, "return value");
        }
    } else if (!expected->is_void()) {
        err_.error(s->range.begin,
            "missing return value; expected '" + expected->to_string() + "'");
    }
}

void TypeChecker::check_assign(AssignStmt* s) {
    if (!check_lvalue(s->lvalue)) return;
    TypeRef lty = check_expr(s->lvalue);
    TypeRef rty = check_expr(s->rhs);
    if (!lty->is_any_foreign() && !rty->is_any_foreign())
        expect_type(rty, lty, s->rhs->range.begin, "assignment");
}

void TypeChecker::check_expr_stmt(ExprStmt* s) {
    check_expr(s->expr);
}

void TypeChecker::check_decl_stmt(DeclStmt* s) {
    switch (s->decl->kind()) {
        case Decl::VAR:   check_var_decl(static_cast<VarDecl*>(s->decl));   break;
        case Decl::CONST: check_const_decl(static_cast<ConstDecl*>(s->decl)); break;
        default:
            err_.error(s->range.begin,
                "struct and proc declarations are not allowed inside a block");
            break;
    }
}

// ---------------------------------------------------------------------------
// Expressions — dispatcher
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_expr(Expr* e) {
    TypeRef t = sym_.arena().ty_error();
    switch (e->kind()) {
        case Expr::BINARY:     t = check_binary(static_cast<BinaryExpr*>(e));      break;
        case Expr::UNARY:      t = check_unary(static_cast<UnaryExpr*>(e));        break;
        case Expr::CALL:       t = check_call(static_cast<CallExpr*>(e));          break;
        case Expr::INDEX:      t = check_index(static_cast<IndexExpr*>(e));        break;
        case Expr::SLICE:      t = check_slice(static_cast<SliceExpr*>(e));        break;
        case Expr::FIELD:      t = check_field(static_cast<FieldExpr*>(e));        break;
        case Expr::DEREF:      t = check_deref(static_cast<DerefExpr*>(e));        break;
        case Expr::ADDR:       t = check_addr(static_cast<AddrExpr*>(e));          break;
        case Expr::CAST:       t = check_cast(static_cast<CastExpr*>(e));          break;
        case Expr::LIT:        t = check_lit(static_cast<LitExpr*>(e));            break;
        case Expr::IDENT:      t = check_ident(static_cast<IdentExpr*>(e));        break;
        case Expr::STRUCT_LIT: t = check_struct_lit(static_cast<StructLitExpr*>(e)); break;
        case Expr::TUPLE:      t = check_tuple(static_cast<TupleExpr*>(e));          break;
        case Expr::SIZEOF_EXPR:t = check_sizeof(static_cast<SizeofExpr*>(e));        break;
        case Expr::ARRAY_INIT:    t = check_array_init(static_cast<ArrayInitExpr*>(e));   break;
        case Expr::BUILTIN_CALL:  t = check_builtin_call(static_cast<BuiltinCallExpr*>(e)); break;
        case Expr::OR_RETURN_EXPR:t = check_or_return(static_cast<OrReturnExpr*>(e));     break;
    }
    set_type(e, t);
    return t;
}

// ---------------------------------------------------------------------------
// Binary expressions
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_binary(BinaryExpr* e) {
    TypeRef lty = check_expr(e->left);
    TypeRef rty = check_expr(e->right);
    if (lty->is_error() || rty->is_error()) return sym_.arena().ty_error();
    if (lty->is_any_foreign() || rty->is_any_foreign())
        return sym_.arena().ty_foreign();

    // Helper: pick the wider of two numeric types for mixed-width expressions.
    // If one side is a literal default (i32/f32) and the other is a wider
    // explicit type (i64/f64/u32/…), return the explicit type.
    auto wider = [&](TypeRef a, TypeRef b) -> TypeRef {
        if (*a == *b) return a;
        if (types_compatible(b, a)) return a;  // b widens into a → a is wider
        if (types_compatible(a, b)) return b;
        return a; // fallback (error already reported)
    };

    switch (e->op) {
        // Arithmetic: both sides must be numeric and compatible
        case TOK_PLUS: case TOK_MINUS:
            // Pointer arithmetic: ptr + int, int + ptr, ptr - int  → ptr
            // ptr - ptr → i64 (byte offset)
            if (e->op == TOK_PLUS &&
                ((lty->is_ptr() && rty->is_integer()) ||
                 (lty->is_integer() && rty->is_ptr())))
                return lty->is_ptr() ? lty : rty;
            if (e->op == TOK_MINUS && lty->is_ptr() && rty->is_integer())
                return lty;
            if (e->op == TOK_MINUS && lty->is_ptr() && rty->is_ptr())
                return sym_.arena().ty_i64();   // pointer difference
            // Fallthrough to numeric check
            [[fallthrough]];
        case TOK_STAR:
        case TOK_SLASH: case TOK_PERCENT:
            if (!lty->is_numeric())
                err_.error(e->left->range.begin,
                    "arithmetic requires numeric type, got '" + lty->to_string() + "'");
            else if (*lty != *rty && !types_compatible(lty, rty) && !types_compatible(rty, lty))
                err_.error(e->range.begin,
                    "type mismatch: '" + lty->to_string() +
                    "' vs '" + rty->to_string() + "'");
            return wider(lty, rty);

        // Bitwise: integers only, allow widening
        case TOK_AMP: case TOK_PIPE: case TOK_XOR: case TOK_DEREF:
        case TOK_SHL: case TOK_SHR:
            if (!lty->is_integer())
                err_.error(e->left->range.begin,
                    "bitwise operator requires integer type");
            else if (*lty != *rty && !types_compatible(lty, rty) && !types_compatible(rty, lty))
                err_.error(e->range.begin,
                    "type mismatch in bitwise op: '" + lty->to_string() +
                    "' vs '" + rty->to_string() + "'");
            return wider(lty, rty);

        // Comparison: both sides equal, result is bool
        case TOK_EQ: case TOK_NEQ:
        case TOK_LT: case TOK_LEQ:
        case TOK_GT: case TOK_GEQ:
            if (!types_compatible(lty, rty) && !types_compatible(rty, lty))
                err_.error(e->range.begin,
                    "cannot compare '" + lty->to_string() +
                    "' with '" + rty->to_string() + "'");
            return sym_.arena().ty_bool();

        // Logical: both sides must be bool
        case TOK_AND: case TOK_OR:
            if (!lty->is_bool())
                err_.error(e->left->range.begin,
                    "'&&'/'||' requires bool, got '" + lty->to_string() + "'");
            if (!rty->is_bool())
                err_.error(e->right->range.begin,
                    "'&&'/'||' requires bool, got '" + rty->to_string() + "'");
            return sym_.arena().ty_bool();

        default:
            err_.error(e->range.begin, "unknown binary operator");
            return sym_.arena().ty_error();
    }
}

// ---------------------------------------------------------------------------
// Unary expressions
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_unary(UnaryExpr* e) {
    TypeRef ty = check_expr(e->expr);
    if (ty->is_error()) return ty;
    // Foreign type (C function return) — trust the C zed to validate.
    if (ty->is_any_foreign())
        return sym_.arena().ty_foreign();

    switch (e->op) {
        case TOK_MINUS:
            if (!ty->is_numeric())
                err_.error(e->range.begin,
                    "unary '-' requires numeric type, got '" + ty->to_string() + "'");
            return ty;
        case TOK_NOT:
            if (!ty->is_bool())
                err_.error(e->range.begin,
                    "'!' requires bool, got '" + ty->to_string() + "'");
            return sym_.arena().ty_bool();
        case TOK_AMP:
            // & is handled as AddrExpr, not UnaryExpr — shouldn't reach here
            return sym_.arena().make_ptr(ty);
        default:
            err_.error(e->range.begin, "unknown unary operator");
            return sym_.arena().ty_error();
    }
}

// ---------------------------------------------------------------------------
// Call expression
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_call(CallExpr* e) {
    TypeRef cty = check_expr(e->callee);
    if (cty->is_error()) return sym_.arena().ty_error();

    if (!cty->is_proc()) {
        if (cty->is_any_foreign()) {
            for (auto* arg : e->args) check_expr(arg);
            return sym_.arena().ty_foreign();
        }
        err_.error(e->callee->range.begin,
            "'" + cty->to_string() + "' is not callable");
        return sym_.arena().ty_error();
    }

    auto* pt = static_cast<sem::ProcType*>(cty);
    if (e->args.size() != pt->params.size()) {
        err_.error(e->range.begin,
            "expected " + std::to_string(pt->params.size()) +
            " argument(s), got " + std::to_string(e->args.size()));
    } else {
        for (size_t i = 0; i < e->args.size(); ++i) {
            TypeRef aty = check_expr(e->args[i]);
            if (!aty->is_any_foreign())
                expect_type(aty, pt->params[i].type,
                            e->args[i]->range.begin,
                            "argument " + std::to_string(i + 1));
        }
    }

    return pt->return_type ? pt->return_type : sym_.arena().ty_void();
}

// ---------------------------------------------------------------------------
// Index expression: base[idx]
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_index(IndexExpr* e) {
    TypeRef bty = check_expr(e->base);
    TypeRef ity = check_expr(e->index);

    // Foreign C value — trust the C compiler for indexing.
    if (bty->is_any_foreign()) return sym_.arena().ty_foreign();

    if (!ity->is_integer() && !ity->is_error() && !ity->is_any_foreign())
        err_.error(e->index->range.begin,
            "array index must be integer, got '" + ity->to_string() + "'");

    if (bty->is_array()) return static_cast<sem::ArrayType*>(bty)->elem;
    if (bty->is_slice()) return static_cast<sem::SliceType*>(bty)->elem;
    if (bty->is_ptr())   return static_cast<sem::PtrType*>(bty)->pointee;

    if (!bty->is_error())
        err_.error(e->base->range.begin,
            "cannot index into '" + bty->to_string() + "'");
    return sym_.arena().ty_error();
}

// ---------------------------------------------------------------------------
// Slice expression: base[lo..<hi]  base[lo..=hi]  base[:]
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_slice(SliceExpr* e) {
    TypeRef bty = check_expr(e->base);
    TypeRef elem = sym_.arena().ty_error();

    if (bty->is_array())      elem = static_cast<sem::ArrayType*>(bty)->elem;
    else if (bty->is_slice()) elem = static_cast<sem::SliceType*>(bty)->elem;
    else if (!bty->is_error())
        err_.error(e->base->range.begin,
            "cannot slice '" + bty->to_string() + "'");

    if (!e->full_slice) {
        if (e->low) {
            TypeRef lty = check_expr(e->low);
            if (!lty->is_integer() && !lty->is_error())
                err_.error(e->low->range.begin, "slice bound must be integer");
        }
        if (e->high) {
            TypeRef hty = check_expr(e->high);
            if (!hty->is_integer() && !hty->is_error())
                err_.error(e->high->range.begin, "slice bound must be integer");
        }
    }
    return sym_.arena().make_slice(elem);
}

// ---------------------------------------------------------------------------
// Field expression: base.field
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_field(FieldExpr* e) {
    TypeRef bty = check_expr(e->base);

    // Auto-deref: *T.field is allowed
    if (bty->is_ptr()) bty = static_cast<sem::PtrType*>(bty)->pointee;

    // Enum variant access: Direction.UP
    if (bty->is_enum()) {
        auto* et = static_cast<sem::EnumType*>(bty);
        if (et->find_variant(e->field))
            return bty;  // variant has the enum's own type
        err_.error(e->range.begin,
            "enum '" + et->name + "' has no variant '" + e->field + "'");
        return sym_.arena().ty_error();
    }
    // Foreign C value — trust the C compiler for field access.
    if (bty->is_any_foreign()) return sym_.arena().ty_foreign();

    if (!bty->is_struct()) {
        if (!bty->is_error())
            err_.error(e->base->range.begin,
                "field access on non-struct type '" + bty->to_string() + "'");
        return sym_.arena().ty_error();
    }

    auto* st = static_cast<sem::StructType*>(bty);
    const sem::StructField* f = st->find_field(e->field);
    if (!f) {
        err_.error(e->range.begin,
            "struct '" + st->name + "' has no field '" + e->field + "'");
        return sym_.arena().ty_error();
    }
    return f->type;
}

// ---------------------------------------------------------------------------
// Deref: expr^
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_deref(DerefExpr* e) {
    TypeRef ty = check_expr(e->expr);
    if (ty->is_any_foreign()) return sym_.arena().ty_foreign();
    if (!ty->is_ptr()) {
        if (!ty->is_error())
            err_.error(e->range.begin,
                "cannot dereference non-pointer type '" + ty->to_string() + "'");
        return sym_.arena().ty_error();
    }
    return static_cast<sem::PtrType*>(ty)->pointee;
}

// ---------------------------------------------------------------------------
// Addr: &expr
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_addr(AddrExpr* e) {
    if (!check_lvalue(e->expr)) {
        err_.error(e->range.begin, "'&' requires an addressable lvalue");
        return sym_.arena().ty_error();
    }
    TypeRef ty = check_expr(e->expr);
    return sym_.arena().make_ptr(ty);
}

// ---------------------------------------------------------------------------
// Cast: (T)(expr)
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_cast(CastExpr* e) {
    TypeRef src  = check_expr(e->expr);
    TypeRef dest = resolve_type(e->target_type);

    // Allow: numeric↔numeric, numeric↔bool, ptr↔ptr, numeric→ptr (unsafe)
    bool ok = (src->is_numeric() && dest->is_numeric())
           || (src->is_numeric() && dest->is_bool())
           || (src->is_bool()    && dest->is_numeric())
           || (src->is_ptr()     && dest->is_ptr())
           || (src->is_ptr()     && dest->is_integer())
           || (src->is_integer() && dest->is_ptr())
           || (src->is_enum()    && dest->is_integer())
           || (src->is_integer() && dest->is_enum())
           || src->is_error() || dest->is_error()
           || src->is_any_foreign() || dest->is_any_foreign();

    if (!ok)
        err_.error(e->range.begin,
            "cannot cast '" + src->to_string() +
            "' to '" + dest->to_string() + "'");
    return dest;
}

// ---------------------------------------------------------------------------
// Literals
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_lit(LitExpr* e) {
    switch (e->lit_kind) {
        case LitExpr::INT:
            // Auto-promote large values; default is i32 for register efficiency
            if (e->int_val > (uint64_t)INT32_MAX) return sym_.arena().ty_i64();
            return sym_.arena().ty_i32();
        case LitExpr::FLOAT:  return sym_.arena().ty_f32();  // f32 default
        case LitExpr::BOOL:   return sym_.arena().ty_bool();
        case LitExpr::STRING: return sym_.arena().ty_cstr();  // "..." emits as const char*
        case LitExpr::NIL:
            // nil is a pointer of unknown pointee — use *void as placeholder
            return sym_.arena().make_ptr(sym_.arena().ty_void());
    }
    return sym_.arena().ty_error();
}

// ---------------------------------------------------------------------------
// Identifier
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_ident(IdentExpr* e) {
    Symbol* sym = sym_.lookup(e->name);
    if (!sym) {
        if (has_cimports_)
            return sym_.arena().ty_foreign();
        err_.error(e->range.begin, "undefined identifier '" + e->name + "'");
        return sym_.arena().ty_error();
    }
    // ENUM_TYPE: the identifier is used as a namespace (e.g. Direction.UP)
    // Return the enum type itself so check_field can look up the variant.
    if (sym->kind == Symbol::Kind::ENUM_TYPE) return sym->type;
    if (!sym->initialized && sym->kind == Symbol::Kind::VAR)
        err_.error(e->range.begin,
            "variable '" + e->name + "' may be used before initialisation");
    return sym->type;
}

// ---------------------------------------------------------------------------
// Struct literal: TypeName{ field = val, ... }
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_struct_lit(StructLitExpr* e) {
    sem::StructType* st = sym_.lookup_struct(e->type_name);
    if (!st) {
        if (has_cimports_) {
            if (e->base) check_expr(e->base);
            for (const FieldInit& fi : e->fields) check_expr(fi.value);
            return sym_.arena().make_foreign_named(e->type_name);
        }
        err_.error(e->range.begin,
            "unknown struct type '" + e->type_name + "'");
        return sym_.arena().ty_error();
    }

    // Struct update: Type{ ..base, field = val }
    // The base expression must be the same struct type.
    if (e->base) {
        TypeRef bty = check_expr(e->base);
        if (!bty->is_error() && !bty->is_any_foreign() && bty != TypeRef(st))
            expect_type(bty, st, e->base->range.begin,
                        "spread base of '" + e->type_name + "'");
    }

    for (const FieldInit& fi : e->fields) {
        const sem::StructField* f = st->find_field(fi.name);
        if (!f) {
            err_.error(fi.loc,
                "struct '" + e->type_name +
                "' has no field '" + fi.name + "'");
            continue;
        }
        TypeRef vty = check_expr(fi.value);
        if (!vty->is_any_foreign())
            expect_type(vty, f->type, fi.loc,
                        "field '" + fi.name + "' of '" + e->type_name + "'");
    }
    return st;
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------
TypeRef TypeChecker::resolve_type(Type* t) {
    if (!t) return sym_.arena().ty_void();
    switch (t->kind()) {
        case Type::NAMED: {
            auto* nt = static_cast<NamedType*>(t);
            TypeRef p = sym_.arena().lookup_primitive(nt->name);
            if (!p->is_error()) return p;
            if (sem::StructType* st = sym_.lookup_struct(nt->name)) return st;
            if (sem::EnumType* et = sym_.lookup_enum(nt->name)) return et;
            // Unknown type — if cimports are active, treat as a C/foreign named type.
            if (has_cimports_)
                return sym_.arena().make_foreign_named(nt->name);
            err_.error(t->range.begin, "unknown type '" + nt->name + "'");
            return sym_.arena().ty_error();
        }
        case Type::PTR: {
            auto* pt = static_cast<ZedLang::PtrType*>(t);
            return sym_.arena().make_ptr(resolve_type(pt->pointee));
        }
        case Type::ARRAY: {
            auto* at = static_cast<ZedLang::ArrayType*>(t);
            uint64_t count = at->size;
            if (!at->size_name.empty()) {
                Symbol* sym = sym_.lookup(at->size_name);
                if (!sym || !sym->has_const_val) {
                    err_.error(t->range.begin,
                        "array size '" + at->size_name + "' is not a known integer constant");
                    return sym_.arena().ty_error();
                }
                count = static_cast<uint64_t>(sym->const_int_val);
            }
            return sym_.arena().make_array(count, resolve_type(at->elem));
        }
        case Type::SLICE: {
            auto* st = static_cast<ZedLang::SliceType*>(t);
            return sym_.arena().make_slice(resolve_type(st->elem));
        }
        case Type::PROC_TYPE: {
            auto* pt = static_cast<ZedLang::ProcTypeAST*>(t);
            std::vector<sem::ProcParam> params;
            for (Type* ptype : pt->param_types)
                params.push_back({"", resolve_type(ptype)});
            TypeRef ret = pt->return_type ? resolve_type(pt->return_type) : nullptr;
            return sym_.arena().make_proc(std::move(params), ret);
        }
        case Type::DYN_ARRAY_TYPE: {
            auto* da = static_cast<ZedLang::DynArrayTypeAST*>(t);
            return sym_.arena().make_dyn_array(resolve_type(da->elem));
        }
        case Type::STRING_TYPE:
            return sym_.arena().ty_string();
    }
    return sym_.arena().ty_error();
}

bool TypeChecker::expect_type(TypeRef got, TypeRef want, SourceLoc loc,
                               const std::string& ctx) {
    if (got->is_error() || want->is_error()) return true;
    if (types_compatible(got, want)) return true;
    err_.error(loc,
        ctx + ": expected '" + want->to_string() +
        "', got '" + got->to_string() + "'");
    return false;
}

bool TypeChecker::check_lvalue(Expr* e) {
    switch (e->kind()) {
        case Expr::IDENT:  return true;
        case Expr::INDEX:  return check_lvalue(static_cast<IndexExpr*>(e)->base);
        case Expr::FIELD:  return check_lvalue(static_cast<FieldExpr*>(e)->base);
        case Expr::DEREF:  return true;   // dereferenced pointer is always addressable
        default:
            err_.error(e->range.begin, "expression is not an lvalue");
            return false;
    }
}

bool TypeChecker::types_compatible(TypeRef from, TypeRef to) const {
    if (from->is_any_foreign()) return true;
    if (to->is_any_foreign())   return true;
    if (*from == *to) return true;
    // nil (*void) is compatible with any pointer type
    if (from->is_ptr() && to->is_ptr()) {
        auto* fp = static_cast<sem::PtrType*>(from);
        if (fp->pointee->is_void()) return true;
    }
    // integer literals default to i32; allow widening to any integer type
    if ((from->kind == SemanticType::Kind::I32 ||
         from->kind == SemanticType::Kind::I64) && to->is_integer()) return true;
    // float literals default to f32; allow widening to f64
    if ((from->kind == SemanticType::Kind::F32 ||
         from->kind == SemanticType::Kind::F64) && to->is_float()) return true;
    // enum ↔ integer compatibility (for match, comparisons, assignments)
    if (from->is_enum() && to->is_integer()) return true;
    if (from->is_integer() && to->is_enum()) return true;
    // string ↔ string; cstr can be implicitly converted to string
    if (from->is_string() && to->is_string()) return true;
    if (from->is_cstr()   && to->is_string()) return true;
    // dyn_array compatible if same element type
    if (from->is_dyn_array() && to->is_dyn_array()) {
        auto* fa = static_cast<sem::DynArrayType*>(from);
        auto* ta = static_cast<sem::DynArrayType*>(to);
        return *fa->elem == *ta->elem;
    }
    return false;
}

// ---------------------------------------------------------------------------
// ForRangeStmt:  for i in lo..<hi { }
// ---------------------------------------------------------------------------
void TypeChecker::check_for_range(ForRangeStmt* s) {
    TypeRef lty = check_expr(s->lo);
    TypeRef hty = check_expr(s->hi);
    // Validate both bounds are integer (or foreign-passthrough)
    if (!lty->is_integer() && !lty->is_error() && !lty->is_any_foreign())
        err_.error(s->lo->range.begin, "for-range lower bound must be integer");
    if (!hty->is_integer() && !hty->is_error() && !hty->is_any_foreign())
        err_.error(s->hi->range.begin, "for-range upper bound must be integer");
    // Infer loop variable type from lo bound; fall back to i32
    TypeRef var_ty = lty->is_integer() ? lty : sym_.arena().ty_i32();
    if (s->step_expr) {
        TypeRef sty = check_expr(s->step_expr);
        if (!sty->is_integer() && !sty->is_error() && !sty->is_any_foreign())
            err_.error(s->step_expr->range.begin, "for-range step must be integer");
    }
    sym_.push_scope(Scope::Kind::LOOP);
    Symbol var_sym(Symbol::Kind::VAR, s->var, var_ty, s->range.begin);
    var_sym.initialized = true;
    sym_.declare(var_sym);
    for (Stmt* st : s->body->stmts) check_stmt(st);
    sym_.pop_scope();
}

// ---------------------------------------------------------------------------
// DeferStmt
// ---------------------------------------------------------------------------
void TypeChecker::check_defer(DeferStmt* s) {
    if (!defer_stacks_.empty()) defer_stacks_.back().push_back(s->inner);
    check_stmt(s->inner);
}

// ---------------------------------------------------------------------------
// MatchStmt
// ---------------------------------------------------------------------------
void TypeChecker::check_match(MatchStmt* s) {
    TypeRef vty = check_expr(s->value);
    for (auto& mc : s->cases) {
        if (mc.value) {
            TypeRef cty = check_expr(mc.value);
            // Allow enum or integer match; foreign passes through
            if (!types_compatible(cty, vty) && !cty->is_any_foreign())
                expect_type(cty, vty, mc.loc, "match case value");
        }
        sym_.push_scope(Scope::Kind::BLOCK);
        for (Stmt* st : mc.body->stmts) check_stmt(st);
        sym_.pop_scope();
    }
}

// ---------------------------------------------------------------------------
// WhenStmt  (compile-time conditional)
// ---------------------------------------------------------------------------
void TypeChecker::check_when(WhenStmt* s) {
    // Check all branches for correctness even though only one will be emitted.
    check_expr(s->cond);
    check_block(s->then_block);
    for (auto& [ec, eb] : s->else_whens) { check_expr(ec); check_block(eb); }
    if (s->else_block) check_block(s->else_block);
}

// ---------------------------------------------------------------------------
// CompoundAssignStmt  (+=, -=, *=, /=, %=, &=, |=, ^=)
// ---------------------------------------------------------------------------
void TypeChecker::check_compound_assign(CompoundAssignStmt* s) {
    if (!check_lvalue(s->lvalue)) return;
    TypeRef lty = check_expr(s->lvalue);
    TypeRef rty = check_expr(s->rhs);
    if (!lty->is_any_foreign() && !rty->is_any_foreign())
        expect_type(rty, lty, s->rhs->range.begin, "compound assignment");
}

// ---------------------------------------------------------------------------
// IncDecStmt  (++  --)
// ---------------------------------------------------------------------------
void TypeChecker::check_inc_dec(IncDecStmt* s) {
    if (!check_lvalue(s->expr)) return;
    TypeRef ty = check_expr(s->expr);
    if (!ty->is_numeric() && !ty->is_error() && !ty->is_any_foreign())
        err_.error(s->range.begin,
            std::string(s->inc ? "'++'" : "'--'") +
            " requires numeric type, got '" + ty->to_string() + "'");
}

// ---------------------------------------------------------------------------
// HashAssertStmt  (#assert <const-expr>)
// ---------------------------------------------------------------------------
void TypeChecker::check_hash_assert(HashAssertStmt* s) {
    // Evaluate the condition expression — it must be bool or integer (truthy).
    TypeRef ty = check_expr(s->cond);
    if (!ty->is_bool() && !ty->is_integer() && !ty->is_error() && !ty->is_any_foreign())
        err_.error(s->cond->range.begin,
            "'#assert' condition must be bool or integer, got '" + ty->to_string() + "'");
}

// ---------------------------------------------------------------------------
// check_tuple — (a, b, c) expression — returns TupleType
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_tuple(TupleExpr* e) {
    std::vector<TypeRef> elems;
    for (Expr* elem : e->elems)
        elems.push_back(check_expr(elem));
    return sym_.arena().make_tuple(std::move(elems));
}

// ---------------------------------------------------------------------------
// check_array_init — { expr, expr, ... } aggregate initializer
// Returns the type of the first element (element type, not array type).
// The actual array type is determined from context (var_decl or assign).
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_array_init(ArrayInitExpr* e) {
    if (e->elems.empty()) return sym_.arena().ty_error();
    TypeRef elem_ty = check_expr(e->elems[0]);
    for (size_t i = 1; i < e->elems.size(); ++i) {
        TypeRef t = check_expr(e->elems[i]);
        if (!t->is_error() && !elem_ty->is_error() && !t->is_any_foreign())
            if (*t != *elem_ty && !types_compatible(t, elem_ty))
                err_.error(e->elems[i]->range.begin,
                    "array initializer element " + std::to_string(i) +
                    " has type '" + t->to_string() +
                    "', expected '" + elem_ty->to_string() + "'");
    }
    // Return element type — codegen uses the var's declared array type
    return elem_ty;
}

// ---------------------------------------------------------------------------
// check_sizeof — sizeof(T) / sizeof(expr) / alignof(T) → u64
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_sizeof(SizeofExpr* e) {
    if (e->expr_arg) check_expr(e->expr_arg);   // type-check for errors
    return sym_.arena().ty_u64();
}

// ---------------------------------------------------------------------------
// check_multi_decl — a, b := foo()
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_multi_decl_expr(Expr* rhs) {
    return check_expr(rhs);
}

void TypeChecker::check_multi_decl(MultiDeclStmt* s) {
    TypeRef rhs_ty = check_expr(s->rhs);

    // Determine per-variable types from tuple or single value
    std::vector<TypeRef> var_tys;
    if (rhs_ty->is_tuple()) {
        auto* tt = static_cast<sem::TupleType*>(rhs_ty);
        var_tys = tt->elems;
    } else {
        // If single value, all names get that type — mostly used for (ok) := f()
        for (size_t i = 0; i < s->names.size(); ++i)
            var_tys.push_back(rhs_ty);
    }

    if (var_tys.size() < s->names.size()) {
        err_.error(s->range.begin,
            "multi-assign: left has " + std::to_string(s->names.size()) +
            " names but right yields only " + std::to_string(var_tys.size()) + " values");
        while (var_tys.size() < s->names.size())
            var_tys.push_back(sym_.arena().ty_error());
    }

    // Declare each name (skip '_')
    for (size_t i = 0; i < s->names.size(); ++i) {
        if (s->names[i] == "_") continue;
        Symbol sym(Symbol::Kind::VAR, s->names[i], var_tys[i], s->range.begin);
        sym.initialized = true;
        sym_.declare(sym);
    }
    // Store tuple type for codegen
    multi_decl_types_[s] = rhs_ty;
}

void TypeChecker::check_multi_assign(MultiAssignStmt* s) {
    TypeRef rhs_ty = check_expr(s->rhs);
    std::vector<TypeRef> rhs_tys;
    if (rhs_ty->is_tuple()) {
        rhs_tys = static_cast<sem::TupleType*>(rhs_ty)->elems;
    } else {
        for (size_t i = 0; i < s->lvalues.size(); ++i) rhs_tys.push_back(rhs_ty);
    }
    for (size_t i = 0; i < s->lvalues.size() && i < rhs_tys.size(); ++i) {
        if (!check_lvalue(s->lvalues[i])) continue;
        TypeRef lty = check_expr(s->lvalues[i]);
        if (!lty->is_any_foreign() && !rhs_tys[i]->is_any_foreign())
            expect_type(rhs_tys[i], lty, s->range.begin,
                "multi-assign lvalue " + std::to_string(i));
    }
}


// ---------------------------------------------------------------------------
// check_builtin_call
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_builtin_call(BuiltinCallExpr* e) {
    for (Expr* a : e->args) check_expr(a);

    auto& ar = sym_.arena();
    switch (e->builtin_tok) {
        case TOK_KW_APPEND:
            // append(&arr, val) — first arg must be *[dynamic]T
            if (!e->args.empty()) {
                TypeRef arg0 = check_expr(e->args[0]);   // already checked above — re-fetch
                // arg0 is the address-of a dyn array: its type is *DynArrayType
                // just validate no obvious errors; C++ template handles the rest
            }
            return ar.ty_void();
        case TOK_KW_LEN:       return ar.ty_u64();
        case TOK_KW_CAP:       return ar.ty_u64();
        case TOK_KW_RESERVE:   return ar.ty_void();
        case TOK_KW_DELETE_DYN:return ar.ty_void();
        case TOK_KW_TO_CSTR:   return ar.ty_cstr();
        case TOK_KW_FROM_CSTR: return ar.ty_string();
        default:
            err_.error(e->range.begin, "unknown builtin");
            return ar.ty_error();
    }
}

// ---------------------------------------------------------------------------
// check_or_return
// val := call() or_return
// Inner expression must yield (T, bool). Result type is T.
// At runtime: if bool is false, the enclosing proc returns a zero-value tuple.
// ---------------------------------------------------------------------------
TypeRef TypeChecker::check_or_return(OrReturnExpr* e) {
    TypeRef inner_ty = check_expr(e->inner);
    if (inner_ty->is_any_foreign()) return inner_ty;

    if (!inner_ty->is_tuple()) {
        err_.error(e->range.begin,
            "'or_return' requires a (T, bool) result, got '"
            + inner_ty->to_string() + "'");
        return sym_.arena().ty_error();
    }
    auto* tt = static_cast<sem::TupleType*>(inner_ty);
    if (tt->elems.size() < 2 || !tt->elems.back()->is_bool()) {
        err_.error(e->range.begin,
            "'or_return' requires the last return element to be bool");
        return sym_.arena().ty_error();
    }
    // Must be inside a proc that can propagate the failure
    TypeRef ret = sym_.current_return_type();
    if (!ret || ret->is_void())
        err_.error(e->range.begin,
            "'or_return' used in a void proc — cannot propagate failure");

    // Return T (first element); T, bool → T
    if (tt->elems.size() == 2) return tt->elems[0];
    // (T0, T1, ..., bool) → (T0, T1, ...)
    std::vector<TypeRef> elems(tt->elems.begin(), tt->elems.end() - 1);
    return sym_.arena().make_tuple(std::move(elems));
}

// Public wrapper for resolve_type — needed by codegen for sizeof(T)
TypeRef TypeChecker::resolve(Type* t) { return resolve_type(t); }

} // namespace ZedLang

// ---------------------------------------------------------------------------
// type_of_var — look up a variable's resolved type by name
// ---------------------------------------------------------------------------
ZedLang::TypeRef ZedLang::TypeChecker::type_of_var(const std::string& name) {
    Symbol* s = sym_.lookup(name);
    return s ? s->type : sym_.arena().ty_error();
}

ZedLang::TypeRef ZedLang::TypeChecker::type_of_decl(VarDecl* vd) const {
    auto it = var_types_.find(vd);
    return (it != var_types_.end()) ? it->second : nullptr;
}
