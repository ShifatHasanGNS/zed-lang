/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     TOK_INT_LIT = 258,
     TOK_FLOAT_LIT = 259,
     TOK_BOOL_LIT = 260,
     TOK_STRING_LIT = 261,
     TOK_IDENT = 262,
     TOK_KW_PROC = 263,
     TOK_KW_STRUCT = 264,
     TOK_KW_IF = 265,
     TOK_KW_ELSE = 266,
     TOK_KW_LOOP = 267,
     TOK_KW_IN = 268,
     TOK_KW_RETURN = 269,
     TOK_KW_BREAK = 270,
     TOK_KW_CONTINUE = 271,
     TOK_KW_NIL = 272,
     TOK_KW_TRUE = 273,
     TOK_KW_FALSE = 274,
     TOK_DECL = 275,
     TOK_DEF = 276,
     TOK_COLON = 277,
     TOK_ARROW = 278,
     TOK_NOBODY = 279,
     TOK_KW_CIMPORT = 280,
     TOK_KW_IMPORT = 281,
     TOK_KW_CAST = 282,
     TOK_KW_FOR = 283,
     TOK_KW_DEFER = 284,
     TOK_KW_MATCH = 285,
     TOK_KW_CASE = 286,
     TOK_KW_WHEN = 287,
     TOK_KW_ENUM = 288,
     TOK_KW_STEP = 289,
     TOK_LPAREN = 290,
     TOK_RPAREN = 291,
     TOK_LBRACE = 292,
     TOK_RBRACE = 293,
     TOK_LBRACKET = 294,
     TOK_RBRACKET = 295,
     TOK_DOT = 296,
     TOK_COMMA = 297,
     TOK_SEMI = 298,
     TOK_DOTDOTLT = 299,
     TOK_DOTDOTEQ = 300,
     TOK_AMP = 301,
     TOK_DEREF = 302,
     TOK_NOT = 303,
     TOK_PLUS = 304,
     TOK_MINUS = 305,
     TOK_STAR = 306,
     TOK_SLASH = 307,
     TOK_PERCENT = 308,
     TOK_PIPE = 309,
     TOK_SHL = 310,
     TOK_SHR = 311,
     TOK_EQ = 312,
     TOK_NEQ = 313,
     TOK_LT = 314,
     TOK_LEQ = 315,
     TOK_GT = 316,
     TOK_GEQ = 317,
     TOK_AND = 318,
     TOK_OR = 319,
     TOK_ASSIGN = 320,
     TOK_XOR = 321,
     TOK_PLUS_ASSIGN = 322,
     TOK_MINUS_ASSIGN = 323,
     TOK_STAR_ASSIGN = 324,
     TOK_SLASH_ASSIGN = 325,
     TOK_PERCENT_ASSIGN = 326,
     TOK_AMP_ASSIGN = 327,
     TOK_PIPE_ASSIGN = 328,
     TOK_XOR_ASSIGN = 329,
     TOK_INC = 330,
     TOK_DEC = 331,
     TOK_HASH_ASSERT = 332,
     TOK_DOTDOT = 333,
     TOK_KW_SIZEOF = 334,
     TOK_KW_ALIGNOF = 335,
     TOK_KW_STRING = 336,
     TOK_KW_DYNAMIC = 337,
     TOK_KW_APPEND = 338,
     TOK_KW_LEN = 339,
     TOK_KW_CAP = 340,
     TOK_KW_RESERVE = 341,
     TOK_KW_DELETE_DYN = 342,
     TOK_KW_OR_RETURN = 343,
     TOK_KW_TO_CSTR = 344,
     TOK_KW_FROM_CSTR = 345,
     LOWER_THAN_ELSE = 346,
     TOK_ELSE = 347,
     UNARY_MINUS = 348,
     UNARY_ADDR = 349,
     POSTFIX_DEREF = 350
   };
