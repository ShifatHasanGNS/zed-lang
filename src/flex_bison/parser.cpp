/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



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
     TOK_KW_UNION = 265,
     TOK_KW_ENUM = 266,
     TOK_KW_IF = 267,
     TOK_KW_ELSE = 268,
     TOK_KW_FOR = 269,
     TOK_KW_IN = 270,
     TOK_KW_STEP = 271,
     TOK_KW_BREAK = 272,
     TOK_KW_CONTINUE = 273,
     TOK_KW_RETURN = 274,
     TOK_KW_DEFER = 275,
     TOK_KW_MATCH = 276,
     TOK_KW_CASE = 277,
     TOK_KW_WHEN = 278,
     TOK_KW_NIL = 279,
     TOK_KW_TRUE = 280,
     TOK_KW_FALSE = 281,
     TOK_KW_STRING = 282,
     TOK_KW_DYNAMIC = 283,
     TOK_KW_CAST = 284,
     TOK_KW_SIZEOF = 285,
     TOK_KW_ALIGNOF = 286,
     TOK_KW_TYPEID = 287,
     TOK_KW_LEN = 288,
     TOK_KW_CAP = 289,
     TOK_KW_APPEND = 290,
     TOK_KW_RESERVE = 291,
     TOK_KW_CLEAR = 292,
     TOK_KW_TO_CSTR = 293,
     TOK_KW_FROM_CSTR = 294,
     TOK_KW_OR_RETURN = 295,
     TOK_KW_CIMPORT = 296,
     TOK_KW_IMPORT = 297,
     TOK_DECL = 298,
     TOK_DEF = 299,
     TOK_COLON = 300,
     TOK_ARROW = 301,
     TOK_NOBODY = 302,
     TOK_HASH_ASSERT = 303,
     TOK_LPAREN = 304,
     TOK_RPAREN = 305,
     TOK_LBRACE = 306,
     TOK_RBRACE = 307,
     TOK_LBRACKET = 308,
     TOK_RBRACKET = 309,
     TOK_DOT = 310,
     TOK_DOTDOT = 311,
     TOK_DOTDOTLT = 312,
     TOK_DOTDOTEQ = 313,
     TOK_COMMA = 314,
     TOK_SEMI = 315,
     TOK_AMP = 316,
     TOK_DEREF = 317,
     TOK_NOT = 318,
     TOK_PLUS = 319,
     TOK_MINUS = 320,
     TOK_STAR = 321,
     TOK_SLASH = 322,
     TOK_PERCENT = 323,
     TOK_PIPE = 324,
     TOK_XOR = 325,
     TOK_SHL = 326,
     TOK_SHR = 327,
     TOK_EQ = 328,
     TOK_NEQ = 329,
     TOK_LT = 330,
     TOK_LEQ = 331,
     TOK_GT = 332,
     TOK_GEQ = 333,
     TOK_AND = 334,
     TOK_OR = 335,
     TOK_ASSIGN = 336,
     TOK_PLUS_ASSIGN = 337,
     TOK_MINUS_ASSIGN = 338,
     TOK_STAR_ASSIGN = 339,
     TOK_SLASH_ASSIGN = 340,
     TOK_PERCENT_ASSIGN = 341,
     TOK_AMP_ASSIGN = 342,
     TOK_PIPE_ASSIGN = 343,
     TOK_XOR_ASSIGN = 344,
     TOK_SHL_ASSIGN = 345,
     TOK_SHR_ASSIGN = 346,
     TOK_KW_PANIC = 347,
     TOK_KW_FREE = 348,
     TOK_KW_COPY = 349,
     TOK_KW_ENUM_NAME = 350,
     TOK_KW_BIT_CAST = 351,
     TOK_KW_MIN = 352,
     TOK_KW_MAX = 353,
     TOK_KW_ABS = 354,
     TOK_KW_SWAP = 355,
     TOK_KW_CLAMP = 356,
     TOK_KW_OR_ELSE = 357,
     TOK_QUESTION = 358,
     TOK_KW_VARIANT = 359,
     LOWER_THAN_ELSE = 360,
     UNARY_MINUS = 361,
     UNARY_ADDR = 362,
     POSTFIX_DEREF = 363
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
#define TOK_KW_UNION 265
#define TOK_KW_ENUM 266
#define TOK_KW_IF 267
#define TOK_KW_ELSE 268
#define TOK_KW_FOR 269
#define TOK_KW_IN 270
#define TOK_KW_STEP 271
#define TOK_KW_BREAK 272
#define TOK_KW_CONTINUE 273
#define TOK_KW_RETURN 274
#define TOK_KW_DEFER 275
#define TOK_KW_MATCH 276
#define TOK_KW_CASE 277
#define TOK_KW_WHEN 278
#define TOK_KW_NIL 279
#define TOK_KW_TRUE 280
#define TOK_KW_FALSE 281
#define TOK_KW_STRING 282
#define TOK_KW_DYNAMIC 283
#define TOK_KW_CAST 284
#define TOK_KW_SIZEOF 285
#define TOK_KW_ALIGNOF 286
#define TOK_KW_TYPEID 287
#define TOK_KW_LEN 288
#define TOK_KW_CAP 289
#define TOK_KW_APPEND 290
#define TOK_KW_RESERVE 291
#define TOK_KW_CLEAR 292
#define TOK_KW_TO_CSTR 293
#define TOK_KW_FROM_CSTR 294
#define TOK_KW_OR_RETURN 295
#define TOK_KW_CIMPORT 296
#define TOK_KW_IMPORT 297
#define TOK_DECL 298
#define TOK_DEF 299
#define TOK_COLON 300
#define TOK_ARROW 301
#define TOK_NOBODY 302
#define TOK_HASH_ASSERT 303
#define TOK_LPAREN 304
#define TOK_RPAREN 305
#define TOK_LBRACE 306
#define TOK_RBRACE 307
#define TOK_LBRACKET 308
#define TOK_RBRACKET 309
#define TOK_DOT 310
#define TOK_DOTDOT 311
#define TOK_DOTDOTLT 312
#define TOK_DOTDOTEQ 313
#define TOK_COMMA 314
#define TOK_SEMI 315
#define TOK_AMP 316
#define TOK_DEREF 317
#define TOK_NOT 318
#define TOK_PLUS 319
#define TOK_MINUS 320
#define TOK_STAR 321
#define TOK_SLASH 322
#define TOK_PERCENT 323
#define TOK_PIPE 324
#define TOK_XOR 325
#define TOK_SHL 326
#define TOK_SHR 327
#define TOK_EQ 328
#define TOK_NEQ 329
#define TOK_LT 330
#define TOK_LEQ 331
#define TOK_GT 332
#define TOK_GEQ 333
#define TOK_AND 334
#define TOK_OR 335
#define TOK_ASSIGN 336
#define TOK_PLUS_ASSIGN 337
#define TOK_MINUS_ASSIGN 338
#define TOK_STAR_ASSIGN 339
#define TOK_SLASH_ASSIGN 340
#define TOK_PERCENT_ASSIGN 341
#define TOK_AMP_ASSIGN 342
#define TOK_PIPE_ASSIGN 343
#define TOK_XOR_ASSIGN 344
#define TOK_SHL_ASSIGN 345
#define TOK_SHR_ASSIGN 346
#define TOK_KW_PANIC 347
#define TOK_KW_FREE 348
#define TOK_KW_COPY 349
#define TOK_KW_ENUM_NAME 350
#define TOK_KW_BIT_CAST 351
#define TOK_KW_MIN 352
#define TOK_KW_MAX 353
#define TOK_KW_ABS 354
#define TOK_KW_SWAP 355
#define TOK_KW_CLAMP 356
#define TOK_KW_OR_ELSE 357
#define TOK_QUESTION 358
#define TOK_KW_VARIANT 359
#define LOWER_THAN_ELSE 360
#define UNARY_MINUS 361
#define UNARY_ADDR 362
#define POSTFIX_DEREF 363




/* Copy the first part of user declarations.  */
#line 1 "src/frontend/parser.y"

#include "../frontend/ast.hpp"
#include "../frontend/token.hpp"
#include "../frontend/lexer_extra.hpp"   // defines yyscan_t and LexerExtra at global scope

#include "../support/error.hpp"

#include "../flex_bison/parser.tab.hpp"
#include "../flex_bison/lexer.h"

#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

using namespace ZedLang;

inline void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg);

