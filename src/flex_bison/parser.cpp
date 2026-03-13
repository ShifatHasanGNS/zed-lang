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
     LOWER_THAN_ELSE = 347,
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
#define LOWER_THAN_ELSE 347
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
#line 43 "src/frontend/parser.y"
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
#line 350 "src/flex_bison/parser.cpp"
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
#line 375 "src/flex_bison/parser.cpp"

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
#define YYLAST   1030

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNRULES -- Number of states.  */
#define YYNSTATES  469

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
      20,    22,    24,    26,    29,    32,    35,    42,    48,    52,
      56,    60,    66,    72,    76,    80,    84,    90,    96,   100,
     104,   111,   112,   115,   120,   125,   127,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   157,   165,   175,
     185,   197,   209,   221,   233,   234,   236,   238,   242,   246,
     250,   254,   260,   262,   264,   266,   268,   270,   272,   274,
     279,   281,   283,   286,   291,   296,   301,   305,   309,   313,
     317,   321,   323,   325,   329,   334,   341,   342,   344,   346,
     350,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   386,   387,   393,   394,
     397,   400,   404,   409,   415,   423,   433,   441,   451,   454,
     460,   461,   464,   468,   473,   476,   479,   485,   486,   492,
     493,   496,   503,   504,   507,   510,   515,   517,   520,   522,
     525,   528,   531,   535,   539,   543,   547,   551,   553,   556,
     558,   561,   563,   565,   569,   573,   577,   581,   585,   589,
     593,   597,   601,   605,   609,   613,   617,   618,   621,   623,
     625,   627,   629,   633,   635,   639,   641,   645,   647,   649,
     651,   653,   655,   657,   659,   663,   665,   669,   671,   675,
     677,   681,   683,   685,   687,   691,   693,   695,   697,   701,
     703,   705,   707,   710,   713,   716,   718,   720,   724,   729,
     736,   743,   748,   753,   756,   759,   761,   763,   765,   767,
     769,   771,   773,   775,   777,   781,   783,   785,   787,   789,
     795,   803,   813,   818,   823,   828,   833,   837,   842,   847,
     852,   857,   862,   867,   872,   877,   878,   880,   882,   884,
     888,   892,   897,   903,   911,   912,   914,   916,   920,   923,
     927,   931
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    98,     0,    -1,    -1,    98,    99,    -1,
     103,    -1,   104,    -1,   105,    -1,   102,    -1,   111,    -1,
     139,    -1,   100,    -1,   101,    -1,    48,   152,    -1,    41,
       6,    -1,    42,     6,    -1,     7,    44,    10,    51,   106,
      52,    -1,     7,    44,    10,    51,    52,    -1,     7,    43,
     152,    -1,     7,    43,   176,    -1,     7,    45,   116,    -1,
       7,    45,   116,    81,   152,    -1,     7,    45,   116,    81,
     176,    -1,   110,    43,   152,    -1,   110,    43,   176,    -1,
     110,    45,   116,    -1,   110,    45,   116,    81,   152,    -1,
     110,    45,   116,    81,   176,    -1,     7,    44,   152,    -1,
       7,    44,   176,    -1,     7,    44,     9,    51,   106,    52,
      -1,    -1,   106,   107,    -1,   108,    45,   116,    59,    -1,
     108,    45,   116,    60,    -1,   109,    -1,   108,    59,   109,
      -1,     7,    -1,   110,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,     7,
      44,     8,    49,   112,    50,   150,    -1,     7,    44,     8,
      49,   112,    50,    47,    -1,     7,    44,     8,    49,   112,
      50,    46,   116,   150,    -1,     7,    44,     8,    49,   112,
      50,    46,   116,    47,    -1,     7,    44,     8,    49,   112,
      50,    46,    49,   126,    50,   150,    -1,     7,    44,     8,
      49,   112,    50,    46,    49,   126,    50,    47,    -1,     7,
      44,     8,    49,   112,    50,    46,    49,   115,    50,   150,
      -1,     7,    44,     8,    49,   112,    50,    46,    49,   115,
      50,    47,    -1,    -1,   113,    -1,   114,    -1,   113,    59,
     114,    -1,   113,    59,    56,    -1,   108,    45,   116,    -1,
       7,    45,   116,    -1,   115,    59,     7,    45,   116,    -1,
     119,    -1,   120,    -1,   121,    -1,   123,    -1,   124,    -1,
     117,    -1,   118,    -1,    53,    28,    54,   116,    -1,    27,
      -1,     7,    -1,    66,   116,    -1,    53,     3,    54,   116,
      -1,    53,     7,    54,   116,    -1,    53,   122,    54,   116,
      -1,   122,    66,   122,    -1,   122,    64,   122,    -1,   122,
      65,   122,    -1,   122,    67,   122,    -1,   122,    68,   122,
      -1,     3,    -1,     7,    -1,    53,    54,   116,    -1,     8,
      49,   125,    50,    -1,     8,    49,   125,    50,    46,   116,
      -1,    -1,   126,    -1,   116,    -1,   126,    59,   116,    -1,
     103,    -1,   104,    -1,   128,    -1,   131,    -1,   143,    -1,
     144,    -1,   145,    -1,   147,    -1,   148,    -1,   149,    -1,
     132,    -1,   133,    -1,   136,    -1,   142,    -1,   150,    -1,
      12,   153,   150,   129,   130,    -1,    -1,   129,    13,    12,
     153,   150,    -1,    -1,    13,   150,    -1,    14,   150,    -1,
      14,   153,   150,    -1,     7,    45,    14,   150,    -1,     7,
      45,    14,   153,   150,    -1,    14,     7,    15,   152,    57,
     153,   150,    -1,    14,     7,    15,   152,    57,   152,    16,
     153,   150,    -1,    14,     7,    15,   152,    58,   153,   150,
      -1,    14,     7,    15,   152,    58,   152,    16,   153,   150,
      -1,    20,   152,    -1,    21,   153,    51,   134,    52,    -1,
      -1,   134,   135,    -1,    22,   153,   150,    -1,    22,    55,
       7,   150,    -1,    22,   150,    -1,    13,   150,    -1,    23,
     153,   150,   137,   138,    -1,    -1,   137,    13,    23,   153,
     150,    -1,    -1,    13,   150,    -1,     7,    44,    11,    51,
     140,    52,    -1,    -1,   140,   141,    -1,     7,    59,    -1,
       7,    81,   152,    59,    -1,     7,    -1,    48,   152,    -1,
      19,    -1,    19,   146,    -1,    19,   152,    -1,    19,   176,
      -1,   146,    43,   152,    -1,   146,    43,   176,    -1,   146,
      81,   152,    -1,   152,    59,   152,    -1,   146,    59,   152,
      -1,    17,    -1,    17,     7,    -1,    18,    -1,    18,     7,
      -1,   152,    -1,   176,    -1,   152,    81,   152,    -1,   152,
      81,   176,    -1,   152,    82,   152,    -1,   152,    83,   152,
      -1,   152,    84,   152,    -1,   152,    85,   152,    -1,   152,
      86,   152,    -1,   152,    87,   152,    -1,   152,    88,   152,
      -1,   152,    89,   152,    -1,   152,    90,   152,    -1,   152,
      91,   152,    -1,    51,   151,    52,    -1,    -1,   151,   127,
      -1,   154,    -1,   172,    -1,   154,    -1,   155,    -1,   154,
      80,   155,    -1,   156,    -1,   155,    79,   156,    -1,   158,
      -1,   158,   157,   158,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,   159,    -1,   158,
      69,   159,    -1,   160,    -1,   159,    70,   160,    -1,   161,
      -1,   160,    61,   161,    -1,   163,    -1,   161,   162,   163,
      -1,    71,    -1,    72,    -1,   165,    -1,   163,   164,   165,
      -1,    64,    -1,    65,    -1,   167,    -1,   165,   166,   167,
      -1,    66,    -1,    67,    -1,    68,    -1,    65,   167,    -1,
      63,   167,    -1,    61,   167,    -1,   168,    -1,   169,    -1,
     168,    55,     7,    -1,   168,    53,   152,    54,    -1,   168,
      53,   152,    57,   152,    54,    -1,   168,    53,   152,    58,
     152,    54,    -1,   168,    53,    45,    54,    -1,   168,    49,
     174,    50,    -1,   168,    62,    -1,   168,    40,    -1,     3,
      -1,     4,    -1,     5,    -1,    25,    -1,    26,    -1,    24,
      -1,     6,    -1,     7,    -1,   180,    -1,    49,   152,    50,
      -1,   171,    -1,   173,    -1,   170,    -1,   110,    -1,     8,
      49,   112,    50,   150,    -1,     8,    49,   112,    50,    46,
     116,   150,    -1,     8,    49,   112,    50,    46,    49,   126,
      50,   150,    -1,    30,    49,   116,    50,    -1,    30,    49,
     152,    50,    -1,    31,    49,   116,    50,    -1,    32,    49,
     116,    50,    -1,    51,   175,    52,    -1,    51,   175,    59,
      52,    -1,    35,    49,   175,    50,    -1,    33,    49,   152,
      50,    -1,    34,    49,   152,    50,    -1,    36,    49,   175,
      50,    -1,    37,    49,   152,    50,    -1,    38,    49,   152,
      50,    -1,    39,    49,   152,    50,    -1,    -1,   175,    -1,
     152,    -1,   176,    -1,   175,    59,   152,    -1,   175,    59,
     176,    -1,     7,    51,   177,    52,    -1,     7,    51,    56,
     152,    52,    -1,     7,    51,    56,   152,    59,   177,    52,
      -1,    -1,   178,    -1,   179,    -1,   178,    59,   179,    -1,
     178,    59,    -1,     7,    81,   152,    -1,     7,    81,   176,
      -1,    29,    49,   116,    50,   167,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   277,   277,   288,   289,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   309,   318,   328,   334,   351,   353,
     355,   357,   359,   362,   364,   366,   368,   370,   375,   381,
     390,   400,   401,   405,   412,   424,   430,   442,   443,   449,
     450,   451,   452,   453,   454,   455,   460,   468,   476,   484,
     493,   500,   510,   527,   547,   548,   552,   558,   564,   575,
     589,   598,   611,   612,   613,   614,   615,   616,   617,   621,
     629,   637,   646,   654,   659,   665,   675,   676,   677,   678,
     679,   680,   681,   685,   695,   702,   712,   713,   717,   722,
     729,   734,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   751,   756,   768,   769,   777,   778,
     794,   799,   808,   814,   821,   827,   834,   840,   849,   857,
     865,   866,   870,   876,   887,   893,   902,   911,   912,   917,
     918,   922,   930,   931,   935,   940,   945,   956,   964,   969,
     975,   980,   993,  1007,  1024,  1033,  1039,  1047,  1052,  1061,
    1066,  1075,  1080,  1085,  1090,  1095,  1097,  1099,  1101,  1103,
    1105,  1107,  1109,  1111,  1113,  1118,  1127,  1128,  1133,  1134,
    1141,  1145,  1146,  1154,  1155,  1163,  1164,  1172,  1173,  1174,
    1175,  1176,  1177,  1181,  1182,  1190,  1191,  1199,  1200,  1208,
    1209,  1217,  1218,  1222,  1223,  1231,  1232,  1236,  1237,  1245,
    1246,  1247,  1251,  1256,  1261,  1266,  1270,  1272,  1278,  1283,
    1288,  1293,  1298,  1305,  1310,  1318,  1323,  1328,  1333,  1338,
    1343,  1348,  1354,  1360,  1362,  1366,  1367,  1368,  1369,  1382,
    1389,  1396,  1406,  1411,  1416,  1421,  1429,  1435,  1444,  1450,
    1455,  1460,  1466,  1471,  1476,  1484,  1485,  1489,  1494,  1499,
    1504,  1513,  1521,  1527,  1537,  1538,  1545,  1551,  1557,  1564,
    1572,  1584
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
  "\"'<<='\"", "\"'>>='\"", "LOWER_THAN_ELSE", "UNARY_MINUS", "UNARY_ADDR",
  "POSTFIX_DEREF", "$accept", "program", "top_decl_list", "top_decl",
  "cimport_decl", "import_decl", "union_decl", "var_decl", "const_decl",
  "struct_decl", "field_group_list", "field_group", "ident_list",
  "soft_ident", "kw_ident", "proc_decl", "opt_param_list", "param_list",
  "param_group", "named_ret_list", "type", "dyn_array_type", "string_type",
  "named_type", "ptr_type", "array_type", "array_size_expr", "slice_type",
  "proc_type", "opt_type_list", "type_list", "stmt", "if_stmt",
  "else_if_chain", "else_block", "for_stmt", "defer_stmt", "match_stmt",
  "match_case_list", "match_case", "when_stmt", "when_else_chain",
  "when_else_block", "enum_decl", "enum_variant_list", "enum_variant",
  "hash_assert_stmt", "return_stmt", "multi_decl_stmt",
  "multi_assign_stmt", "multi_ret_expr_list", "break_stmt",
  "continue_stmt", "expr_stmt", "block", "stmt_list", "expr",
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
     345,   346,   347,   348,   349,   350
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   101,   102,   102,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     118,   119,   120,   121,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     134,   134,   135,   135,   135,   135,   136,   137,   137,   138,
     138,   139,   140,   140,   141,   141,   141,   142,   143,   143,
     143,   143,   144,   144,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   151,   151,   152,   152,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   166,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   175,
     175,   176,   176,   176,   177,   177,   178,   178,   178,   179,
     179,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     6,     5,     3,     3,
       3,     5,     5,     3,     3,     3,     5,     5,     3,     3,
       6,     0,     2,     4,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     9,     9,
      11,    11,    11,    11,     0,     1,     1,     3,     3,     3,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     4,     4,     4,     3,     3,     3,     3,
       3,     1,     1,     3,     4,     6,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     0,     5,     0,     2,
       2,     3,     4,     5,     7,     9,     7,     9,     2,     5,
       0,     2,     3,     4,     2,     2,     5,     0,     5,     0,
       2,     6,     0,     2,     2,     4,     1,     2,     1,     2,
       2,     2,     3,     3,     3,     3,     3,     1,     2,     1,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     2,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     2,     1,     1,     3,     4,     6,
       6,     4,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     5,
       7,     9,     4,     4,     4,     4,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     1,     1,     1,     3,
       3,     4,     5,     7,     0,     1,     1,     3,     2,     3,
       3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     2,     0,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     4,    11,    12,     8,
       5,     6,     7,     0,     9,    10,     0,     0,     0,    14,
      15,   215,   216,   217,   221,   222,     0,   220,   218,   219,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,   228,    13,   168,   171,
     173,   175,   183,   185,   187,   189,   193,   197,   205,   206,
     227,   225,   169,   226,   223,     0,     0,   222,    18,    19,
       0,     0,     0,     0,    28,    29,    71,     0,    70,     0,
       0,    20,    67,    68,    62,    63,    64,    65,    66,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,   248,   204,   203,   202,     0,     0,
       0,   177,   178,   179,   180,   181,   182,     0,     0,     0,
     191,   192,     0,   195,   196,     0,   199,   200,   201,     0,
     214,   245,     0,     0,   213,    23,    24,    25,   254,    54,
      31,    31,   132,    86,    81,    82,     0,     0,     0,    72,
       0,    37,     0,    35,    38,     0,    55,    56,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   236,     0,   172,   174,   184,   176,   186,
     188,   190,   194,   198,     0,   246,     0,     0,   207,     0,
       0,     0,     0,   255,   256,     0,     0,    17,     0,     0,
      88,     0,    87,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,     0,     0,
      54,   232,   233,   234,   235,   239,   240,   238,     0,   241,
     242,   243,   244,   237,   249,   250,   212,   211,   208,     0,
       0,    26,    27,     0,     0,   251,   258,     0,    30,    32,
       0,    16,   136,   131,   133,    84,     0,    73,    74,    69,
      75,    81,    82,    77,    78,    76,    79,    80,    59,    36,
       0,   166,   229,    58,    57,   261,    37,     0,     0,   259,
     260,   252,   254,   257,     0,    47,   229,     0,   134,     0,
       0,    89,     0,     0,     0,   209,   210,     0,     0,     0,
       0,     0,    85,     0,   230,   222,     0,     0,   147,   149,
     138,     0,     0,     0,     0,   166,   165,    90,    91,   228,
     167,    92,    93,   100,   101,   102,   103,    94,    95,    96,
       0,    97,    98,    99,   104,   151,   152,   253,    71,     0,
       0,    49,   230,    33,    34,   135,     0,     0,     0,     0,
     170,   222,   110,     0,   148,   150,   139,   140,   141,   118,
       0,     0,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,   106,     0,   111,   120,   127,   142,
     143,   146,   144,   145,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    60,    53,    52,     0,
      51,   231,   112,     0,   108,     0,     0,   129,     0,   113,
       0,   105,     0,     0,     0,     0,   119,   121,     0,   126,
      61,     0,   109,     0,     0,   168,     0,     0,   125,     0,
     124,     0,     0,   130,     0,     0,   114,     0,   116,     0,
     122,     0,   107,     0,     0,   123,   128,   115,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    16,    17,    18,    19,    20,    21,    22,
     206,   259,   162,   163,    56,    24,   165,   166,   167,   349,
     210,    92,    93,    94,    95,    96,   158,    97,    98,   211,
     212,   330,   331,   424,   431,   332,   333,   334,   426,   437,
     335,   427,   439,    25,   209,   264,   336,   337,   338,   339,
     340,   341,   342,   343,   282,   304,   112,   359,    58,    59,
      60,   127,    61,    62,    63,    64,   132,    65,   135,    66,
     139,    67,    68,    69,    70,    71,    72,    73,   194,   113,
     114,   202,   203,   204,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -314
