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




/* Copy the first part of user declarations.  */
#line 5 "src/frontend/parser.y"

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

// yyerror forward declaration — YYLTYPE is now defined via parser.tab.hpp.
void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg);

static SourceRange to_sourcerange(YYLTYPE loc, const char* filename) {
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
/* Line 193 of yacc.c.  */
#line 351 "src/flex_bison/parser.cpp"
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
#line 376 "src/flex_bison/parser.cpp"

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
#define YYLAST   869

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNRULES -- Number of states.  */
#define YYNSTATES  388

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

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
      95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    27,    30,    34,    38,    42,    48,    54,
      58,    62,    69,    70,    73,    78,    80,    84,    92,   100,
     110,   120,   132,   144,   145,   147,   149,   153,   157,   159,
     161,   163,   165,   167,   169,   171,   176,   178,   180,   183,
     188,   193,   197,   202,   209,   210,   212,   214,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     242,   244,   246,   248,   254,   255,   261,   262,   265,   268,
     272,   277,   283,   291,   301,   309,   319,   322,   328,   329,
     332,   336,   339,   342,   348,   349,   355,   356,   359,   366,
     367,   370,   373,   378,   380,   383,   385,   388,   391,   394,
     398,   402,   406,   410,   414,   416,   419,   421,   424,   426,
     428,   432,   436,   440,   444,   448,   452,   456,   460,   464,
     468,   471,   474,   478,   479,   482,   484,   486,   488,   492,
     494,   498,   500,   504,   506,   508,   510,   512,   514,   516,
     518,   522,   524,   528,   530,   534,   536,   540,   542,   544,
     546,   550,   552,   554,   556,   560,   562,   564,   566,   569,
     572,   575,   577,   579,   583,   588,   595,   602,   607,   612,
     615,   618,   620,   622,   624,   626,   628,   630,   632,   634,
     636,   640,   642,   644,   646,   651,   656,   661,   665,   670,
     675,   680,   685,   690,   695,   700,   705,   706,   708,   710,
     712,   716,   720,   725,   731,   739,   740,   742,   744,   748,
     751,   755
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    98,     0,    -1,    -1,    98,    99,    -1,
     102,    -1,   103,    -1,   104,    -1,   108,    -1,   134,    -1,
     100,    -1,   101,    -1,    25,     6,    -1,    26,     6,    -1,
       7,    20,   147,    -1,     7,    20,   170,    -1,     7,    22,
     112,    -1,     7,    22,   112,    65,   147,    -1,     7,    22,
     112,    65,   170,    -1,     7,    21,   147,    -1,     7,    21,
     170,    -1,     7,    21,     9,    37,   105,    38,    -1,    -1,
     105,   106,    -1,   107,    22,   112,    42,    -1,     7,    -1,
     107,    42,     7,    -1,     7,    21,     8,    35,   109,    36,
     145,    -1,     7,    21,     8,    35,   109,    36,    24,    -1,
       7,    21,     8,    35,   109,    36,    23,   112,   145,    -1,
       7,    21,     8,    35,   109,    36,    23,   112,    24,    -1,
       7,    21,     8,    35,   109,    36,    23,    35,   121,    36,
     145,    -1,     7,    21,     8,    35,   109,    36,    23,    35,
     121,    36,    24,    -1,    -1,   110,    -1,   111,    -1,   110,
      42,   111,    -1,   107,    22,   112,    -1,   115,    -1,   116,
      -1,   117,    -1,   118,    -1,   119,    -1,   113,    -1,   114,
      -1,    39,    82,    40,   112,    -1,    81,    -1,     7,    -1,
      51,   112,    -1,    39,     3,    40,   112,    -1,    39,     7,
      40,   112,    -1,    39,    40,   112,    -1,     8,    35,   120,
      36,    -1,     8,    35,   120,    36,    23,   112,    -1,    -1,
     121,    -1,   112,    -1,   121,    42,   112,    -1,   102,    -1,
     103,    -1,   123,    -1,   126,    -1,   138,    -1,   139,    -1,
     140,    -1,   142,    -1,   143,    -1,   144,    -1,   127,    -1,
     128,    -1,   131,    -1,   137,    -1,   145,    -1,    10,   148,
     145,   124,   125,    -1,    -1,   124,    11,    10,   148,   145,
      -1,    -1,    11,   145,    -1,    28,   145,    -1,    28,   148,
     145,    -1,     7,    22,    28,   145,    -1,     7,    22,    28,
     148,   145,    -1,    28,     7,    13,   147,    44,   148,   145,
      -1,    28,     7,    13,   147,    44,   147,    34,   148,   145,
      -1,    28,     7,    13,   147,    45,   148,   145,    -1,    28,
       7,    13,   147,    45,   147,    34,   148,   145,    -1,    29,
     147,    -1,    30,   148,    37,   129,    38,    -1,    -1,   129,
     130,    -1,    31,   148,   145,    -1,    31,   145,    -1,    11,
     145,    -1,    32,   148,   145,   132,   133,    -1,    -1,   132,
      11,    32,   148,   145,    -1,    -1,    11,   145,    -1,     7,
      21,    33,    37,   135,    38,    -1,    -1,   135,   136,    -1,
       7,    42,    -1,     7,    65,   147,    42,    -1,     7,    -1,
      77,   147,    -1,    14,    -1,    14,   141,    -1,    14,   147,
      -1,    14,   170,    -1,   107,    20,   147,    -1,   107,    20,
     170,    -1,   141,    65,   147,    -1,   147,    42,   147,    -1,
     141,    42,   147,    -1,    15,    -1,    15,     7,    -1,    16,
      -1,    16,     7,    -1,   147,    -1,   170,    -1,   147,    65,
     147,    -1,   147,    65,   170,    -1,   147,    67,   147,    -1,
     147,    68,   147,    -1,   147,    69,   147,    -1,   147,    70,
     147,    -1,   147,    71,   147,    -1,   147,    72,   147,    -1,
     147,    73,   147,    -1,   147,    74,   147,    -1,   147,    75,
      -1,   147,    76,    -1,    37,   146,    38,    -1,    -1,   146,
     122,    -1,   149,    -1,   149,    -1,   150,    -1,   149,    64,
     150,    -1,   151,    -1,   150,    63,   151,    -1,   153,    -1,
     153,   152,   153,    -1,    57,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,   154,    -1,   153,    54,
     154,    -1,   155,    -1,   154,    66,   155,    -1,   156,    -1,
     155,    46,   156,    -1,   158,    -1,   156,   157,   158,    -1,
      55,    -1,    56,    -1,   160,    -1,   158,   159,   160,    -1,
      49,    -1,    50,    -1,   162,    -1,   160,   161,   162,    -1,
      51,    -1,    52,    -1,    53,    -1,    50,   162,    -1,    48,
     162,    -1,    46,   162,    -1,   163,    -1,   164,    -1,   163,
      41,     7,    -1,   163,    39,   147,    40,    -1,   163,    39,
     147,    44,   147,    40,    -1,   163,    39,   147,    45,   147,
      40,    -1,   163,    39,    22,    40,    -1,   163,    35,   168,
      36,    -1,   163,    47,    -1,   163,    88,    -1,     3,    -1,
       4,    -1,     5,    -1,    18,    -1,    19,    -1,    17,    -1,
       6,    -1,     7,    -1,   174,    -1,    35,   147,    36,    -1,
     165,    -1,   166,    -1,   167,    -1,    79,    35,   112,    36,
      -1,    79,    35,   147,    36,    -1,    80,    35,   112,    36,
      -1,    37,   169,    38,    -1,    37,   169,    42,    38,    -1,
      83,    35,   169,    36,    -1,    84,    35,   147,    36,    -1,
      85,    35,   147,    36,    -1,    86,    35,   169,    36,    -1,
      87,    35,   147,    36,    -1,    89,    35,   147,    36,    -1,
      90,    35,   147,    36,    -1,    -1,   169,    -1,   147,    -1,
     170,    -1,   169,    42,   147,    -1,   169,    42,   170,    -1,
       7,    37,   171,    38,    -1,     7,    37,    78,   147,    38,
      -1,     7,    37,    78,   147,    42,   171,    38,    -1,    -1,
     172,    -1,   173,    -1,   172,    42,   173,    -1,   172,    42,
      -1,     7,    65,   147,    -1,    27,    35,   112,    36,   162,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   239,   239,   250,   251,   255,   256,   257,   258,   259,
     260,   261,   265,   274,   284,   290,   296,   302,   308,   317,
     323,   332,   342,   343,   347,   357,   363,   373,   381,   389,
     397,   406,   413,   423,   424,   428,   434,   443,   454,   455,
     456,   457,   458,   459,   460,   464,   472,   480,   489,   497,
     502,   511,   521,   528,   538,   539,   543,   548,   555,   560,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   582,   594,   595,   603,   604,   620,   625,
     631,   637,   644,   650,   657,   663,   672,   680,   688,   689,
     693,   699,   705,   714,   723,   724,   729,   730,   734,   742,
     743,   747,   752,   757,   768,   776,   781,   787,   792,   800,
     806,   815,   824,   830,   838,   843,   852,   857,   866,   871,
     876,   881,   886,   888,   890,   892,   894,   896,   898,   900,
     902,   904,   909,   918,   919,   924,   931,   935,   936,   944,
     945,   953,   954,   962,   963,   964,   965,   966,   967,   971,
     972,   980,   981,   989,   990,   998,   999,  1007,  1008,  1012,
    1013,  1021,  1022,  1026,  1027,  1035,  1036,  1037,  1041,  1046,
    1051,  1056,  1060,  1062,  1068,  1073,  1078,  1083,  1088,  1095,
    1100,  1108,  1113,  1118,  1123,  1128,  1133,  1138,  1144,  1150,
    1152,  1156,  1157,  1158,  1162,  1167,  1172,  1180,  1186,  1195,
    1201,  1206,  1211,  1217,  1222,  1227,  1235,  1236,  1240,  1245,
    1250,  1255,  1264,  1272,  1278,  1288,  1289,  1296,  1302,  1308,
    1315,  1327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"integer literal\"",
  "\"float literal\"", "\"boolean literal\"", "\"string literal\"",
  "\"identifier\"", "\"proc\"", "\"struct\"", "\"if\"", "\"else\"",
  "\"loop\"", "\"in\"", "\"return\"", "\"break\"", "\"continue\"",
  "\"nil\"", "\"true\"", "\"false\"", "\"':='\"", "\"'::'\"", "\"':'\"",
  "\"'->'\"", "\"'---'\"", "\"'cimport'\"", "\"'import'\"", "\"'cast'\"",
  "\"'for'\"", "\"'defer'\"", "\"'match'\"", "\"'case'\"", "\"'when'\"",
  "\"'enum'\"", "\"'step'\"", "\"'('\"", "\"')'\"", "\"'{'\"", "\"'}'\"",
  "\"'['\"", "\"']'\"", "\"'.'\"", "\"','\"", "\"';'\"", "\"'..<'\"",
  "\"'..='\"", "\"'&'\"", "\"'.*'\"", "\"'!'\"", "\"'+'\"", "\"'-'\"",
  "\"'*'\"", "\"'/'\"", "\"'%'\"", "\"'|'\"", "\"'<<'\"", "\"'>>'\"",
  "\"'=='\"", "\"'!='\"", "\"'<'\"", "\"'<='\"", "\"'>'\"", "\"'>='\"",
  "\"'&&'\"", "\"'||'\"", "\"'='\"", "\"'^ (xor)'\"", "\"'+='\"",
  "\"'-='\"", "\"'*='\"", "\"'/='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"",
  "\"'^='\"", "\"'++'\"", "\"'--'\"", "\"'#assert'\"", "\"'..'\"",
  "\"'sizeof'\"", "\"'alignof'\"", "\"'string'\"", "\"'dynamic'\"",
  "\"'append'\"", "\"'len'\"", "\"'cap'\"", "\"'reserve'\"",
  "\"'delete_dyn'\"", "\"'or_return'\"", "\"'to_cstr'\"",
  "\"'from_cstr'\"", "LOWER_THAN_ELSE", "TOK_ELSE", "UNARY_MINUS",
  "UNARY_ADDR", "POSTFIX_DEREF", "$accept", "program", "top_decl_list",
  "top_decl", "cimport_decl", "import_decl", "var_decl", "const_decl",
  "struct_decl", "field_group_list", "field_group", "ident_list",
  "proc_decl", "opt_param_list", "param_list", "param_group", "type",
  "dyn_array_type", "string_type", "named_type", "ptr_type", "array_type",
  "slice_type", "proc_type", "opt_type_list", "type_list", "stmt",
  "if_stmt", "else_if_chain", "else_block", "for_stmt", "defer_stmt",
  "match_stmt", "match_case_list", "match_case", "when_stmt",
  "when_else_chain", "when_else_block", "enum_decl", "enum_variant_list",
  "enum_variant", "hash_assert_stmt", "return_stmt", "multi_decl_stmt",
  "multi_assign_stmt", "multi_ret_expr_list", "break_stmt",
  "continue_stmt", "expr_stmt", "block", "stmt_list", "expr",
  "expr_no_struct", "expr_or", "expr_and", "expr_cmp", "cmp_op",
  "expr_bitor", "expr_bitxor", "expr_bitand", "expr_shift", "shift_op",
  "expr_add", "add_op", "expr_mul", "mul_op", "expr_unary", "expr_postfix",
  "expr_primary", "sizeof_expr", "array_init_expr", "builtin_call_expr",
  "opt_arg_list", "arg_list", "struct_lit", "field_init_list",
  "field_init_list_commas", "field_init", "cast_expr", 0
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
     345,   346,   347,   348,   349,   350
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,    99,    99,    99,
      99,    99,   100,   101,   102,   102,   102,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   112,   112,
     112,   112,   112,   112,   112,   113,   114,   115,   116,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   128,   129,   129,
     130,   130,   130,   131,   132,   132,   133,   133,   134,   135,
     135,   136,   136,   136,   137,   138,   138,   138,   138,   139,
     139,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   145,   146,   146,   147,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   161,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   165,   165,   165,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   170,   171,   171,   172,   172,   172,
     173,   174
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     5,     5,     3,
       3,     6,     0,     2,     4,     1,     3,     7,     7,     9,
       9,    11,    11,     0,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     2,     4,
       4,     3,     4,     6,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     5,     0,     2,     2,     3,
       4,     5,     7,     9,     7,     9,     2,     5,     0,     2,
       3,     2,     2,     5,     0,     5,     0,     2,     6,     0,
       2,     2,     4,     1,     2,     1,     2,     2,     2,     3,
       3,     3,     3,     3,     1,     2,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     0,     2,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     2,     2,
       2,     1,     1,     3,     4,     6,     6,     4,     4,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     4,     4,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     1,     1,     1,
       3,     3,     4,     5,     7,     0,     1,     1,     3,     2,
       3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     2,     0,     0,     0,     4,    10,
      11,     5,     6,     7,     8,     9,     0,     0,     0,    12,
      13,   181,   182,   183,   187,   188,   186,   184,   185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,   135,   137,   139,   141,   149,
     151,   153,   155,   159,   163,   171,   172,   191,   192,   193,
      15,   189,     0,     0,     0,    19,    20,    47,     0,     0,
       0,    46,    16,    43,    44,    38,    39,    40,    41,    42,
     215,     0,   188,     0,   208,     0,   209,   170,   169,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   144,   145,   146,   147,   148,     0,     0,
       0,   157,   158,     0,   161,   162,     0,   165,   166,   167,
       0,   206,     0,     0,   179,   180,    33,    22,    99,    54,
       0,     0,     0,     0,    48,     0,     0,     0,     0,   216,
     217,     0,   190,   197,     0,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   140,   150,   142,
     152,   154,   156,   160,   164,     0,   207,     0,     0,   173,
      25,     0,     0,    34,    35,     0,     0,    56,     0,    55,
       0,     0,    51,     0,    17,    18,     0,     0,   212,   219,
       0,   198,   210,   211,   194,   195,   196,   199,     0,   200,
     201,   202,   203,   204,   205,   178,   177,   174,     0,     0,
       0,     0,     0,     0,    21,    23,     0,   103,    98,   100,
      52,     0,    49,    50,    45,   220,   213,   215,   218,   221,
       0,     0,    37,    26,     0,    28,   133,    27,    36,     0,
     101,     0,     0,    57,     0,   175,   176,     0,     0,     0,
       0,     0,    53,   214,     0,    30,    29,   188,     0,   105,
     114,   116,     0,     0,     0,     0,   133,   132,     0,    58,
      59,     0,   134,    60,    61,    68,    69,    70,    71,    62,
      63,    64,     0,    65,    66,    67,    72,   118,   119,    24,
     102,     0,     0,     0,     0,   136,   106,   107,   108,   115,
     117,   188,    78,     0,    86,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,    32,    31,     0,    74,     0,    79,    88,
      94,   109,   110,   113,   111,   112,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    80,     0,    76,     0,
       0,    96,    81,     0,    73,     0,     0,     0,     0,    87,
      89,     0,    93,     0,    77,     0,     0,   135,     0,     0,
      92,    91,     0,     0,    97,     0,     0,    82,     0,    84,
      90,     0,    75,     0,     0,    95,    83,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    10,    11,    12,    13,   175,
     215,   171,    14,   172,   173,   174,    72,    73,    74,    75,
      76,    77,    78,    79,   178,   179,   272,   273,   348,   354,
     274,   275,   276,   350,   360,   277,   351,   362,    15,   176,
     219,   278,   279,   280,   281,   282,   283,   284,   285,   237,
     249,    84,   294,    45,    46,    47,   108,    48,    49,    50,
      51,   113,    52,   116,    53,   120,    54,    55,    56,    57,
      58,    59,   165,    85,    86,   138,   139,   140,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -254
static const yytype_int16 yypact[] =
{
    -254,    42,   101,  -254,  -254,   155,    67,    90,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   641,   440,    11,  -254,
    -254,  -254,  -254,  -254,  -254,    -9,  -254,  -254,  -254,    31,
     666,   641,   666,   666,   666,    98,   104,   108,   117,   119,
     127,   130,   132,   137,  -254,    95,   110,  -254,   169,   112,
     134,    91,    81,   135,  -254,    16,  -254,  -254,  -254,  -254,
    -254,  -254,   146,   147,   152,  -254,  -254,  -254,   148,     3,
      11,  -254,   125,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
       1,    11,  -254,   158,  -254,    -7,  -254,  -254,  -254,  -254,
     415,    11,   641,   666,   666,   641,   666,   666,   666,   666,
     666,   666,  -254,  -254,  -254,  -254,  -254,  -254,   666,   666,
     666,  -254,  -254,   666,  -254,  -254,   666,  -254,  -254,  -254,
     666,   641,   528,   190,  -254,  -254,   191,  -254,  -254,    11,
     160,   161,    11,   162,  -254,   641,   138,   666,   167,   164,
    -254,   172,  -254,  -254,   553,   173,   176,   178,   179,    75,
     180,   181,    80,   182,   184,   188,   110,  -254,   112,   183,
     134,    91,    81,   135,  -254,   196,   192,   195,   124,  -254,
    -254,    -1,   200,   197,  -254,     0,    20,  -254,   202,   198,
      11,    11,  -254,    11,  -254,  -254,   666,    57,  -254,   234,
     666,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   641,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   666,   666,
      11,   235,    60,   191,  -254,  -254,    12,    28,  -254,  -254,
     221,    11,  -254,  -254,  -254,  -254,  -254,   234,  -254,  -254,
     205,   206,  -254,  -254,    17,  -254,  -254,  -254,  -254,    11,
    -254,   666,    11,  -254,   210,  -254,  -254,    11,    -4,   327,
     207,   208,  -254,  -254,    82,  -254,  -254,   114,   666,   641,
     244,   246,   754,   666,   666,   666,   641,  -254,   666,  -254,
    -254,    25,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,    29,  -254,  -254,  -254,  -254,   212,  -254,  -254,
    -254,    51,   641,     9,   218,    95,   214,   215,  -254,  -254,
    -254,   245,  -254,   218,  -254,   222,   218,  -254,   641,   666,
     666,   666,   641,   666,   666,   666,   666,   666,   666,   666,
     666,  -254,  -254,  -254,  -254,   779,  -254,   666,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,   218,   249,   105,
      38,   250,  -254,    22,  -254,   666,   666,   218,   779,  -254,
    -254,    77,  -254,   666,  -254,   229,   218,   -11,   230,   218,
    -254,  -254,   218,   666,  -254,   218,   666,  -254,   666,  -254,
    -254,   218,  -254,   218,   218,  -254,  -254,  -254
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,  -254,  -254,  -254,    18,    19,  -254,  -254,
    -254,  -160,  -254,  -254,  -254,    52,   -68,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,    23,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,     7,  -254,  -254,  -254,  -162,
    -254,   -16,  -253,  -218,   170,   171,  -254,   165,   174,   199,
     168,  -254,   177,  -254,   175,  -254,   -29,  -254,  -254,  -254,
    -254,  -254,  -254,   -56,    13,    47,  -254,   100,  -254
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -137
static const yytype_int16 yytable[] =
{
      44,    65,   134,    87,    88,    89,   130,   170,   136,   303,
     131,   305,   306,   141,    83,   216,    67,    68,    67,    68,
     255,   210,   146,   148,    67,    68,  -136,   217,    80,    60,
      66,   143,   363,   236,   239,   144,   149,   325,   214,   152,
     295,   211,     3,   132,   295,   308,   295,   295,    69,   357,
      69,   121,   247,    99,   211,   122,    69,   123,   218,   236,
      70,   177,    70,   124,   182,   166,    81,   211,    70,   358,
     240,   309,   347,    19,   147,   323,   359,   150,   151,   137,
     153,   154,   155,   234,   235,   133,   256,   286,   236,   271,
      71,   164,    71,   241,   310,   226,    20,   236,    71,   227,
     302,     4,   366,   369,   125,   372,   168,   295,     5,   373,
     375,   197,   222,   223,   236,   224,   201,   198,   291,   184,
     381,   187,   198,   383,   221,   384,     6,     7,   192,   324,
     114,   115,   326,    90,    16,   292,   293,   367,   367,    91,
     295,   328,   232,    92,   330,   295,   111,   112,   185,   355,
     356,    80,    93,   243,    94,   295,   -25,   193,   295,    99,
     295,   229,    95,   346,   207,    96,   248,    97,   208,   209,
     225,   250,    98,   100,   252,    16,    17,    18,   109,   177,
     110,   126,   192,   129,   127,   352,   117,   118,   119,   128,
     135,   364,   230,   231,   142,   370,   371,   169,   170,   374,
     180,   181,   183,   186,   377,   188,   189,   379,   190,   -47,
     380,   193,   194,   382,   195,   196,   199,   200,   202,   385,
     203,   386,   387,   101,   204,   251,   102,   103,   104,   105,
     106,   107,   205,   287,   198,   206,   212,   101,   220,   213,
     221,   136,   233,   297,   242,   245,   246,   304,   253,   289,
     290,   299,   307,   300,   311,   236,   309,   311,   327,   329,
     353,   361,   288,   376,   378,   238,   296,   269,   270,   156,
     254,   157,   298,   159,   244,   158,    65,   312,   161,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   228,
     162,   163,   331,   333,   334,   335,   336,   338,   339,   340,
     341,   342,   343,   344,   345,    66,     0,     0,   160,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,     0,     0,     0,   337,     0,     0,     0,     0,
      21,    22,    23,    24,   257,     0,     0,   258,     0,   365,
     368,   259,   260,   261,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,   262,   263,   264,     0,   265,
       0,     0,    30,     0,   266,   267,     0,     0,     0,     0,
       0,     0,     0,    32,     0,    33,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,    35,    36,     0,     0,
      37,    38,    39,    40,    41,     0,    42,    43,    21,    22,
      23,    24,   145,    68,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    21,    22,    23,    24,    25,    62,    63,
      30,     0,    31,     0,    69,     0,     0,    26,    27,    28,
       0,    32,     0,    33,     0,    34,    70,    29,     0,     0,
       0,     0,     0,    64,     0,    30,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,    33,     0,
      34,     0,     0,     0,    35,    36,    71,     0,    37,    38,
      39,    40,    41,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,    37,    38,    39,    40,    41,     0,    42,
      43,    21,    22,    23,    24,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,     0,     0,
     167,     0,     0,     0,     0,    29,    21,    22,    23,    24,
      25,     0,     0,    30,     0,    31,     0,     0,     0,     0,
      26,    27,    28,     0,    32,     0,    33,     0,    34,     0,
      29,     0,     0,     0,     0,     0,     0,     0,    30,     0,
      31,   191,     0,     0,     0,     0,     0,     0,     0,    32,
       0,    33,     0,    34,     0,     0,     0,    35,    36,     0,
       0,    37,    38,    39,    40,    41,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,    37,    38,    39,    40,
      41,     0,    42,    43,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    21,
      22,    23,    24,    82,     0,     0,    30,     0,    31,     0,
       0,     0,     0,    26,    27,    28,     0,    32,     0,    33,
       0,    34,     0,    29,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,    33,     0,    34,     0,     0,     0,
      35,    36,     0,     0,    37,    38,    39,    40,    41,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,    37,
      38,    39,    40,    41,     0,    42,    43,    21,    22,    23,
      24,   301,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    21,    22,    23,    24,    82,     0,     0,    30,
       0,   266,     0,     0,     0,     0,    26,    27,    28,     0,
      32,     0,    33,     0,    34,     0,    29,     0,     0,     0,
       0,     0,     0,     0,    30,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    33,     0,    34,
       0,     0,     0,    35,    36,     0,     0,    37,    38,    39,
      40,    41,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,    37,    38,    39,    40,    41,     0,    42,    43
};

static const yytype_int16 yycheck[] =
{
      16,    17,    70,    32,    33,    34,     3,     7,     7,   262,
       7,   264,   265,    81,    30,   175,     7,     8,     7,     8,
      24,    22,    90,    91,     7,     8,    37,     7,    37,    16,
      17,    38,    10,    37,    22,    42,    92,    28,    38,    95,
     258,    42,     0,    40,   262,    20,   264,   265,    39,    11,
      39,    35,    35,    64,    42,    39,    39,    41,    38,    37,
      51,   129,    51,    47,   132,   121,    35,    42,    51,    31,
      42,    42,   325,     6,    90,    24,    38,    93,    94,    78,
      96,    97,    98,    23,    24,    82,   248,   249,    37,   249,
      81,   120,    81,    65,    65,    38,     6,    37,    81,    42,
     262,     0,   355,   356,    88,   358,   122,   325,     7,    32,
     363,    36,   180,   181,    37,   183,    36,    42,    36,   135,
     373,   137,    42,   376,    42,   378,    25,    26,   144,   291,
      49,    50,   294,    35,    20,    21,    22,   355,   356,    35,
     358,   303,   210,    35,   306,   363,    55,    56,   135,    44,
      45,    37,    35,   221,    35,   373,    42,   144,   376,    64,
     378,   190,    35,   325,    40,    35,   234,    35,    44,    45,
     186,   239,    35,    63,   242,    20,    21,    22,    66,   247,
      46,    35,   198,    35,    37,   347,    51,    52,    53,    37,
      65,   353,   208,   209,    36,   357,   358,     7,     7,   361,
      40,    40,    40,    65,   366,    38,    42,   369,    36,    36,
     372,   198,    36,   375,    36,    36,    36,    36,    36,   381,
      36,   383,   384,    54,    36,   241,    57,    58,    59,    60,
      61,    62,    36,   249,    42,    40,    36,    54,    36,    42,
      42,     7,     7,   259,    23,    40,    40,   263,    38,    42,
      42,     7,   268,     7,    42,    37,    42,    42,    13,    37,
      11,    11,   249,    34,    34,   213,   259,   249,   249,    99,
     247,   100,   259,   108,   227,   101,   292,    65,   110,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,   189,
     113,   116,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   292,    -1,    -1,   109,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,   355,
     356,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    80,    -1,    -1,
      83,    84,    85,    86,    87,    -1,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,     5,     6,     7,     8,     9,
      35,    -1,    37,    -1,    39,    -1,    -1,    17,    18,    19,
      -1,    46,    -1,    48,    -1,    50,    51,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      50,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    -1,    89,
      90,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,     3,     4,     5,     6,
       7,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    46,    -1,    48,    -1,    50,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    -1,    50,    -1,    -1,    -1,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,    86,
      87,    -1,    89,    90,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,
       4,     5,     6,     7,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    46,    -1,    48,
      -1,    50,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    50,    -1,    -1,    -1,
      79,    80,    -1,    -1,    83,    84,    85,    86,    87,    -1,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    -1,    89,    90,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,     3,     4,     5,     6,     7,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      46,    -1,    48,    -1,    50,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    83,    84,    85,    86,    87,    -1,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,    98,     0,     0,     7,    25,    26,    99,   100,
     101,   102,   103,   104,   108,   134,    20,    21,    22,     6,
       6,     3,     4,     5,     6,     7,    17,    18,    19,    27,
      35,    37,    46,    48,    50,    79,    80,    83,    84,    85,
      86,    87,    89,    90,   147,   149,   150,   151,   153,   154,
     155,   156,   158,   160,   162,   163,   164,   165,   166,   167,
     170,   174,     8,     9,    33,   147,   170,     7,     8,    39,
      51,    81,   112,   113,   114,   115,   116,   117,   118,   119,
      37,    35,     7,   147,   147,   169,   170,   162,   162,   162,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    64,
      63,    54,    57,    58,    59,    60,    61,    62,   152,    66,
      46,    55,    56,   157,    49,    50,   159,    51,    52,    53,
     161,    35,    39,    41,    47,    88,    35,    37,    37,    35,
       3,     7,    40,    82,   112,    65,     7,    78,   171,   172,
     173,   112,    36,    38,    42,     7,   112,   147,   112,   169,
     147,   147,   169,   147,   147,   147,   150,   151,   154,   153,
     155,   156,   158,   160,   162,   168,   169,    22,   147,     7,
       7,   107,   109,   110,   111,   105,   135,   112,   120,   121,
      40,    40,   112,    40,   147,   170,    65,   147,    38,    42,
      36,    38,   147,   170,    36,    36,    36,    36,    42,    36,
      36,    36,    36,    36,    36,    36,    40,    40,    44,    45,
      22,    42,    36,    42,    38,   106,   107,     7,    38,   136,
      36,    42,   112,   112,   112,   147,    38,    42,   173,   162,
     147,   147,   112,     7,    23,    24,    37,   145,   111,    22,
      42,    65,    23,   112,   171,    40,    40,    35,   112,   146,
     112,   147,   112,    38,   121,    24,   145,     7,    10,    14,
      15,    16,    28,    29,    30,    32,    37,    38,    77,   102,
     103,   107,   122,   123,   126,   127,   128,   131,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   147,   170,    42,
      42,    36,    21,    22,   148,   149,   141,   147,   170,     7,
       7,     7,   145,   148,   147,   148,   148,   147,    20,    42,
      65,    42,    65,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    24,   145,    28,   145,    13,   145,    37,
     145,   147,   170,   147,   147,   147,   147,   170,   147,   147,
     147,   147,   147,   147,   147,   147,   145,   148,   124,   147,
     129,   132,   145,    11,   125,    44,    45,    11,    31,    38,
     130,    11,   133,    10,   145,   147,   148,   149,   147,   148,
     145,   145,   148,    32,   145,   148,    34,   145,    34,   145,
     145,   148,   145,   148,   148,   145,   145,   145
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
#line 240 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 250 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 251 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 255 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 256 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 257 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 258 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 259 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 260 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 261 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 266 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 13:
#line 275 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 14:
#line 285 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 15:
#line 291 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 16:
#line 297 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 17:
#line 303 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 18:
#line 309 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 19:
#line 318 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 20:
#line 324 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 21:
#line 333 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 22:
#line 342 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 23:
#line 343 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 24:
#line 348 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 25:
#line 358 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 26:
#line 364 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 27:
#line 374 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 28:
#line 382 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 29:
#line 390 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 30:
#line 398 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 31:
#line 407 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 32:
#line 414 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 33:
#line 423 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 34:
#line 424 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 35:
#line 429 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 36:
#line 435 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 37:
#line 444 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 38:
#line 454 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 39:
#line 455 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 40:
#line 456 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 41:
#line 457 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 42:
#line 458 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 43:
#line 459 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 44:
#line 460 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 45:
#line 465 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 46:
#line 473 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 47:
#line 481 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 48:
#line 490 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 49:
#line 498 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 50:
#line 503 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 51:
#line 512 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 52:
#line 522 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 53:
#line 529 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 54:
#line 538 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 55:
#line 539 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 56:
#line 544 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 57:
#line 549 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 58:
#line 556 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 59:
#line 561 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 60:
#line 565 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 61:
#line 566 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 62:
#line 567 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 63:
#line 568 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 64:
#line 569 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 65:
#line 570 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 66:
#line 571 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 67:
#line 572 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 68:
#line 573 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 69:
#line 574 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 70:
#line 575 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 71:
#line 576 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 72:
#line 577 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 73:
#line 583 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            IfStmt* ifs = new IfStmt(r, (yyvsp[(2) - (5)].expr), (yyvsp[(3) - (5)].block));
            ifs->else_ifs = *(yyvsp[(4) - (5)].else_if_list);
            ifs->else_block = (yyvsp[(5) - (5)].block);
            (yyval.stmt) = ifs;
            delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 74:
#line 594 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 75:
#line 596 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 76:
#line 603 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 77:
#line 604 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 78:
#line 621 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 79:
#line 626 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 80:
#line 632 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 81:
#line 638 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 82:
#line 645 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 83:
#line 651 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 84:
#line 658 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 85:
#line 664 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 86:
#line 673 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 87:
#line 681 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 88:
#line 688 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 89:
#line 689 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 90:
#line 694 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 91:
#line 700 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 92:
#line 706 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 93:
#line 715 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 94:
#line 723 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 95:
#line 725 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 96:
#line 729 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 97:
#line 730 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 98:
#line 735 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 99:
#line 742 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 100:
#line 743 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 101:
#line 748 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 102:
#line 753 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 103:
#line 758 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 104:
#line 769 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 105:
#line 777 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 106:
#line 782 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 107:
#line 788 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 108:
#line 793 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 109:
#line 801 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiDeclStmt(r, *(yyvsp[(1) - (3)].ident_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 110:
#line 807 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiDeclStmt(r, *(yyvsp[(1) - (3)].ident_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 111:
#line 816 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 112:
#line 825 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 113:
#line 831 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 114:
#line 839 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 115:
#line 844 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 116:
#line 853 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 117:
#line 858 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 118:
#line 867 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 119:
#line 872 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 120:
#line 877 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 121:
#line 882 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 122:
#line 887 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 123:
#line 889 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 124:
#line 891 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 125:
#line 893 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 126:
#line 895 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 127:
#line 897 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 128:
#line 899 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 129:
#line 901 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 130:
#line 903 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new IncDecStmt(r,(yyvsp[(1) - (2)].expr),true);  ;}
    break;

  case 131:
#line 905 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new IncDecStmt(r,(yyvsp[(1) - (2)].expr),false); ;}
    break;

  case 132:
#line 910 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 133:
#line 918 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 134:
#line 919 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 135:
#line 924 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 136:
#line 931 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 138:
#line 937 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 140:
#line 946 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 142:
#line 955 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 143:
#line 962 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 144:
#line 963 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 145:
#line 964 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 146:
#line 965 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 147:
#line 966 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 148:
#line 967 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 150:
#line 973 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 152:
#line 982 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 154:
#line 991 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 156:
#line 1000 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 157:
#line 1007 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 158:
#line 1008 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 160:
#line 1014 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 161:
#line 1021 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 162:
#line 1022 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 164:
#line 1028 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 165:
#line 1035 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 166:
#line 1036 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 167:
#line 1037 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 168:
#line 1042 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 169:
#line 1047 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 170:
#line 1052 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 172:
#line 1061 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 173:
#line 1063 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 174:
#line 1069 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 175:
#line 1074 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 176:
#line 1079 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 177:
#line 1084 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 178:
#line 1089 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 179:
#line 1096 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 180:
#line 1101 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 181:
#line 1109 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 182:
#line 1114 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 183:
#line 1119 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 184:
#line 1124 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 185:
#line 1129 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 186:
#line 1134 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 187:
#line 1139 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 188:
#line 1145 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 189:
#line 1151 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 190:
#line 1153 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 191:
#line 1156 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 192:
#line 1157 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 193:
#line 1158 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 194:
#line 1163 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 195:
#line 1168 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 196:
#line 1173 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 197:
#line 1181 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 198:
#line 1187 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 199:
#line 1196 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 200:
#line 1202 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 201:
#line 1207 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 202:
#line 1212 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 203:
#line 1218 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_DELETE_DYN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 204:
#line 1223 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 205:
#line 1228 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 206:
#line 1235 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 207:
#line 1236 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 208:
#line 1241 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 209:
#line 1246 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 210:
#line 1251 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 211:
#line 1256 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 212:
#line 1265 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 213:
#line 1273 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 214:
#line 1279 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 215:
#line 1288 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 216:
#line 1290 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 217:
#line 1297 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 218:
#line 1303 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 219:
#line 1309 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 220:
#line 1316 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 221:
#line 1328 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3643 "src/flex_bison/parser.cpp"
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


#line 1334 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