inline static SourceRange to_sourcerange(YYLTYPE loc, const char* filename) {
    return SourceRange(
        SourceLoc(filename, loc.first_line, loc.first_column),
        SourceLoc(filename, loc.last_line, loc.last_column)
    );
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 39 "src/frontend/parser.y"
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
    std::string*     str_val;
    std::vector<std::pair<ZedLang::Expr*, ZedLang::BlockStmt*>>* else_if_list;
    ZedLang::MatchCase*                          match_case;
    std::vector<ZedLang::MatchCase>*             match_case_list;
    ZedLang::EnumVariantAST*                     enum_variant;
    std::vector<ZedLang::EnumVariantAST>*        enum_variant_list;
}
/* Line 193 of yacc.c.  */
#line 377 "src/flex_bison/parser.cpp"
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


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 402 "src/flex_bison/parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNRULES -- Number of states.  */
#define YYNSTATES  593

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    29,    32,    35,    42,    48,    55,
      61,    65,    69,    73,    79,    85,    89,    93,    97,   103,
     109,   113,   117,   124,   125,   128,   131,   136,   141,   145,
     147,   151,   153,   155,   157,   159,   161,   163,   165,   167,
     169,   171,   173,   175,   177,   179,   181,   183,   185,   187,
     189,   191,   193,   201,   209,   219,   229,   241,   253,   265,
     277,   278,   280,   282,   286,   290,   293,   297,   301,   307,
     310,   312,   314,   316,   318,   320,   322,   324,   329,   331,
     333,   336,   341,   346,   351,   355,   359,   363,   367,   371,
     373,   375,   379,   384,   391,   392,   394,   396,   400,   403,
     405,   407,   409,   411,   413,   415,   417,   419,   421,   423,
     425,   427,   429,   431,   433,   439,   440,   446,   447,   450,
     453,   457,   462,   468,   476,   486,   494,   504,   510,   518,
     528,   540,   550,   562,   570,   580,   583,   589,   590,   593,
     597,   602,   610,   613,   616,   622,   623,   629,   630,   633,
     640,   641,   644,   647,   652,   654,   657,   659,   662,   665,
     668,   672,   676,   680,   684,   688,   692,   696,   700,   704,
     706,   709,   711,   714,   716,   718,   722,   726,   730,   734,
     738,   742,   746,   750,   754,   758,   762,   766,   770,   771,
     774,   776,   778,   784,   786,   792,   794,   798,   800,   804,
     806,   810,   812,   814,   816,   818,   820,   822,   824,   828,
     830,   834,   836,   840,   842,   846,   848,   850,   852,   856,
     858,   860,   862,   866,   868,   870,   872,   875,   878,   881,
     883,   885,   889,   893,   898,   905,   912,   917,   922,   925,
     928,   932,   934,   936,   938,   940,   942,   944,   946,   948,
     950,   954,   956,   958,   960,   962,   968,   976,   986,   991,
     996,  1001,  1006,  1010,  1015,  1020,  1025,  1030,  1035,  1040,
    1045,  1050,  1055,  1060,  1067,  1072,  1079,  1086,  1091,  1098,
    1107,  1108,  1110,  1112,  1114,  1118,  1122,  1127,  1133,  1141,
    1142,  1144,  1146,  1150,  1153,  1157,  1161,  1167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     110,     0,    -1,   111,     0,    -1,    -1,   111,   112,    -1,
     116,    -1,   117,    -1,   118,    -1,   115,    -1,   126,    -1,
     154,    -1,   113,    -1,   114,    -1,    48,   168,    -1,    41,
       6,    -1,    42,     6,    -1,   125,    44,    10,    51,   119,
      52,    -1,   125,    44,    10,    51,    52,    -1,   125,    44,
     104,    51,   119,    52,    -1,   125,    44,   104,    51,    52,
      -1,     7,    43,   168,    -1,     7,    43,   192,    -1,     7,
      45,   131,    -1,     7,    45,   131,    81,   168,    -1,     7,
      45,   131,    81,   192,    -1,   124,    43,   168,    -1,   124,
      43,   192,    -1,   124,    45,   131,    -1,   124,    45,   131,
      81,   168,    -1,   124,    45,   131,    81,   192,    -1,   125,
      44,   168,    -1,   125,    44,   192,    -1,   125,    44,     9,
      51,   119,    52,    -1,    -1,   119,   120,    -1,   119,   121,
      -1,   122,    45,   131,    59,    -1,   122,    45,   131,    60,
      -1,   122,    45,   131,    -1,   123,    -1,   122,    59,   123,
      -1,     7,    -1,   124,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,     7,
      -1,   124,    -1,   125,    44,     8,    49,   127,    50,   166,
      -1,   125,    44,     8,    49,   127,    50,    47,    -1,   125,
      44,     8,    49,   127,    50,    46,   131,   166,    -1,   125,
      44,     8,    49,   127,    50,    46,   131,    47,    -1,   125,
      44,     8,    49,   127,    50,    46,    49,   141,    50,   166,
      -1,   125,    44,     8,    49,   127,    50,    46,    49,   141,
      50,    47,    -1,   125,    44,     8,    49,   127,    50,    46,
      49,   130,    50,   166,    -1,   125,    44,     8,    49,   127,
      50,    46,    49,   130,    50,    47,    -1,    -1,   128,    -1,
     129,    -1,   128,    59,   129,    -1,   128,    59,    56,    -1,
     128,    59,    -1,   122,    45,   131,    -1,     7,    45,   131,
      -1,   130,    59,     7,    45,   131,    -1,   130,    59,    -1,
     134,    -1,   135,    -1,   136,    -1,   138,    -1,   139,    -1,
     132,    -1,   133,    -1,    53,    28,    54,   131,    -1,    27,
      -1,     7,    -1,    66,   131,    -1,    53,     3,    54,   131,
      -1,    53,     7,    54,   131,    -1,    53,   137,    54,   131,
      -1,   137,    66,   137,    -1,   137,    64,   137,    -1,   137,
      65,   137,    -1,   137,    67,   137,    -1,   137,    68,   137,
      -1,     3,    -1,     7,    -1,    53,    54,   131,    -1,     8,
      49,   140,    50,    -1,     8,    49,   140,    50,    46,   131,
      -1,    -1,   141,    -1,   131,    -1,   141,    59,   131,    -1,
     141,    59,    -1,   116,    -1,   117,    -1,   143,    -1,   146,
      -1,   158,    -1,   160,    -1,   161,    -1,   163,    -1,   164,
      -1,   165,    -1,   147,    -1,   148,    -1,   151,    -1,   157,
      -1,   166,    -1,    12,   169,   166,   144,   145,    -1,    -1,
     144,    13,    12,   169,   166,    -1,    -1,    13,   166,    -1,
      14,   166,    -1,    14,   169,   166,    -1,     7,    45,    14,
     166,    -1,     7,    45,    14,   169,   166,    -1,    14,     7,
      15,   168,    57,   169,   166,    -1,    14,     7,    15,   168,
      57,   168,    16,   169,   166,    -1,    14,     7,    15,   168,
      58,   169,   166,    -1,    14,     7,    15,   168,    58,   168,
      16,   169,   166,    -1,    14,     7,    15,   168,   166,    -1,
      14,     7,    59,     7,    15,   168,   166,    -1,     7,    45,
      14,     7,    15,   168,    57,   169,   166,    -1,     7,    45,
      14,     7,    15,   168,    57,   168,    16,   169,   166,    -1,
       7,    45,    14,     7,    15,   168,    58,   169,   166,    -1,
       7,    45,    14,     7,    15,   168,    58,   168,    16,   169,
     166,    -1,     7,    45,    14,     7,    15,   168,   166,    -1,
       7,    45,    14,     7,    59,     7,    15,   168,   166,    -1,
      20,   168,    -1,    21,   169,    51,   149,    52,    -1,    -1,
     149,   150,    -1,    22,   169,   166,    -1,    22,    55,     7,
     166,    -1,    22,    55,     7,    49,     7,    50,   166,    -1,
      22,   166,    -1,    13,   166,    -1,    23,   169,   166,   152,
     153,    -1,    -1,   152,    13,    23,   169,   166,    -1,    -1,
      13,   166,    -1,   125,    44,    11,    51,   155,    52,    -1,
      -1,   155,   156,    -1,     7,    59,    -1,     7,    81,   168,
      59,    -1,     7,    -1,    48,   168,    -1,    19,    -1,    19,
     162,    -1,    19,   168,    -1,    19,   192,    -1,   168,    59,
     168,    -1,   159,    59,   168,    -1,   162,    43,   168,    -1,
     162,    43,   192,    -1,   162,    43,   159,    -1,   162,    81,
     168,    -1,   162,    81,   159,    -1,   168,    59,   168,    -1,
     162,    59,   168,    -1,    17,    -1,    17,     7,    -1,    18,
      -1,    18,     7,    -1,   168,    -1,   192,    -1,   168,    81,
     168,    -1,   168,    81,   192,    -1,   168,    82,   168,    -1,
     168,    83,   168,    -1,   168,    84,   168,    -1,   168,    85,
     168,    -1,   168,    86,   168,    -1,   168,    87,   168,    -1,
     168,    88,   168,    -1,   168,    89,   168,    -1,   168,    90,
     168,    -1,   168,    91,   168,    -1,    51,   167,    52,    -1,
      -1,   167,   142,    -1,   170,    -1,   188,    -1,   170,   103,
     168,    45,   168,    -1,   170,    -1,   170,   103,   168,    45,
     169,    -1,   171,    -1,   170,    80,   171,    -1,   172,    -1,
     171,    79,   172,    -1,   174,    -1,   174,   173,   174,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,   175,    -1,   174,    69,   175,    -1,   176,    -1,
     175,    70,   176,    -1,   177,    -1,   176,    61,   177,    -1,
     179,    -1,   177,   178,   179,    -1,    71,    -1,    72,    -1,
     181,    -1,   179,   180,   181,    -1,    64,    -1,    65,    -1,
     183,    -1,   181,   182,   183,    -1,    66,    -1,    67,    -1,
      68,    -1,    65,   183,    -1,    63,   183,    -1,    61,   183,
      -1,   184,    -1,   185,    -1,   184,    55,     7,    -1,   184,
      55,   124,    -1,   184,    53,   168,    54,    -1,   184,    53,
     168,    57,   168,    54,    -1,   184,    53,   168,    58,   168,
      54,    -1,   184,    53,    45,    54,    -1,   184,    49,   190,
      50,    -1,   184,    62,    -1,   184,    40,    -1,   184,   102,
     183,    -1,     3,    -1,     4,    -1,     5,    -1,    25,    -1,
      26,    -1,    24,    -1,     6,    -1,     7,    -1,   196,    -1,
      49,   168,    50,    -1,   187,    -1,   189,    -1,   186,    -1,
     124,    -1,     8,    49,   127,    50,   166,    -1,     8,    49,
     127,    50,    46,   131,   166,    -1,     8,    49,   127,    50,
      46,    49,   141,    50,   166,    -1,    30,    49,   131,    50,
      -1,    30,    49,   168,    50,    -1,    31,    49,   131,    50,
      -1,    32,    49,   131,    50,    -1,    51,   191,    52,    -1,
      51,   191,    59,    52,    -1,    35,    49,   191,    50,    -1,
      33,    49,   168,    50,    -1,    34,    49,   168,    50,    -1,
      36,    49,   191,    50,    -1,    37,    49,   168,    50,    -1,
      38,    49,   168,    50,    -1,    39,    49,   168,    50,    -1,
      92,    49,   168,    50,    -1,    93,    49,   168,    50,    -1,
      94,    49,   168,    59,   168,    50,    -1,    95,    49,   168,
      50,    -1,    97,    49,   168,    59,   168,    50,    -1,    98,
      49,   168,    59,   168,    50,    -1,    99,    49,   168,    50,
      -1,   100,    49,   168,    59,   168,    50,    -1,   101,    49,
     168,    59,   168,    59,   168,    50,    -1,    -1,   191,    -1,
     168,    -1,   192,    -1,   191,    59,   168,    -1,   191,    59,
     192,    -1,     7,    51,   193,    52,    -1,     7,    51,    56,
     168,    52,    -1,     7,    51,    56,   168,    59,   193,    52,
      -1,    -1,   194,    -1,   195,    -1,   194,    59,   195,    -1,
     194,    59,    -1,     7,    81,   168,    -1,     7,    81,   192,
      -1,    29,    49,   131,    50,   183,    -1,    96,    49,   131,
      50,   183,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   292,   292,   303,   304,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   324,   333,   343,   349,   356,   362,
     379,   381,   383,   385,   387,   390,   392,   394,   396,   398,
     403,   409,   418,   428,   429,   430,   436,   443,   454,   466,
     472,   484,   485,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     513,   514,   519,   527,   535,   543,   552,   559,   569,   586,
     606,   607,   611,   617,   623,   631,   639,   653,   662,   671,
     680,   681,   682,   683,   684,   685,   686,   690,   698,   706,
     715,   723,   728,   734,   744,   745,   746,   747,   748,   749,
     750,   754,   764,   771,   781,   782,   786,   791,   796,   803,
     808,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   830,   842,   843,   851,   852,   868,
     873,   882,   888,   895,   901,   908,   914,   921,   928,   935,
     941,   947,   953,   960,   966,   975,   983,   991,   992,   996,
    1002,  1012,  1023,  1029,  1038,  1047,  1048,  1053,  1054,  1058,
    1066,  1067,  1071,  1076,  1081,  1092,  1100,  1105,  1111,  1116,
    1127,  1133,  1142,  1156,  1170,  1189,  1195,  1205,  1211,  1219,
    1224,  1233,  1238,  1247,  1252,  1257,  1262,  1267,  1269,  1271,
    1273,  1275,  1277,  1279,  1281,  1283,  1285,  1290,  1299,  1300,
    1305,  1306,  1307,  1318,  1319,  1327,  1328,  1336,  1337,  1345,
    1346,  1354,  1355,  1356,  1357,  1358,  1359,  1363,  1364,  1372,
    1373,  1381,  1382,  1390,  1391,  1399,  1400,  1404,  1405,  1413,
    1414,  1418,  1419,  1427,  1428,  1429,  1433,  1438,  1443,  1448,
    1452,  1454,  1460,  1467,  1472,  1477,  1482,  1487,  1494,  1499,
    1504,  1512,  1517,  1522,  1527,  1532,  1537,  1542,  1548,  1554,
    1556,  1560,  1561,  1562,  1563,  1576,  1583,  1590,  1600,  1605,
    1610,  1615,  1623,  1629,  1638,  1644,  1649,  1654,  1660,  1665,
    1670,  1675,  1680,  1685,  1690,  1695,  1700,  1705,  1710,  1715,
    1723,  1724,  1728,  1733,  1738,  1743,  1752,  1760,  1766,  1776,
    1777,  1784,  1790,  1796,  1803,  1811,  1822,  1827
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"integer literal\"",
  "\"float literal\"", "\"boolean literal\"", "\"string literal\"",
  "\"identifier\"", "\"proc\"", "\"struct\"", "\"union\"", "\"enum\"",
  "\"if\"", "\"else\"", "\"for\"", "\"in\"", "\"step\"", "\"break\"",
  "\"continue\"", "\"return\"", "\"defer\"", "\"match\"", "\"case\"",
  "\"when\"", "\"nil\"", "\"true\"", "\"false\"", "\"string\"",
  "\"dynamic\"", "\"cast\"", "\"sizeof\"", "\"alignof\"", "\"typeid\"",
  "\"len\"", "\"cap\"", "\"append\"", "\"reserve\"", "\"clear\"",
  "\"to_cstr\"", "\"from_cstr\"", "\"or_return\"", "\"cimport\"",
  "\"import\"", "\"':='\"", "\"'::'\"", "\"':'\"", "\"'->'\"", "\"'---'\"",
  "\"'#assert'\"", "\"'('\"", "\"')'\"", "\"'{'\"", "\"'}'\"", "\"'['\"",
  "\"']'\"", "\"'.'\"", "\"'..'\"", "\"'..<'\"", "\"'..='\"", "\"','\"",
  "\"';'\"", "\"'&'\"", "\"'.*'\"", "\"'!'\"", "\"'+'\"", "\"'-'\"",
  "\"'*'\"", "\"'/'\"", "\"'%'\"", "\"'|'\"", "\"'^'\"", "\"'<<'\"",
  "\"'>>'\"", "\"'=='\"", "\"'!='\"", "\"'<'\"", "\"'<='\"", "\"'>'\"",
  "\"'>='\"", "\"'&&'\"", "\"'||'\"", "\"'='\"", "\"'+='\"", "\"'-='\"",
  "\"'*='\"", "\"'/='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"", "\"'^='\"",
  "\"'<<='\"", "\"'>>='\"", "\"panic\"", "\"free\"", "\"copy\"",
  "\"enum_name\"", "\"bit_cast\"", "\"min\"", "\"max\"", "\"abs\"",
  "\"swap\"", "\"clamp\"", "\"or_else\"", "\"'?'\"", "\"variant\"",
  "LOWER_THAN_ELSE", "UNARY_MINUS", "UNARY_ADDR", "POSTFIX_DEREF",
  "$accept", "program", "top_decl_list", "top_decl", "cimport_decl",
  "import_decl", "union_decl", "var_decl", "const_decl", "struct_decl",
  "field_group_list", "field_group", "field_group_last", "ident_list",
  "soft_ident", "kw_ident", "decl_name", "proc_decl", "opt_param_list",
  "param_list", "param_group", "named_ret_list", "type", "dyn_array_type",
  "string_type", "named_type", "ptr_type", "array_type", "array_size_expr",
  "slice_type", "proc_type", "opt_type_list", "type_list", "stmt",
  "if_stmt", "else_if_chain", "else_block", "for_stmt", "defer_stmt",
  "match_stmt", "match_case_list", "match_case", "when_stmt",
  "when_else_chain", "when_else_block", "enum_decl", "enum_variant_list",
  "enum_variant", "hash_assert_stmt", "return_stmt", "tuple_lit",
  "multi_decl_stmt", "multi_assign_stmt", "multi_ret_expr_list",
  "break_stmt", "continue_stmt", "expr_stmt", "block", "stmt_list", "expr",
  "expr_no_struct", "expr_or", "expr_and", "expr_cmp", "cmp_op",
  "expr_bitor", "expr_bitxor", "expr_bitand", "expr_shift", "shift_op",
  "expr_add", "add_op", "expr_mul", "mul_op", "expr_unary", "expr_postfix",
  "expr_primary", "proc_lit_expr", "sizeof_expr", "array_init_expr",
  "builtin_call_expr", "opt_arg_list", "arg_list", "struct_lit",
  "field_init_list", "field_init_list_commas", "field_init", "cast_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   114,   115,   115,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   119,   119,   120,   120,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   130,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   132,   133,   134,
     135,   136,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   138,   139,   139,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   144,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   148,   149,   149,   150,
     150,   150,   150,   150,   151,   152,   152,   153,   153,   154,
     155,   155,   156,   156,   156,   157,   158,   158,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   167,   167,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   173,   173,   173,   173,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   183,   183,   183,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   186,   186,   187,   187,
     187,   187,   188,   188,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   194,   195,   195,   196,   196
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     6,     5,     6,     5,
       3,     3,     3,     5,     5,     3,     3,     3,     5,     5,
       3,     3,     6,     0,     2,     2,     4,     4,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     9,     9,    11,    11,    11,    11,
       0,     1,     1,     3,     3,     2,     3,     3,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       2,     4,     4,     4,     3,     3,     3,     3,     3,     1,
       1,     3,     4,     6,     0,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     0,     5,     0,     2,     2,
       3,     4,     5,     7,     9,     7,     9,     5,     7,     9,
      11,     9,    11,     7,     9,     2,     5,     0,     2,     3,
       4,     7,     2,     2,     5,     0,     5,     0,     2,     6,
       0,     2,     2,     4,     1,     2,     1,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     2,
       1,     1,     5,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     2,     2,     2,     1,
       1,     3,     3,     4,     6,     6,     4,     4,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     7,     9,     4,     4,
       4,     4,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     6,     6,     4,     6,     8,
       0,     1,     1,     1,     3,     3,     4,     5,     7,     0,
       1,     1,     3,     2,     3,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     2,    60,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     4,    11,    12,     8,
       5,     6,     7,    61,     0,     9,    10,     0,     0,    14,
      15,   251,   252,   253,   257,   258,     0,   256,   254,   255,
       0,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   264,    13,   200,   205,
     207,   209,   217,   219,   221,   223,   227,   231,   239,   240,
     263,   261,   201,   262,   259,     0,     0,     0,   258,    20,
      21,    89,     0,    88,     0,     0,    22,    85,    86,    80,
      81,    82,    83,    84,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,     0,   293,
     238,   237,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,   212,   213,
     214,   215,   216,     0,     0,     0,   225,   226,     0,   229,
     230,     0,   233,   234,   235,     0,   249,   290,     0,     0,
     248,     0,    25,    26,    27,     0,     0,     0,     0,     0,
      30,    31,   299,   104,    99,   100,     0,     0,     0,    90,
       0,    41,     0,    39,    42,     0,    71,    72,     0,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,     0,   208,   218,   210,
     220,   222,   224,   228,   232,     0,   291,     0,     0,   241,
     242,   250,     0,    70,    33,    33,   160,    33,     0,     0,
       0,   300,   301,   106,     0,   105,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,    23,    24,     0,     0,
       0,    75,     0,    70,   268,   269,   270,   271,   275,   276,
     274,     0,   277,   278,   279,   280,   273,   294,   295,   281,
     282,     0,   284,     0,     0,     0,   287,     0,     0,     0,
     247,   246,   243,     0,     0,    28,    29,     0,     0,    17,
       0,     0,    19,     0,     0,     0,   296,   303,   102,   108,
      91,    92,    87,    93,    99,   100,    95,    96,    94,    97,
      98,    76,    40,     0,   198,   265,    74,    73,   306,    41,
       0,   307,     0,     0,     0,     0,   202,     0,     0,     0,
      32,    34,    35,     0,    16,   164,   159,   161,    18,   304,
     305,   297,   299,   302,     0,   107,     0,     0,     0,   283,
     285,   286,   288,     0,   244,   245,     0,    63,   265,     0,
     162,     0,     0,   103,     0,   266,   258,     0,     0,   179,
     181,   166,     0,     0,     0,     0,   198,   197,   109,   110,
     264,     0,   199,   111,   112,   119,   120,   121,   122,   113,
     114,   115,     0,   116,   117,   118,   123,   183,   184,     0,
       0,     0,    38,     0,   298,     0,     0,     0,   203,   258,
     129,     0,   180,   182,   167,   168,   169,   145,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   289,    89,     0,
       0,    65,   266,    36,    37,   163,   267,     0,   125,     0,
       0,     0,   130,   147,   155,   174,   172,   173,   178,   176,
     175,   177,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,    79,     0,   258,   131,
       0,   127,     0,     0,     0,     0,   157,     0,     0,    77,
      69,    68,     0,    67,   267,     0,     0,   132,     0,   124,
       0,     0,     0,   137,     0,     0,     0,   146,   148,     0,
     154,   171,   170,     0,     0,     0,     0,   128,   204,     0,
       0,   200,     0,     0,     0,   153,     0,   152,     0,     0,
     158,    78,     0,     0,   143,     0,     0,     0,   133,     0,
       0,   135,   138,     0,   149,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,   150,   156,     0,   139,
       0,   141,   144,   134,     0,   136,     0,     0,     0,     0,
     140,   142,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    28,    29,    30,    31,    32,
     308,   351,   352,   192,   193,    76,    34,    35,   195,   196,
     197,   459,   253,   107,   108,   109,   110,   111,   188,   112,
     113,   254,   255,   402,   403,   501,   519,   404,   405,   406,
     505,   528,   407,   506,   530,    36,   311,   357,   408,   409,
     475,   410,   411,   412,   413,   414,   415,   335,   368,   127,
     538,    78,    79,    80,   153,    81,    82,    83,    84,   158,
      85,   161,    86,   165,    87,    88,    89,    90,    91,    92,
      93,   235,   128,   129,   250,   251,   252,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -365