static const yytype_int16 yypact[] =
{
    -314,    23,   209,  -314,  -314,   118,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,    28,    58,   769,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,     9,  -314,  -314,   818,   607,    51,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,    20,  -314,  -314,  -314,
      77,    80,    92,   122,   133,   187,   200,   224,   225,   227,
     229,   769,   818,   965,   965,   965,  -314,  -314,    33,    89,
    -314,   317,   110,   169,   119,   156,   140,  -314,    81,  -314,
    -314,  -314,  -314,  -314,  -314,   818,    51,   230,  -314,  -314,
     231,   232,   235,   236,  -314,  -314,  -314,   239,  -314,   104,
      51,   201,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   564,
      51,   480,    51,    51,   769,   769,   818,   818,   769,   769,
     769,   240,  -314,   -28,  -314,  -314,  -314,  -314,   965,   965,
     965,  -314,  -314,  -314,  -314,  -314,  -314,   965,   965,   965,
    -314,  -314,   965,  -314,  -314,   965,  -314,  -314,  -314,   965,
    -314,   818,   398,   285,  -314,  -314,  -314,   212,    12,   564,
    -314,   244,  -314,    51,   245,   246,   247,    51,   111,  -314,
     818,  -314,   -31,  -314,  -314,   248,   243,  -314,   253,   254,
     258,   260,   261,   262,   263,   264,   266,   -32,    53,   267,
     268,   269,  -314,  -314,   656,    89,  -314,   110,   251,   169,
     119,   156,   140,  -314,   273,   249,   270,   131,  -314,   818,
     250,   769,   274,   271,  -314,   275,   166,  -314,   233,     1,
    -314,   278,   277,    51,    51,    51,  -314,    51,    78,    78,
      78,    78,    78,  -314,  -314,    51,   564,    26,   159,   965,
       8,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   818,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   769,
     769,  -314,  -314,   818,    57,  -314,   322,   106,  -314,  -314,
      37,  -314,   -11,  -314,  -314,   287,    51,  -314,  -314,  -314,
    -314,  -314,  -314,   192,   192,  -314,  -314,  -314,  -314,  -314,
      13,  -314,  -314,  -314,  -314,  -314,   254,   280,   283,  -314,
    -314,  -314,   322,  -314,    22,  -314,   460,    51,  -314,   769,
      51,  -314,    51,   288,   544,  -314,  -314,   286,    98,   136,
     202,   281,  -314,    64,  -314,   181,   965,   867,   334,   336,
     818,   769,   965,   965,   769,   818,  -314,  -314,  -314,     9,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
     -26,  -314,  -314,  -314,  -314,   934,  -314,  -314,   299,    74,
      87,  -314,   587,  -314,  -314,  -314,   288,   818,    49,   288,
      33,   330,  -314,   288,  -314,  -314,   290,   291,  -314,  -314,
     295,   288,  -314,   818,   769,   769,   769,   818,   769,   769,
     769,   769,   769,   769,   769,   769,   769,   769,    51,   180,
     340,   182,  -314,   916,  -314,   769,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   306,
    -314,   749,  -314,   288,   341,   207,    79,   343,    51,  -314,
      14,  -314,   769,   769,   288,   706,  -314,  -314,    16,  -314,
    -314,   965,  -314,   337,   288,   -29,   357,   288,  -314,   350,
    -314,   288,   965,  -314,   288,   965,  -314,   965,  -314,   288,
    -314,   288,  -314,   288,   288,  -314,  -314,  -314,  -314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,  -314,  -314,  -314,  -314,    71,    72,  -314,
     228,  -314,   -68,   152,    11,  -314,   234,  -314,   154,  -314,
      -3,  -314,  -314,  -314,  -314,  -314,    34,  -314,  -314,  -314,
    -153,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
      67,  -314,  -314,  -314,    18,  -314,   -15,  -285,  -313,   279,
     265,  -314,   272,   276,   282,   259,  -314,   284,  -314,   303,
    -314,   -48,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   -23,
     -25,   108,  -314,   142,  -314
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const yytype_int16 yytable[] =
{
      57,    79,    85,   360,   360,   115,   116,   117,   262,   360,
     360,    78,    84,    23,   225,   286,    87,   373,   237,   200,
      86,    87,  -170,     3,   183,    91,   441,   238,   226,    86,
      87,   184,   363,   374,    29,    88,   111,   370,   371,   452,
      88,     6,     7,     8,     9,    10,    11,    12,   298,    88,
     146,   118,    75,   263,    76,   375,    86,    87,    86,    87,
     145,    89,   302,   393,    30,   281,    89,   281,   201,    99,
     299,   308,   280,   147,    90,    89,    88,   281,    88,    90,
     360,   271,   297,   177,   178,   272,   172,   159,    90,   175,
     176,   193,   434,   179,   180,   181,   226,   168,   171,   173,
     174,   435,    89,   239,    89,   348,    87,   154,   423,   291,
     164,   155,   238,   118,   356,    90,   292,    90,   195,   445,
     445,   140,   360,   266,   389,    88,   100,   197,   360,   101,
     141,   436,   156,   390,   142,   224,   143,   391,   260,   360,
     260,   102,   360,   144,   360,   223,   266,   444,   447,   313,
     451,    89,   294,   295,   216,   350,   454,   281,   157,   245,
     164,    26,    27,    28,    90,   217,   161,   461,   119,   244,
     463,   103,   464,   161,   252,   218,   219,   220,   221,   222,
     128,   285,   104,   351,   251,   248,   254,   281,   249,   250,
     130,   131,     6,     7,     8,     9,    10,    11,    12,     6,
       7,     8,     9,    10,    11,    12,   136,   137,   138,     4,
     267,   268,   269,   245,   270,   283,     5,   164,   258,   164,
     133,   134,   278,   244,    26,   357,   358,   417,   290,   420,
     129,   281,   148,   281,   287,   288,   105,   164,   289,   164,
     161,   164,     6,     7,     8,     9,    10,    11,    12,   106,
      13,    14,   273,   274,   275,   276,   277,    15,   220,   221,
     222,   353,   354,   301,   432,   433,     6,     7,     8,     9,
      10,    11,    12,   107,   108,   296,   109,   303,   110,   346,
     149,   148,   160,   150,   311,   261,   151,   152,   153,   345,
     182,   309,   198,   199,   310,   368,   207,   312,   227,   213,
     214,   215,   228,   229,   -71,   367,   369,   230,   238,   372,
     231,   232,   233,   234,   235,   329,   236,   240,   241,   242,
     120,   314,   344,   246,   247,   257,   255,   352,   265,   200,
     256,   253,    85,   300,   305,   362,   266,   306,   347,   281,
     355,   364,    84,   365,   388,   395,   397,   419,   400,   374,
     376,   428,   405,   455,   430,    91,   438,   459,   399,   401,
     402,   403,   404,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   457,   392,   327,   328,   394,   279,   208,
     425,   396,   284,   205,   186,   416,   120,   366,   190,   398,
     121,   122,   123,   124,   125,   126,   187,   185,   293,   188,
     307,    31,    32,    33,    34,    35,    36,   418,     0,   421,
     189,   422,     0,     0,     0,     0,   191,   443,   446,     0,
       0,     0,    37,    38,    39,   440,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   192,     0,
       0,   429,     0,   196,     0,     0,     0,    51,   442,    52,
       0,     0,   448,   450,     0,     0,   453,     0,     0,    53,
     -46,    54,   456,    55,     0,   458,     0,   -46,     0,   460,
       0,     0,   462,     0,     0,     0,     0,   465,     0,   466,
       0,   467,   468,    31,    32,    33,    34,   169,   170,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,     0,    37,    38,    39,    88,   -46,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,    52,     0,    89,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    54,     0,    55,    90,    31,    32,    33,
      34,   315,    36,     0,     0,     0,   316,     0,   317,     0,
       0,   318,   319,   320,   321,   322,     0,   323,    37,    38,
      39,   161,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,   -48,     0,     0,
       0,     0,   324,    51,   -48,   325,   326,     6,     7,     8,
       9,    10,    11,    12,     0,    53,     0,    54,     0,    55,
      31,    32,    33,    34,    77,    80,    81,    82,    83,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
       0,    37,    38,    39,     0,   -48,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,    52,    31,
      32,    33,    34,    77,    36,     0,     0,     0,    53,     0,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,   243,    31,
      32,    33,    34,    35,    36,     0,     0,    53,     0,    54,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,   -50,
       0,     0,     0,     0,     0,    51,   -50,   281,     0,     0,
       0,   449,     0,     0,     0,     0,     0,    53,     0,    54,
       0,    55,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,     0,    37,    38,    39,     0,   -50,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
      52,    31,    32,    33,    34,    77,    36,     0,     0,     0,
      53,     0,    54,     0,    55,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,    52,
      31,    32,    33,    34,   361,    36,     0,     0,     0,    53,
       0,    54,     0,    55,     0,     0,     0,     0,     0,     0,
       0,    37,    38,    39,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,   281,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    53,     0,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,   281,    31,    32,
      33,    34,    35,    36,     0,     0,     0,    53,     0,    54,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,     0,   376,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,    53,     0,    54,     0,
      55
};

static const yytype_int16 yycheck[] =
{
      15,    26,    27,   316,   317,    53,    54,    55,     7,   322,
     323,    26,    27,     2,    45,     7,     8,    43,    50,     7,
       7,     8,    51,     0,    52,    28,    12,    59,    59,     7,
       8,    59,   317,    59,     6,    27,    51,   322,   323,    23,
      27,    33,    34,    35,    36,    37,    38,    39,    59,    27,
      75,    80,    43,    52,    45,    81,     7,     8,     7,     8,
      75,    53,    49,    14,     6,    51,    53,    51,    56,    49,
      81,    49,    46,    76,    66,    53,    27,    51,    27,    66,
     393,     3,    45,   106,   107,     7,   101,    90,    66,   104,
     105,   139,    13,   108,   109,   110,    59,   100,   101,   102,
     103,    22,    53,    50,    53,     7,     8,     3,   393,    52,
      99,     7,    59,    80,    50,    66,    59,    66,   141,   432,
     433,    40,   435,    59,    50,    27,    49,   142,   441,    49,
      49,    52,    28,    59,    53,   160,    55,    50,   206,   452,
     208,    49,   455,    62,   457,   160,    59,   432,   433,   302,
     435,    53,    46,    47,   157,   308,   441,    51,    54,   184,
     149,    43,    44,    45,    66,    54,     7,   452,    79,   184,
     455,    49,   457,     7,   199,    64,    65,    66,    67,    68,
      70,   229,    49,    47,   199,    54,   201,    51,    57,    58,
      71,    72,    33,    34,    35,    36,    37,    38,    39,    33,
      34,    35,    36,    37,    38,    39,    66,    67,    68,     0,
     213,   214,   215,   238,   217,    56,     7,   206,    52,   208,
      64,    65,   225,   238,    43,    44,    45,    47,   253,    47,
      61,    51,    51,    51,   249,   250,    49,   226,   253,   228,
       7,   230,    33,    34,    35,    36,    37,    38,    39,    49,
      41,    42,   218,   219,   220,   221,   222,    48,    66,    67,
      68,    59,    60,   266,    57,    58,    33,    34,    35,    36,
      37,    38,    39,    49,    49,   257,    49,   280,    49,   304,
      49,    51,    81,    51,   299,    52,    51,    51,    49,   304,
      50,   294,     7,    81,   297,   320,    52,   300,    50,    54,
      54,    54,    59,    50,    50,   320,   321,    49,    59,   324,
      50,    50,    50,    50,    50,   304,    50,    50,    50,    50,
      69,   303,   304,    50,    54,    50,    52,   309,    50,     7,
      59,    81,   357,    46,    54,   317,    59,    54,    52,    51,
      59,     7,   357,     7,    45,    15,    51,     7,   373,    59,
      59,    45,   377,    16,    13,   358,    13,     7,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,    16,   356,   304,   304,   359,   226,   151,
     395,   363,   228,   149,   119,   388,    69,   320,   129,   371,
      73,    74,    75,    76,    77,    78,   120,   118,   256,   127,
     292,     3,     4,     5,     6,     7,     8,   389,    -1,   391,
     128,   393,    -1,    -1,    -1,    -1,   132,   432,   433,    -1,
      -1,    -1,    24,    25,    26,   428,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   135,    -1,
      -1,   423,    -1,    45,    -1,    -1,    -1,    49,   430,    51,
      -1,    -1,   434,   435,    -1,    -1,   438,    -1,    -1,    61,
       0,    63,   444,    65,    -1,   447,    -1,     7,    -1,   451,
      -1,    -1,   454,    -1,    -1,    -1,    -1,   459,    -1,   461,
      -1,   463,   464,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    -1,    24,    25,    26,    27,    48,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    66,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,     7,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,     0,    -1,    -1,
      -1,    -1,    48,    49,     7,    51,    52,    33,    34,    35,
      36,    37,    38,    39,    -1,    61,    -1,    63,    -1,    65,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      -1,    24,    25,    26,    -1,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,     3,
       4,     5,     6,     7,     8,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,     0,
      -1,    -1,    -1,    -1,    -1,    49,     7,    51,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    -1,    24,    25,    26,    -1,    48,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    59,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    61,    -1,    63,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,    98,     0,     0,     7,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    48,    99,   100,   101,   102,
     103,   104,   105,   110,   111,   139,    43,    44,    45,     6,
       6,     3,     4,     5,     6,     7,     8,    24,    25,    26,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    49,    51,    61,    63,    65,   110,   152,   154,   155,
     156,   158,   159,   160,   161,   163,   165,   167,   168,   169,
     170,   171,   172,   173,   180,    43,    45,     7,   152,   176,
       8,     9,    10,    11,   152,   176,     7,     8,    27,    53,
      66,   116,   117,   118,   119,   120,   121,   123,   124,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,   152,   152,   175,   176,   167,   167,   167,    80,    79,
      69,    73,    74,    75,    76,    77,    78,   157,    70,    61,
      71,    72,   162,    64,    65,   164,    66,    67,    68,   166,
      40,    49,    53,    55,    62,   152,   176,   116,    51,    49,
      51,    51,    51,    49,     3,     7,    28,    54,   122,   116,
      81,     7,   108,   109,   110,   112,   113,   114,   116,     7,
       8,   116,   152,   116,   116,   152,   152,   175,   175,   152,
     152,   152,    50,    52,    59,   155,   156,   159,   158,   160,
     161,   163,   165,   167,   174,   175,    45,   152,     7,    81,
       7,    56,   177,   178,   179,   112,   106,    52,   106,   140,
     116,   125,   126,    54,    54,    54,   116,    54,    64,    65,
      66,    67,    68,   152,   176,    45,    59,    50,    59,    50,
      49,    50,    50,    50,    50,    50,    50,    50,    59,    50,
      50,    50,    50,    52,   152,   176,    50,    54,    54,    57,
      58,   152,   176,    81,   152,    52,    59,    50,    52,   107,
     108,    52,     7,    52,   141,    50,    59,   116,   116,   116,
     116,     3,     7,   122,   122,   122,   122,   122,   116,   109,
      46,    51,   150,    56,   114,   167,     7,   152,   152,   152,
     176,    52,    59,   179,    46,    47,   150,    45,    59,    81,
      46,   116,    49,   116,   151,    54,    54,   177,    49,   116,
     116,   152,   116,   126,   150,     7,    12,    14,    17,    18,
      19,    20,    21,    23,    48,    51,    52,   103,   104,   110,
     127,   128,   131,   132,   133,   136,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   152,   176,    52,     7,   115,
     126,    47,   150,    59,    60,    59,    50,    44,    45,   153,
     154,     7,   150,   153,     7,     7,   146,   152,   176,   152,
     153,   153,   152,    43,    59,    81,    59,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    45,    50,
      59,    50,   150,    14,   150,    15,   150,    51,   150,   152,
     176,   152,   152,   152,   152,   176,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   116,    47,   150,     7,
      47,   150,   150,   153,   129,   152,   134,   137,    45,   150,
      13,   130,    57,    58,    13,    22,    52,   135,    13,   138,
     116,    12,   150,   152,   153,   154,   152,   153,   150,    55,
     150,   153,    23,   150,   153,    16,   150,    16,   150,     7,
     150,   153,   150,   153,   153,   150,   150,   150,   150
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
#line 278 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 288 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 289 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 293 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 294 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 295 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 296 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 297 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 298 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 299 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 300 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 13:
#line 302 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new HashAssertTopDecl(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 14:
#line 310 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 15:
#line 319 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 16:
#line 329 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 17:
#line 335 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {});
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 18:
#line 352 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 19:
#line 354 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 20:
#line 356 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 21:
#line 358 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 22:
#line 360 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 23:
#line 363 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 24:
#line 365 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 25:
#line 367 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 26:
#line 369 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 27:
#line 371 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 28:
#line 376 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 29:
#line 382 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 30:
#line 391 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 31:
#line 400 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 32:
#line 401 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 33:
#line 406 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 34:
#line 413 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 35:
#line 425 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 36:
#line 431 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 37:
#line 442 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 38:
#line 443 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 39:
#line 449 "src/frontend/parser.y"
    { (yyval.str) = new std::string("len");        ;}
    break;

  case 40:
#line 450 "src/frontend/parser.y"
    { (yyval.str) = new std::string("cap");        ;}
    break;

  case 41:
#line 451 "src/frontend/parser.y"
    { (yyval.str) = new std::string("append");     ;}
    break;

  case 42:
#line 452 "src/frontend/parser.y"
    { (yyval.str) = new std::string("reserve");    ;}
    break;

  case 43:
#line 453 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clear");      ;}
    break;

  case 44:
#line 454 "src/frontend/parser.y"
    { (yyval.str) = new std::string("to_cstr");    ;}
    break;

  case 45:
#line 455 "src/frontend/parser.y"
    { (yyval.str) = new std::string("from_cstr");  ;}
    break;

  case 46:
#line 461 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 47:
#line 469 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 48:
#line 477 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 49:
#line 485 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 50:
#line 494 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 51:
#line 501 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 52:
#line 511 "src/frontend/parser.y"
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

  case 53:
#line 528 "src/frontend/parser.y"
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

  case 54:
#line 547 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 55:
#line 548 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 56:
#line 553 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 57:
#line 559 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 58:
#line 565 "src/frontend/parser.y"
    {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            (yyvsp[(1) - (3)].param_list)->push_back(sentinel);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 59:
#line 576 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 60:
#line 590 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(1) - (3)].str));
            pg.type = (yyvsp[(3) - (3)].type);
            (yyval.param_list)->push_back(pg);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 61:
#line 599 "src/frontend/parser.y"
    {
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(3) - (5)].str));
            pg.type = (yyvsp[(5) - (5)].type);
            (yyvsp[(1) - (5)].param_list)->push_back(pg);
            (yyval.param_list) = (yyvsp[(1) - (5)].param_list);
            delete (yyvsp[(3) - (5)].str);
        ;}
    break;

  case 62:
#line 611 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 63:
#line 612 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 64:
#line 613 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 65:
#line 614 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 66:
#line 615 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 67:
#line 616 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 68:
#line 617 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 69:
#line 622 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 70:
#line 630 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 71:
#line 638 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 72:
#line 647 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 73:
#line 655 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 74:
#line 660 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 75:
#line 666 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 76:
#line 675 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_STAR,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 77:
#line 676 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 78:
#line 677 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 79:
#line 678 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 80:
#line 679 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 81:
#line 680 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 82:
#line 681 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); ;}
    break;

  case 83:
#line 686 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 84:
#line 696 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 85:
#line 703 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 86:
#line 712 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 87:
#line 713 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 88:
#line 718 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 89:
#line 723 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 90:
#line 730 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 91:
#line 735 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 92:
#line 739 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 93:
#line 740 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 94:
#line 741 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 95:
#line 742 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 96:
#line 743 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 97:
#line 744 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 98:
#line 745 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 99:
#line 746 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 100:
#line 747 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 101:
#line 748 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 102:
#line 749 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 103:
#line 750 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 104:
#line 751 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 105:
#line 757 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            IfStmt* ifs = new IfStmt(r, (yyvsp[(2) - (5)].expr), (yyvsp[(3) - (5)].block));
            ifs->else_ifs = *(yyvsp[(4) - (5)].else_if_list);
            ifs->else_block = (yyvsp[(5) - (5)].block);
            (yyval.stmt) = ifs;
            delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 106:
#line 768 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 107:
#line 770 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 108:
#line 777 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 109:
#line 778 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 110:
#line 795 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 111:
#line 800 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 112:
#line 809 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 113:
#line 815 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 114:
#line 822 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 115:
#line 828 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 116:
#line 835 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 117:
#line 841 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 118:
#line 850 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 119:
#line 858 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 120:
#line 865 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 121:
#line 866 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 122:
#line 871 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 123:
#line 877 "src/frontend/parser.y"
    {
            // .VARIANT shorthand — the enum type is inferred from the match value.
            // Emitted as a bare IdentExpr; codegen/type-checker resolves the enum variant.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = new IdentExpr(r, *(yyvsp[(3) - (4)].str));
            (yyval.match_case)->body = (yyvsp[(4) - (4)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column);
            delete (yyvsp[(3) - (4)].str);
        ;}
    break;

  case 124:
#line 888 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 125:
#line 894 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 126:
#line 903 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 127:
#line 911 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 128:
#line 913 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 129:
#line 917 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 130:
#line 918 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 131:
#line 923 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 132:
#line 930 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 133:
#line 931 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 134:
#line 936 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 135:
#line 941 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 136:
#line 946 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 137:
#line 957 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 138:
#line 965 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 139:
#line 970 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 140:
#line 976 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 141:
#line 981 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 142:
#line 994 "src/frontend/parser.y"
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

  case 143:
#line 1008 "src/frontend/parser.y"
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

  case 144:
#line 1025 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 145:
#line 1034 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 146:
#line 1040 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 147:
#line 1048 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 148:
#line 1053 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 149:
#line 1062 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 150:
#line 1067 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 151:
#line 1076 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 152:
#line 1081 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 153:
#line 1086 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 154:
#line 1091 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 155:
#line 1096 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 156:
#line 1098 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 157:
#line 1100 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 158:
#line 1102 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 159:
#line 1104 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 160:
#line 1106 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 161:
#line 1108 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 162:
#line 1110 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 163:
#line 1112 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHL,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 164:
#line 1114 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 165:
#line 1119 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 166:
#line 1127 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 167:
#line 1128 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 168:
#line 1133 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 169:
#line 1134 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 170:
#line 1141 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 172:
#line 1147 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 174:
#line 1156 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 176:
#line 1165 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 177:
#line 1172 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 178:
#line 1173 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 179:
#line 1174 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 180:
#line 1175 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 181:
#line 1176 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 182:
#line 1177 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 184:
#line 1183 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 186:
#line 1192 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 188:
#line 1201 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 190:
#line 1210 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 191:
#line 1217 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 192:
#line 1218 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 194:
#line 1224 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 195:
#line 1231 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 196:
#line 1232 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 198:
#line 1238 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 199:
#line 1245 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 200:
#line 1246 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 201:
#line 1247 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 202:
#line 1252 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 203:
#line 1257 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 204:
#line 1262 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 206:
#line 1271 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 207:
#line 1273 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 208:
#line 1279 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 209:
#line 1284 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 210:
#line 1289 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 211:
#line 1294 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 212:
#line 1299 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 213:
#line 1306 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 214:
#line 1311 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 215:
#line 1319 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 216:
#line 1324 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 217:
#line 1329 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 218:
#line 1334 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 219:
#line 1339 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 220:
#line 1344 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 221:
#line 1349 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 222:
#line 1355 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 223:
#line 1361 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 224:
#line 1363 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 225:
#line 1366 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 226:
#line 1367 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 227:
#line 1368 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 228:
#line 1370 "src/frontend/parser.y"
    {
            // Soft keyword used as a plain identifier (e.g. `len` after `len :=`).
            // When followed by '(' the builtin_call_expr alternative takes priority
            // via Bison's default shift-over-reduce preference.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 229:
#line 1383 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (5)].param_list) ? *(yyvsp[(3) - (5)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, {}, (yyvsp[(5) - (5)].block));
            delete (yyvsp[(3) - (5)].param_list);
        ;}
    break;

  case 230:
#line 1390 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (7)].param_list) ? *(yyvsp[(3) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, (yyvsp[(6) - (7)].type), {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(3) - (7)].param_list);
        ;}
    break;

  case 231:
#line 1397 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (9)].param_list) ? *(yyvsp[(3) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, *(yyvsp[(7) - (9)].type_list), (yyvsp[(9) - (9)].block));
            delete (yyvsp[(3) - (9)].param_list); delete (yyvsp[(7) - (9)].type_list);
        ;}
    break;

  case 232:
#line 1407 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 233:
#line 1412 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 234:
#line 1417 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 235:
#line 1422 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new TypeIdExpr(r, (yyvsp[(3) - (4)].type));
        ;}
    break;

  case 236:
#line 1430 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 237:
#line 1436 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 238:
#line 1445 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 239:
#line 1451 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 240:
#line 1456 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 241:
#line 1461 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 242:
#line 1467 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLEAR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 243:
#line 1472 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 244:
#line 1477 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 245:
#line 1484 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 246:
#line 1485 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 247:
#line 1490 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 248:
#line 1495 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 249:
#line 1500 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 250:
#line 1505 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 251:
#line 1514 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 252:
#line 1522 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 253:
#line 1528 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 254:
#line 1537 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 255:
#line 1539 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 256:
#line 1546 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 257:
#line 1552 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 258:
#line 1558 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 259:
#line 1565 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 260:
#line 1573 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 261:
#line 1585 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4040 "src/flex_bison/parser.cpp"
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


#line 1591 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

