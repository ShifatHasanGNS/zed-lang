CXX          = g++
CXXFLAGS     = -std=c++17 -g -Wall -Wextra
CXXFLAGS_GEN = -std=c++17 -g -w

FLEX  = flex
BISON = bison

BUILD   = build
GEN_DIR = src/flex_bison

INCFLAGS = -Isrc -Isrc/driver -Isrc/frontend -Isrc/sema \
           -Isrc/codegen -Isrc/support -Isrc/runtime -Isrc/flex_bison

# Hand-written objects
OBJS = \
    $(BUILD)/main.o \
    $(BUILD)/driver/build_cmd.o \
    $(BUILD)/support/error.o \
    $(BUILD)/frontend/ast_printer.o \
    $(BUILD)/frontend/token.o \
    $(BUILD)/sema/types.o \
    $(BUILD)/sema/scope.o \
    $(BUILD)/sema/symtable.o \
    $(BUILD)/sema/type_checker.o \
    $(BUILD)/codegen/c_emitter.o \
    $(BUILD)/codegen/codegen.o \
    $(BUILD)/flex_bison/parser.o \
    $(BUILD)/flex_bison/lexer.o

# Generated files
GEN_PARSER_CPP = $(GEN_DIR)/parser.cpp
GEN_PARSER_HPP = $(GEN_DIR)/parser.tab.hpp
GEN_LEXER_CPP  = $(GEN_DIR)/lexer.cpp
GEN_LEXER_H    = $(GEN_DIR)/lexer.h

TARGET = zed

.PHONY: all clean distclean test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCFLAGS) -o $@ $^

# ---- Code generation --------------------------------------------------------

$(GEN_PARSER_CPP) $(GEN_PARSER_HPP): src/frontend/parser.y
	@mkdir -p $(GEN_DIR)
	$(BISON) -d --defines=$(GEN_PARSER_HPP) -o $(GEN_PARSER_CPP) $<

$(GEN_LEXER_CPP) $(GEN_LEXER_H): src/frontend/lexer.l $(GEN_PARSER_HPP) src/frontend/lexer_extra.hpp
	@mkdir -p $(GEN_DIR)
	$(FLEX) --header-file=$(GEN_LEXER_H) -o $(GEN_LEXER_CPP) $<

# ---- Hand-written objects (depend on generated headers) ---------------------

$(BUILD)/%.o: src/%.cpp $(GEN_PARSER_HPP) $(GEN_LEXER_H)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCFLAGS) -c -o $@ $<

# ---- Generated objects (warnings suppressed) --------------------------------

$(BUILD)/flex_bison/parser.o: $(GEN_PARSER_CPP)
	@mkdir -p $(BUILD)/flex_bison
	$(CXX) $(CXXFLAGS_GEN) $(INCFLAGS) -c -o $@ $<

$(BUILD)/flex_bison/lexer.o: $(GEN_LEXER_CPP)
	@mkdir -p $(BUILD)/flex_bison
	$(CXX) $(CXXFLAGS_GEN) $(INCFLAGS) -c -o $@ $<

# ---- Tests ------------------------------------------------------------------

test: all
	@echo
	@echo "////////////////////"
	@echo "--- Unit Tests ---"
	@echo "////////////////////"
	@echo
	@for f in tests/unit/*.z; do \
	    echo "  $$f"; \
	    ./$(TARGET) run release --file "$$f" || exit 1; \
	done
	@echo
	@echo "////////////////////"
	@echo "--- Module Tests ---"
	@echo "////////////////////"
	@echo
	@echo "  tests/module/main.z (multi-file)"
	@cd tests/module && ../../$(TARGET) run release --project . || exit 1
	@echo
	@echo "All Tests Passed."

# ---- Cleaning ---------------------------------------------------------------

# Removes build artifacts; src/flex_bison/ is kept (shipped with the repo).
clean:
	rm -rf $(BUILD) $(TARGET) $(TARGET).dSYM

# Also removes generated sources — requires flex+bison to rebuild.
distclean: clean
	rm -rf $(GEN_DIR)
