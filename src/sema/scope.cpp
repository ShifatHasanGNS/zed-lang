#include "../sema/scope.hpp"

#include <cassert>

namespace ZedLang {

// ---------------------------------------------------------------------------
// Scope
// ---------------------------------------------------------------------------
bool Scope::insert(Symbol sym) {
    auto [it, inserted] = symbols_.emplace(sym.name, std::move(sym));
    return inserted;
}

Symbol* Scope::lookup_local(const std::string& name) {
    auto it = symbols_.find(name);
    return (it != symbols_.end()) ? &it->second : nullptr;
}

Symbol* Scope::lookup(const std::string& name) {
    if (Symbol* s = lookup_local(name)) return s;
    return parent_ ? parent_->lookup(name) : nullptr;
}

Scope* Scope::enclosing_proc() {
    Scope* s = this;
    while (s) {
        if (s->kind_ == Kind::PROC) return s;
        s = s->parent_;
    }
    return nullptr;
}

Scope* Scope::enclosing_loop() {
    Scope* s = this;
    while (s) {
        if (s->kind_ == Kind::LOOP) return s;
        // Stop at proc boundary — break/continue can't cross proc boundaries
        if (s->kind_ == Kind::PROC) return nullptr;
        s = s->parent_;
    }
    return nullptr;
}

// ---------------------------------------------------------------------------
// ScopeStack
// ---------------------------------------------------------------------------
Scope* ScopeStack::push(Scope::Kind kind) {
    Scope* parent = stack_.empty() ? nullptr : stack_.back().get();
    stack_.push_back(std::make_unique<Scope>(kind, parent));
    return stack_.back().get();
}

void ScopeStack::pop() {
    assert(!stack_.empty() && "ScopeStack::pop() on empty stack");
    stack_.pop_back();
}

} // namespace ZedLang
