// =============================================================================
// scope.hpp — Lexical scope and symbol entries
// =============================================================================

#pragma once

#include "../sema/types.hpp"

#include "../support/source_loc.hpp"

#include <string>
#include <unordered_map>
#include <vector>

namespace ZedLang {

// ---------------------------------------------------------------------------
// Symbol — one entry in a scope
// ---------------------------------------------------------------------------
struct Symbol {
    enum class Kind {
        VAR,      // local variable or global var
        CONST,    // compile-time constant
        PROC,     // procedure
        STRUCT,   // struct type name
        PARAM,    // procedure parameter
        ENUM_TYPE, // enum type name (used as namespace for variants)
    };

    Kind        kind;
    std::string name;
    TypeRef     type;       // resolved semantic type
    SourceLoc   decl_loc;   // where it was declared

    // For VAR/PARAM — has it been initialized before first use?
    bool        initialized = false;

    // For CONST — the folded integer value (if known at compile time)
    bool        has_const_val = false;
    int64_t     const_int_val = 0;

    Symbol() = default;
    Symbol(Kind k, std::string n, TypeRef t, SourceLoc loc)
        : kind(k), name(std::move(n)), type(t), decl_loc(loc) {}
};

// ---------------------------------------------------------------------------
// Scope — one level of the lexical scope stack
// ---------------------------------------------------------------------------
class Scope {
public:
    enum class Kind {
        GLOBAL,   // top-level declarations
        PROC,     // procedure body (tracks return type)
        BLOCK,    // any inner { } block
        LOOP,     // loop body (allows break/continue)
    };

    explicit Scope(Kind k, Scope* parent = nullptr)
        : kind_(k), parent_(parent) {}

    // Insert a symbol. Returns false (without inserting) if name already
    // exists in THIS scope (shadowing an outer scope is allowed).
    bool insert(Symbol sym);

    // Look up in this scope only.
    Symbol* lookup_local(const std::string& name);

    // Look up in this scope and all enclosing scopes.
    Symbol* lookup(const std::string& name);

    Kind   kind()   const { return kind_; }
    Scope* parent() const { return parent_; }

    // Find the nearest enclosing PROC scope (for return type).
    Scope* enclosing_proc();

    // Find the nearest enclosing LOOP scope (for break/continue validity).
    Scope* enclosing_loop();

    // Return type stored on the nearest enclosing PROC scope.
    TypeRef proc_return_type = nullptr;
    // True when the enclosing proc has named return variables.
    // A bare 'return' is valid in this case (returns all named vars).
    bool proc_has_named_returns = false;

    // Iterate over every symbol in THIS scope only (not parents).
    template<typename Fn>
    void for_each_symbol(Fn&& fn) const {
        for (const auto& [name, sym] : symbols_) fn(sym);
    }

private:
    Kind   kind_;
    Scope* parent_;
    std::unordered_map<std::string, Symbol> symbols_;
};

// ---------------------------------------------------------------------------
// ScopeStack — RAII scope manager used by the type checker
// ---------------------------------------------------------------------------
class ScopeStack {
public:
    explicit ScopeStack(TypeArena& arena) : arena_(arena) {}

    // Push a new scope; returns a pointer valid until pop().
    Scope* push(Scope::Kind kind);

    // Pop the innermost scope.
    void pop();

    // Convenience — delegates to top scope.
    bool    insert(Symbol sym)                     { return top()->insert(std::move(sym)); }
    Symbol* lookup(const std::string& name)        { return top()->lookup(name); }
    Symbol* lookup_local(const std::string& name)  { return top()->lookup_local(name); }

    Scope* top() const { return stack_.back().get(); }
    bool   in_loop() const { return top()->enclosing_loop() != nullptr; }
    bool   in_proc() const { return top()->enclosing_proc() != nullptr; }

    TypeRef current_return_type() const {
        Scope* s = top()->enclosing_proc();
        return s ? s->proc_return_type : nullptr;
    }

    TypeArena& arena() { return arena_; }

private:
    TypeArena&                          arena_;
    std::vector<std::unique_ptr<Scope>> stack_;
};

} // namespace ZedLang
