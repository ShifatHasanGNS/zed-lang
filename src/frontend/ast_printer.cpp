#include "../frontend/ast_printer.hpp"
#include "../frontend/token.hpp"

namespace ZedLang {

// Internal helper: emit exactly n spaces
static void emit_indent(std::ostream& out, int n) {
    for (int i = 0; i < n; ++i) out << ' ';
}

void AstPrinter::indent() {
    current_indent += indent_step;
}

void AstPrinter::dedent() {
    current_indent -= indent_step;
}

void AstPrinter::print_location(Node* node) {
    if (node->range.is_valid()) {
        out << " @ " << node->range.begin.to_string();
    }
}

// ---------------------------------------------------------------------------
// Program
// ---------------------------------------------------------------------------
void AstPrinter::print(Program* prog) {
    out << "Program";
    print_location(prog);
    out << "\n";
    indent();
    for (Decl* d : prog->decls) {
        print(d);
    }
    dedent();
}

// ---------------------------------------------------------------------------
// Declarations
// ---------------------------------------------------------------------------
void AstPrinter::print(Decl* decl) {
    switch (decl->kind()) {
        case Decl::VAR: {
            VarDecl* vd = static_cast<VarDecl*>(decl);
            emit_indent(out, current_indent);
            out << "VarDecl " << vd->var_name;
            print_location(vd);
            out << "\n";
            indent();
            if (vd->type) {
                emit_indent(out, current_indent);
                out << "Type: ";
                print(vd->type);
                out << "\n";
            }
            if (vd->init) {
                emit_indent(out, current_indent);
                out << "Init:\n";
                indent();
                print(vd->init);
                dedent();
            }
            dedent();
            break;
        }
        case Decl::CONST: {
            ConstDecl* cd = static_cast<ConstDecl*>(decl);
            emit_indent(out, current_indent);
            out << "ConstDecl " << cd->const_name;
            print_location(cd);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Value:\n";
            indent();
            print(cd->value);
            dedent();
            dedent();
            break;
        }
        case Decl::STRUCT: {
            StructDecl* sd = static_cast<StructDecl*>(decl);
            emit_indent(out, current_indent);
            out << "StructDecl " << sd->struct_name;
            print_location(sd);
            out << "\n";
            indent();
            for (const Field& f : sd->fields) {
                print(f);
            }
            dedent();
            break;
        }
        case Decl::PROC: {
            ProcDecl* pd = static_cast<ProcDecl*>(decl);
            emit_indent(out, current_indent);
            out << "ProcDecl " << pd->proc_name;
            print_location(pd);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Params:\n";
            indent();
            for (const ParamGroup& pg : pd->params) {
                print(pg);
            }
            dedent();
            if (pd->return_type) {
                emit_indent(out, current_indent);
                out << "Return: ";
                print(pd->return_type);
                out << "\n";
            }
            if (pd->body) {
                emit_indent(out, current_indent);
                out << "Body:\n";
                indent();
                print(pd->body);
                dedent();
            } else {
                emit_indent(out, current_indent);
                out << "--- (extern)\n";
            }
            dedent();
            break;
        }
        case Decl::CIMPORT: {
            auto* ci = static_cast<CImportDecl*>(decl);
            emit_indent(out, current_indent);
            out << "CImport \"" << ci->path << "\"\n";
            break;
        }
        case Decl::IMPORT: {
            auto* im = static_cast<ImportDecl*>(decl);
            emit_indent(out, current_indent);
            out << "Import \"" << im->path << "\"\n";
            break;
        }
        case Decl::ENUM_DECL: {
            auto* ed = static_cast<EnumDecl*>(decl);
            emit_indent(out, current_indent);
            out << "EnumDecl " << ed->enum_name << "\n";
            indent();
            for (const auto& v : ed->variants) {
                emit_indent(out, current_indent);
                out << v.name;
                if (v.value) { out << " = "; print(v.value); }
                else out << "\n";
            }
            dedent();
            break;
        }
        case Decl::UNION_DECL: {
            auto* ud = static_cast<UnionDecl*>(decl);
            emit_indent(out, current_indent);
            out << "UnionDecl " << ud->union_name << "\n";
            indent();
            for (const auto& f : ud->fields) {
                emit_indent(out, current_indent);
                for (const auto& n : f.names) out << n << " ";
                out << ": ";
                print(f.type);
            }
            dedent();
            break;
        }
        case Decl::HASH_ASSERT_DECL: {
            auto* ha = static_cast<HashAssertTopDecl*>(decl);
            emit_indent(out, current_indent);
            out << "#assert (top-level)";
            print_location(ha);
            out << "\n";
            indent();
            print(ha->cond);
            dedent();
            break;
        }
    }
}

// ---------------------------------------------------------------------------
// Statements
// ---------------------------------------------------------------------------
void AstPrinter::print(Stmt* stmt) {
    switch (stmt->kind()) {
        case Stmt::BLOCK: {
            BlockStmt* bs = static_cast<BlockStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Block";
            print_location(bs);
            out << "\n";
            indent();
            for (Stmt* s : bs->stmts) {
                print(s);
            }
            dedent();
            break;
        }
        case Stmt::RETURN: {
            ReturnStmt* rs = static_cast<ReturnStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Return";
            print_location(rs);
            out << "\n";
            if (rs->value) {
                indent();
                print(rs->value);
                dedent();
            }
            break;
        }
        case Stmt::IF: {
            IfStmt* is = static_cast<IfStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "If";
            print_location(is);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Cond:\n";
            indent();
            print(is->cond);
            dedent();
            emit_indent(out, current_indent);
            out << "Then:\n";
            indent();
            print(is->then_block);
            dedent();
            for (auto& p : is->else_ifs) {
                emit_indent(out, current_indent);
                out << "ElseIf:\n";
                indent();
                emit_indent(out, current_indent);
                out << "Cond:\n";
                indent();
                print(p.first);
                dedent();
                emit_indent(out, current_indent);
                out << "Then:\n";
                indent();
                print(p.second);
                dedent();
                dedent();
            }
            if (is->else_block) {
                emit_indent(out, current_indent);
                out << "Else:\n";
                indent();
                print(is->else_block);
                dedent();
            }
            dedent();
            break;
        }
        case Stmt::LOOP: {
            LoopStmt* ls = static_cast<LoopStmt*>(stmt);
            emit_indent(out, current_indent);
            out << (ls->cond ? "Loop (while)" : "Loop (infinite)");
            print_location(ls);
            out << "\n";
            indent();
            if (ls->cond) {
                emit_indent(out, current_indent);
                out << "Cond:\n";
                indent();
                print(ls->cond);
                dedent();
            }
            print(ls->body);
            dedent();
            break;
        }
        case Stmt::BREAK: {
            BreakStmt* bs = static_cast<BreakStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Break";
            print_location(bs);
            out << "\n";
            break;
        }
        case Stmt::CONTINUE: {
            ContinueStmt* cs = static_cast<ContinueStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Continue";
            print_location(cs);
            out << "\n";
            break;
        }
        case Stmt::ASSIGN: {
            AssignStmt* as = static_cast<AssignStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Assign";
            print_location(as);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "LHS:\n";
            indent();
            print(as->lvalue);
            dedent();
            emit_indent(out, current_indent);
            out << "RHS:\n";
            indent();
            print(as->rhs);
            dedent();
            dedent();
            break;
        }
        case Stmt::EXPR: {
            ExprStmt* es = static_cast<ExprStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "ExprStmt";
            print_location(es);
            out << "\n";
            indent();
            print(es->expr);
            dedent();
            break;
        }
        case Stmt::DECL_STMT: {
            DeclStmt* ds = static_cast<DeclStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "DeclStmt\n";
            indent();
            print(ds->decl);
            dedent();
            break;
        }
        case Stmt::FOR_RANGE: {
            ForRangeStmt* fs = static_cast<ForRangeStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "ForRange var=" << fs->var
                << (fs->inclusive ? " ..=" : " ..<");
            print_location(fs);
            out << "\n";
            indent();
            emit_indent(out, current_indent); out << "Lo:\n";
            indent(); print(fs->lo); dedent();
            emit_indent(out, current_indent); out << "Hi:\n";
            indent(); print(fs->hi); dedent();
            if (fs->step_expr) {
                emit_indent(out, current_indent); out << "Step:\n";
                indent(); print(fs->step_expr); dedent();
            }
            print(fs->body);
            dedent();
            break;
        }
        case Stmt::FOR_EACH: {
            ForEachStmt* fe = static_cast<ForEachStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "ForEach";
            if (!fe->index_var.empty()) out << " index=" << fe->index_var;
            out << " value=" << fe->value_var;
            print_location(fe);
            out << "\n";
            indent();
            emit_indent(out, current_indent); out << "Collection:\n";
            indent(); print(fe->collection); dedent();
            print(fe->body);
            dedent();
            break;
        }
        case Stmt::DEFER: {
            DeferStmt* ds = static_cast<DeferStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Defer";
            print_location(ds);
            out << "\n";
            indent();
            print(ds->inner);
            dedent();
            break;
        }
        case Stmt::MATCH: {
            MatchStmt* ms = static_cast<MatchStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "Match";
            print_location(ms);
            out << "\n";
            indent();
            emit_indent(out, current_indent); out << "Value:\n";
            indent(); print(ms->value); dedent();
            for (auto& mc : ms->cases) {
                emit_indent(out, current_indent);
                out << (mc.value ? "Case:\n" : "Default:\n");
                indent();
                if (mc.value) {
                    emit_indent(out, current_indent); out << "Val:\n";
                    indent(); print(mc.value); dedent();
                }
                print(mc.body);
                dedent();
            }
            dedent();
            break;
        }
        case Stmt::WHEN: {
            WhenStmt* ws = static_cast<WhenStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "When";
            print_location(ws);
            out << "\n";
            indent();
            emit_indent(out, current_indent); out << "Cond:\n";
            indent(); print(ws->cond); dedent();
            emit_indent(out, current_indent); out << "Then:\n";
            indent(); print(ws->then_block); dedent();
            for (auto& [ec, eb] : ws->else_whens) {
                emit_indent(out, current_indent); out << "ElseWhen:\n";
                indent(); print(ec); print(eb); dedent();
            }
            if (ws->else_block) {
                emit_indent(out, current_indent); out << "Else:\n";
                indent(); print(ws->else_block); dedent();
            }
            dedent();
            break;
        }
        case Stmt::COMPOUND_ASSIGN: {
            CompoundAssignStmt* cs = static_cast<CompoundAssignStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "CompoundAssign op=" << token_kind_name(cs->op);
            print_location(cs);
            out << "\n";
            indent();
            emit_indent(out, current_indent); out << "LHS:\n";
            indent(); print(cs->lvalue); dedent();
            emit_indent(out, current_indent); out << "RHS:\n";
            indent(); print(cs->rhs); dedent();
            dedent();
            break;
        }
        case Stmt::HASH_ASSERT: {
            HashAssertStmt* ha = static_cast<HashAssertStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "#assert";
            print_location(ha);
            out << "\n";
            indent();
            print(ha->cond);
            dedent();
            break;
        }
        case Stmt::BREAK_LABEL: {
            LabeledBreakStmt* lb = static_cast<LabeledBreakStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "break " << lb->label;
            print_location(lb);
            out << "\n";
            break;
        }
        case Stmt::CONTINUE_LABEL: {
            LabeledContinueStmt* lc = static_cast<LabeledContinueStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "continue " << lc->label;
            print_location(lc);
            out << "\n";
            break;
        }
        case Stmt::MULTI_DECL: {
            MultiDeclStmt* md = static_cast<MultiDeclStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "MultiDecl (";
            for (size_t i = 0; i < md->names.size(); ++i) {
                if (i) out << ", "; out << md->names[i];
            }
            out << ")"; print_location(md); out << "\n";
            indent(); print(md->rhs); dedent();
            break;
        }
        case Stmt::MULTI_ASSIGN: {
            MultiAssignStmt* ma = static_cast<MultiAssignStmt*>(stmt);
            emit_indent(out, current_indent);
            out << "MultiAssign"; print_location(ma); out << "\n";
            break;
        }
    }
}

// ---------------------------------------------------------------------------
// Expressions
// ---------------------------------------------------------------------------
void AstPrinter::print(Expr* expr) {
    switch (expr->kind()) {
        case Expr::BINARY: {
            BinaryExpr* be = static_cast<BinaryExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Binary " << token_kind_name(be->op);
            print_location(be);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Left:\n";
            indent();
            print(be->left);
            dedent();
            emit_indent(out, current_indent);
            out << "Right:\n";
            indent();
            print(be->right);
            dedent();
            dedent();
            break;
        }
        case Expr::UNARY: {
            UnaryExpr* ue = static_cast<UnaryExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Unary " << token_kind_name(ue->op);
            print_location(ue);
            out << "\n";
            indent();
            print(ue->expr);
            dedent();
            break;
        }
        case Expr::CALL: {
            CallExpr* ce = static_cast<CallExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Call";
            print_location(ce);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Callee:\n";
            indent();
            print(ce->callee);
            dedent();
            emit_indent(out, current_indent);
            out << "Args:\n";
            indent();
            for (Expr* a : ce->args) {
                print(a);
            }
            dedent();
            dedent();
            break;
        }
        case Expr::INDEX: {
            IndexExpr* ie = static_cast<IndexExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Index";
            print_location(ie);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Base:\n";
            indent();
            print(ie->base);
            dedent();
            emit_indent(out, current_indent);
            out << "Index:\n";
            indent();
            print(ie->index);
            dedent();
            dedent();
            break;
        }
        case Expr::SLICE: {
            SliceExpr* se = static_cast<SliceExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Slice";
            if (se->full_slice) out << " [:]";
            else out << (se->inclusive ? " [..=]" : " [..<]");
            print_location(se);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "Base:\n";
            indent();
            print(se->base);
            dedent();
            if (!se->full_slice) {
                if (se->low) {
                    emit_indent(out, current_indent);
                    out << "Low:\n";
                    indent();
                    print(se->low);
                    dedent();
                }
                if (se->high) {
                    emit_indent(out, current_indent);
                    out << "High:\n";
                    indent();
                    print(se->high);
                    dedent();
                }
            }
            dedent();
            break;
        }
        case Expr::FIELD: {
            FieldExpr* fe = static_cast<FieldExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Field ." << fe->field;
            print_location(fe);
            out << "\n";
            indent();
            print(fe->base);
            dedent();
            break;
        }
        case Expr::DEREF: {
            DerefExpr* de = static_cast<DerefExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Deref ^";
            print_location(de);
            out << "\n";
            indent();
            print(de->expr);
            dedent();
            break;
        }
        case Expr::ADDR: {
            AddrExpr* ae = static_cast<AddrExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Addr &";
            print_location(ae);
            out << "\n";
            indent();
            print(ae->expr);
            dedent();
            break;
        }
        case Expr::CAST: {
            CastExpr* ce = static_cast<CastExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Cast";
            print_location(ce);
            out << "\n";
            indent();
            emit_indent(out, current_indent);
            out << "To: ";
            print(ce->target_type);
            out << "\n";
            emit_indent(out, current_indent);
            out << "Expr:\n";
            indent();
            print(ce->expr);
            dedent();
            dedent();
            break;
        }
        case Expr::LIT: {
            LitExpr* le = static_cast<LitExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Lit ";
            switch (le->lit_kind) {
                case LitExpr::INT:    out << le->int_val; break;
                case LitExpr::FLOAT:  out << le->float_val; break;
                case LitExpr::BOOL:   out << (le->bool_val ? "true" : "false"); break;
                case LitExpr::NIL:    out << "nil"; break;
                case LitExpr::STRING: out << "\"" << le->str_val << "\""; break;
            }
            print_location(le);
            out << "\n";
            break;
        }
        case Expr::IDENT: {
            IdentExpr* ie = static_cast<IdentExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Ident " << ie->name;
            print_location(ie);
            out << "\n";
            break;
        }
        case Expr::STRUCT_LIT: {
            StructLitExpr* sle = static_cast<StructLitExpr*>(expr);
            emit_indent(out, current_indent);
            out << "StructLit " << sle->type_name;
            print_location(sle);
            out << "\n";
            indent();
            for (const FieldInit& fi : sle->fields) {
                print(fi);
            }
            dedent();
            break;
        }
        case Expr::TUPLE: {
            TupleExpr* te = static_cast<TupleExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Tuple"; print_location(te); out << "\n";
            indent();
            for (Expr* el : te->elems) print(el);
            dedent();
            break;
        }
        case Expr::ARRAY_INIT: {
            ArrayInitExpr* ai = static_cast<ArrayInitExpr*>(expr);
            emit_indent(out, current_indent);
            out << "ArrayInit"; print_location(ai); out << "\n";
            indent();
            for (Expr* el : ai->elems) print(el);
            dedent();
            break;
        }
        case Expr::SIZEOF_EXPR: {
            SizeofExpr* se = static_cast<SizeofExpr*>(expr);
            emit_indent(out, current_indent);
            out << (se->is_align ? "Alignof" : "Sizeof");
            print_location(se); out << "\n";
            break;
        }
        case Expr::TYPEID_EXPR: {
            TypeIdExpr* te = static_cast<TypeIdExpr*>(expr);
            emit_indent(out, current_indent);
            out << "TypeId"; print_location(te); out << "\n";
            break;
        }
        case Expr::BUILTIN_CALL: {
            BuiltinCallExpr* bc = static_cast<BuiltinCallExpr*>(expr);
            emit_indent(out, current_indent);
            out << "BuiltinCall tok=" << bc->builtin_tok;
            print_location(bc); out << "\n";
            indent();
            for (Expr* a : bc->args) print(a);
            dedent();
            break;
        }
        case Expr::OR_RETURN_EXPR: {
            OrReturnExpr* oe = static_cast<OrReturnExpr*>(expr);
            emit_indent(out, current_indent);
            out << "OrReturn"; print_location(oe); out << "\n";
            indent(); print(oe->inner); dedent();
            break;
        }
        case Expr::PROC_LIT: {
            ProcLitExpr* pl = static_cast<ProcLitExpr*>(expr);
            emit_indent(out, current_indent);
            out << "ProcLit"; print_location(pl); out << "\n";
            if (pl->body) { indent(); print(pl->body); dedent(); }
            break;
        }
        case Expr::TERNARY: {
            IfExpr* te = static_cast<IfExpr*>(expr);
            emit_indent(out, current_indent);
            out << "Ternary"; print_location(te); out << "\n";
            indent();
            emit_indent(out, current_indent); out << "Cond:\n";
            indent(); print(te->cond); dedent();
            emit_indent(out, current_indent); out << "Then:\n";
            indent(); print(te->then_expr); dedent();
            emit_indent(out, current_indent); out << "Else:\n";
            indent(); print(te->else_expr); dedent();
            dedent();
            break;
        }
    }
}

// ---------------------------------------------------------------------------
// Type (always printed inline — callers write "Type: " label, then call this)
// ---------------------------------------------------------------------------
void AstPrinter::print(Type* type) {
    switch (type->kind()) {
        case Type::NAMED: {
            NamedType* nt = static_cast<NamedType*>(type);
            out << nt->name;
            break;
        }
        case Type::PTR: {
            PtrType* pt = static_cast<PtrType*>(type);
            out << "*";
            print(pt->pointee);
            break;
        }
        case Type::ARRAY: {
            ArrayType* at = static_cast<ArrayType*>(type);
            out << "[" << at->size << "]";
            print(at->elem);
            break;
        }
        case Type::SLICE: {
            SliceType* st = static_cast<SliceType*>(type);
            out << "[]";
            print(st->elem);
            break;
        }
        case Type::PROC_TYPE: {
            ProcTypeAST* pt = static_cast<ProcTypeAST*>(type);
            out << "proc(";
            for (size_t i = 0; i < pt->param_types.size(); ++i) {
                if (i > 0) out << ", ";
                print(pt->param_types[i]);
            }
            out << ")";
            if (pt->return_type) { out << " -> "; print(pt->return_type); }
            break;
        }
        case Type::DYN_ARRAY_TYPE: {
            DynArrayTypeAST* da = static_cast<DynArrayTypeAST*>(type);
            out << "[dynamic]";
            print(da->elem);
            break;
        }
        case Type::STRING_TYPE:
            out << "string";
            break;
    }
}

// ---------------------------------------------------------------------------
// Struct fields, field inits, param groups
// ---------------------------------------------------------------------------
void AstPrinter::print(const Field& field) {
    emit_indent(out, current_indent);
    for (size_t i = 0; i < field.names.size(); ++i) {
        if (i > 0) out << ", ";
        out << field.names[i];
    }
    out << ": ";
    print(field.type);
    out << "\n";
}

void AstPrinter::print(const FieldInit& init) {
    emit_indent(out, current_indent);
    out << init.name << " =\n";
    indent();
    print(init.value);
    dedent();
}

void AstPrinter::print(const ParamGroup& param) {
    emit_indent(out, current_indent);
    for (size_t i = 0; i < param.names.size(); ++i) {
        if (i > 0) out << ", ";
        out << param.names[i];
    }
    out << ": ";
    print(param.type);
    out << "\n";
}

} // namespace ZedLang