#endif
/* Tokens.  */
#define END 0
#define TOK_INT_LIT 258
#define TOK_FLOAT_LIT 259
#define TOK_BOOL_LIT 260
#define TOK_STRING_LIT 261
#define TOK_IDENT 262
#define TOK_KW_PROC 263
#define TOK_KW_STRUCT 264
#define TOK_KW_IF 265
#define TOK_KW_ELSE 266
#define TOK_KW_LOOP 267
#define TOK_KW_IN 268
#define TOK_KW_RETURN 269
#define TOK_KW_BREAK 270
#define TOK_KW_CONTINUE 271
#define TOK_KW_NIL 272
#define TOK_KW_TRUE 273
#define TOK_KW_FALSE 274
#define TOK_DECL 275
#define TOK_DEF 276
#define TOK_COLON 277
#define TOK_ARROW 278
#define TOK_NOBODY 279
#define TOK_KW_CIMPORT 280
#define TOK_KW_IMPORT 281
#define TOK_KW_CAST 282
#define TOK_KW_FOR 283
#define TOK_KW_DEFER 284
#define TOK_KW_MATCH 285
#define TOK_KW_CASE 286
#define TOK_KW_WHEN 287
#define TOK_KW_ENUM 288
#define TOK_KW_STEP 289
#define TOK_LPAREN 290
#define TOK_RPAREN 291
#define TOK_LBRACE 292
#define TOK_RBRACE 293
#define TOK_LBRACKET 294
#define TOK_RBRACKET 295
#define TOK_DOT 296
#define TOK_COMMA 297
#define TOK_SEMI 298
#define TOK_DOTDOTLT 299
#define TOK_DOTDOTEQ 300
#define TOK_AMP 301
#define TOK_DEREF 302
#define TOK_NOT 303
#define TOK_PLUS 304
#define TOK_MINUS 305
#define TOK_STAR 306
#define TOK_SLASH 307
#define TOK_PERCENT 308
#define TOK_PIPE 309
#define TOK_SHL 310
#define TOK_SHR 311
#define TOK_EQ 312
#define TOK_NEQ 313
#define TOK_LT 314
#define TOK_LEQ 315
#define TOK_GT 316
#define TOK_GEQ 317
#define TOK_AND 318
#define TOK_OR 319
#define TOK_ASSIGN 320
#define TOK_XOR 321
#define TOK_PLUS_ASSIGN 322
#define TOK_MINUS_ASSIGN 323
#define TOK_STAR_ASSIGN 324
#define TOK_SLASH_ASSIGN 325
#define TOK_PERCENT_ASSIGN 326
#define TOK_AMP_ASSIGN 327
#define TOK_PIPE_ASSIGN 328
#define TOK_XOR_ASSIGN 329
#define TOK_INC 330
#define TOK_DEC 331
#define TOK_HASH_ASSERT 332
#define TOK_DOTDOT 333
#define TOK_KW_SIZEOF 334
#define TOK_KW_ALIGNOF 335
#define TOK_KW_STRING 336
#define TOK_KW_DYNAMIC 337
#define TOK_KW_APPEND 338
#define TOK_KW_LEN 339
#define TOK_KW_CAP 340
#define TOK_KW_RESERVE 341
#define TOK_KW_DELETE_DYN 342
#define TOK_KW_OR_RETURN 343
#define TOK_KW_TO_CSTR 344
#define TOK_KW_FROM_CSTR 345
#define LOWER_THAN_ELSE 346
#define TOK_ELSE 347
#define UNARY_MINUS 348
#define UNARY_ADDR 349
#define POSTFIX_DEREF 350




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 44 "src/frontend/parser.y"
{
    /* ZedLang::Token omitted — contains std::string, illegal in C union */
    ZedLang::Decl*   decl;
    std::vector<ZedLang::Decl*>* decl_list;
    ZedLang::Stmt*   stmt;
    std::vector<ZedLang::Stmt*>* stmt_list;
    ZedLang::Expr*   expr;
    std::vector<ZedLang::Expr*>* expr_list;
    ZedLang::Type*   type;
    std::vector<ZedLang::Type*>* type_list;
    ZedLang::BlockStmt* block;
    ZedLang::VarDecl* var_decl;
    ZedLang::ConstDecl* const_decl;
    ZedLang::StructDecl* struct_decl;
    ZedLang::ProcDecl* proc_decl;
    ZedLang::Field*  field;
    std::vector<ZedLang::Field>* field_list;
    ZedLang::ParamGroup* param_group;
    std::vector<ZedLang::ParamGroup>* param_list;
    std::vector<std::string>* ident_list;
    ZedLang::FieldInit* field_init;
    std::vector<ZedLang::FieldInit>* field_init_list;
    int  op;
    uint64_t         int_val;
    double           float_val;
    bool             bool_val;
    std::string*     str;
    std::vector<std::pair<ZedLang::Expr*, ZedLang::BlockStmt*>>* else_if_list;
    ZedLang::MatchCase*                          match_case;
    std::vector<ZedLang::MatchCase>*             match_case_list;
    ZedLang::EnumVariantAST*                     enum_variant;
    std::vector<ZedLang::EnumVariantAST>*        enum_variant_list;
}
/* Line 1529 of yacc.c.  */
#line 275 "src/flex_bison/parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