static const yytype_int16 yypact[] =
{
    -365,    11,   563,  -365,  -365,    38,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,    65,    93,  1172,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,   170,    49,  -365,  -365,  1250,    34,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,    -5,  -365,  -365,  -365,
      62,    68,   116,   135,   141,   168,   169,   187,   212,   215,
     219,  1172,  1250,  1484,  1484,  1484,   220,   221,   222,   223,
     229,   232,   238,   241,   243,   245,  -365,  -365,   -67,   131,
    -365,   147,   193,   235,    84,   109,   177,  -365,   -39,  -365,
    -365,  -365,  -365,  -365,  -365,  1250,    34,   522,   246,  -365,
    -365,  -365,   249,  -365,    42,    34,   224,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  1623,    34,   860,    34,    34,  1172,
    1172,  1250,  1250,  1172,  1172,  1172,   250,  -365,    55,  -365,
    -365,  -365,  -365,  1172,  1172,  1172,  1172,    34,  1172,  1172,
    1172,  1172,  1172,  1484,  1172,  1484,  1484,  -365,  -365,  -365,
    -365,  -365,  -365,  1484,  1484,  1484,  -365,  -365,  1484,  -365,
    -365,  1484,  -365,  -365,  -365,  1484,  -365,  1250,   938,  1633,
    -365,  1484,  -365,  -365,   225,   252,   251,   253,   256,   257,
    -365,  -365,    -3,    34,   260,   262,   263,    34,   103,  -365,
    1250,  -365,    30,  -365,  -365,   270,   244,  -365,   271,   272,
     274,   276,   277,   278,   279,   281,   283,   -42,    47,   284,
     287,   289,  -365,  -365,  1016,   293,   294,   265,   295,   297,
     292,   296,   298,   300,   301,   131,   307,  -365,   193,   285,
     235,    84,   109,   177,  -365,   306,   302,   303,   144,  -365,
    -365,  -365,  1250,  1623,  -365,   310,  -365,   312,   290,  1172,
     313,   309,  -365,  -365,   320,   315,    34,    34,    34,  -365,
      34,    26,    26,    26,    26,    26,  -365,  -365,    34,  1623,
     134,  1517,  1484,  1504,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  1250,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  1172,  -365,  1484,  1172,  1172,  -365,  1172,  1172,  1172,
    -365,  -365,  -365,  1172,  1172,  -365,  -365,   322,   371,  -365,
    1554,    -2,  -365,  1587,  1250,    92,  -365,   368,   333,    34,
    -365,  -365,  -365,  -365,  -365,  -365,   181,   181,  -365,  -365,
    -365,  -365,  -365,    -1,  -365,  -365,  -365,  -365,  -365,   272,
     332,  -365,   334,   335,   336,   324,  -365,   337,   340,   149,
    -365,  -365,  -365,    33,  -365,   -56,  -365,  -365,  -365,  -365,
    -365,  -365,   368,  -365,    34,  -365,    34,   338,   782,  -365,
    -365,  -365,  -365,  1172,  -365,  -365,    13,  -365,   603,    34,
    -365,  1172,   343,  -365,    81,  -365,    98,  1484,  1328,   380,
     381,  1250,  1172,  1484,  1484,  1172,  1250,  -365,  -365,  -365,
     214,   353,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,    69,  -365,  -365,  -365,  -365,   431,  -365,   348,
      50,   101,   195,   341,  -365,   338,    20,   338,   -12,     0,
    -365,   338,  -365,  -365,   342,   344,  -365,  -365,   351,   338,
    -365,  1250,  1250,  1172,  1172,  1172,  1250,  1172,  1172,  1172,
    1172,  1172,  1172,  1172,  1172,  1172,  1172,  -365,   354,    87,
      88,  -365,   643,  -365,  -365,  -365,  -365,  1406,  -365,  1172,
    1172,   404,  -365,  -365,  -365,   356,   357,  -365,  -365,   356,
     357,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,    34,   158,   405,   161,    39,  -365,
     338,   406,   372,   121,   407,    63,   408,  1172,  1172,  -365,
    -365,  -365,   375,  -365,   683,  1172,   417,  -365,    23,  -365,
    1484,  1172,  1172,  -365,  1172,   338,  1094,  -365,  -365,     9,
    -365,  -365,  -365,    34,   136,   410,  1484,  -365,  -365,   426,
     338,    -8,   428,   338,   338,  -365,   438,  -365,   338,  1484,
    -365,  -365,  1172,  1172,  -365,  1172,   338,  1484,  -365,  1172,
    1484,  -365,  -365,   180,  -365,   338,   432,   338,   433,   338,
     338,  -365,   338,   411,   338,   443,  -365,  -365,  1484,  -365,
    1484,  -365,  -365,  -365,  1172,  -365,   402,   338,   338,   338,
    -365,  -365,  -365
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -365,  -365,  -365,  -365,  -365,  -365,  -365,    85,    89,  -365,
      15,  -365,  -365,  -149,   189,    22,    91,  -365,   217,  -365,
     191,  -365,    17,  -365,  -365,  -365,  -365,  -365,   -23,  -365,
    -365,  -365,  -364,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
      29,  -365,  -365,    90,  -365,  -365,  -365,  -337,  -365,   -15,
     -75,  -211,   345,   330,  -365,   323,   349,   325,   328,  -365,
     326,  -365,   319,  -365,   -26,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -103,   -28,   124,  -365,   172,  -365
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -204
static const yytype_int16 yytable[] =
{
      77,   166,   384,   380,   248,   355,   101,   102,   280,   100,
     167,     3,   378,   143,   168,   470,   169,   281,   207,   208,
     101,   102,    99,   170,    33,   381,   103,   101,   102,   324,
     385,   416,   549,   325,   467,   536,   144,   130,   131,   132,
     103,   101,   102,  -203,   114,   184,   126,   103,   366,   185,
     356,   430,   104,   249,   515,   106,   460,   458,   102,   471,
     334,   103,   420,   171,   236,   105,   104,   173,   143,   181,
     186,    39,   143,   104,   334,   268,   525,   103,   379,   105,
     172,    37,   180,    38,   462,   526,   105,   104,   466,   269,
     468,   469,   269,    97,   472,   559,   187,   282,   516,    40,
     105,   202,   474,   104,   205,   206,   281,   213,   209,   210,
     211,   115,   442,   174,   214,   527,   105,   116,   215,   216,
     217,   218,   189,   220,   221,   222,   223,   224,   443,   226,
     499,   425,   198,   201,   203,   204,   194,   495,   497,   234,
     319,    37,   -60,   426,   361,   241,   496,   319,   461,   182,
     444,   362,   334,   238,   219,   156,   157,   260,   511,   353,
     514,   353,   267,   517,   353,   117,   523,   261,   262,   263,
     264,   265,   334,   159,   160,   266,   428,   428,   521,   522,
     333,   537,   428,   428,   118,   334,   288,   334,   545,   547,
     119,   240,   550,   552,   553,   376,   377,   554,   302,   287,
     334,   303,   304,   558,   259,   510,   561,   562,   513,   334,
     145,   564,   334,    95,   306,    96,   146,   120,   121,   571,
     147,   148,   149,   150,   151,   152,   576,   305,   577,   575,
     579,   334,   581,   582,   315,   583,   122,   585,   326,   327,
     328,   329,   330,   162,   163,   164,   338,   263,   264,   265,
     590,   591,   592,   288,   463,   464,   428,    95,   -61,    96,
     310,   123,   313,   154,   124,   194,   287,   341,   125,   133,
     134,   135,   136,   320,   321,   322,   340,   323,   137,   342,
     343,   138,   344,   345,   346,   331,   360,   139,   347,   348,
     140,   194,   141,   194,   142,   194,   155,   182,   183,   359,
     212,   243,   244,   271,   245,   190,   242,   246,   247,   428,
     541,   541,   427,   431,   256,   428,   257,   258,   438,   439,
     270,   272,   -89,   273,   291,   428,   274,   275,   276,   277,
     194,   278,   194,   279,   283,   194,   365,   284,   428,   285,
     418,   541,   541,   289,   290,   292,   428,   293,   296,   428,
     367,   294,   299,   417,   146,   295,   300,   301,   419,   297,
     298,   281,   309,   436,   312,   316,   423,   428,   317,   428,
     318,   314,   349,   541,   319,   248,   435,   437,   191,   364,
     440,   383,   369,   373,   370,   371,   372,   432,   433,   334,
     400,   374,   500,   421,   375,   424,   422,   441,   457,   494,
     465,   443,   473,   445,     6,     7,     8,     9,    10,    11,
      12,   504,   512,   181,   477,   507,   508,   520,   483,   518,
     533,   529,   524,   350,   535,   555,   180,   476,   478,   480,
     481,   482,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   557,   106,   560,   563,   540,   543,   578,   580,
     586,   548,   589,   398,   502,   503,   584,   399,   332,   401,
     307,   556,   337,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   479,   565,   227,   229,   567,   569,   230,
     233,   434,   572,   231,   232,   574,   382,     0,   225,   363,
     445,     0,   531,   532,     0,   228,     0,     0,     0,     0,
     534,     0,     0,   587,     0,   588,   539,   542,     0,   544,
       0,   509,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,     0,     0,    41,    42,    43,    44,    98,
     175,   176,   177,   178,     0,     0,     0,   566,   568,     0,
     570,     0,     0,     0,   573,     0,    47,    48,    49,     0,
     551,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     4,     0,     0,     0,     0,     0,   346,
       5,    61,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,   -62,    13,    14,     0,     0,     0,     0,
     -62,    15,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -64,   -62,   -62,     0,     0,     0,     0,
     -64,   -62,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -66,   -64,   -64,     0,     0,     0,     0,
     -66,   -64,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,    41,    42,    43,    44,   386,
      46,     0,     0,     0,   387,     0,   388,     0,     0,   389,
     390,   391,   392,   393,     0,   394,    47,    48,    49,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
     395,    61,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,   199,   200,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    47,    48,    49,   103,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    62,     0,   104,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    47,    48,    49,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,   237,     0,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,    98,    46,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      47,    48,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,    62,   286,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
      49,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,   334,     0,     0,     0,   546,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      46,     0,     0,     0,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    47,    48,    49,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    98,    46,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    47,    48,    49,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,    43,    44,   429,    46,     0,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    47,    48,    49,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,   498,    46,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      47,    48,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,   334,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
      49,   339,   102,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   191,     0,     0,     0,     0,     0,
       0,   103,     0,    61,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,    63,     0,    64,     0,    65,
       6,     7,     8,     9,    10,    11,    12,   104,     0,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,   336,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     6,     7,     8,
       9,    10,    11,    12,   191,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   354,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,   358,
     239,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      15,    40,   366,    59,     7,     7,     7,     8,    50,    37,
      49,     0,   349,    80,    53,    15,    55,    59,   121,   122,
       7,     8,    37,    62,     2,    81,    27,     7,     8,     3,
     367,   368,    23,     7,    14,    12,   103,    63,    64,    65,
      27,     7,     8,    51,    49,     3,    61,    27,    49,     7,
      52,   388,    53,    56,    15,    38,   420,     7,     8,    59,
      51,    27,    49,   102,   167,    66,    53,    95,    80,    97,
      28,     6,    80,    53,    51,    45,    13,    27,    45,    66,
      95,    43,    97,    45,   421,    22,    66,    53,   425,    59,
     427,   103,    59,    44,   431,   103,    54,    50,    59,     6,
      66,   116,   439,    53,   119,   120,    59,    52,   123,   124,
     125,    49,    43,    96,    59,    52,    66,    49,   133,   134,
     135,   136,   105,   138,   139,   140,   141,   142,    59,   144,
     467,    50,   115,   116,   117,   118,   114,    50,    50,   165,
      59,    43,    44,    45,    52,   171,    59,    59,    47,    51,
      81,    59,    51,   168,   137,    71,    72,    54,   495,   308,
     497,   310,   190,   500,   313,    49,   503,    64,    65,    66,
      67,    68,    51,    64,    65,   190,   387,   388,    57,    58,
      46,   518,   393,   394,    49,    51,   214,    51,   525,   526,
      49,   169,   529,    57,    58,    46,    47,   534,    54,   214,
      51,    57,    58,   540,   187,    47,   543,   544,    47,    51,
      79,   548,    51,    43,   242,    45,    69,    49,    49,   556,
      73,    74,    75,    76,    77,    78,   563,   242,   565,    49,
     567,    51,   569,   570,   249,   572,    49,   574,   261,   262,
     263,   264,   265,    66,    67,    68,   272,    66,    67,    68,
     587,   588,   589,   281,    59,    60,   467,    43,    44,    45,
     245,    49,   247,    70,    49,   243,   281,   293,    49,    49,
      49,    49,    49,   256,   257,   258,   291,   260,    49,   294,
     295,    49,   297,   298,   299,   268,   314,    49,   303,   304,
      49,   269,    49,   271,    49,   273,    61,    51,    49,   314,
      50,    49,    51,    59,    51,    81,    81,    51,    51,   520,
     521,   522,   387,   388,    54,   526,    54,    54,   393,   394,
      50,    50,    50,    49,    59,   536,    50,    50,    50,    50,
     308,    50,   310,    50,    50,   313,   319,    50,   549,    50,
     368,   552,   553,    50,    50,    50,   557,    50,    50,   560,
     333,    59,    45,   368,    69,    59,    50,    54,   373,    59,
      59,    59,    52,   391,    52,    52,   381,   578,    59,   580,
      50,    81,    50,   584,    59,     7,   391,   392,     7,    46,
     395,   364,    50,    59,    50,    50,    50,     7,     7,    51,
     368,    54,   467,   376,    54,    52,   379,    44,    50,    45,
      59,    59,    51,    59,    33,    34,    35,    36,    37,    38,
      39,     7,     7,   441,   442,    59,    59,    45,   446,    13,
      45,    13,    15,    52,     7,    15,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,    16,   426,    16,     7,   521,   522,    16,    16,
       7,   526,    50,   368,   469,   470,    45,   368,   269,   368,
     243,   536,   271,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   444,   549,   145,   153,   552,   553,   154,
     161,   391,   557,   155,   158,   560,   362,    -1,   143,   317,
      59,    -1,   507,   508,    -1,   146,    -1,    -1,    -1,    -1,
     515,    -1,    -1,   578,    -1,   580,   521,   522,    -1,   524,
      -1,   494,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,   552,   553,    -1,
     555,    -1,    -1,    -1,   559,    -1,    24,    25,    26,    -1,
     533,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,     0,    -1,    -1,    -1,    -1,    -1,   584,
       7,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,     0,    41,    42,    -1,    -1,    -1,    -1,
       7,    48,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,     0,    41,    42,    -1,    -1,    -1,    -1,
       7,    48,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,     0,    41,    42,    -1,    -1,    -1,    -1,
       7,    48,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    24,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    24,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    24,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    24,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    24,    25,
      26,     7,     8,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    61,    -1,    63,    -1,    65,
      33,    34,    35,    36,    37,    38,    39,    53,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    56,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    33,    34,    35,
      36,    37,    38,    39,     7,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    52,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
       7,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   110,   111,     0,     0,     7,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    48,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   112,   113,   114,   115,
     116,   117,   118,   124,   125,   126,   154,    43,    45,     6,
       6,     3,     4,     5,     6,     7,     8,    24,    25,    26,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    49,    51,    61,    63,    65,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   124,   168,   170,   171,
     172,   174,   175,   176,   177,   179,   181,   183,   184,   185,
     186,   187,   188,   189,   196,    43,    45,    44,     7,   168,
     192,     7,     8,    27,    53,    66,   131,   132,   133,   134,
     135,   136,   138,   139,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,   168,   168,   191,   192,
     183,   183,   183,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    80,   103,    79,    69,    73,    74,    75,
      76,    77,    78,   173,    70,    61,    71,    72,   178,    64,
      65,   180,    66,    67,    68,   182,    40,    49,    53,    55,
      62,   102,   168,   192,   131,     8,     9,    10,    11,   104,
     168,   192,    51,    49,     3,     7,    28,    54,   137,   131,
      81,     7,   122,   123,   124,   127,   128,   129,   131,     7,
       8,   131,   168,   131,   131,   168,   168,   191,   191,   168,
     168,   168,    50,    52,    59,   168,   168,   168,   168,   131,
     168,   168,   168,   168,   168,   171,   168,   172,   175,   174,
     176,   177,   179,   181,   183,   190,   191,    45,   168,     7,
     124,   183,    81,    49,    51,    51,    51,    51,     7,    56,
     193,   194,   195,   131,   140,   141,    54,    54,    54,   131,
      54,    64,    65,    66,    67,    68,   168,   192,    45,    59,
      50,    59,    50,    49,    50,    50,    50,    50,    50,    50,
      50,    59,    50,    50,    50,    50,    52,   168,   192,    50,
      50,    59,    50,    50,    59,    59,    50,    59,    59,    45,
      50,    54,    54,    57,    58,   168,   192,   127,   119,    52,
     119,   155,    52,   119,    81,   168,    52,    59,    50,    59,
     131,   131,   131,   131,     3,     7,   137,   137,   137,   137,
     137,   131,   123,    46,    51,   166,    56,   129,   183,     7,
     168,   183,   168,   168,   168,   168,   168,   168,   168,    50,
      52,   120,   121,   122,    52,     7,    52,   156,    52,   168,
     192,    52,    59,   195,    46,   131,    49,   131,   167,    50,
      50,    50,    50,    59,    54,    54,    46,    47,   166,    45,
      59,    81,   193,   131,   141,   166,     7,    12,    14,    17,
      18,    19,    20,    21,    23,    48,    51,    52,   116,   117,
     124,   125,   142,   143,   146,   147,   148,   151,   157,   158,
     160,   161,   162,   163,   164,   165,   166,   168,   192,   168,
      49,   131,   131,   168,    52,    50,    45,   169,   170,     7,
     166,   169,     7,     7,   162,   168,   192,   168,   169,   169,
     168,    44,    43,    59,    81,    59,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    50,     7,   130,
     141,    47,   166,    59,    60,    59,   166,    14,   166,   103,
      15,    59,   166,    51,   166,   159,   168,   192,   168,   159,
     168,   168,   168,   192,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,    45,    50,    59,    50,     7,   166,
     169,   144,   168,   168,     7,   149,   152,    59,    59,   131,
      47,   166,     7,    47,   166,    15,    59,   166,    13,   145,
      45,    57,    58,   166,    15,    13,    22,    52,   150,    13,
     153,   168,   168,    45,   168,     7,    12,   166,   169,   168,
     169,   170,   168,   169,   168,   166,    55,   166,   169,    23,
     166,   131,    57,    58,   166,    15,   169,    16,   166,   103,
      16,   166,   166,     7,   166,   169,   168,   169,   168,   169,
     168,   166,   169,   168,   169,    49,   166,   166,    16,   166,
      16,   166,   166,   166,    45,   166,     7,   169,   169,    50,
     166,   166,   166
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, scanner, err, filename, result, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, scanner, err, filename, result); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, err, filename, result)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    yyscan_t scanner;
    ErrorReporter* err;
    const char* filename;
    ZedLang::Program** result;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (err);
  YYUSE (filename);
  YYUSE (result);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, err, filename, result)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    yyscan_t scanner;
    ErrorReporter* err;
    const char* filename;
    ZedLang::Program** result;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, err, filename, result);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, scanner, err, filename, result)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    yyscan_t scanner;
    ErrorReporter* err;
    const char* filename;
    ZedLang::Program** result;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , scanner, err, filename, result);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, scanner, err, filename, result); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, scanner, err, filename, result)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    yyscan_t scanner;
    ErrorReporter* err;
    const char* filename;
    ZedLang::Program** result;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (err);
  YYUSE (filename);
  YYUSE (result);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (yyscan_t scanner, ErrorReporter* err, const char* filename, ZedLang::Program** result)
