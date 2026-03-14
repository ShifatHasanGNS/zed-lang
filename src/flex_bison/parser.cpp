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
     LOWER_THAN_ELSE = 358,
     UNARY_MINUS = 359,
     UNARY_ADDR = 360,
     POSTFIX_DEREF = 361
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
#define LOWER_THAN_ELSE 358
#define UNARY_MINUS 359
#define UNARY_ADDR 360
#define POSTFIX_DEREF 361




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
#line 372 "src/flex_bison/parser.cpp"
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
#line 397 "src/flex_bison/parser.cpp"

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
#define YYLAST   1687

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  565

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

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
     105,   106
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
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   181,
     189,   199,   209,   221,   233,   245,   257,   258,   260,   262,
     266,   270,   274,   278,   284,   286,   288,   290,   292,   294,
     296,   298,   303,   305,   307,   310,   315,   320,   325,   329,
     333,   337,   341,   345,   347,   349,   353,   358,   365,   366,
     368,   370,   374,   376,   378,   380,   382,   384,   386,   388,
     390,   392,   394,   396,   398,   400,   402,   404,   410,   411,
     417,   418,   421,   424,   428,   433,   439,   447,   457,   465,
     475,   481,   489,   499,   511,   521,   533,   541,   551,   554,
     560,   561,   564,   568,   573,   576,   579,   585,   586,   592,
     593,   596,   603,   604,   607,   610,   615,   617,   620,   622,
     625,   628,   631,   635,   639,   643,   647,   651,   653,   656,
     658,   661,   663,   665,   669,   673,   677,   681,   685,   689,
     693,   697,   701,   705,   709,   713,   717,   718,   721,   723,
     725,   727,   729,   733,   735,   739,   741,   745,   747,   749,
     751,   753,   755,   757,   759,   763,   765,   769,   771,   775,
     777,   781,   783,   785,   787,   791,   793,   795,   797,   801,
     803,   805,   807,   810,   813,   816,   818,   820,   824,   829,
     836,   843,   848,   853,   856,   859,   863,   865,   867,   869,
     871,   873,   875,   877,   879,   881,   885,   887,   889,   891,
     893,   899,   907,   917,   922,   927,   932,   937,   941,   946,
     951,   956,   961,   966,   971,   976,   981,   986,   991,   998,
    1003,  1010,  1017,  1022,  1029,  1038,  1039,  1041,  1043,  1045,
    1049,  1053,  1058,  1064,  1072,  1073,  1075,  1077,  1081,  1084,
    1088,  1092,  1098
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,     0,    -1,    -1,   109,   110,    -1,
     114,    -1,   115,    -1,   116,    -1,   113,    -1,   123,    -1,
     151,    -1,   111,    -1,   112,    -1,    48,   164,    -1,    41,
       6,    -1,    42,     6,    -1,   122,    44,    10,    51,   117,
      52,    -1,   122,    44,    10,    51,    52,    -1,     7,    43,
     164,    -1,     7,    43,   188,    -1,     7,    45,   128,    -1,
       7,    45,   128,    81,   164,    -1,     7,    45,   128,    81,
     188,    -1,   121,    43,   164,    -1,   121,    43,   188,    -1,
     121,    45,   128,    -1,   121,    45,   128,    81,   164,    -1,
     121,    45,   128,    81,   188,    -1,   122,    44,   164,    -1,
     122,    44,   188,    -1,   122,    44,     9,    51,   117,    52,
      -1,    -1,   117,   118,    -1,   119,    45,   128,    59,    -1,
     119,    45,   128,    60,    -1,   120,    -1,   119,    59,   120,
      -1,     7,    -1,   121,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,     7,
      -1,   121,    -1,   122,    44,     8,    49,   124,    50,   162,
      -1,   122,    44,     8,    49,   124,    50,    47,    -1,   122,
      44,     8,    49,   124,    50,    46,   128,   162,    -1,   122,
      44,     8,    49,   124,    50,    46,   128,    47,    -1,   122,
      44,     8,    49,   124,    50,    46,    49,   138,    50,   162,
      -1,   122,    44,     8,    49,   124,    50,    46,    49,   138,
      50,    47,    -1,   122,    44,     8,    49,   124,    50,    46,
      49,   127,    50,   162,    -1,   122,    44,     8,    49,   124,
      50,    46,    49,   127,    50,    47,    -1,    -1,   125,    -1,
     126,    -1,   125,    59,   126,    -1,   125,    59,    56,    -1,
     119,    45,   128,    -1,     7,    45,   128,    -1,   127,    59,
       7,    45,   128,    -1,   131,    -1,   132,    -1,   133,    -1,
     135,    -1,   136,    -1,   129,    -1,   130,    -1,    53,    28,
      54,   128,    -1,    27,    -1,     7,    -1,    66,   128,    -1,
      53,     3,    54,   128,    -1,    53,     7,    54,   128,    -1,
      53,   134,    54,   128,    -1,   134,    66,   134,    -1,   134,
      64,   134,    -1,   134,    65,   134,    -1,   134,    67,   134,
      -1,   134,    68,   134,    -1,     3,    -1,     7,    -1,    53,
      54,   128,    -1,     8,    49,   137,    50,    -1,     8,    49,
     137,    50,    46,   128,    -1,    -1,   138,    -1,   128,    -1,
     138,    59,   128,    -1,   114,    -1,   115,    -1,   140,    -1,
     143,    -1,   155,    -1,   156,    -1,   157,    -1,   159,    -1,
     160,    -1,   161,    -1,   144,    -1,   145,    -1,   148,    -1,
     154,    -1,   162,    -1,    12,   165,   162,   141,   142,    -1,
      -1,   141,    13,    12,   165,   162,    -1,    -1,    13,   162,
      -1,    14,   162,    -1,    14,   165,   162,    -1,     7,    45,
      14,   162,    -1,     7,    45,    14,   165,   162,    -1,    14,
       7,    15,   164,    57,   165,   162,    -1,    14,     7,    15,
     164,    57,   164,    16,   165,   162,    -1,    14,     7,    15,
     164,    58,   165,   162,    -1,    14,     7,    15,   164,    58,
     164,    16,   165,   162,    -1,    14,     7,    15,   164,   162,
      -1,    14,     7,    59,     7,    15,   164,   162,    -1,     7,
      45,    14,     7,    15,   164,    57,   165,   162,    -1,     7,
      45,    14,     7,    15,   164,    57,   164,    16,   165,   162,
      -1,     7,    45,    14,     7,    15,   164,    58,   165,   162,
      -1,     7,    45,    14,     7,    15,   164,    58,   164,    16,
     165,   162,    -1,     7,    45,    14,     7,    15,   164,   162,
      -1,     7,    45,    14,     7,    59,     7,    15,   164,   162,
      -1,    20,   164,    -1,    21,   165,    51,   146,    52,    -1,
      -1,   146,   147,    -1,    22,   165,   162,    -1,    22,    55,
       7,   162,    -1,    22,   162,    -1,    13,   162,    -1,    23,
     165,   162,   149,   150,    -1,    -1,   149,    13,    23,   165,
     162,    -1,    -1,    13,   162,    -1,   122,    44,    11,    51,
     152,    52,    -1,    -1,   152,   153,    -1,     7,    59,    -1,
       7,    81,   164,    59,    -1,     7,    -1,    48,   164,    -1,
      19,    -1,    19,   158,    -1,    19,   164,    -1,    19,   188,
      -1,   158,    43,   164,    -1,   158,    43,   188,    -1,   158,
      81,   164,    -1,   164,    59,   164,    -1,   158,    59,   164,
      -1,    17,    -1,    17,     7,    -1,    18,    -1,    18,     7,
      -1,   164,    -1,   188,    -1,   164,    81,   164,    -1,   164,
      81,   188,    -1,   164,    82,   164,    -1,   164,    83,   164,
      -1,   164,    84,   164,    -1,   164,    85,   164,    -1,   164,
      86,   164,    -1,   164,    87,   164,    -1,   164,    88,   164,
      -1,   164,    89,   164,    -1,   164,    90,   164,    -1,   164,
      91,   164,    -1,    51,   163,    52,    -1,    -1,   163,   139,
      -1,   166,    -1,   184,    -1,   166,    -1,   167,    -1,   166,
      80,   167,    -1,   168,    -1,   167,    79,   168,    -1,   170,
      -1,   170,   169,   170,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,   171,    -1,   170,
      69,   171,    -1,   172,    -1,   171,    70,   172,    -1,   173,
      -1,   172,    61,   173,    -1,   175,    -1,   173,   174,   175,
      -1,    71,    -1,    72,    -1,   177,    -1,   175,   176,   177,
      -1,    64,    -1,    65,    -1,   179,    -1,   177,   178,   179,
      -1,    66,    -1,    67,    -1,    68,    -1,    65,   179,    -1,
      63,   179,    -1,    61,   179,    -1,   180,    -1,   181,    -1,
     180,    55,     7,    -1,   180,    53,   164,    54,    -1,   180,
      53,   164,    57,   164,    54,    -1,   180,    53,   164,    58,
     164,    54,    -1,   180,    53,    45,    54,    -1,   180,    49,
     186,    50,    -1,   180,    62,    -1,   180,    40,    -1,   180,
     102,   179,    -1,     3,    -1,     4,    -1,     5,    -1,    25,
      -1,    26,    -1,    24,    -1,     6,    -1,     7,    -1,   192,
      -1,    49,   164,    50,    -1,   183,    -1,   185,    -1,   182,
      -1,   121,    -1,     8,    49,   124,    50,   162,    -1,     8,
      49,   124,    50,    46,   128,   162,    -1,     8,    49,   124,
      50,    46,    49,   138,    50,   162,    -1,    30,    49,   128,
      50,    -1,    30,    49,   164,    50,    -1,    31,    49,   128,
      50,    -1,    32,    49,   128,    50,    -1,    51,   187,    52,
      -1,    51,   187,    59,    52,    -1,    35,    49,   187,    50,
      -1,    33,    49,   164,    50,    -1,    34,    49,   164,    50,
      -1,    36,    49,   187,    50,    -1,    37,    49,   164,    50,
      -1,    38,    49,   164,    50,    -1,    39,    49,   164,    50,
      -1,    92,    49,   164,    50,    -1,    93,    49,   164,    50,
      -1,    94,    49,   164,    59,   164,    50,    -1,    95,    49,
     164,    50,    -1,    97,    49,   164,    59,   164,    50,    -1,
      98,    49,   164,    59,   164,    50,    -1,    99,    49,   164,
      50,    -1,   100,    49,   164,    59,   164,    50,    -1,   101,
      49,   164,    59,   164,    59,   164,    50,    -1,    -1,   187,
      -1,   164,    -1,   188,    -1,   187,    59,   164,    -1,   187,
      59,   188,    -1,     7,    51,   189,    52,    -1,     7,    51,
      56,   164,    52,    -1,     7,    51,    56,   164,    59,   189,
      52,    -1,    -1,   190,    -1,   191,    -1,   190,    59,   191,
      -1,   190,    59,    -1,     7,    81,   164,    -1,     7,    81,
     188,    -1,    29,    49,   128,    50,   179,    -1,    96,    49,
     128,    50,   179,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   290,   290,   301,   302,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   322,   331,   341,   347,   364,   366,
     368,   370,   372,   375,   377,   379,   381,   383,   388,   394,
     403,   413,   414,   418,   425,   437,   443,   455,   456,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   484,   485,   490,   498,
     506,   514,   523,   530,   540,   557,   577,   578,   582,   588,
     594,   605,   619,   628,   641,   642,   643,   644,   645,   646,
     647,   651,   659,   667,   676,   684,   689,   695,   705,   706,
     707,   708,   709,   710,   711,   715,   725,   732,   742,   743,
     747,   752,   759,   764,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   786,   798,   799,
     807,   808,   824,   829,   838,   844,   851,   857,   864,   870,
     877,   884,   891,   897,   903,   909,   916,   922,   931,   939,
     947,   948,   952,   958,   969,   975,   984,   993,   994,   999,
    1000,  1004,  1012,  1013,  1017,  1022,  1027,  1038,  1046,  1051,
    1057,  1062,  1075,  1089,  1106,  1115,  1121,  1129,  1134,  1143,
    1148,  1157,  1162,  1167,  1172,  1177,  1179,  1181,  1183,  1185,
    1187,  1189,  1191,  1193,  1195,  1200,  1209,  1210,  1215,  1216,
    1223,  1227,  1228,  1236,  1237,  1245,  1246,  1254,  1255,  1256,
    1257,  1258,  1259,  1263,  1264,  1272,  1273,  1281,  1282,  1290,
    1291,  1299,  1300,  1304,  1305,  1313,  1314,  1318,  1319,  1327,
    1328,  1329,  1333,  1338,  1343,  1348,  1352,  1354,  1360,  1365,
    1370,  1375,  1380,  1387,  1392,  1397,  1405,  1410,  1415,  1420,
    1425,  1430,  1435,  1441,  1447,  1449,  1453,  1454,  1455,  1456,
    1469,  1476,  1483,  1493,  1498,  1503,  1508,  1516,  1522,  1531,
    1537,  1542,  1547,  1553,  1558,  1563,  1568,  1573,  1578,  1583,
    1588,  1593,  1598,  1603,  1608,  1616,  1617,  1621,  1626,  1631,
    1636,  1645,  1653,  1659,  1669,  1670,  1677,  1683,  1689,  1696,
    1704,  1716,  1721
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
  "\"swap\"", "\"clamp\"", "\"or_else\"", "LOWER_THAN_ELSE", "UNARY_MINUS",
  "UNARY_ADDR", "POSTFIX_DEREF", "$accept", "program", "top_decl_list",
  "top_decl", "cimport_decl", "import_decl", "union_decl", "var_decl",
  "const_decl", "struct_decl", "field_group_list", "field_group",
  "ident_list", "soft_ident", "kw_ident", "decl_name", "proc_decl",
  "opt_param_list", "param_list", "param_group", "named_ret_list", "type",
  "dyn_array_type", "string_type", "named_type", "ptr_type", "array_type",
  "array_size_expr", "slice_type", "proc_type", "opt_type_list",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   129,   130,   131,   132,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   145,
     146,   146,   147,   147,   147,   147,   148,   149,   149,   150,
     150,   151,   152,   152,   153,   153,   153,   154,   155,   155,
     155,   155,   156,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   163,   163,   164,   164,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   169,
     169,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   179,   179,   179,   179,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     182,   182,   182,   183,   183,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   186,   187,   187,   187,
     187,   188,   188,   188,   189,   189,   190,   190,   190,   191,
     191,   192,   192
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     6,     5,     3,     3,
       3,     5,     5,     3,     3,     3,     5,     5,     3,     3,
       6,     0,     2,     4,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       9,     9,    11,    11,    11,    11,     0,     1,     1,     3,
       3,     3,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     2,     4,     4,     4,     3,     3,
       3,     3,     3,     1,     1,     3,     4,     6,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     5,
       0,     2,     2,     3,     4,     5,     7,     9,     7,     9,
       5,     7,     9,    11,     9,    11,     7,     9,     2,     5,
       0,     2,     3,     4,     2,     2,     5,     0,     5,     0,
       2,     6,     0,     2,     2,     4,     1,     2,     1,     2,
       2,     2,     3,     3,     3,     3,     3,     1,     2,     1,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     2,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     2,     1,     1,     3,     4,     6,
       6,     4,     4,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     7,     9,     4,     4,     4,     4,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       6,     6,     4,     6,     8,     0,     1,     1,     1,     3,
       3,     4,     5,     7,     0,     1,     1,     3,     2,     3,
       3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     2,    56,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     4,    11,    12,     8,
       5,     6,     7,    57,     0,     9,    10,     0,     0,    14,
      15,   236,   237,   238,   242,   243,     0,   241,   239,   240,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   249,    13,   188,   191,
     193,   195,   203,   205,   207,   209,   213,   217,   225,   226,
     248,   246,   189,   247,   244,     0,     0,     0,   243,    18,
      19,    83,     0,    82,     0,     0,    20,    79,    80,    74,
      75,    76,    77,    78,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     224,   223,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,   199,   200,
     201,   202,     0,     0,     0,   211,   212,     0,   215,   216,
       0,   219,   220,   221,     0,   234,   275,     0,     0,   233,
       0,    23,    24,    25,     0,     0,     0,     0,    28,    29,
     284,    98,    93,    94,     0,     0,     0,    84,     0,    37,
       0,    35,    38,     0,    67,    68,     0,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   194,   204,   196,   206,   208,   210,
     214,   218,     0,   276,     0,     0,   227,   235,     0,    66,
      31,    31,   152,     0,     0,     0,   285,   286,   100,     0,
      99,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,     0,    66,   253,
     254,   255,   256,   260,   261,   259,     0,   262,   263,   264,
     265,   258,   279,   280,   266,   267,     0,   269,     0,     0,
       0,   272,     0,     0,   232,   231,   228,     0,     0,    26,
      27,     0,     0,    17,     0,     0,     0,     0,   281,   288,
      96,     0,    85,    86,    81,    87,    93,    94,    89,    90,
      88,    91,    92,    71,    36,     0,   186,   250,    70,    69,
     291,    37,     0,   292,     0,     0,     0,     0,     0,     0,
       0,    30,    32,     0,    16,   156,   151,   153,   289,   290,
     282,   284,   287,     0,   101,     0,     0,     0,   268,   270,
     271,   273,     0,   229,   230,     0,    59,   250,     0,   154,
       0,     0,    97,     0,   251,   243,     0,     0,   167,   169,
     158,     0,     0,     0,     0,   186,   185,   102,   103,   249,
       0,   187,   104,   105,   112,   113,   114,   115,   106,   107,
     108,     0,   109,   110,   111,   116,   171,   172,     0,     0,
       0,     0,     0,   283,     0,     0,     0,   190,   243,   122,
       0,   168,   170,   159,   160,   161,   138,     0,     0,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   274,    83,     0,     0,
      61,   251,    33,    34,   155,   252,     0,   118,     0,     0,
     123,   140,   147,   162,   163,   166,   164,   165,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
       0,     0,     0,     0,   243,   124,     0,   120,     0,     0,
       0,   149,    72,    65,    64,     0,    63,   252,     0,     0,
     125,     0,   117,     0,     0,   130,     0,     0,     0,   139,
     141,     0,   146,     0,     0,     0,     0,   121,     0,     0,
     188,     0,     0,     0,   145,     0,   144,     0,     0,   150,
      73,     0,     0,   136,     0,     0,     0,   126,     0,   128,
     131,     0,   142,     0,     0,     0,     0,     0,     0,   119,
       0,     0,   143,   148,     0,   132,     0,   134,   137,   127,
     129,     0,     0,   133,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    28,    29,    30,    31,    32,
     302,   342,   190,   191,    76,    34,    35,   193,   194,   195,
     448,   248,   107,   108,   109,   110,   111,   186,   112,   113,
     249,   250,   391,   392,   487,   502,   393,   394,   395,   490,
     510,   396,   491,   512,    36,   305,   347,   397,   398,   399,
     400,   401,   402,   403,   404,   327,   357,   127,   416,    78,
      79,    80,   152,    81,    82,    83,    84,   157,    85,   160,
      86,   164,    87,    88,    89,    90,    91,    92,    93,   232,
     128,   129,   245,   246,   247,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -354
