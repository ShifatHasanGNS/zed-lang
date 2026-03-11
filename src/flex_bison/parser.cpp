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
     TOK_KW_UNION = 346,
     LOWER_THAN_ELSE = 347,
     TOK_ELSE = 348,
     UNARY_MINUS = 349,
     UNARY_ADDR = 350,
     POSTFIX_DEREF = 351
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
#define TOK_KW_UNION 346
#define LOWER_THAN_ELSE 347
#define TOK_ELSE 348
#define UNARY_MINUS 349
#define UNARY_ADDR 350
#define POSTFIX_DEREF 351




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
#line 353 "src/flex_bison/parser.cpp"
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
#line 378 "src/flex_bison/parser.cpp"

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
#define YYLAST   936

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNRULES -- Number of states.  */
#define YYNSTATES  411

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

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
      95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    29,    32,    39,    45,    49,    53,
      57,    63,    69,    73,    77,    84,    85,    88,    93,    95,
      99,   107,   115,   125,   135,   147,   159,   160,   162,   164,
     168,   172,   176,   178,   180,   182,   184,   186,   188,   190,
     195,   197,   199,   202,   207,   212,   216,   221,   228,   229,
     231,   233,   237,   239,   241,   243,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   273,   274,
     280,   281,   284,   287,   291,   296,   302,   310,   320,   328,
     338,   341,   347,   348,   351,   355,   358,   361,   367,   368,
     374,   375,   378,   385,   386,   389,   392,   397,   399,   402,
     404,   407,   410,   413,   417,   421,   425,   429,   433,   435,
     438,   440,   443,   445,   447,   451,   455,   459,   463,   467,
     471,   475,   479,   483,   487,   490,   493,   497,   498,   501,
     503,   505,   507,   511,   513,   517,   519,   523,   525,   527,
     529,   531,   533,   535,   537,   541,   543,   547,   549,   553,
     555,   559,   561,   563,   565,   569,   571,   573,   575,   579,
     581,   583,   585,   588,   591,   594,   596,   598,   602,   607,
     614,   621,   626,   631,   634,   637,   639,   641,   643,   645,
     647,   649,   651,   653,   655,   659,   661,   663,   665,   667,
     673,   681,   691,   696,   701,   706,   710,   715,   720,   725,
     730,   735,   740,   745,   750,   751,   753,   755,   757,   761,
     765,   770,   776,   784,   785,   787,   789,   793,   796,   800
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      98,     0,    -1,    99,     0,    -1,    -1,    99,   100,    -1,
     104,    -1,   105,    -1,   106,    -1,   103,    -1,   110,    -1,
     136,    -1,   101,    -1,   102,    -1,    25,     6,    -1,    26,
       6,    -1,     7,    21,    91,    37,   107,    38,    -1,     7,
      21,    91,    37,    38,    -1,     7,    20,   149,    -1,     7,
      20,   173,    -1,     7,    22,   114,    -1,     7,    22,   114,
      65,   149,    -1,     7,    22,   114,    65,   173,    -1,     7,
      21,   149,    -1,     7,    21,   173,    -1,     7,    21,     9,
      37,   107,    38,    -1,    -1,   107,   108,    -1,   109,    22,
     114,    42,    -1,     7,    -1,   109,    42,     7,    -1,     7,
      21,     8,    35,   111,    36,   147,    -1,     7,    21,     8,
      35,   111,    36,    24,    -1,     7,    21,     8,    35,   111,
      36,    23,   114,   147,    -1,     7,    21,     8,    35,   111,
      36,    23,   114,    24,    -1,     7,    21,     8,    35,   111,
      36,    23,    35,   123,    36,   147,    -1,     7,    21,     8,
      35,   111,    36,    23,    35,   123,    36,    24,    -1,    -1,
     112,    -1,   113,    -1,   112,    42,   113,    -1,   112,    42,
      78,    -1,   109,    22,   114,    -1,   117,    -1,   118,    -1,
     119,    -1,   120,    -1,   121,    -1,   115,    -1,   116,    -1,
      39,    82,    40,   114,    -1,    81,    -1,     7,    -1,    51,
     114,    -1,    39,     3,    40,   114,    -1,    39,     7,    40,
     114,    -1,    39,    40,   114,    -1,     8,    35,   122,    36,
      -1,     8,    35,   122,    36,    23,   114,    -1,    -1,   123,
      -1,   114,    -1,   123,    42,   114,    -1,   104,    -1,   105,
      -1,   125,    -1,   128,    -1,   140,    -1,   141,    -1,   142,
      -1,   144,    -1,   145,    -1,   146,    -1,   129,    -1,   130,
      -1,   133,    -1,   139,    -1,   147,    -1,    10,   150,   147,
     126,   127,    -1,    -1,   126,    11,    10,   150,   147,    -1,
      -1,    11,   147,    -1,    28,   147,    -1,    28,   150,   147,
      -1,     7,    22,    28,   147,    -1,     7,    22,    28,   150,
     147,    -1,    28,     7,    13,   149,    44,   150,   147,    -1,
      28,     7,    13,   149,    44,   149,    34,   150,   147,    -1,
      28,     7,    13,   149,    45,   150,   147,    -1,    28,     7,
      13,   149,    45,   149,    34,   150,   147,    -1,    29,   149,
      -1,    30,   150,    37,   131,    38,    -1,    -1,   131,   132,
      -1,    31,   150,   147,    -1,    31,   147,    -1,    11,   147,
      -1,    32,   150,   147,   134,   135,    -1,    -1,   134,    11,
      32,   150,   147,    -1,    -1,    11,   147,    -1,     7,    21,
      33,    37,   137,    38,    -1,    -1,   137,   138,    -1,     7,
      42,    -1,     7,    65,   149,    42,    -1,     7,    -1,    77,
     149,    -1,    14,    -1,    14,   143,    -1,    14,   149,    -1,
      14,   173,    -1,   109,    20,   149,    -1,   109,    20,   173,
      -1,   143,    65,   149,    -1,   149,    42,   149,    -1,   143,
      42,   149,    -1,    15,    -1,    15,     7,    -1,    16,    -1,
      16,     7,    -1,   149,    -1,   173,    -1,   149,    65,   149,
      -1,   149,    65,   173,    -1,   149,    67,   149,    -1,   149,
      68,   149,    -1,   149,    69,   149,    -1,   149,    70,   149,
      -1,   149,    71,   149,    -1,   149,    72,   149,    -1,   149,
      73,   149,    -1,   149,    74,   149,    -1,   149,    75,    -1,
     149,    76,    -1,    37,   148,    38,    -1,    -1,   148,   124,
      -1,   151,    -1,   151,    -1,   152,    -1,   151,    64,   152,
      -1,   153,    -1,   152,    63,   153,    -1,   155,    -1,   155,
     154,   155,    -1,    57,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    62,    -1,   156,    -1,   155,    54,   156,
      -1,   157,    -1,   156,    66,   157,    -1,   158,    -1,   157,
      46,   158,    -1,   160,    -1,   158,   159,   160,    -1,    55,
      -1,    56,    -1,   162,    -1,   160,   161,   162,    -1,    49,
      -1,    50,    -1,   164,    -1,   162,   163,   164,    -1,    51,
      -1,    52,    -1,    53,    -1,    50,   164,    -1,    48,   164,
      -1,    46,   164,    -1,   165,    -1,   166,    -1,   165,    41,
       7,    -1,   165,    39,   149,    40,    -1,   165,    39,   149,
      44,   149,    40,    -1,   165,    39,   149,    45,   149,    40,
      -1,   165,    39,    22,    40,    -1,   165,    35,   171,    36,
      -1,   165,    47,    -1,   165,    88,    -1,     3,    -1,     4,
      -1,     5,    -1,    18,    -1,    19,    -1,    17,    -1,     6,
      -1,     7,    -1,   177,    -1,    35,   149,    36,    -1,   168,
      -1,   169,    -1,   170,    -1,   167,    -1,     8,    35,   111,
      36,   147,    -1,     8,    35,   111,    36,    23,   114,   147,
      -1,     8,    35,   111,    36,    23,    35,   123,    36,   147,
      -1,    79,    35,   114,    36,    -1,    79,    35,   149,    36,
      -1,    80,    35,   114,    36,    -1,    37,   172,    38,    -1,
      37,   172,    42,    38,    -1,    83,    35,   172,    36,    -1,
      84,    35,   149,    36,    -1,    85,    35,   149,    36,    -1,
      86,    35,   172,    36,    -1,    87,    35,   149,    36,    -1,
      89,    35,   149,    36,    -1,    90,    35,   149,    36,    -1,
      -1,   172,    -1,   149,    -1,   173,    -1,   172,    42,   149,
      -1,   172,    42,   173,    -1,     7,    37,   174,    38,    -1,
       7,    37,    78,   149,    38,    -1,     7,    37,    78,   149,
      42,   174,    38,    -1,    -1,   175,    -1,   176,    -1,   175,
      42,   176,    -1,   175,    42,    -1,     7,    65,   149,    -1,
      27,    35,   114,    36,   164,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   240,   240,   251,   252,   256,   257,   258,   259,   260,
     261,   262,   263,   267,   276,   286,   292,   302,   308,   314,
     320,   326,   335,   341,   350,   360,   361,   365,   375,   381,
     391,   399,   407,   415,   424,   431,   441,   442,   446,   452,
     458,   469,   480,   481,   482,   483,   484,   485,   486,   490,
     498,   506,   515,   523,   528,   537,   547,   554,   564,   565,
     569,   574,   581,   586,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   608,   620,   621,
     629,   630,   646,   651,   657,   663,   670,   676,   683,   689,
     698,   706,   714,   715,   719,   725,   731,   740,   749,   750,
     755,   756,   760,   768,   769,   773,   778,   783,   794,   802,
     807,   813,   818,   826,   832,   841,   850,   856,   864,   869,
     878,   883,   892,   897,   902,   907,   912,   914,   916,   918,
     920,   922,   924,   926,   928,   930,   935,   944,   945,   950,
     957,   961,   962,   970,   971,   979,   980,   988,   989,   990,
     991,   992,   993,   997,   998,  1006,  1007,  1015,  1016,  1024,
    1025,  1033,  1034,  1038,  1039,  1047,  1048,  1052,  1053,  1061,
    1062,  1063,  1067,  1072,  1077,  1082,  1086,  1088,  1094,  1099,
    1104,  1109,  1114,  1121,  1126,  1134,  1139,  1144,  1149,  1154,
    1159,  1164,  1170,  1176,  1178,  1182,  1183,  1184,  1185,  1190,
    1197,  1204,  1214,  1219,  1224,  1232,  1238,  1247,  1253,  1258,
    1263,  1269,  1274,  1279,  1287,  1288,  1292,  1297,  1302,  1307,
    1316,  1324,  1330,  1340,  1341,  1348,  1354,  1360,  1367,  1379
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
  "\"'from_cstr'\"", "\"'union'\"", "LOWER_THAN_ELSE", "TOK_ELSE",
  "UNARY_MINUS", "UNARY_ADDR", "POSTFIX_DEREF", "$accept", "program",
  "top_decl_list", "top_decl", "cimport_decl", "import_decl", "union_decl",
  "var_decl", "const_decl", "struct_decl", "field_group_list",
  "field_group", "ident_list", "proc_decl", "opt_param_list", "param_list",
  "param_group", "type", "dyn_array_type", "string_type", "named_type",
  "ptr_type", "array_type", "slice_type", "proc_type", "opt_type_list",
  "type_list", "stmt", "if_stmt", "else_if_chain", "else_block",
  "for_stmt", "defer_stmt", "match_stmt", "match_case_list", "match_case",
  "when_stmt", "when_else_chain", "when_else_block", "enum_decl",
  "enum_variant_list", "enum_variant", "hash_assert_stmt", "return_stmt",
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
     345,   346,   347,   348,   349,   350,   351
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   101,   102,   103,   103,   104,   104,   104,
     104,   104,   105,   105,   106,   107,   107,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   113,   114,   114,   114,   114,   114,   114,   114,   115,
     116,   117,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   130,   131,   131,   132,   132,   132,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   138,   139,   140,
     140,   140,   140,   141,   141,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   148,   148,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   164,   164,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   168,   168,   168,   169,   169,   170,   170,   170,
     170,   170,   170,   170,   171,   171,   172,   172,   172,   172,
     173,   173,   173,   174,   174,   175,   175,   175,   176,   177
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     6,     5,     3,     3,     3,
       5,     5,     3,     3,     6,     0,     2,     4,     1,     3,
       7,     7,     9,     9,    11,    11,     0,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     4,     4,     3,     4,     6,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     5,
       0,     2,     2,     3,     4,     5,     7,     9,     7,     9,
       2,     5,     0,     2,     3,     2,     2,     5,     0,     5,
       0,     2,     6,     0,     2,     2,     4,     1,     2,     1,
       2,     2,     2,     3,     3,     3,     3,     3,     1,     2,
       1,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     0,     2,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     2,     1,     1,     3,     4,     6,
       6,     4,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     5,
       7,     9,     4,     4,     4,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     3,     3,
       4,     5,     7,     0,     1,     1,     3,     2,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     2,     0,     0,     0,     4,    11,
      12,     8,     5,     6,     7,     9,    10,     0,     0,     0,
      13,    14,   185,   186,   187,   191,   192,     0,   190,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,   139,   141,   143,
     145,   153,   155,   157,   159,   163,   167,   175,   176,   198,
     195,   196,   197,    18,   193,     0,     0,     0,     0,    22,
      23,    51,     0,     0,     0,    50,    19,    47,    48,    42,
      43,    44,    45,    46,   223,    36,     0,   192,     0,   216,
       0,   217,   174,   173,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,   148,   149,
     150,   151,   152,     0,     0,     0,   161,   162,     0,   165,
     166,     0,   169,   170,   171,     0,   214,     0,     0,   183,
     184,    36,    25,   103,    25,    58,     0,     0,     0,     0,
      52,     0,     0,     0,     0,   224,   225,    28,     0,     0,
      37,    38,     0,   194,   205,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,   144,
     154,   146,   156,   158,   160,   164,   168,     0,   215,     0,
       0,   177,     0,     0,     0,    16,     0,    60,     0,    59,
       0,     0,    55,     0,    20,    21,     0,     0,   220,   227,
       0,     0,     0,     0,     0,   206,   218,   219,    36,   202,
     203,   204,   207,     0,   208,   209,   210,   211,   212,   213,
     182,   181,   178,     0,     0,     0,    24,    26,     0,   107,
     102,   104,    15,    56,     0,    53,    54,    49,   228,   221,
     223,   226,    41,    29,     0,   137,   199,    40,    39,   229,
      28,     0,     0,     0,    31,   199,     0,   105,     0,     0,
      61,     0,     0,     0,     0,   179,   180,     0,     0,     0,
       0,    57,   222,     0,   200,   192,     0,   109,   118,   120,
       0,     0,     0,     0,   137,   136,     0,    62,    63,     0,
     138,    64,    65,    72,    73,    74,    75,    66,    67,    68,
       0,    69,    70,    71,    76,   122,   123,     0,    33,   200,
      27,   106,     0,     0,     0,     0,   140,   110,   111,   112,
     119,   121,   192,    82,     0,    90,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   201,     0,    78,     0,    83,
      92,    98,   113,   114,   117,   115,   116,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    35,   201,    84,
       0,    80,     0,     0,   100,    85,     0,    77,     0,     0,
       0,     0,    91,    93,     0,    97,     0,    81,     0,     0,
     139,     0,     0,    96,    95,     0,     0,   101,     0,     0,
      86,     0,    88,    94,     0,    79,     0,     0,    99,    87,
      89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    10,    11,    12,    13,    14,
     183,   227,   148,    15,   149,   150,   151,   187,    77,    78,
      79,    80,    81,    82,    83,   188,   189,   290,   291,   371,
     377,   292,   293,   294,   373,   383,   295,   374,   385,    16,
     184,   231,   296,   297,   298,   299,   300,   301,   302,   303,
     246,   264,    89,   315,    47,    48,    49,   113,    50,    51,
      52,    53,   118,    54,   121,    55,   125,    56,    57,    58,
      59,    60,    61,    62,   177,    90,    91,   144,   145,   146,
      64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
    -245,     7,    92,  -245,  -245,   234,    20,    22,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,   645,   330,    10,
    -245,  -245,  -245,  -245,  -245,  -245,   -18,    55,  -245,  -245,
    -245,    63,   733,   645,   733,   733,   733,    84,    86,    98,
     119,   133,   138,   146,   165,   175,  -245,   156,    11,  -245,
     191,   157,   186,    50,   121,   206,  -245,    21,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,   207,   209,   226,   228,  -245,
    -245,  -245,   231,     6,    10,  -245,   179,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,    -3,   260,    10,  -245,   232,  -245,
     184,  -245,  -245,  -245,  -245,   507,    10,   645,   733,   733,
     645,   733,   733,   733,   733,   733,   733,  -245,  -245,  -245,
    -245,  -245,  -245,   733,   733,   733,  -245,  -245,   733,  -245,
    -245,   733,  -245,  -245,  -245,   733,   645,   532,   263,  -245,
    -245,   260,  -245,  -245,   233,    10,   235,   237,    10,   238,
    -245,   645,   208,   733,   236,   230,  -245,  -245,   127,   243,
     239,  -245,   244,  -245,  -245,   620,   246,   248,   249,   250,
     251,   130,   252,   254,   159,   255,   256,   257,    11,  -245,
     157,   240,   186,    50,   121,   206,  -245,   259,   242,   261,
     189,  -245,   264,    -1,    15,  -245,    28,  -245,   266,   262,
      10,    10,  -245,    10,  -245,  -245,   733,   193,  -245,   290,
      10,   292,    36,     9,   733,  -245,  -245,  -245,    64,  -245,
    -245,  -245,  -245,   645,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   733,   733,   180,  -245,  -245,   140,   -34,
    -245,  -245,  -245,   280,    10,  -245,  -245,  -245,  -245,  -245,
     290,  -245,  -245,  -245,    13,  -245,  -245,  -245,  -245,  -245,
     246,   265,   267,    16,  -245,   104,    10,  -245,   733,    10,
    -245,   268,    10,   271,   419,  -245,  -245,    10,    39,   269,
     284,  -245,  -245,   169,  -245,   177,   733,   645,   302,   303,
     758,   733,   733,   733,   645,  -245,   733,  -245,  -245,     5,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     -15,  -245,  -245,  -245,  -245,   118,  -245,   173,  -245,   125,
    -245,  -245,   271,   645,    26,   271,   156,   285,   286,  -245,
    -245,  -245,   316,  -245,   271,  -245,   293,   271,  -245,   645,
     733,   733,   733,   645,   733,   733,   733,   733,   733,   733,
     733,   733,  -245,  -245,    90,  -245,   846,  -245,   733,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   139,  -245,
     271,   321,   217,    82,   329,  -245,     4,  -245,   733,   733,
     271,   846,  -245,  -245,    91,  -245,   733,  -245,   308,   271,
      52,   309,   271,  -245,  -245,   271,   733,  -245,   271,   733,
    -245,   733,  -245,  -245,   271,  -245,   271,   271,  -245,  -245,
    -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,  -245,  -245,  -245,  -245,  -245,    80,    87,  -245,
     212,  -245,  -181,  -245,   219,  -245,   149,   -16,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -131,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,    76,  -245,  -245,  -245,
    -168,  -245,   -17,  -238,  -244,   270,   253,  -245,   241,   258,
     245,   272,  -245,   273,  -245,   247,  -245,   -24,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,   -57,    12,   115,  -245,   161,
    -245
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -141
static const yytype_int16 yytable[] =
{
      46,    69,   228,    76,   142,   228,   147,     3,   257,   136,
      92,    93,    94,   137,   386,    88,   147,    71,    72,    84,
      71,    72,   229,    71,    72,   329,    20,   330,    21,    63,
      70,   258,   316,    71,    72,   147,   316,   226,   316,   316,
     161,   245,   324,   164,   326,   327,   138,   201,   262,    73,
     331,   267,    73,   230,   346,    73,   126,   255,   140,   244,
     127,    74,   128,   308,    74,    73,   232,    74,   129,   178,
     152,   250,    72,   245,   105,   143,   245,    74,   159,   158,
     160,   162,   163,   289,   165,   166,   167,   247,   139,  -140,
      85,    75,     4,   380,    75,   274,   304,    75,    86,     5,
     309,   176,   316,    73,   -30,   116,   117,    75,   370,   130,
     180,   -30,   323,   381,   367,    74,   104,     6,     7,    95,
     382,    96,   192,   396,   194,   -32,   197,   245,   245,   -30,
     -30,   273,   -32,    97,   390,   390,   307,   316,   206,   -34,
     389,   392,   316,   395,   345,    75,   -34,   347,   398,   200,
     -32,   -32,   316,   195,    98,   316,   349,   316,   404,   351,
     332,   406,   256,   407,   -34,   -34,   212,   207,    99,   201,
     119,   120,   213,   100,   235,   236,   368,   237,   369,   238,
     249,   101,   201,   333,   242,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   216,   206,    17,   313,   314,
     102,   213,   375,   253,   254,   312,   251,   252,   387,   344,
     103,   234,   393,   394,    84,   234,   397,   245,   260,   -28,
     104,   400,   154,   114,   402,   207,   155,   403,   263,   222,
     405,   239,   115,   223,   224,   240,   408,   268,   409,   410,
     269,   270,   131,   271,   141,   106,   132,   305,   107,   108,
     109,   110,   111,   112,    17,    18,    19,   122,   123,   124,
     318,   378,   379,   133,   325,   134,   135,   147,   153,   328,
     181,   185,   199,   196,   198,   190,   306,   191,   193,   202,
     204,   203,   -51,   208,   213,   209,   210,   211,   214,   319,
     215,   217,   218,   219,   106,   220,    69,   142,    76,   243,
     225,   221,   233,   259,   234,   265,   272,   266,   245,   320,
     321,   310,   352,   354,   355,   356,   357,   359,   360,   361,
     362,   363,   364,   365,   366,    70,   311,   330,   332,   348,
     350,   372,   376,    22,    23,    24,    25,    26,    65,    66,
     384,   353,   399,   401,   287,   358,   186,    28,    29,    30,
     182,   288,   248,   317,   171,   261,     0,    31,   169,   172,
     241,   388,   391,    67,   170,    32,     0,    33,   175,     0,
       0,     0,     0,     0,   168,     0,    34,     0,    35,     0,
      36,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,    43,     0,    44,
      45,    68,    22,    23,    24,    25,   275,    27,     0,   276,
       0,     0,     0,   277,   278,   279,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    31,   280,   281,   282,
       0,   283,     0,     0,    32,     0,   284,   285,     0,     0,
       0,     0,     0,     0,     0,    34,     0,    35,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   286,     0,    37,    38,
       0,     0,    39,    40,    41,    42,    43,     0,    44,    45,
      22,    23,    24,    25,   156,   157,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    31,    22,    23,    24,    25,    87,
      27,     0,    32,     0,    33,     0,    73,     0,     0,    28,
      29,    30,     0,    34,   179,    35,     0,    36,    74,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     0,    36,     0,     0,     0,    37,    38,    75,     0,
      39,    40,    41,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,    39,    40,    41,    42,    43,
       0,    44,    45,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    31,    22,    23,
      24,    25,    26,    27,     0,    32,     0,    33,   205,     0,
       0,     0,    28,    29,    30,     0,    34,     0,    35,     0,
      36,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,    39,    40,
      41,    42,    43,     0,    44,    45,    22,    23,    24,    25,
      87,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      31,    22,    23,    24,    25,   322,    27,     0,    32,     0,
      33,     0,     0,     0,     0,    28,    29,    30,     0,    34,
       0,    35,     0,    36,     0,    31,     0,     0,     0,     0,
       0,     0,     0,    32,     0,   284,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,    35,     0,    36,     0,
       0,     0,    37,    38,     0,     0,    39,    40,    41,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,    39,    40,    41,    42,    43,     0,    44,    45,    22,
      23,    24,    25,    87,    27,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,   284,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,    39,
      40,    41,    42,    43,     0,    44,    45
};