#else
int
yyparse (scanner, err, filename, result)
    yyscan_t scanner;
    ErrorReporter* err;
    const char* filename;
    ZedLang::Program** result;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 293 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 303 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 304 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 308 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 309 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 310 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 311 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 312 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 313 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 314 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 315 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 13:
#line 317 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new HashAssertTopDecl(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 14:
#line 325 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 15:
#line 334 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 16:
#line 344 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list), false);
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 17:
#line 350 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {}, false);
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 18:
#line 357 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list), true);
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 19:
#line 363 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {}, true);
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 20:
#line 380 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 21:
#line 382 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 22:
#line 384 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 23:
#line 386 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 24:
#line 388 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 25:
#line 391 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 26:
#line 393 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 27:
#line 395 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 28:
#line 397 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 29:
#line 399 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 30:
#line 404 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 31:
#line 410 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 32:
#line 419 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 33:
#line 428 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 34:
#line 429 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 35:
#line 430 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 36:
#line 437 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 37:
#line 444 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 38:
#line 455 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 39:
#line 467 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 40:
#line 473 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 41:
#line 484 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 42:
#line 485 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 43:
#line 491 "src/frontend/parser.y"
    { (yyval.str) = new std::string("len");        ;}
    break;

  case 44:
#line 492 "src/frontend/parser.y"
    { (yyval.str) = new std::string("cap");        ;}
    break;

  case 45:
#line 493 "src/frontend/parser.y"
    { (yyval.str) = new std::string("append");     ;}
    break;

  case 46:
#line 494 "src/frontend/parser.y"
    { (yyval.str) = new std::string("reserve");    ;}
    break;

  case 47:
#line 495 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clear");      ;}
    break;

  case 48:
#line 496 "src/frontend/parser.y"
    { (yyval.str) = new std::string("to_cstr");    ;}
    break;

  case 49:
#line 497 "src/frontend/parser.y"
    { (yyval.str) = new std::string("from_cstr");  ;}
    break;

  case 50:
#line 498 "src/frontend/parser.y"
    { (yyval.str) = new std::string("panic");      ;}
    break;

  case 51:
#line 499 "src/frontend/parser.y"
    { (yyval.str) = new std::string("free");       ;}
    break;

  case 52:
#line 500 "src/frontend/parser.y"
    { (yyval.str) = new std::string("copy");       ;}
    break;

  case 53:
#line 501 "src/frontend/parser.y"
    { (yyval.str) = new std::string("enum_name");  ;}
    break;

  case 54:
#line 502 "src/frontend/parser.y"
    { (yyval.str) = new std::string("bit_cast");   ;}
    break;

  case 55:
#line 503 "src/frontend/parser.y"
    { (yyval.str) = new std::string("min");        ;}
    break;

  case 56:
#line 504 "src/frontend/parser.y"
    { (yyval.str) = new std::string("max");        ;}
    break;

  case 57:
#line 505 "src/frontend/parser.y"
    { (yyval.str) = new std::string("abs");        ;}
    break;

  case 58:
#line 506 "src/frontend/parser.y"
    { (yyval.str) = new std::string("swap");       ;}
    break;

  case 59:
#line 507 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clamp");      ;}
    break;

  case 60:
#line 513 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 61:
#line 514 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 62:
#line 520 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 63:
#line 528 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 64:
#line 536 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 65:
#line 544 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 66:
#line 553 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 67:
#line 560 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 68:
#line 570 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            std::vector<std::string> ret_names;
            std::vector<Type*>       ret_types;
            for (const ParamGroup& pg : *(yyvsp[(9) - (11)].param_list)) {
                for (const std::string& nm : pg.names) {
                    ret_names.push_back(nm);
                    ret_types.push_back(pg.type);
                }
            }
            auto* pd = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, ret_types, (yyvsp[(11) - (11)].block));
            pd->return_names = ret_names;
            (yyval.decl) = pd;
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].param_list);
        ;}
    break;

  case 69:
#line 587 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            std::vector<std::string> ret_names;
            std::vector<Type*>       ret_types;
            for (const ParamGroup& pg : *(yyvsp[(9) - (11)].param_list)) {
                for (const std::string& nm : pg.names) {
                    ret_names.push_back(nm);
                    ret_types.push_back(pg.type);
                }
            }
            auto* pd = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, ret_types, nullptr);
            pd->return_names = ret_names;
            (yyval.decl) = pd;
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].param_list);
        ;}
    break;

  case 70:
#line 606 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 71:
#line 607 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 72:
#line 612 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 73:
#line 618 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 74:
#line 624 "src/frontend/parser.y"
    {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            (yyvsp[(1) - (3)].param_list)->push_back(sentinel);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 75:
#line 632 "src/frontend/parser.y"
    {
            // trailing comma: proc(a: i32, b: i32,) — ignore the trailing comma
            (yyval.param_list) = (yyvsp[(1) - (2)].param_list);
        ;}
    break;

  case 76:
#line 640 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 77:
#line 654 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(1) - (3)].str));
            pg.type = (yyvsp[(3) - (3)].type);
            (yyval.param_list)->push_back(pg);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 78:
#line 663 "src/frontend/parser.y"
    {
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(3) - (5)].str));
            pg.type = (yyvsp[(5) - (5)].type);
            (yyvsp[(1) - (5)].param_list)->push_back(pg);
            (yyval.param_list) = (yyvsp[(1) - (5)].param_list);
            delete (yyvsp[(3) - (5)].str);
        ;}
    break;

  case 79:
#line 672 "src/frontend/parser.y"
    {
            // trailing comma: (result: i32, ok: bool,) — ignore
            (yyval.param_list) = (yyvsp[(1) - (2)].param_list);
        ;}
    break;

  case 80:
#line 680 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 81:
#line 681 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 82:
#line 682 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 83:
#line 683 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 84:
#line 684 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 85:
#line 685 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 86:
#line 686 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 87:
#line 691 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 88:
#line 699 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 89:
#line 707 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 90:
#line 716 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 91:
#line 724 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 92:
#line 729 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 93:
#line 735 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 94:
#line 744 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_STAR,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 95:
#line 745 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 96:
#line 746 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 97:
#line 747 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 98:
#line 748 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 99:
#line 749 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 100:
#line 750 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); ;}
    break;

  case 101:
#line 755 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 102:
#line 765 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 103:
#line 772 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 104:
#line 781 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 105:
#line 782 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 106:
#line 787 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 107:
#line 792 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 108:
#line 797 "src/frontend/parser.y"
    {
            // trailing comma: (i32, bool,) — ignore
            (yyval.type_list) = (yyvsp[(1) - (2)].type_list);
        ;}
    break;

  case 109:
#line 804 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 110:
#line 809 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 111:
#line 813 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 112:
#line 814 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 113:
#line 815 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 114:
#line 816 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 115:
#line 817 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 116:
#line 818 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 117:
#line 819 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 118:
#line 820 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 119:
#line 821 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 120:
#line 822 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 121:
#line 823 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 122:
#line 824 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 123:
#line 825 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 124:
#line 831 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            IfStmt* ifs = new IfStmt(r, (yyvsp[(2) - (5)].expr), (yyvsp[(3) - (5)].block));
            ifs->else_ifs = *(yyvsp[(4) - (5)].else_if_list);
            ifs->else_block = (yyvsp[(5) - (5)].block);
            (yyval.stmt) = ifs;
            delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 125:
#line 842 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 126:
#line 844 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 127:
#line 851 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 128:
#line 852 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 129:
#line 869 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 130:
#line 874 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 131:
#line 883 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 132:
#line 889 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 133:
#line 896 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 134:
#line 902 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 135:
#line 909 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 136:
#line 915 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 137:
#line 922 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, "", *(yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            delete (yyvsp[(2) - (5)].str);
        ;}
    break;

  case 138:
#line 929 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, *(yyvsp[(2) - (7)].str), *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); delete (yyvsp[(4) - (7)].str);
        ;}
    break;

  case 139:
#line 936 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 140:
#line 942 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), false, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 141:
#line 948 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 142:
#line 954 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), true, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 143:
#line 961 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, "", *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            s->label = *(yyvsp[(1) - (7)].str); delete (yyvsp[(1) - (7)].str); delete (yyvsp[(4) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 144:
#line 967 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, *(yyvsp[(4) - (9)].str), *(yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].expr), (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); delete (yyvsp[(6) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 145:
#line 976 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 146:
#line 984 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 147:
#line 991 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 148:
#line 992 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 149:
#line 997 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 150:
#line 1003 "src/frontend/parser.y"
    {
            // .VARIANT shorthand — the enum type is inferred from the match value.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = new IdentExpr(r, *(yyvsp[(3) - (4)].str));
            (yyval.match_case)->body = (yyvsp[(4) - (4)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column);
            delete (yyvsp[(3) - (4)].str);
        ;}
    break;

  case 151:
#line 1013 "src/frontend/parser.y"
    {
            // .VARIANT(binding) — tagged union: case .Circle(c) { use c }
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = new IdentExpr(r, *(yyvsp[(3) - (7)].str));
            (yyval.match_case)->binding = *(yyvsp[(5) - (7)].str);
            (yyval.match_case)->body = (yyvsp[(7) - (7)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (7)]).first_line,(yylsp[(1) - (7)]).first_column);
            delete (yyvsp[(3) - (7)].str); delete (yyvsp[(5) - (7)].str);
        ;}
    break;

  case 152:
#line 1024 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 153:
#line 1030 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 154:
#line 1039 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 155:
#line 1047 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 156:
#line 1049 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 157:
#line 1053 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 158:
#line 1054 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 159:
#line 1059 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 160:
#line 1066 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 161:
#line 1067 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 162:
#line 1072 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 163:
#line 1077 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 164:
#line 1082 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 165:
#line 1093 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 166:
#line 1101 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 167:
#line 1106 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 168:
#line 1112 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 169:
#line 1117 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 170:
#line 1128 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 171:
#line 1134 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 172:
#line 1143 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<std::string> names;
            for (Expr* e : *(yyvsp[(1) - (3)].expr_list)) {
                if (auto* id = dynamic_cast<IdentExpr*>(e))
                    names.push_back(id->name);
                else
                    names.push_back("_");
                delete e;
            }
            delete (yyvsp[(1) - (3)].expr_list);
            (yyval.stmt) = new MultiDeclStmt(r, names, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 173:
#line 1157 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<std::string> names;
            for (Expr* e : *(yyvsp[(1) - (3)].expr_list)) {
                if (auto* id = dynamic_cast<IdentExpr*>(e))
                    names.push_back(id->name);
                else
                    names.push_back("_");
                delete e;
            }
            delete (yyvsp[(1) - (3)].expr_list);
            (yyval.stmt) = new MultiDeclStmt(r, names, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 174:
#line 1171 "src/frontend/parser.y"
    {
            // a, b, c := 1, "x", 3.0  — tuple literal on RHS
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<std::string> names;
            for (Expr* e : *(yyvsp[(1) - (3)].expr_list)) {
                if (auto* id = dynamic_cast<IdentExpr*>(e))
                    names.push_back(id->name);
                else
                    names.push_back("_");
                delete e;
            }
            delete (yyvsp[(1) - (3)].expr_list);
            (yyval.stmt) = new MultiDeclStmt(r, names, new TupleExpr(r, *(yyvsp[(3) - (3)].expr_list)));
            delete (yyvsp[(3) - (3)].expr_list);
        ;}
    break;

  case 175:
#line 1190 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 176:
#line 1196 "src/frontend/parser.y"
    {
            // a, b = x, y  — tuple literal on RHS (also handles swap: a,b = b,a)
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), new TupleExpr(r, *(yyvsp[(3) - (3)].expr_list)));
            delete (yyvsp[(1) - (3)].expr_list); delete (yyvsp[(3) - (3)].expr_list);
        ;}
    break;

  case 177:
#line 1206 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 178:
#line 1212 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 179:
#line 1220 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 180:
#line 1225 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 181:
#line 1234 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 182:
#line 1239 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 183:
#line 1248 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 184:
#line 1253 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 185:
#line 1258 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 186:
#line 1263 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 187:
#line 1268 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 188:
#line 1270 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 189:
#line 1272 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 190:
#line 1274 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 191:
#line 1276 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 192:
#line 1278 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 193:
#line 1280 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 194:
#line 1282 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 195:
#line 1284 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHL,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 196:
#line 1286 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 197:
#line 1291 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 198:
#line 1299 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 199:
#line 1300 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 200:
#line 1305 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 201:
#line 1306 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 202:
#line 1308 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IfExpr(r, (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr));
        ;}
    break;

  case 203:
#line 1318 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 204:
#line 1320 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IfExpr(r, (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr));
        ;}
    break;

  case 206:
#line 1329 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 208:
#line 1338 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 210:
#line 1347 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 211:
#line 1354 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 212:
#line 1355 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 213:
#line 1356 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 214:
#line 1357 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 215:
#line 1358 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 216:
#line 1359 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 218:
#line 1365 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 220:
#line 1374 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 222:
#line 1383 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 224:
#line 1392 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 225:
#line 1399 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 226:
#line 1400 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 228:
#line 1406 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 229:
#line 1413 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 230:
#line 1414 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 232:
#line 1420 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 233:
#line 1427 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 234:
#line 1428 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 235:
#line 1429 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 236:
#line 1434 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 237:
#line 1439 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 238:
#line 1444 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 240:
#line 1453 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 241:
#line 1455 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 242:
#line 1461 "src/frontend/parser.y"
    {
            // Allow soft keywords as field names: v.min, v.max, bbox.min etc.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 243:
#line 1468 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 244:
#line 1473 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 245:
#line 1478 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 246:
#line 1483 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 247:
#line 1488 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 248:
#line 1495 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 249:
#line 1500 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr), nullptr);
        ;}
    break;

  case 250:
#line 1505 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 251:
#line 1513 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 252:
#line 1518 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 253:
#line 1523 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 254:
#line 1528 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 255:
#line 1533 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 256:
#line 1538 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 257:
#line 1543 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 258:
#line 1549 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 259:
#line 1555 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 260:
#line 1557 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 261:
#line 1560 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 262:
#line 1561 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 263:
#line 1562 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 264:
#line 1564 "src/frontend/parser.y"
    {
            // Soft keyword used as a plain identifier (e.g. `len` after `len :=`).
            // When followed by '(' the builtin_call_expr alternative takes priority
            // via Bison's default shift-over-reduce preference.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 265:
#line 1577 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (5)].param_list) ? *(yyvsp[(3) - (5)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, {}, (yyvsp[(5) - (5)].block));
            delete (yyvsp[(3) - (5)].param_list);
        ;}
    break;

  case 266:
#line 1584 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (7)].param_list) ? *(yyvsp[(3) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, (yyvsp[(6) - (7)].type), {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(3) - (7)].param_list);
        ;}
    break;

  case 267:
#line 1591 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (9)].param_list) ? *(yyvsp[(3) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, *(yyvsp[(7) - (9)].type_list), (yyvsp[(9) - (9)].block));
            delete (yyvsp[(3) - (9)].param_list); delete (yyvsp[(7) - (9)].type_list);
        ;}
    break;

  case 268:
#line 1601 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 269:
#line 1606 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 270:
#line 1611 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 271:
#line 1616 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new TypeIdExpr(r, (yyvsp[(3) - (4)].type));
        ;}
    break;

  case 272:
#line 1624 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 273:
#line 1630 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 274:
#line 1639 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 275:
#line 1645 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 276:
#line 1650 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 277:
#line 1655 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 278:
#line 1661 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLEAR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 279:
#line 1666 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 280:
#line 1671 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 281:
#line 1676 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_PANIC, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 282:
#line 1681 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FREE, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 283:
#line 1686 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_COPY, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 284:
#line 1691 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ENUM_NAME, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 285:
#line 1696 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MIN, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 286:
#line 1701 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MAX, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 287:
#line 1706 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ABS, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 288:
#line 1711 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_SWAP, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 289:
#line 1716 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLAMP, {(yyvsp[(3) - (8)].expr), (yyvsp[(5) - (8)].expr), (yyvsp[(7) - (8)].expr)});
        ;}
    break;

  case 290:
#line 1723 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 291:
#line 1724 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 292:
#line 1729 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 293:
#line 1734 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 294:
#line 1739 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 295:
#line 1744 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 296:
#line 1753 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 297:
#line 1761 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 298:
#line 1767 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 299:
#line 1776 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 300:
#line 1778 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 301:
#line 1785 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 302:
#line 1791 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 303:
#line 1797 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 304:
#line 1804 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 305:
#line 1812 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 306:
#line 1823 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), false);
        ;}
    break;

  case 307:
#line 1828 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), true);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4653 "src/flex_bison/parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, err, filename, result, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, scanner, err, filename, result, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, scanner, err, filename, result, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, scanner, err, filename, result);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, scanner, err, filename, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, err, filename, result, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, scanner, err, filename, result);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, scanner, err, filename, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1834 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