static const yytype_int16 yypact[] =
{
    -354,    26,   107,  -354,  -354,    72,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,    47,    94,  1135,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,   153,    89,  -354,  -354,  1213,    84,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,     9,  -354,  -354,  -354,
      87,    98,   108,   114,   126,   190,   192,   201,   209,   215,
     227,  1135,  1213,  1447,  1447,  1447,   232,   235,   240,   241,
     243,   244,   249,   250,   251,   253,  -354,  -354,   111,   149,
    -354,   105,   234,   245,   165,   183,   202,  -354,   -35,  -354,
    -354,  -354,  -354,  -354,  -354,  1213,    84,   745,   211,  -354,
    -354,  -354,   256,  -354,     6,    84,   226,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  1586,    84,   823,    84,    84,  1135,
    1135,  1213,  1213,  1135,  1135,  1135,   258,  -354,   -11,  -354,
    -354,  -354,  -354,  1135,  1135,  1135,  1135,    84,  1135,  1135,
    1135,  1135,  1135,  1447,  1447,  1447,  -354,  -354,  -354,  -354,
    -354,  -354,  1447,  1447,  1447,  -354,  -354,  1447,  -354,  -354,
    1447,  -354,  -354,  -354,  1447,  -354,  1213,   901,   302,  -354,
    1447,  -354,  -354,   239,   272,   273,   274,   275,  -354,  -354,
       1,    84,   269,   277,   278,    84,   102,  -354,  1213,  -354,
       2,  -354,  -354,   279,   268,  -354,   283,   288,   290,   291,
     293,   294,   295,   296,   299,    40,    79,   300,   301,   304,
    -354,  -354,   979,   307,   308,   312,   309,   311,   313,   314,
     317,   315,   316,   149,  -354,   234,   259,   245,   165,   183,
     202,  -354,   326,   318,   298,   159,  -354,  -354,  1213,  1586,
    -354,   328,  -354,   306,  1135,   329,   323,  -354,  -354,   333,
     330,    84,    84,    84,  -354,    84,    95,    95,    95,    95,
      95,  -354,  -354,    84,  1586,   125,  1480,  1447,  1467,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  1213,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  1135,  -354,  1447,  1135,
    1135,  -354,  1135,  1135,  -354,  -354,  -354,  1135,  1135,  -354,
    -354,   335,  1517,  -354,  1550,    12,  1213,   106,  -354,   383,
     345,    84,  -354,  -354,  -354,  -354,  -354,  -354,   219,   219,
    -354,  -354,  -354,  -354,  -354,    -4,  -354,  -354,  -354,  -354,
    -354,   288,   342,  -354,   343,   344,   346,   336,   347,   348,
      32,  -354,  -354,     7,  -354,   -53,  -354,  -354,  -354,  -354,
    -354,   383,  -354,    84,  -354,    84,   349,   667,  -354,  -354,
    -354,  -354,  1135,  -354,  -354,    23,  -354,   218,    84,  -354,
    1135,   353,  -354,    80,  -354,    52,  1447,  1291,   390,   391,
    1213,  1135,  1447,  1447,  1135,  1213,  -354,  -354,  -354,   252,
     362,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,   -22,  -354,  -354,  -354,  -354,   372,  -354,   357,   124,
     142,   213,   350,  -354,   349,    28,   349,   111,    14,  -354,
     349,  -354,  -354,   351,   352,  -354,  -354,   361,   349,  -354,
    1213,  1213,  1135,  1135,  1135,  1213,  1135,  1135,  1135,  1135,
    1135,  1135,  1135,  1135,  1135,  1135,  -354,   368,   103,   136,
    -354,   552,  -354,  -354,  -354,  -354,  1369,  -354,  1135,   407,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
      84,   179,   426,   184,    29,  -354,   349,   421,    77,   420,
      41,   424,  -354,  -354,  -354,   394,  -354,   568,  1135,   433,
    -354,     0,  -354,  1135,  1135,  -354,  1135,   349,  1057,  -354,
    -354,    20,  -354,    84,   176,   429,  1447,  -354,   425,   349,
     -40,   430,   349,   349,  -354,   438,  -354,   349,  1447,  -354,
    -354,  1135,  1135,  -354,  1135,   349,  1447,  -354,  1447,  -354,
    -354,   349,  -354,   349,   431,   349,   432,   349,   349,  -354,
     349,   349,  -354,  -354,  1447,  -354,  1447,  -354,  -354,  -354,
    -354,   349,   349,  -354,  -354
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -354,  -354,  -354,  -354,  -354,  -354,  -354,   109,   110,  -354,
     210,  -354,  -227,   188,    -1,   112,  -354,   225,  -354,   199,
    -354,   -31,  -354,  -354,  -354,  -354,  -354,   -14,  -354,  -354,
    -354,  -353,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,    88,  -354,  -354,  -354,    22,  -354,   -15,  -168,  -344,
     327,   331,  -354,   319,   332,   320,   322,  -354,   324,  -354,
     325,  -354,   -48,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
     -97,   -27,   121,  -354,   170,  -354
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -191
static const yytype_int16 yytable[] =
{
      77,    33,   373,   101,   102,   165,   369,   106,   243,   182,
     100,  -190,   516,   183,   166,   130,   131,   132,   167,   345,
     168,   431,    99,   103,   205,   206,     3,   169,   370,   458,
     101,   102,   417,   417,   184,   101,   102,   432,   417,   417,
     143,   211,   456,   528,   498,   355,   126,   263,   212,   104,
     103,   326,   368,    39,   507,   103,   449,   244,   114,   433,
     185,   264,   105,   508,   346,   173,   264,   170,   172,   233,
     179,   326,   409,   459,   187,   343,   104,   343,   365,   366,
     171,   104,   178,   326,   196,   199,   201,   202,   499,   105,
     275,   101,   102,   509,   105,    37,   -56,   415,   316,   276,
      40,   200,   317,   180,   203,   204,   217,     4,   207,   208,
     209,   103,   417,   192,     5,    37,   231,    38,   213,   214,
     215,   216,   237,   218,   219,   220,   221,   222,   326,   277,
     414,   447,   102,    97,   503,   504,   115,   104,   276,   311,
       6,     7,     8,     9,    10,    11,    12,   116,    13,    14,
     105,   103,   235,   481,   254,    15,   255,   117,   350,   520,
     520,   262,   482,   118,   417,   351,   256,   257,   258,   259,
     260,   325,   417,   261,   145,   119,   326,   104,   146,   147,
     148,   149,   150,   151,   417,   283,   483,   520,   520,   450,
     105,   143,   417,   326,   417,   311,    95,   282,    96,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   420,
     417,   300,   417,   296,   427,   428,   297,   298,   -58,   330,
     312,   313,   314,   299,   315,   -58,   493,   326,   144,   307,
     326,   496,   323,   531,   532,   326,   155,   156,   192,   120,
     333,   121,   318,   319,   320,   321,   322,   158,   159,   283,
     122,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   123,   -58,
     -58,   282,   180,   192,   124,   192,   -58,   192,   161,   162,
     163,   332,   452,   453,   334,   335,   125,   336,   337,   349,
     354,   133,   338,   339,   134,   258,   259,   260,   486,   135,
     136,   348,   137,   138,   356,    95,   -57,    96,   139,   140,
     141,   192,   142,   192,   153,   181,   154,   188,   210,   236,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     238,   239,   372,   251,   240,   241,   242,   266,   145,   265,
     407,   252,   253,   267,   410,   519,   522,   411,   -83,   268,
     527,   269,   406,   270,   271,   272,   273,   408,   535,   274,
     278,   279,   295,   425,   280,   412,   389,   284,   285,   287,
     543,   288,   367,   545,   547,   424,   426,   291,   550,   429,
     551,   286,   289,   290,   292,   293,   294,   276,   374,   405,
     303,   308,   309,   310,   106,   340,   561,   306,   562,   311,
     243,   353,   358,   359,   360,   362,   361,   421,   422,   419,
     326,   363,   364,   179,   464,   413,   430,   446,   469,   454,
     432,   434,   461,   480,   489,   178,   463,   465,   466,   467,
     468,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   434,   451,   495,   501,   506,   455,   511,   457,   513,
     515,   536,   460,   488,   534,   541,   538,   554,   556,   492,
     462,   304,   324,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   301,   329,   387,   388,   423,   390,
     223,   226,   371,   227,     0,   224,   228,   225,   485,   352,
       0,   229,   530,   514,     0,   230,     0,     0,   518,   521,
       0,   523,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   494,     0,   497,     0,     0,   500,     0,
     505,     0,     0,     0,     0,     0,   544,   546,     0,   548,
       0,     0,     0,   517,     0,     0,     0,     0,     0,   524,
     526,     0,     0,   529,     0,     0,   533,     0,     0,     0,
       0,   537,     0,     0,   539,   540,     0,     0,     0,   542,
       0,     0,   -60,     0,     0,     0,     0,   549,     0,   -60,
       0,     0,     0,   552,     0,   553,     0,   555,   -62,   557,
     558,     0,   559,   560,     0,   -62,     0,     0,     0,     0,
       0,     0,     0,   563,   564,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -60,     0,     0,     0,     0,     0,
     -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,
     -62,     0,     0,     0,     0,     0,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
      41,    42,    43,    44,   375,    46,     0,     0,     0,   376,
       0,   377,     0,     0,   378,   379,   380,   381,   382,     0,
     383,    47,    48,    49,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,   384,    61,     0,   385,   386,
       0,     0,     0,     0,     0,     0,     0,     0,    63,     0,
      64,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    98,   174,   175,   176,   177,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    47,
      48,    49,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    43,    44,
     197,   198,     0,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
     103,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,   104,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    47,    48,    49,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,   234,     0,     0,     0,
      61,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,    64,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,    43,    44,    98,    46,     0,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    47,    48,    49,     0,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      62,   281,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    64,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,    43,    44,    45,    46,     0,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    47,    48,    49,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,   326,     0,
       0,     0,   525,     0,     0,     0,     0,     0,    63,     0,
      64,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,    46,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    47,
      48,    49,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,    64,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    43,    44,
      98,    46,     0,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,    64,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,    43,    44,   418,    46,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    47,    48,    49,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,    64,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,    43,    44,   484,    46,     0,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    47,    48,    49,     0,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    64,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,    43,    44,    45,    46,     0,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    47,    48,    49,   331,   102,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   189,     0,     0,
       0,     0,     0,     0,   103,     0,    61,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,    63,     0,
      64,     0,    65,     6,     7,     8,     9,    10,    11,    12,
     104,     0,     0,     0,   189,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,     0,   328,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       6,     7,     8,     9,    10,    11,    12,   189,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   341,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,   189,     0,     0,     0,     0,     0,     0,
       0,     0,   344,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      15,     2,   355,     7,     8,    40,    59,    38,     7,     3,
      37,    51,    12,     7,    49,    63,    64,    65,    53,     7,
      55,    43,    37,    27,   121,   122,     0,    62,    81,    15,
       7,     8,   376,   377,    28,     7,     8,    59,   382,   383,
      80,    52,    14,    23,    15,    49,    61,    45,    59,    53,
      27,    51,    45,     6,    13,    27,   409,    56,    49,    81,
      54,    59,    66,    22,    52,    96,    59,   102,    95,   166,
      97,    51,    49,    59,   105,   302,    53,   304,    46,    47,
      95,    53,    97,    51,   115,   116,   117,   118,    59,    66,
      50,     7,     8,    52,    66,    43,    44,    45,     3,    59,
       6,   116,     7,    51,   119,   120,   137,     0,   123,   124,
     125,    27,   456,   114,     7,    43,   164,    45,   133,   134,
     135,   136,   170,   138,   139,   140,   141,   142,    51,    50,
      50,     7,     8,    44,    57,    58,    49,    53,    59,    59,
      33,    34,    35,    36,    37,    38,    39,    49,    41,    42,
      66,    27,   167,    50,   185,    48,    54,    49,    52,   503,
     504,   188,    59,    49,   508,    59,    64,    65,    66,    67,
      68,    46,   516,   188,    69,    49,    51,    53,    73,    74,
      75,    76,    77,    78,   528,   212,    50,   531,   532,    47,
      66,    80,   536,    51,   538,    59,    43,   212,    45,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   377,
     554,   238,   556,    54,   382,   383,    57,    58,     0,   267,
     251,   252,   253,   238,   255,     7,    47,    51,    79,   244,
      51,    47,   263,    57,    58,    51,    71,    72,   239,    49,
     288,    49,   256,   257,   258,   259,   260,    64,    65,   276,
      49,    33,    34,    35,    36,    37,    38,    39,    49,    41,
      42,   276,    51,   264,    49,   266,    48,   268,    66,    67,
      68,   286,    59,    60,   289,   290,    49,   292,   293,   306,
     311,    49,   297,   298,    49,    66,    67,    68,   456,    49,
      49,   306,    49,    49,   325,    43,    44,    45,    49,    49,
      49,   302,    49,   304,    70,    49,    61,    81,    50,     7,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      81,    49,   353,    54,    51,    51,    51,    59,    69,    50,
     357,    54,    54,    50,   365,   503,   504,   368,    50,    49,
     508,    50,   357,    50,    50,    50,    50,   362,   516,    50,
      50,    50,    54,   380,    50,   370,   357,    50,    50,    50,
     528,    50,   340,   531,   532,   380,   381,    50,   536,   384,
     538,    59,    59,    59,    59,    59,    50,    59,   356,   357,
      52,    52,    59,    50,   415,    50,   554,    81,   556,    59,
       7,    46,    50,    50,    50,    59,    50,     7,     7,   377,
      51,    54,    54,   430,   431,    52,    44,    50,   435,    59,
      59,    59,    51,    45,     7,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,    59,   410,     7,    13,    15,   414,    13,   416,    45,
       7,    16,   420,   458,    15,     7,    16,    16,    16,   480,
     428,   241,   264,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   239,   266,   357,   357,   380,   357,
     143,   152,   351,   153,    -1,   144,   154,   145,   456,   309,
      -1,   157,   513,   498,    -1,   160,    -1,    -1,   503,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   481,    -1,   483,    -1,    -1,   486,    -1,
     488,    -1,    -1,    -1,    -1,    -1,   531,   532,    -1,   534,
      -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,   507,
     508,    -1,    -1,   511,    -1,    -1,   514,    -1,    -1,    -1,
      -1,   519,    -1,    -1,   522,   523,    -1,    -1,    -1,   527,
      -1,    -1,     0,    -1,    -1,    -1,    -1,   535,    -1,     7,
      -1,    -1,    -1,   541,    -1,   543,    -1,   545,     0,   547,
     548,    -1,   550,   551,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   561,   562,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      48,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    24,    25,    26,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    24,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    24,    25,    26,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    24,    25,    26,     7,     8,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    49,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    61,    -1,
      63,    -1,    65,    33,    34,    35,    36,    37,    38,    39,
      53,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    56,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      33,    34,    35,    36,    37,    38,    39,     7,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    52,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   108,   109,     0,     0,     7,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    48,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   110,   111,   112,   113,
     114,   115,   116,   121,   122,   123,   151,    43,    45,     6,
       6,     3,     4,     5,     6,     7,     8,    24,    25,    26,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    49,    51,    61,    63,    65,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   121,   164,   166,   167,
     168,   170,   171,   172,   173,   175,   177,   179,   180,   181,
     182,   183,   184,   185,   192,    43,    45,    44,     7,   164,
     188,     7,     8,    27,    53,    66,   128,   129,   130,   131,
     132,   133,   135,   136,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,   164,   164,   187,   188,
     179,   179,   179,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    80,    79,    69,    73,    74,    75,    76,
      77,    78,   169,    70,    61,    71,    72,   174,    64,    65,
     176,    66,    67,    68,   178,    40,    49,    53,    55,    62,
     102,   164,   188,   128,     8,     9,    10,    11,   164,   188,
      51,    49,     3,     7,    28,    54,   134,   128,    81,     7,
     119,   120,   121,   124,   125,   126,   128,     7,     8,   128,
     164,   128,   128,   164,   164,   187,   187,   164,   164,   164,
      50,    52,    59,   164,   164,   164,   164,   128,   164,   164,
     164,   164,   164,   167,   168,   171,   170,   172,   173,   175,
     177,   179,   186,   187,    45,   164,     7,   179,    81,    49,
      51,    51,    51,     7,    56,   189,   190,   191,   128,   137,
     138,    54,    54,    54,   128,    54,    64,    65,    66,    67,
      68,   164,   188,    45,    59,    50,    59,    50,    49,    50,
      50,    50,    50,    50,    50,    50,    59,    50,    50,    50,
      50,    52,   164,   188,    50,    50,    59,    50,    50,    59,
      59,    50,    59,    59,    50,    54,    54,    57,    58,   164,
     188,   124,   117,    52,   117,   152,    81,   164,    52,    59,
      50,    59,   128,   128,   128,   128,     3,     7,   134,   134,
     134,   134,   134,   128,   120,    46,    51,   162,    56,   126,
     179,     7,   164,   179,   164,   164,   164,   164,   164,   164,
      50,    52,   118,   119,    52,     7,    52,   153,   164,   188,
      52,    59,   191,    46,   128,    49,   128,   163,    50,    50,
      50,    50,    59,    54,    54,    46,    47,   162,    45,    59,
      81,   189,   128,   138,   162,     7,    12,    14,    17,    18,
      19,    20,    21,    23,    48,    51,    52,   114,   115,   121,
     122,   139,   140,   143,   144,   145,   148,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   164,   188,   164,    49,
     128,   128,   164,    52,    50,    45,   165,   166,     7,   162,
     165,     7,     7,   158,   164,   188,   164,   165,   165,   164,
      44,    43,    59,    81,    59,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    50,     7,   127,   138,
      47,   162,    59,    60,    59,   162,    14,   162,    15,    59,
     162,    51,   162,   164,   188,   164,   164,   164,   164,   188,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
      45,    50,    59,    50,     7,   162,   165,   141,   164,     7,
     146,   149,   128,    47,   162,     7,    47,   162,    15,    59,
     162,    13,   142,    57,    58,   162,    15,    13,    22,    52,
     147,    13,   150,    45,   164,     7,    12,   162,   164,   165,
     166,   164,   165,   164,   162,    55,   162,   165,    23,   162,
     128,    57,    58,   162,    15,   165,    16,   162,    16,   162,
     162,     7,   162,   165,   164,   165,   164,   165,   164,   162,
     165,   165,   162,   162,    16,   162,    16,   162,   162,   162,
     162,   165,   165,   162,   162
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
#line 291 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 301 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 302 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 306 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 307 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 308 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 309 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 310 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 311 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 312 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 313 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 13:
#line 315 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new HashAssertTopDecl(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 14:
#line 323 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 15:
#line 332 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 16:
#line 342 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 17:
#line 348 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {});
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 18:
#line 365 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 19:
#line 367 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 20:
#line 369 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 21:
#line 371 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 22:
#line 373 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 23:
#line 376 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 24:
#line 378 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 25:
#line 380 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 26:
#line 382 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 27:
#line 384 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 28:
#line 389 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 29:
#line 395 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 30:
#line 404 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 31:
#line 413 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 32:
#line 414 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 33:
#line 419 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 34:
#line 426 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 35:
#line 438 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 36:
#line 444 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 37:
#line 455 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 38:
#line 456 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 39:
#line 462 "src/frontend/parser.y"
    { (yyval.str) = new std::string("len");        ;}
    break;

  case 40:
#line 463 "src/frontend/parser.y"
    { (yyval.str) = new std::string("cap");        ;}
    break;

  case 41:
#line 464 "src/frontend/parser.y"
    { (yyval.str) = new std::string("append");     ;}
    break;

  case 42:
#line 465 "src/frontend/parser.y"
    { (yyval.str) = new std::string("reserve");    ;}
    break;

  case 43:
#line 466 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clear");      ;}
    break;

  case 44:
#line 467 "src/frontend/parser.y"
    { (yyval.str) = new std::string("to_cstr");    ;}
    break;

  case 45:
#line 468 "src/frontend/parser.y"
    { (yyval.str) = new std::string("from_cstr");  ;}
    break;

  case 46:
#line 469 "src/frontend/parser.y"
    { (yyval.str) = new std::string("panic");      ;}
    break;

  case 47:
#line 470 "src/frontend/parser.y"
    { (yyval.str) = new std::string("free");       ;}
    break;

  case 48:
#line 471 "src/frontend/parser.y"
    { (yyval.str) = new std::string("copy");       ;}
    break;

  case 49:
#line 472 "src/frontend/parser.y"
    { (yyval.str) = new std::string("enum_name");  ;}
    break;

  case 50:
#line 473 "src/frontend/parser.y"
    { (yyval.str) = new std::string("bit_cast");   ;}
    break;

  case 51:
#line 474 "src/frontend/parser.y"
    { (yyval.str) = new std::string("min");        ;}
    break;

  case 52:
#line 475 "src/frontend/parser.y"
    { (yyval.str) = new std::string("max");        ;}
    break;

  case 53:
#line 476 "src/frontend/parser.y"
    { (yyval.str) = new std::string("abs");        ;}
    break;

  case 54:
#line 477 "src/frontend/parser.y"
    { (yyval.str) = new std::string("swap");       ;}
    break;

  case 55:
#line 478 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clamp");      ;}
    break;

  case 56:
#line 484 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 57:
#line 485 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 58:
#line 491 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 59:
#line 499 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 60:
#line 507 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 61:
#line 515 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 62:
#line 524 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 63:
#line 531 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 64:
#line 541 "src/frontend/parser.y"
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

  case 65:
#line 558 "src/frontend/parser.y"
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

  case 66:
#line 577 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 67:
#line 578 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 68:
#line 583 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 69:
#line 589 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 70:
#line 595 "src/frontend/parser.y"
    {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            (yyvsp[(1) - (3)].param_list)->push_back(sentinel);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 71:
#line 606 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 72:
#line 620 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(1) - (3)].str));
            pg.type = (yyvsp[(3) - (3)].type);
            (yyval.param_list)->push_back(pg);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 73:
#line 629 "src/frontend/parser.y"
    {
            ParamGroup pg;
            pg.names.push_back(*(yyvsp[(3) - (5)].str));
            pg.type = (yyvsp[(5) - (5)].type);
            (yyvsp[(1) - (5)].param_list)->push_back(pg);
            (yyval.param_list) = (yyvsp[(1) - (5)].param_list);
            delete (yyvsp[(3) - (5)].str);
        ;}
    break;

  case 74:
#line 641 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 75:
#line 642 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 76:
#line 643 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 77:
#line 644 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 78:
#line 645 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 79:
#line 646 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 80:
#line 647 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 81:
#line 652 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 82:
#line 660 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 83:
#line 668 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 84:
#line 677 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 85:
#line 685 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 86:
#line 690 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 87:
#line 696 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 88:
#line 705 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_STAR,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 89:
#line 706 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 90:
#line 707 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 91:
#line 708 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 92:
#line 709 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 93:
#line 710 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 94:
#line 711 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); ;}
    break;

  case 95:
#line 716 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 96:
#line 726 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 97:
#line 733 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 98:
#line 742 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 99:
#line 743 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 100:
#line 748 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 101:
#line 753 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 102:
#line 760 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 103:
#line 765 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 104:
#line 769 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 105:
#line 770 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 106:
#line 771 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 107:
#line 772 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 108:
#line 773 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 109:
#line 774 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 110:
#line 775 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 111:
#line 776 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 112:
#line 777 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 113:
#line 778 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 114:
#line 779 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 115:
#line 780 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 116:
#line 781 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 117:
#line 787 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            IfStmt* ifs = new IfStmt(r, (yyvsp[(2) - (5)].expr), (yyvsp[(3) - (5)].block));
            ifs->else_ifs = *(yyvsp[(4) - (5)].else_if_list);
            ifs->else_block = (yyvsp[(5) - (5)].block);
            (yyval.stmt) = ifs;
            delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 118:
#line 798 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 119:
#line 800 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 120:
#line 807 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 121:
#line 808 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 122:
#line 825 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 123:
#line 830 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 124:
#line 839 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 125:
#line 845 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 126:
#line 852 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 127:
#line 858 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 128:
#line 865 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 129:
#line 871 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 130:
#line 878 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, "", *(yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            delete (yyvsp[(2) - (5)].str);
        ;}
    break;

  case 131:
#line 885 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, *(yyvsp[(2) - (7)].str), *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); delete (yyvsp[(4) - (7)].str);
        ;}
    break;

  case 132:
#line 892 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 133:
#line 898 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), false, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 134:
#line 904 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 135:
#line 910 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), true, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 136:
#line 917 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, "", *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            s->label = *(yyvsp[(1) - (7)].str); delete (yyvsp[(1) - (7)].str); delete (yyvsp[(4) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 137:
#line 923 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, *(yyvsp[(4) - (9)].str), *(yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].expr), (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); delete (yyvsp[(6) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 138:
#line 932 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 139:
#line 940 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 140:
#line 947 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 141:
#line 948 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 142:
#line 953 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 143:
#line 959 "src/frontend/parser.y"
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

  case 144:
#line 970 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 145:
#line 976 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 146:
#line 985 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 147:
#line 993 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 148:
#line 995 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 149:
#line 999 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 150:
#line 1000 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 151:
#line 1005 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 152:
#line 1012 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 153:
#line 1013 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 154:
#line 1018 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 155:
#line 1023 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 156:
#line 1028 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 157:
#line 1039 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 158:
#line 1047 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 159:
#line 1052 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 160:
#line 1058 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 161:
#line 1063 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 162:
#line 1076 "src/frontend/parser.y"
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

  case 163:
#line 1090 "src/frontend/parser.y"
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

  case 164:
#line 1107 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 165:
#line 1116 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 166:
#line 1122 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 167:
#line 1130 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 168:
#line 1135 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 169:
#line 1144 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 170:
#line 1149 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 171:
#line 1158 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 172:
#line 1163 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 173:
#line 1168 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 174:
#line 1173 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 175:
#line 1178 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 176:
#line 1180 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 177:
#line 1182 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 178:
#line 1184 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 179:
#line 1186 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 180:
#line 1188 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 181:
#line 1190 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 182:
#line 1192 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 183:
#line 1194 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHL,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 184:
#line 1196 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 185:
#line 1201 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 186:
#line 1209 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 187:
#line 1210 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 188:
#line 1215 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 189:
#line 1216 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 190:
#line 1223 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 192:
#line 1229 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 194:
#line 1238 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 196:
#line 1247 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 197:
#line 1254 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 198:
#line 1255 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 199:
#line 1256 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 200:
#line 1257 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 201:
#line 1258 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 202:
#line 1259 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 204:
#line 1265 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 206:
#line 1274 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 208:
#line 1283 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 210:
#line 1292 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 211:
#line 1299 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 212:
#line 1300 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 214:
#line 1306 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 215:
#line 1313 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 216:
#line 1314 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 218:
#line 1320 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 219:
#line 1327 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 220:
#line 1328 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 221:
#line 1329 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 222:
#line 1334 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 223:
#line 1339 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 224:
#line 1344 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 226:
#line 1353 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 227:
#line 1355 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 228:
#line 1361 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 229:
#line 1366 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 230:
#line 1371 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 231:
#line 1376 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 232:
#line 1381 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 233:
#line 1388 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 234:
#line 1393 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr), nullptr);
        ;}
    break;

  case 235:
#line 1398 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 236:
#line 1406 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 237:
#line 1411 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 238:
#line 1416 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 239:
#line 1421 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 240:
#line 1426 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 241:
#line 1431 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 242:
#line 1436 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 243:
#line 1442 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 244:
#line 1448 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 245:
#line 1450 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 246:
#line 1453 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 247:
#line 1454 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 248:
#line 1455 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 249:
#line 1457 "src/frontend/parser.y"
    {
            // Soft keyword used as a plain identifier (e.g. `len` after `len :=`).
            // When followed by '(' the builtin_call_expr alternative takes priority
            // via Bison's default shift-over-reduce preference.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 250:
#line 1470 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (5)].param_list) ? *(yyvsp[(3) - (5)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, {}, (yyvsp[(5) - (5)].block));
            delete (yyvsp[(3) - (5)].param_list);
        ;}
    break;

  case 251:
#line 1477 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (7)].param_list) ? *(yyvsp[(3) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, (yyvsp[(6) - (7)].type), {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(3) - (7)].param_list);
        ;}
    break;

  case 252:
#line 1484 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (9)].param_list) ? *(yyvsp[(3) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, *(yyvsp[(7) - (9)].type_list), (yyvsp[(9) - (9)].block));
            delete (yyvsp[(3) - (9)].param_list); delete (yyvsp[(7) - (9)].type_list);
        ;}
    break;

  case 253:
#line 1494 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 254:
#line 1499 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 255:
#line 1504 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 256:
#line 1509 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new TypeIdExpr(r, (yyvsp[(3) - (4)].type));
        ;}
    break;

  case 257:
#line 1517 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 258:
#line 1523 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 259:
#line 1532 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 260:
#line 1538 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 261:
#line 1543 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 262:
#line 1548 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 263:
#line 1554 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLEAR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 264:
#line 1559 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 265:
#line 1564 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 266:
#line 1569 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_PANIC, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 267:
#line 1574 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FREE, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 268:
#line 1579 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_COPY, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 269:
#line 1584 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ENUM_NAME, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 270:
#line 1589 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MIN, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 271:
#line 1594 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MAX, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 272:
#line 1599 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ABS, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 273:
#line 1604 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_SWAP, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 274:
#line 1609 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLAMP, {(yyvsp[(3) - (8)].expr), (yyvsp[(5) - (8)].expr), (yyvsp[(7) - (8)].expr)});
        ;}
    break;

  case 275:
#line 1616 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 276:
#line 1617 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 277:
#line 1622 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 278:
#line 1627 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 279:
#line 1632 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 280:
#line 1637 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 281:
#line 1646 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 282:
#line 1654 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 283:
#line 1660 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 284:
#line 1669 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 285:
#line 1671 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 286:
#line 1678 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 287:
#line 1684 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 288:
#line 1690 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 289:
#line 1697 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 290:
#line 1705 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 291:
#line 1717 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), false);
        ;}
    break;

  case 292:
#line 1722 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), true);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4475 "src/flex_bison/parser.cpp"
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


#line 1728 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