static const yytype_int16 yycheck[] =
{
      17,    18,   183,    19,     7,   186,     7,     0,    42,     3,
      34,    35,    36,     7,    10,    32,     7,     7,     8,    37,
       7,     8,     7,     7,     8,    20,     6,    42,     6,    17,
      18,    65,   276,     7,     8,     7,   280,    38,   282,   283,
      97,    37,   280,   100,   282,   283,    40,    42,    35,    39,
      65,    35,    39,    38,    28,    39,    35,   225,    74,    23,
      39,    51,    41,    24,    51,    39,    38,    51,    47,   126,
      86,     7,     8,    37,    63,    78,    37,    51,    95,    95,
      96,    98,    99,   264,   101,   102,   103,    78,    82,    37,
      35,    81,     0,    11,    81,   263,   264,    81,    35,     7,
     268,   125,   346,    39,     0,    55,    56,    81,   346,    88,
     127,     7,   280,    31,    24,    51,    64,    25,    26,    35,
      38,    35,   138,    32,   141,     0,   143,    37,    37,    25,
      26,   262,     7,    35,   378,   379,   267,   381,   155,     0,
     378,   379,   386,   381,   312,    81,     7,   315,   386,    22,
      25,    26,   396,   141,    35,   399,   324,   401,   396,   327,
      42,   399,    22,   401,    25,    26,    36,   155,    35,    42,
      49,    50,    42,    35,   190,   191,   344,   193,   346,   196,
     204,    35,    42,    65,   200,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    36,   213,    20,    21,    22,
      35,    42,   370,    23,    24,    36,   223,   224,   376,    36,
      35,    42,   380,   381,    37,    42,   384,    37,   234,    42,
      64,   389,    38,    66,   392,   213,    42,   395,   244,    40,
     398,    38,    46,    44,    45,    42,   404,   253,   406,   407,
     256,   258,    35,   259,    65,    54,    37,   264,    57,    58,
      59,    60,    61,    62,    20,    21,    22,    51,    52,    53,
     277,    44,    45,    37,   281,    37,    35,     7,    36,   286,
       7,    38,    42,    65,    38,    40,   264,    40,    40,    36,
      36,    42,    36,    35,    42,    36,    36,    36,    36,   277,
      36,    36,    36,    36,    54,    36,   313,     7,   314,     7,
      36,    40,    36,    23,    42,    40,    38,    40,    37,     7,
       7,    42,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   313,    42,    42,    42,    13,
      37,   348,    11,     3,     4,     5,     6,     7,     8,     9,
      11,   329,    34,    34,   264,   333,   134,    17,    18,    19,
     131,   264,   203,   277,   113,   240,    -1,    27,   105,   114,
     199,   378,   379,    33,   106,    35,    -1,    37,   121,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    46,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      -1,    -1,    83,    84,    85,    86,    87,    -1,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,     3,     4,     5,     6,     7,
       8,    -1,    35,    -1,    37,    -1,    39,    -1,    -1,    17,
      18,    19,    -1,    46,    22,    48,    -1,    50,    51,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    50,    -1,    -1,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    87,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      -1,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,     4,
       5,     6,     7,     8,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    17,    18,    19,    -1,    46,    -1,    48,    -1,
      50,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    -1,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    -1,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    86,    87,    -1,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,     3,     4,     5,     6,     7,     8,    -1,    35,    -1,
      37,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    46,
      -1,    48,    -1,    50,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,
      -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,    86,
      87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    -1,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    -1,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    98,    99,     0,     0,     7,    25,    26,   100,   101,
     102,   103,   104,   105,   106,   110,   136,    20,    21,    22,
       6,     6,     3,     4,     5,     6,     7,     8,    17,    18,
      19,    27,    35,    37,    46,    48,    50,    79,    80,    83,
      84,    85,    86,    87,    89,    90,   149,   151,   152,   153,
     155,   156,   157,   158,   160,   162,   164,   165,   166,   167,
     168,   169,   170,   173,   177,     8,     9,    33,    91,   149,
     173,     7,     8,    39,    51,    81,   114,   115,   116,   117,
     118,   119,   120,   121,    37,    35,    35,     7,   149,   149,
     172,   173,   164,   164,   164,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    64,    63,    54,    57,    58,    59,
      60,    61,    62,   154,    66,    46,    55,    56,   159,    49,
      50,   161,    51,    52,    53,   163,    35,    39,    41,    47,
      88,    35,    37,    37,    37,    35,     3,     7,    40,    82,
     114,    65,     7,    78,   174,   175,   176,     7,   109,   111,
     112,   113,   114,    36,    38,    42,     7,     8,   114,   149,
     114,   172,   149,   149,   172,   149,   149,   149,   152,   153,
     156,   155,   157,   158,   160,   162,   164,   171,   172,    22,
     149,     7,   111,   107,   137,    38,   107,   114,   122,   123,
      40,    40,   114,    40,   149,   173,    65,   149,    38,    42,
      22,    42,    36,    42,    36,    38,   149,   173,    35,    36,
      36,    36,    36,    42,    36,    36,    36,    36,    36,    36,
      36,    40,    40,    44,    45,    36,    38,   108,   109,     7,
      38,   138,    38,    36,    42,   114,   114,   114,   149,    38,
      42,   176,   114,     7,    23,    37,   147,    78,   113,   164,
       7,   149,   149,    23,    24,   147,    22,    42,    65,    23,
     114,   174,    35,   114,   148,    40,    40,    35,   114,   114,
     149,   114,    38,   123,   147,     7,    10,    14,    15,    16,
      28,    29,    30,    32,    37,    38,    77,   104,   105,   109,
     124,   125,   128,   129,   130,   133,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   149,   173,   123,    24,   147,
      42,    42,    36,    21,    22,   150,   151,   143,   149,   173,
       7,     7,     7,   147,   150,   149,   150,   150,   149,    20,
      42,    65,    42,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    36,   147,    28,   147,    13,   147,
      37,   147,   149,   173,   149,   149,   149,   149,   173,   149,
     149,   149,   149,   149,   149,   149,   149,    24,   147,   147,
     150,   126,   149,   131,   134,   147,    11,   127,    44,    45,
      11,    31,    38,   132,    11,   135,    10,   147,   149,   150,
     151,   149,   150,   147,   147,   150,    32,   147,   150,    34,
     147,    34,   147,   147,   150,   147,   150,   150,   147,   147,
     147
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
#line 241 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 251 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 252 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 256 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 257 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 258 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 259 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 260 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 261 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 262 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 263 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 13:
#line 268 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 14:
#line 277 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 15:
#line 287 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 16:
#line 293 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {});
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 17:
#line 303 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 18:
#line 309 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 19:
#line 315 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 20:
#line 321 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 21:
#line 327 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 22:
#line 336 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 23:
#line 342 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 24:
#line 351 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 25:
#line 360 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 26:
#line 361 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 27:
#line 366 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 28:
#line 376 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 29:
#line 382 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 30:
#line 392 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 31:
#line 400 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 32:
#line 408 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 33:
#line 416 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 34:
#line 425 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 35:
#line 432 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 36:
#line 441 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 37:
#line 442 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 38:
#line 447 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 39:
#line 453 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 40:
#line 459 "src/frontend/parser.y"
    {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            (yyvsp[(1) - (3)].param_list)->push_back(sentinel);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 41:
#line 470 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 42:
#line 480 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 43:
#line 481 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 44:
#line 482 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 45:
#line 483 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 46:
#line 484 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 47:
#line 485 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 48:
#line 486 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 49:
#line 491 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 50:
#line 499 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 51:
#line 507 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 52:
#line 516 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 53:
#line 524 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 54:
#line 529 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 55:
#line 538 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 56:
#line 548 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 57:
#line 555 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 58:
#line 564 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 59:
#line 565 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 60:
#line 570 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 61:
#line 575 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 62:
#line 582 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 63:
#line 587 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 64:
#line 591 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 65:
#line 592 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 66:
#line 593 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 67:
#line 594 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 68:
#line 595 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 69:
#line 596 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 70:
#line 597 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 71:
#line 598 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 72:
#line 599 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 73:
#line 600 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 74:
#line 601 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 75:
#line 602 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 76:
#line 603 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 77:
#line 609 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            IfStmt* ifs = new IfStmt(r, (yyvsp[(2) - (5)].expr), (yyvsp[(3) - (5)].block));
            ifs->else_ifs = *(yyvsp[(4) - (5)].else_if_list);
            ifs->else_block = (yyvsp[(5) - (5)].block);
            (yyval.stmt) = ifs;
            delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 78:
#line 620 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 79:
#line 622 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 80:
#line 629 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 81:
#line 630 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 82:
#line 647 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 83:
#line 652 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 84:
#line 658 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 85:
#line 664 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 86:
#line 671 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 87:
#line 677 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 88:
#line 684 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 89:
#line 690 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 90:
#line 699 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 91:
#line 707 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 92:
#line 714 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 93:
#line 715 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 94:
#line 720 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 95:
#line 726 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 96:
#line 732 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 97:
#line 741 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 98:
#line 749 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 99:
#line 751 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 100:
#line 755 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 101:
#line 756 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 102:
#line 761 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 103:
#line 768 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 104:
#line 769 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 105:
#line 774 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 106:
#line 779 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 107:
#line 784 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 108:
#line 795 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 109:
#line 803 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 110:
#line 808 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 111:
#line 814 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 112:
#line 819 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 113:
#line 827 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiDeclStmt(r, *(yyvsp[(1) - (3)].ident_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 114:
#line 833 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiDeclStmt(r, *(yyvsp[(1) - (3)].ident_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 115:
#line 842 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 116:
#line 851 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 117:
#line 857 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 118:
#line 865 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 119:
#line 870 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 120:
#line 879 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 121:
#line 884 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 122:
#line 893 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 123:
#line 898 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 124:
#line 903 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 125:
#line 908 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 126:
#line 913 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 127:
#line 915 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 128:
#line 917 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 129:
#line 919 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 130:
#line 921 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 131:
#line 923 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 132:
#line 925 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 133:
#line 927 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 134:
#line 929 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new IncDecStmt(r,(yyvsp[(1) - (2)].expr),true);  ;}
    break;

  case 135:
#line 931 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new IncDecStmt(r,(yyvsp[(1) - (2)].expr),false); ;}
    break;

  case 136:
#line 936 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 137:
#line 944 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 138:
#line 945 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 139:
#line 950 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 140:
#line 957 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 142:
#line 963 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 144:
#line 972 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 146:
#line 981 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 147:
#line 988 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 148:
#line 989 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 149:
#line 990 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 150:
#line 991 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 151:
#line 992 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 152:
#line 993 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 154:
#line 999 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 156:
#line 1008 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 158:
#line 1017 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 160:
#line 1026 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 161:
#line 1033 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 162:
#line 1034 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 164:
#line 1040 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 165:
#line 1047 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 166:
#line 1048 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 168:
#line 1054 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 169:
#line 1061 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 170:
#line 1062 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 171:
#line 1063 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 172:
#line 1068 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 173:
#line 1073 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 174:
#line 1078 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 176:
#line 1087 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 177:
#line 1089 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 178:
#line 1095 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 179:
#line 1100 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 180:
#line 1105 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 181:
#line 1110 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 182:
#line 1115 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 183:
#line 1122 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 184:
#line 1127 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 185:
#line 1135 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 186:
#line 1140 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 187:
#line 1145 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 188:
#line 1150 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 189:
#line 1155 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 190:
#line 1160 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 191:
#line 1165 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 192:
#line 1171 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 193:
#line 1177 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 194:
#line 1179 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 195:
#line 1182 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 196:
#line 1183 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 197:
#line 1184 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 198:
#line 1185 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 199:
#line 1191 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (5)].param_list) ? *(yyvsp[(3) - (5)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, {}, (yyvsp[(5) - (5)].block));
            delete (yyvsp[(3) - (5)].param_list);
        ;}
    break;

  case 200:
#line 1198 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (7)].param_list) ? *(yyvsp[(3) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, (yyvsp[(6) - (7)].type), {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(3) - (7)].param_list);
        ;}
    break;

  case 201:
#line 1205 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (9)].param_list) ? *(yyvsp[(3) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, *(yyvsp[(7) - (9)].type_list), (yyvsp[(9) - (9)].block));
            delete (yyvsp[(3) - (9)].param_list); delete (yyvsp[(7) - (9)].type_list);
        ;}
    break;

  case 202:
#line 1215 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 203:
#line 1220 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 204:
#line 1225 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 205:
#line 1233 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 206:
#line 1239 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 207:
#line 1248 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 208:
#line 1254 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 209:
#line 1259 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 210:
#line 1264 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 211:
#line 1270 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_DELETE_DYN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 212:
#line 1275 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 213:
#line 1280 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 214:
#line 1287 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 215:
#line 1288 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 216:
#line 1293 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 217:
#line 1298 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 218:
#line 1303 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 219:
#line 1308 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 220:
#line 1317 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 221:
#line 1325 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 222:
#line 1331 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 223:
#line 1340 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 224:
#line 1342 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 225:
#line 1349 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 226:
#line 1355 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 227:
#line 1361 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 228:
#line 1368 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 229:
#line 1380 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3743 "src/flex_bison/parser.cpp"
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


#line 1386 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

