// =============================================================================
// codegen/codegen.hpp — C99 code generator
// =============================================================================
// CodeGen walks the type-annotated AST and emits a single self-contained C99
// translation unit.  It relies on the TypeChecker's expr_types_ side table
// (queried via TypeChecker::type_of()) for resolved types.
//
// Output structure:
//   1. Fixed preamble  (#include "types.h", #include "memory.h")
//   2. Forward declarations for all structs and procedures
//   3. Struct type definitions
//   4. Global variable definitions
//   5. Procedure definitions (bodies)
// =============================================================================

#pragma once

#include "c_emitter.hpp"

#include "../frontend/ast.hpp"
#include "../sema/type_checker.hpp"

#include <ostream>
#include <string>

namespace ZedLang {

class CodeGen {
public:
    CodeGen(TypeChecker& tc, std::ostream& out)
        : tc_(tc), emit_(out) {}

    // Register a program whose symbols are imported into the current file.
    // Their struct defs and proc forward-decls will be emitted before the
    // current file's own content so the generated C++ compiles stand-alone.
    void add_import(Program* imported) { imported_programs_.push_back(imported); }

    // Entry point — generate the full C99 file from a type-checked program.
    void generate(Program* prog);

private:
    // ---- Top-level passes --------------------------------------------------
    void emit_preamble();
    void emit_cimports(Program *prog);
    void emit_forward_decls(Program* prog);
    void emit_struct_defs(Program* prog);
    void emit_enum_decls(Program* prog);
    void emit_global_consts(Program* prog);
    void emit_global_vars(Program* prog);
    void emit_proc_defs(Program* prog);

    // ---- Declaration emitters ----------------------------------------------
    void emit_struct_def(StructDecl* sd);
    void emit_proc_decl(ProcDecl* pd);   // forward declaration only
    void emit_proc_def(ProcDecl* pd);    // full definition with body
    void emit_global_const(ConstDecl* cd);
    void emit_global_var(VarDecl *vd);

    // ---- Statement emitters ------------------------------------------------
    void emit_stmt(Stmt* s);
    void emit_block(BlockStmt* b, bool own_braces = true);
    void emit_if(IfStmt* s);
    void emit_loop(LoopStmt* s);
    void emit_for_range(ForRangeStmt* s);
    void emit_match(MatchStmt* s);
    void emit_when(WhenStmt* s);
    void emit_compound_assign(CompoundAssignStmt* s);
    void emit_inc_dec(IncDecStmt* s);
    void emit_return(ReturnStmt* s);
    void emit_assign(AssignStmt* s);
    void emit_expr_stmt(ExprStmt* s);
    void emit_decl_stmt(DeclStmt* s);
    void emit_var_decl_local(VarDecl* vd);
    void emit_const_decl_local(ConstDecl* cd);

    // ---- Expression emitters (write directly to output, no newline) --------
    void emit_expr(Expr* e);
    void emit_expr_hint(Expr* e, TypeRef hint);
    void emit_binary(BinaryExpr* e);
    void emit_unary(UnaryExpr* e);
    void emit_call(CallExpr* e);
    void emit_index(IndexExpr* e);
    void emit_slice(SliceExpr* e);
    void emit_field(FieldExpr* e);
    void emit_deref(DerefExpr* e);
    void emit_addr(AddrExpr* e);
    void emit_cast(CastExpr* e);
    void emit_lit(LitExpr* e, TypeRef hint = nullptr);
    void emit_ident(IdentExpr* e);
    void emit_struct_lit(StructLitExpr* e);

    // ---- Type helpers ------------------------------------------------------
    // Emit the C type spelling for a SemanticType (e.g. "int32_t", "MyStruct*").
    void emit_c_type(TypeRef t);

    // Emit a variable declaration: "TYPE NAME" (no semicolon).
    // For array types the size goes after the name: "int32_t name[N]".
    void emit_var_decl(TypeRef t, const std::string& name);

    // Return the C spelling of a primitive SemanticType.
    static std::string primitive_c_name(SemanticType::Kind k);

    // Return the C operator string for a binary/unary op token.
    static std::string op_str(int tok);

    TypeChecker& tc_;
    CEmitter     emit_;
    std::vector<Program*> imported_programs_;
};

} // namespace ZedLang
