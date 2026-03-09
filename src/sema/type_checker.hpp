// =============================================================================
// type_checker.hpp
// =============================================================================
// The TypeChecker walks the AST after parsing, using SymbolTable to resolve
// names and SemanticTypes to verify correctness.  It annotates each Expr
// node with a resolved type by storing results in a side table (expr_types_),
// which codegen then queries via type_of().
//
// Error recovery: on type mismatch the checker inserts ty_error() and
// continues, so that a single run reports as many errors as possible.
// =============================================================================

#pragma once

#include "symtable.hpp"

#include "../frontend/ast.hpp"
#include "../support/error.hpp"

#include <unordered_map>

namespace ZedLang {

class TypeChecker {
public:
    TypeChecker(SymbolTable& sym, ErrorReporter& err)
        : sym_(sym), err_(err) {}

    // Entry point — run all passes on the program.
    // Returns false if any errors were found.
    bool check(Program* prog);

    // Query the resolved type of an expression (valid after check()).
    TypeRef type_of(Expr* e) const;

    // Query the resolved type of a VarDecl (valid after check()).
    // Works for both locals and globals — unlike type_of_var which fails
    // for locals after scopes are popped.
    TypeRef type_of_decl(VarDecl* vd) const;

    // Query the resolved type of a named variable (valid after check()).
    TypeRef type_of_var(const std::string& name);

    // Access the symbol table (for codegen struct/proc lookups).
    SymbolTable& sym_ref() { return sym_; }

private:
    // ---- Declaration passes ------------------------------------------------
    void check_decl(Decl* d);
    void check_proc_body(ProcDecl* pd);
    void check_struct_decl(StructDecl* sd);   // validates field types only
    void check_const_decl(ConstDecl* cd);
    void check_var_decl(VarDecl* vd, bool is_global = false);

    // ---- Statement checkers ------------------------------------------------
    void check_stmt(Stmt* s);
    void check_block(BlockStmt* b);
    void check_if(IfStmt* s);
    void check_loop(LoopStmt* s);
    void check_return(ReturnStmt* s);
    void check_assign(AssignStmt* s);
    void check_expr_stmt(ExprStmt* s);
    void check_decl_stmt(DeclStmt* s);
    void check_for_range(ForRangeStmt* s);
    void check_defer(DeferStmt* s);
    void check_match(MatchStmt* s);
    void check_when(WhenStmt* s);
    void check_compound_assign(CompoundAssignStmt* s);
    void check_inc_dec(IncDecStmt* s);

    // ---- Expression checkers (return resolved type) -----------------------
    TypeRef check_expr(Expr* e);
    TypeRef check_binary(BinaryExpr* e);
    TypeRef check_unary(UnaryExpr* e);
    TypeRef check_call(CallExpr* e);
    TypeRef check_index(IndexExpr* e);
    TypeRef check_slice(SliceExpr* e);
    TypeRef check_field(FieldExpr* e);
    TypeRef check_deref(DerefExpr* e);
    TypeRef check_addr(AddrExpr* e);
    TypeRef check_cast(CastExpr* e);
    TypeRef check_lit(LitExpr* e);
    TypeRef check_ident(IdentExpr* e);
    TypeRef check_struct_lit(StructLitExpr* e);

    // ---- Helpers -----------------------------------------------------------
    // Resolve an AST Type node to a SemanticType.
    TypeRef resolve_type(Type* t);

    // Ensure expr is assignable to target; report error if not.
    bool expect_type(TypeRef got, TypeRef want, SourceLoc loc,
                     const std::string& context);

    // Check that expr is a valid lvalue; report error if not.
    bool check_lvalue(Expr* e);

    // Record the type of an expression node.
    void set_type(Expr* e, TypeRef t) { expr_types_[e] = t; }

    // Are two types assignment-compatible (allows nil → pointer)?
    bool types_compatible(TypeRef from, TypeRef to) const;

    SymbolTable&   sym_;
    ErrorReporter& err_;
    bool           has_cimports_ = false;

    // Side table: Expr* → resolved SemanticType
    std::unordered_map<Expr*, TypeRef> expr_types_;
    // Side table: VarDecl* → resolved SemanticType (survives scope pop)
    std::unordered_map<VarDecl*, TypeRef> var_types_;
    // Deferred statement stack per proc scope (for defer checking)
    std::vector<std::vector<Stmt*>> defer_stacks_;
};

} // namespace ZedLang
