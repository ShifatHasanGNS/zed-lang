#pragma once

#include "../sema/scope.hpp"

#include "../frontend/ast.hpp"
#include "../support/error.hpp"

#include <string>

namespace ZedLang {

class SymbolTable {
public:
    SymbolTable(TypeArena& arena, ErrorReporter& err)
        : scopes_(arena), err_(err) {}

    // Pass 1 — register all top-level declarations, enabling forward refs.
    void collect_globals(Program* prog);

    // Scope management
    Scope* push_scope(Scope::Kind kind) { return scopes_.push(kind); }
    void   pop_scope()                  { scopes_.pop(); }

    Scope*  current_scope()       const { return scopes_.top(); }
    bool    in_loop()             const { return scopes_.in_loop(); }
    bool    in_proc()             const { return scopes_.in_proc(); }
    TypeRef current_return_type() const { return scopes_.current_return_type(); }

    // Insert into the current scope; reports duplicate error and returns false
    // on conflict.
    bool declare(Symbol sym);
    sem::EnumType* lookup_enum(const std::string& name);

    Symbol* lookup(const std::string& name)       { return scopes_.lookup(name); }
    Symbol* lookup_local(const std::string& name) { return scopes_.lookup_local(name); }

    // Returns nullptr if name is not a known struct type.
    sem::StructType* lookup_struct(const std::string& name);

    // Inject all global symbols from another module into this module's
    // global scope.  Used to implement  import "X".
    void import_from(SymbolTable& other);

    TypeArena&     arena() { return scopes_.arena(); }
    ErrorReporter& err()   { return err_; }

    // Called by TypeChecker after scanning top-level decls.
    void set_has_cimports(bool v) { has_cimports_ = v; }

private:
    // Resolve an AST syntax Type node → SemanticType.
    // Distinct from the AST node classes: ZedLang::Type (AST) vs ZedLang::SemanticType.
    TypeRef resolve_ast_type(ZedLang::Type* t);

    ScopeStack    scopes_;
    ErrorReporter& err_;
    bool          has_cimports_ = false;  // true when any cimport decl is present
};

} // namespace ZedLang
