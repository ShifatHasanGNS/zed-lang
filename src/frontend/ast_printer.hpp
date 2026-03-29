#pragma once

#include "../frontend/ast.hpp"

#include <iostream>

namespace ZedLang {

class AstPrinter {
public:
    AstPrinter(std::ostream& os, int indent = 2)
        : out(os), indent_step(indent) {}

    void print(Program* prog);
    void print(Decl* decl);
    void print(Stmt* stmt);
    void print(Expr* expr);
    void print(Type* type);
    void print(const Field& field);
    void print(const FieldInit& init);
    void print(const ParamGroup& param);

private:
    std::ostream& out;
    int indent_step;
    int current_indent = 0;

    void indent();
    void dedent();
    void print_location(Node* node);
};

} // namespace ZedLang
