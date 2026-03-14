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
     LOWER_THAN_ELSE = 359,
     UNARY_MINUS = 360,
     UNARY_ADDR = 361,
     POSTFIX_DEREF = 362
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
#define LOWER_THAN_ELSE 359
#define UNARY_MINUS 360
#define UNARY_ADDR 361
#define POSTFIX_DEREF 362




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
#line 374 "src/flex_bison/parser.cpp"
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
#line 399 "src/flex_bison/parser.cpp"

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
#define YYLAST   1794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNRULES -- Number of states.  */
#define YYNSTATES  582

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   362

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
     105,   106,   107
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
     625,   628,   631,   635,   639,   643,   647,   651,   655,   659,
     663,   667,   669,   672,   674,   677,   679,   681,   685,   689,
     693,   697,   701,   705,   709,   713,   717,   721,   725,   729,
     733,   734,   737,   739,   741,   747,   749,   755,   757,   761,
     763,   767,   769,   773,   775,   777,   779,   781,   783,   785,
     787,   791,   793,   797,   799,   803,   805,   809,   811,   813,
     815,   819,   821,   823,   825,   829,   831,   833,   835,   838,
     841,   844,   846,   848,   852,   857,   864,   871,   876,   881,
     884,   887,   891,   893,   895,   897,   899,   901,   903,   905,
     907,   909,   913,   915,   917,   919,   921,   927,   935,   945,
     950,   955,   960,   965,   969,   974,   979,   984,   989,   994,
     999,  1004,  1009,  1014,  1019,  1026,  1031,  1038,  1045,  1050,
    1057,  1066,  1067,  1069,  1071,  1073,  1077,  1081,  1086,  1092,
    1100,  1101,  1103,  1105,  1109,  1112,  1116,  1120,  1126
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     109,     0,    -1,   110,     0,    -1,    -1,   110,   111,    -1,
     115,    -1,   116,    -1,   117,    -1,   114,    -1,   124,    -1,
     152,    -1,   112,    -1,   113,    -1,    48,   166,    -1,    41,
       6,    -1,    42,     6,    -1,   123,    44,    10,    51,   118,
      52,    -1,   123,    44,    10,    51,    52,    -1,     7,    43,
     166,    -1,     7,    43,   190,    -1,     7,    45,   129,    -1,
       7,    45,   129,    81,   166,    -1,     7,    45,   129,    81,
     190,    -1,   122,    43,   166,    -1,   122,    43,   190,    -1,
     122,    45,   129,    -1,   122,    45,   129,    81,   166,    -1,
     122,    45,   129,    81,   190,    -1,   123,    44,   166,    -1,
     123,    44,   190,    -1,   123,    44,     9,    51,   118,    52,
      -1,    -1,   118,   119,    -1,   120,    45,   129,    59,    -1,
     120,    45,   129,    60,    -1,   121,    -1,   120,    59,   121,
      -1,     7,    -1,   122,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,     7,
      -1,   122,    -1,   123,    44,     8,    49,   125,    50,   164,
      -1,   123,    44,     8,    49,   125,    50,    47,    -1,   123,
      44,     8,    49,   125,    50,    46,   129,   164,    -1,   123,
      44,     8,    49,   125,    50,    46,   129,    47,    -1,   123,
      44,     8,    49,   125,    50,    46,    49,   139,    50,   164,
      -1,   123,    44,     8,    49,   125,    50,    46,    49,   139,
      50,    47,    -1,   123,    44,     8,    49,   125,    50,    46,
      49,   128,    50,   164,    -1,   123,    44,     8,    49,   125,
      50,    46,    49,   128,    50,    47,    -1,    -1,   126,    -1,
     127,    -1,   126,    59,   127,    -1,   126,    59,    56,    -1,
     120,    45,   129,    -1,     7,    45,   129,    -1,   128,    59,
       7,    45,   129,    -1,   132,    -1,   133,    -1,   134,    -1,
     136,    -1,   137,    -1,   130,    -1,   131,    -1,    53,    28,
      54,   129,    -1,    27,    -1,     7,    -1,    66,   129,    -1,
      53,     3,    54,   129,    -1,    53,     7,    54,   129,    -1,
      53,   135,    54,   129,    -1,   135,    66,   135,    -1,   135,
      64,   135,    -1,   135,    65,   135,    -1,   135,    67,   135,
      -1,   135,    68,   135,    -1,     3,    -1,     7,    -1,    53,
      54,   129,    -1,     8,    49,   138,    50,    -1,     8,    49,
     138,    50,    46,   129,    -1,    -1,   139,    -1,   129,    -1,
     139,    59,   129,    -1,   115,    -1,   116,    -1,   141,    -1,
     144,    -1,   156,    -1,   158,    -1,   159,    -1,   161,    -1,
     162,    -1,   163,    -1,   145,    -1,   146,    -1,   149,    -1,
     155,    -1,   164,    -1,    12,   167,   164,   142,   143,    -1,
      -1,   142,    13,    12,   167,   164,    -1,    -1,    13,   164,
      -1,    14,   164,    -1,    14,   167,   164,    -1,     7,    45,
      14,   164,    -1,     7,    45,    14,   167,   164,    -1,    14,
       7,    15,   166,    57,   167,   164,    -1,    14,     7,    15,
     166,    57,   166,    16,   167,   164,    -1,    14,     7,    15,
     166,    58,   167,   164,    -1,    14,     7,    15,   166,    58,
     166,    16,   167,   164,    -1,    14,     7,    15,   166,   164,
      -1,    14,     7,    59,     7,    15,   166,   164,    -1,     7,
      45,    14,     7,    15,   166,    57,   167,   164,    -1,     7,
      45,    14,     7,    15,   166,    57,   166,    16,   167,   164,
      -1,     7,    45,    14,     7,    15,   166,    58,   167,   164,
      -1,     7,    45,    14,     7,    15,   166,    58,   166,    16,
     167,   164,    -1,     7,    45,    14,     7,    15,   166,   164,
      -1,     7,    45,    14,     7,    59,     7,    15,   166,   164,
      -1,    20,   166,    -1,    21,   167,    51,   147,    52,    -1,
      -1,   147,   148,    -1,    22,   167,   164,    -1,    22,    55,
       7,   164,    -1,    22,   164,    -1,    13,   164,    -1,    23,
     167,   164,   150,   151,    -1,    -1,   150,    13,    23,   167,
     164,    -1,    -1,    13,   164,    -1,   123,    44,    11,    51,
     153,    52,    -1,    -1,   153,   154,    -1,     7,    59,    -1,
       7,    81,   166,    59,    -1,     7,    -1,    48,   166,    -1,
      19,    -1,    19,   160,    -1,    19,   166,    -1,    19,   190,
      -1,   166,    59,   166,    -1,   157,    59,   166,    -1,   160,
      43,   166,    -1,   160,    43,   190,    -1,   160,    43,   157,
      -1,   160,    81,   166,    -1,   160,    81,   157,    -1,   166,
      59,   166,    -1,   160,    59,   166,    -1,    17,    -1,    17,
       7,    -1,    18,    -1,    18,     7,    -1,   166,    -1,   190,
      -1,   166,    81,   166,    -1,   166,    81,   190,    -1,   166,
      82,   166,    -1,   166,    83,   166,    -1,   166,    84,   166,
      -1,   166,    85,   166,    -1,   166,    86,   166,    -1,   166,
      87,   166,    -1,   166,    88,   166,    -1,   166,    89,   166,
      -1,   166,    90,   166,    -1,   166,    91,   166,    -1,    51,
     165,    52,    -1,    -1,   165,   140,    -1,   168,    -1,   186,
      -1,   168,   103,   166,    45,   166,    -1,   168,    -1,   168,
     103,   166,    45,   167,    -1,   169,    -1,   168,    80,   169,
      -1,   170,    -1,   169,    79,   170,    -1,   172,    -1,   172,
     171,   172,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,   173,    -1,   172,    69,   173,
      -1,   174,    -1,   173,    70,   174,    -1,   175,    -1,   174,
      61,   175,    -1,   177,    -1,   175,   176,   177,    -1,    71,
      -1,    72,    -1,   179,    -1,   177,   178,   179,    -1,    64,
      -1,    65,    -1,   181,    -1,   179,   180,   181,    -1,    66,
      -1,    67,    -1,    68,    -1,    65,   181,    -1,    63,   181,
      -1,    61,   181,    -1,   182,    -1,   183,    -1,   182,    55,
       7,    -1,   182,    53,   166,    54,    -1,   182,    53,   166,
      57,   166,    54,    -1,   182,    53,   166,    58,   166,    54,
      -1,   182,    53,    45,    54,    -1,   182,    49,   188,    50,
      -1,   182,    62,    -1,   182,    40,    -1,   182,   102,   181,
      -1,     3,    -1,     4,    -1,     5,    -1,    25,    -1,    26,
      -1,    24,    -1,     6,    -1,     7,    -1,   194,    -1,    49,
     166,    50,    -1,   185,    -1,   187,    -1,   184,    -1,   122,
      -1,     8,    49,   125,    50,   164,    -1,     8,    49,   125,
      50,    46,   129,   164,    -1,     8,    49,   125,    50,    46,
      49,   139,    50,   164,    -1,    30,    49,   129,    50,    -1,
      30,    49,   166,    50,    -1,    31,    49,   129,    50,    -1,
      32,    49,   129,    50,    -1,    51,   189,    52,    -1,    51,
     189,    59,    52,    -1,    35,    49,   189,    50,    -1,    33,
      49,   166,    50,    -1,    34,    49,   166,    50,    -1,    36,
      49,   189,    50,    -1,    37,    49,   166,    50,    -1,    38,
      49,   166,    50,    -1,    39,    49,   166,    50,    -1,    92,
      49,   166,    50,    -1,    93,    49,   166,    50,    -1,    94,
      49,   166,    59,   166,    50,    -1,    95,    49,   166,    50,
      -1,    97,    49,   166,    59,   166,    50,    -1,    98,    49,
     166,    59,   166,    50,    -1,    99,    49,   166,    50,    -1,
     100,    49,   166,    59,   166,    50,    -1,   101,    49,   166,
      59,   166,    59,   166,    50,    -1,    -1,   189,    -1,   166,
      -1,   190,    -1,   189,    59,   166,    -1,   189,    59,   190,
      -1,     7,    51,   191,    52,    -1,     7,    51,    56,   166,
      52,    -1,     7,    51,    56,   166,    59,   191,    52,    -1,
      -1,   192,    -1,   193,    -1,   192,    59,   193,    -1,   192,
      59,    -1,     7,    81,   166,    -1,     7,    81,   190,    -1,
      29,    49,   129,    50,   181,    -1,    96,    49,   129,    50,
     181,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   294,   294,   305,   306,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   326,   335,   345,   351,   368,   370,
     372,   374,   376,   379,   381,   383,   385,   387,   392,   398,
     407,   417,   418,   422,   429,   441,   447,   459,   460,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   488,   489,   494,   502,
     510,   518,   527,   534,   544,   561,   581,   582,   586,   592,
     598,   609,   623,   632,   645,   646,   647,   648,   649,   650,
     651,   655,   663,   671,   680,   688,   693,   699,   709,   710,
     711,   712,   713,   714,   715,   719,   729,   736,   746,   747,
     751,   756,   763,   768,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   790,   802,   803,
     811,   812,   828,   833,   842,   848,   855,   861,   868,   874,
     881,   888,   895,   901,   907,   913,   920,   926,   935,   943,
     951,   952,   956,   962,   973,   979,   988,   997,   998,  1003,
    1004,  1008,  1016,  1017,  1021,  1026,  1031,  1042,  1050,  1055,
    1061,  1066,  1077,  1083,  1092,  1106,  1120,  1139,  1145,  1155,
    1161,  1169,  1174,  1183,  1188,  1197,  1202,  1207,  1212,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1240,
    1249,  1250,  1255,  1256,  1257,  1268,  1269,  1277,  1278,  1286,
    1287,  1295,  1296,  1304,  1305,  1306,  1307,  1308,  1309,  1313,
    1314,  1322,  1323,  1331,  1332,  1340,  1341,  1349,  1350,  1354,
    1355,  1363,  1364,  1368,  1369,  1377,  1378,  1379,  1383,  1388,
    1393,  1398,  1402,  1404,  1410,  1415,  1420,  1425,  1430,  1437,
    1442,  1447,  1455,  1460,  1465,  1470,  1475,  1480,  1485,  1491,
    1497,  1499,  1503,  1504,  1505,  1506,  1519,  1526,  1533,  1543,
    1548,  1553,  1558,  1566,  1572,  1581,  1587,  1592,  1597,  1603,
    1608,  1613,  1618,  1623,  1628,  1633,  1638,  1643,  1648,  1653,
    1658,  1666,  1667,  1671,  1676,  1681,  1686,  1695,  1703,  1709,
    1719,  1720,  1727,  1733,  1739,  1746,  1754,  1766,  1771
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
  "\"swap\"", "\"clamp\"", "\"or_else\"", "\"'?'\"", "LOWER_THAN_ELSE",
  "UNARY_MINUS", "UNARY_ADDR", "POSTFIX_DEREF", "$accept", "program",
  "top_decl_list", "top_decl", "cimport_decl", "import_decl", "union_decl",
  "var_decl", "const_decl", "struct_decl", "field_group_list",
  "field_group", "ident_list", "soft_ident", "kw_ident", "decl_name",
  "proc_decl", "opt_param_list", "param_list", "param_group",
  "named_ret_list", "type", "dyn_array_type", "string_type", "named_type",
  "ptr_type", "array_type", "array_size_expr", "slice_type", "proc_type",
  "opt_type_list", "type_list", "stmt", "if_stmt", "else_if_chain",
  "else_block", "for_stmt", "defer_stmt", "match_stmt", "match_case_list",
  "match_case", "when_stmt", "when_else_chain", "when_else_block",
  "enum_decl", "enum_variant_list", "enum_variant", "hash_assert_stmt",
  "return_stmt", "tuple_lit", "multi_decl_stmt", "multi_assign_stmt",
  "multi_ret_expr_list", "break_stmt", "continue_stmt", "expr_stmt",
  "block", "stmt_list", "expr", "expr_no_struct", "expr_or", "expr_and",
  "expr_cmp", "cmp_op", "expr_bitor", "expr_bitxor", "expr_bitand",
  "expr_shift", "shift_op", "expr_add", "add_op", "expr_mul", "mul_op",
  "expr_unary", "expr_postfix", "expr_primary", "proc_lit_expr",
  "sizeof_expr", "array_init_expr", "builtin_call_expr", "opt_arg_list",
  "arg_list", "struct_lit", "field_init_list", "field_init_list_commas",
  "field_init", "cast_expr", 0
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
     355,   356,   357,   358,   359,   360,   361,   362
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   126,   126,
     126,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   130,   131,   132,   133,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   146,
     147,   147,   148,   148,   148,   148,   149,   150,   150,   151,
     151,   152,   153,   153,   154,   154,   154,   155,   156,   156,
     156,   156,   157,   157,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   164,
     165,   165,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   171,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   180,   181,   181,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   185,
     185,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   192,   193,   193,   194,   194
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
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     1,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     1,     1,     5,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     2,     2,
       2,     1,     1,     3,     4,     6,     6,     4,     4,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     5,     7,     9,     4,
       4,     4,     4,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     6,     6,     4,     6,
       8,     0,     1,     1,     1,     3,     3,     4,     5,     7,
       0,     1,     1,     3,     2,     3,     3,     5,     5
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
      15,   242,   243,   244,   248,   249,     0,   247,   245,   246,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   255,    13,   192,   197,
     199,   201,   209,   211,   213,   215,   219,   223,   231,   232,
     254,   252,   193,   253,   250,     0,     0,     0,   249,    18,
      19,    83,     0,    82,     0,     0,    20,    79,    80,    74,
      75,    76,    77,    78,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,   284,
     230,   229,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,     0,     0,     0,   217,   218,     0,   221,
     222,     0,   225,   226,   227,     0,   240,   281,     0,     0,
     239,     0,    23,    24,    25,     0,     0,     0,     0,    28,
      29,   290,    98,    93,    94,     0,     0,     0,    84,     0,
      37,     0,    35,    38,     0,    67,    68,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   251,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,     0,   200,   210,   202,   212,
     214,   216,   220,   224,     0,   282,     0,     0,   233,   241,
       0,    66,    31,    31,   152,     0,     0,     0,   291,   292,
     100,     0,    99,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,     0,     0,
      66,   259,   260,   261,   262,   266,   267,   265,     0,   268,
     269,   270,   271,   264,   285,   286,   272,   273,     0,   275,
       0,     0,     0,   278,     0,     0,     0,   238,   237,   234,
       0,     0,    26,    27,     0,     0,    17,     0,     0,     0,
       0,   287,   294,    96,     0,    85,    86,    81,    87,    93,
      94,    89,    90,    88,    91,    92,    71,    36,     0,   190,
     256,    70,    69,   297,    37,     0,   298,     0,     0,     0,
       0,   194,     0,     0,     0,    30,    32,     0,    16,   156,
     151,   153,   295,   296,   288,   290,   293,     0,   101,     0,
       0,     0,   274,   276,   277,   279,     0,   235,   236,     0,
      59,   256,     0,   154,     0,     0,    97,     0,   257,   249,
       0,     0,   171,   173,   158,     0,     0,     0,     0,   190,
     189,   102,   103,   255,     0,   191,   104,   105,   112,   113,
     114,   115,   106,   107,   108,     0,   109,   110,   111,   116,
     175,   176,     0,     0,     0,     0,     0,   289,     0,     0,
       0,   195,   249,   122,     0,   172,   174,   159,   160,   161,
     138,     0,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,    83,     0,     0,    61,   257,    33,    34,   155,   258,
       0,   118,     0,     0,     0,   123,   140,   147,   166,   164,
     165,   170,   168,   167,   169,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,     0,     0,     0,
       0,   249,   124,     0,   120,     0,     0,     0,     0,   149,
       0,     0,    72,    65,    64,     0,    63,   258,     0,     0,
     125,     0,   117,     0,     0,     0,   130,     0,     0,     0,
     139,   141,     0,   146,   163,   162,     0,     0,     0,     0,
     121,   196,     0,     0,   192,     0,     0,     0,   145,     0,
     144,     0,     0,   150,    73,     0,     0,   136,     0,     0,
       0,   126,     0,     0,   128,   131,     0,   142,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,   143,   148,
       0,   132,     0,   134,   137,   127,     0,   129,     0,     0,
     133,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    27,    28,    29,    30,    31,    32,
     305,   346,   191,   192,    76,    34,    35,   194,   195,   196,
     452,   250,   107,   108,   109,   110,   111,   187,   112,   113,
     251,   252,   395,   396,   494,   512,   397,   398,   399,   498,
     521,   400,   499,   523,    36,   308,   351,   401,   402,   468,
     403,   404,   405,   406,   407,   408,   330,   361,   127,   531,
      78,    79,    80,   153,    81,    82,    83,    84,   158,    85,
     161,    86,   165,    87,    88,    89,    90,    91,    92,    93,
     234,   128,   129,   247,   248,   249,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -370
static const yytype_int16 yypact[] =
{
    -370,   100,   556,  -370,  -370,   176,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,   111,   152,  1242,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,   187,   -20,  -370,  -370,  1320,    23,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   112,  -370,  -370,  -370,
     126,   138,   141,   156,   184,   189,   190,   194,   196,   197,
     198,  1242,  1320,  1554,  1554,  1554,   199,   200,   201,   203,
     204,   205,   206,   207,   208,   209,  -370,  -370,    -9,   180,
    -370,    90,    99,   210,    61,    87,   149,  -370,   -21,  -370,
    -370,  -370,  -370,  -370,  -370,  1320,    23,   852,   213,  -370,
    -370,  -370,   211,  -370,    41,    23,   185,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  1693,    23,   930,    23,    23,  1242,
    1242,  1320,  1320,  1242,  1242,  1242,   218,  -370,     0,  -370,
    -370,  -370,  -370,  1242,  1242,  1242,  1242,    23,  1242,  1242,
    1242,  1242,  1242,  1554,  1242,  1554,  1554,  -370,  -370,  -370,
    -370,  -370,  -370,  1554,  1554,  1554,  -370,  -370,  1554,  -370,
    -370,  1554,  -370,  -370,  -370,  1554,  -370,  1320,  1008,   254,
    -370,  1554,  -370,  -370,   191,   221,   223,   224,   227,  -370,
    -370,     2,    23,   230,   233,   234,    23,    74,  -370,  1320,
    -370,    48,  -370,  -370,   239,   231,  -370,   241,   242,   244,
     245,   246,   248,   249,   250,   251,    40,    53,   252,   253,
     255,  -370,  -370,  1086,   257,   258,   256,   259,   260,   261,
     263,   262,   264,   265,   180,   266,  -370,    99,   267,   210,
      61,    87,   149,  -370,   268,   269,   271,   139,  -370,  -370,
    1320,  1693,  -370,   275,  -370,   232,  1242,   277,   273,  -370,
    -370,   280,   274,    23,    23,    23,  -370,    23,   128,   128,
     128,   128,   128,  -370,  -370,    23,  1693,   103,  1587,  1554,
    1574,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  1320,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  1242,  -370,
    1554,  1242,  1242,  -370,  1242,  1242,  1242,  -370,  -370,  -370,
    1242,  1242,  -370,  -370,   285,  1624,  -370,  1657,     1,  1320,
      78,  -370,   307,   291,    23,  -370,  -370,  -370,  -370,  -370,
    -370,   161,   161,  -370,  -370,  -370,  -370,  -370,    -4,  -370,
    -370,  -370,  -370,  -370,   242,   289,  -370,   290,   292,   293,
     286,  -370,   295,   296,   148,  -370,  -370,    52,  -370,   -46,
    -370,  -370,  -370,  -370,  -370,   307,  -370,    23,  -370,    23,
     302,   774,  -370,  -370,  -370,  -370,  1242,  -370,  -370,    -2,
    -370,   573,    23,  -370,  1242,   304,  -370,    84,  -370,   127,
    1554,  1398,   312,   347,  1320,  1242,  1554,  1554,  1242,  1320,
    -370,  -370,  -370,   192,   314,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    55,  -370,  -370,  -370,  -370,
     308,  -370,   311,    30,   153,   120,   303,  -370,   302,    13,
     302,    12,    14,  -370,   302,  -370,  -370,   305,   309,  -370,
    -370,   315,   302,  -370,  1320,  1320,  1242,  1242,  1242,  1320,
    1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,
    -370,   318,    97,    98,  -370,   596,  -370,  -370,  -370,  -370,
    1476,  -370,  1242,  1242,   364,  -370,  -370,  -370,   316,   317,
    -370,  -370,   316,   317,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,    23,   155,   370,
     167,    18,  -370,   302,   365,   334,     3,   368,    50,   367,
    1242,  1242,  -370,  -370,  -370,   339,  -370,   675,  1242,   378,
    -370,    24,  -370,  1554,  1242,  1242,  -370,  1242,   302,  1164,
    -370,  -370,    16,  -370,  -370,  -370,    23,   134,   371,  1554,
    -370,  -370,   384,   302,   -25,   385,   302,   302,  -370,   380,
    -370,   302,  1554,  -370,  -370,  1242,  1242,  -370,  1242,   302,
    1554,  -370,  1242,  1554,  -370,  -370,   302,  -370,   302,   387,
     302,   388,   302,   302,  -370,   302,   360,   302,  -370,  -370,
    1554,  -370,  1554,  -370,  -370,  -370,  1242,  -370,   302,   302,
    -370,  -370
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,  -370,  -370,  -370,  -370,    45,    49,  -370,
     166,  -370,   -63,   145,    -1,    54,  -370,   172,  -370,   146,
    -370,   -31,  -370,  -370,  -370,  -370,  -370,   -50,  -370,  -370,
    -370,  -357,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   -19,
    -370,  -370,    32,  -370,  -370,  -370,    21,  -370,   -15,  -198,
    -369,   294,   272,  -370,   283,   297,   284,   287,  -370,   282,
    -370,   288,  -370,   -49,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,   -79,   -27,    89,  -370,   140,  -370
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -196
static const yytype_int16 yytable[] =
{
      77,    33,   377,   101,   102,   101,   102,   106,   349,   245,
     100,   421,   421,   373,   130,   131,   132,   421,   421,   166,
     101,   102,    99,   103,    97,   103,  -195,   460,   167,   463,
     101,   102,   168,   508,   169,   374,   529,   451,   102,   542,
     103,   170,   206,   207,   183,   359,   126,   413,   184,   104,
     103,   104,   212,   350,   329,   143,   453,   103,   246,   213,
     514,   515,   105,   518,   105,   174,   104,   329,   173,   185,
     180,   143,   519,   464,   188,   329,   104,   509,   552,   105,
     172,   171,   179,   104,   197,   200,   202,   203,   235,   105,
     277,   421,   143,   265,   144,   186,   105,   372,   435,   278,
       3,   201,   520,   279,   204,   205,   218,   266,   208,   209,
     210,   266,   278,   193,   436,   462,   233,    39,   214,   215,
     216,   217,   239,   219,   220,   221,   222,   223,   257,   225,
     354,   319,   156,   157,   418,   320,   437,   355,   258,   259,
     260,   261,   262,   314,   421,   534,   534,   488,   490,   328,
     421,   159,   160,   237,   329,   256,   489,   314,    40,   146,
     421,   114,   264,   147,   148,   149,   150,   151,   152,   154,
      37,   -56,   419,   421,   263,   115,   534,   534,   181,   456,
     457,   421,   420,   424,   421,   329,   285,   116,   431,   432,
     117,   545,   546,   299,   369,   370,   300,   301,   284,   329,
     454,   421,   503,   421,   329,   118,   329,   534,   321,   322,
     323,   324,   325,   303,   506,   162,   163,   164,   329,    37,
     333,    38,   315,   316,   317,   302,   318,   260,   261,   262,
      95,   310,    96,   119,   326,    95,   -57,    96,   120,   121,
     193,   336,   347,   122,   347,   123,   124,   125,   133,   134,
     135,   285,   136,   137,   138,   139,   140,   141,   142,   145,
     182,   238,   493,   284,   181,   193,   189,   193,   211,   193,
     241,   155,   240,   335,   242,   243,   337,   338,   244,   339,
     340,   341,   353,   358,   253,   342,   343,   254,   255,   267,
     268,   269,   -83,   270,   352,   271,   272,   360,   273,   274,
     275,   276,   280,   281,   193,   282,   193,   286,   287,   289,
     290,   296,   293,   309,   245,   288,   533,   536,   297,   425,
     291,   541,   292,   294,   295,   298,   376,   306,   278,   311,
     313,   549,   312,   314,   411,   344,   146,   357,   414,   362,
     363,   415,   364,   365,   558,   366,   410,   560,   562,   367,
     368,   412,   565,   329,   426,   567,   417,   429,   434,   416,
     393,   450,   458,   487,   436,   371,   466,   438,   438,   428,
     430,   497,   578,   433,   579,   500,   501,   505,   511,   513,
     522,   378,   409,   517,   526,   528,   548,   556,   106,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     550,   553,   423,   570,   572,   576,   391,   180,   470,   307,
     392,   327,   476,   304,   332,   394,   427,   226,   472,   179,
     469,   471,   473,   474,   475,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   455,   228,   224,   229,   459,
     231,   461,   230,   227,   375,   465,     0,   495,   496,   232,
       0,     0,   356,   467,     0,     0,   502,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   492,     0,     0,     0,   524,   525,     0,     0,     0,
       0,     0,     0,   527,     0,   544,     0,     0,     0,   532,
     535,     0,   537,     0,     0,     0,     0,     0,     0,   504,
       0,   507,     0,     0,   510,     0,     0,   516,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     559,   561,   530,   563,     0,     0,     0,   566,     0,   538,
     540,     0,     0,   543,     0,     0,     0,     0,   547,     0,
       0,     0,     0,     0,   551,     0,     4,   554,   555,     0,
       0,   341,   557,     5,     0,     0,     0,     0,     0,     0,
     564,     0,     0,   -58,     0,     0,     0,   568,     0,   569,
     -58,   571,     0,   573,   574,     0,   575,     0,   577,     6,
       7,     8,     9,    10,    11,    12,   -60,    13,    14,   580,
     581,     0,     0,   -60,    15,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,
       0,   -58,     0,     0,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,     0,   -60,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,     0,     0,     0,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,
       0,     0,     0,   -62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,    41,    42,    43,
      44,   379,    46,     0,     0,     0,   380,     0,   381,     0,
       0,   382,   383,   384,   385,   386,     0,   387,    47,    48,
      49,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,   388,    61,     0,   389,   390,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    44,    98,
     175,   176,   177,   178,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    47,    48,    49,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    64,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,   198,   199,     0,
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
       0,     0,     0,   236,     0,     0,     0,    61,     0,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,    98,    46,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      47,    48,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,    62,   283,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
      49,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,   329,     0,     0,     0,   539,
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
       0,    41,    42,    43,    44,   422,    46,     0,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    47,    48,    49,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,   329,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,   491,    46,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      47,    48,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,   329,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
      49,   334,   102,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   190,     0,     0,     0,     0,     0,
       0,   103,     0,    61,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,    63,     0,    64,     0,    65,
       6,     7,     8,     9,    10,    11,    12,   104,     0,     0,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,   331,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     6,     7,     8,
       9,    10,    11,    12,   190,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   345,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
     190,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      15,     2,   359,     7,     8,     7,     8,    38,     7,     7,
      37,   380,   381,    59,    63,    64,    65,   386,   387,    40,
       7,     8,    37,    27,    44,    27,    51,    14,    49,    15,
       7,     8,    53,    15,    55,    81,    12,     7,     8,    23,
      27,    62,   121,   122,     3,    49,    61,    49,     7,    53,
      27,    53,    52,    52,    51,    80,   413,    27,    56,    59,
      57,    58,    66,    13,    66,    96,    53,    51,    95,    28,
      97,    80,    22,    59,   105,    51,    53,    59,   103,    66,
      95,   102,    97,    53,   115,   116,   117,   118,   167,    66,
      50,   460,    80,    45,   103,    54,    66,    45,    43,    59,
       0,   116,    52,    50,   119,   120,   137,    59,   123,   124,
     125,    59,    59,   114,    59,   103,   165,     6,   133,   134,
     135,   136,   171,   138,   139,   140,   141,   142,    54,   144,
      52,     3,    71,    72,    50,     7,    81,    59,    64,    65,
      66,    67,    68,    59,   513,   514,   515,    50,    50,    46,
     519,    64,    65,   168,    51,   186,    59,    59,     6,    69,
     529,    49,   189,    73,    74,    75,    76,    77,    78,    70,
      43,    44,    45,   542,   189,    49,   545,   546,    51,    59,
      60,   550,   380,   381,   553,    51,   213,    49,   386,   387,
      49,    57,    58,    54,    46,    47,    57,    58,   213,    51,
      47,   570,    47,   572,    51,    49,    51,   576,   258,   259,
     260,   261,   262,   240,    47,    66,    67,    68,    51,    43,
     269,    45,   253,   254,   255,   240,   257,    66,    67,    68,
      43,   246,    45,    49,   265,    43,    44,    45,    49,    49,
     241,   290,   305,    49,   307,    49,    49,    49,    49,    49,
      49,   278,    49,    49,    49,    49,    49,    49,    49,    79,
      49,     7,   460,   278,    51,   266,    81,   268,    50,   270,
      49,    61,    81,   288,    51,    51,   291,   292,    51,   294,
     295,   296,   309,   314,    54,   300,   301,    54,    54,    50,
      59,    50,    50,    49,   309,    50,    50,   328,    50,    50,
      50,    50,    50,    50,   305,    50,   307,    50,    50,    50,
      50,    45,    50,    81,     7,    59,   514,   515,    50,     7,
      59,   519,    59,    59,    59,    54,   357,    52,    59,    52,
      50,   529,    59,    59,   361,    50,    69,    46,   369,    50,
      50,   372,    50,    50,   542,    59,   361,   545,   546,    54,
      54,   366,   550,    51,     7,   553,    52,   384,    44,   374,
     361,    50,    59,    45,    59,   344,    51,    59,    59,   384,
     385,     7,   570,   388,   572,    59,    59,     7,    13,    45,
      13,   360,   361,    15,    45,     7,    15,     7,   419,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      16,    16,   381,    16,    16,    45,   361,   434,   435,   243,
     361,   266,   439,   241,   268,   361,   384,   145,   437,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   414,   153,   143,   154,   418,
     158,   420,   155,   146,   355,   424,    -1,   462,   463,   161,
      -1,    -1,   312,   432,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   460,    -1,    -1,    -1,   500,   501,    -1,    -1,    -1,
      -1,    -1,    -1,   508,    -1,   526,    -1,    -1,    -1,   514,
     515,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,   488,
      -1,   490,    -1,    -1,   493,    -1,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     545,   546,   511,   548,    -1,    -1,    -1,   552,    -1,   518,
     519,    -1,    -1,   522,    -1,    -1,    -1,    -1,   527,    -1,
      -1,    -1,    -1,    -1,   533,    -1,     0,   536,   537,    -1,
      -1,   576,   541,     7,    -1,    -1,    -1,    -1,    -1,    -1,
     549,    -1,    -1,     0,    -1,    -1,    -1,   556,    -1,   558,
       7,   560,    -1,   562,   563,    -1,   565,    -1,   567,    33,
      34,    35,    36,    37,    38,    39,     0,    41,    42,   578,
     579,    -1,    -1,     7,    48,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    24,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   109,   110,     0,     0,     7,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    48,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   111,   112,   113,   114,
     115,   116,   117,   122,   123,   124,   152,    43,    45,     6,
       6,     3,     4,     5,     6,     7,     8,    24,    25,    26,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    49,    51,    61,    63,    65,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   122,   166,   168,   169,
     170,   172,   173,   174,   175,   177,   179,   181,   182,   183,
     184,   185,   186,   187,   194,    43,    45,    44,     7,   166,
     190,     7,     8,    27,    53,    66,   129,   130,   131,   132,
     133,   134,   136,   137,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,   166,   166,   189,   190,
     181,   181,   181,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    80,   103,    79,    69,    73,    74,    75,
      76,    77,    78,   171,    70,    61,    71,    72,   176,    64,
      65,   178,    66,    67,    68,   180,    40,    49,    53,    55,
      62,   102,   166,   190,   129,     8,     9,    10,    11,   166,
     190,    51,    49,     3,     7,    28,    54,   135,   129,    81,
       7,   120,   121,   122,   125,   126,   127,   129,     7,     8,
     129,   166,   129,   129,   166,   166,   189,   189,   166,   166,
     166,    50,    52,    59,   166,   166,   166,   166,   129,   166,
     166,   166,   166,   166,   169,   166,   170,   173,   172,   174,
     175,   177,   179,   181,   188,   189,    45,   166,     7,   181,
      81,    49,    51,    51,    51,     7,    56,   191,   192,   193,
     129,   138,   139,    54,    54,    54,   129,    54,    64,    65,
      66,    67,    68,   166,   190,    45,    59,    50,    59,    50,
      49,    50,    50,    50,    50,    50,    50,    50,    59,    50,
      50,    50,    50,    52,   166,   190,    50,    50,    59,    50,
      50,    59,    59,    50,    59,    59,    45,    50,    54,    54,
      57,    58,   166,   190,   125,   118,    52,   118,   153,    81,
     166,    52,    59,    50,    59,   129,   129,   129,   129,     3,
       7,   135,   135,   135,   135,   135,   129,   121,    46,    51,
     164,    56,   127,   181,     7,   166,   181,   166,   166,   166,
     166,   166,   166,   166,    50,    52,   119,   120,    52,     7,
      52,   154,   166,   190,    52,    59,   193,    46,   129,    49,
     129,   165,    50,    50,    50,    50,    59,    54,    54,    46,
      47,   164,    45,    59,    81,   191,   129,   139,   164,     7,
      12,    14,    17,    18,    19,    20,    21,    23,    48,    51,
      52,   115,   116,   122,   123,   140,   141,   144,   145,   146,
     149,   155,   156,   158,   159,   160,   161,   162,   163,   164,
     166,   190,   166,    49,   129,   129,   166,    52,    50,    45,
     167,   168,     7,   164,   167,     7,     7,   160,   166,   190,
     166,   167,   167,   166,    44,    43,    59,    81,    59,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      50,     7,   128,   139,    47,   164,    59,    60,    59,   164,
      14,   164,   103,    15,    59,   164,    51,   164,   157,   166,
     190,   166,   157,   166,   166,   166,   190,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,    45,    50,    59,
      50,     7,   164,   167,   142,   166,   166,     7,   147,   150,
      59,    59,   129,    47,   164,     7,    47,   164,    15,    59,
     164,    13,   143,    45,    57,    58,   164,    15,    13,    22,
      52,   148,    13,   151,   166,   166,    45,   166,     7,    12,
     164,   167,   166,   167,   168,   166,   167,   166,   164,    55,
     164,   167,    23,   164,   129,    57,    58,   164,    15,   167,
      16,   164,   103,    16,   164,   164,     7,   164,   167,   166,
     167,   166,   167,   166,   164,   167,   166,   167,   164,   164,
      16,   164,    16,   164,   164,   164,    45,   164,   167,   167,
     164,   164
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
#line 295 "src/frontend/parser.y"
    {
            Program* prog = new Program();
            prog->decls = *(yyvsp[(1) - (2)].decl_list);
            prog->range = to_sourcerange((yyloc), filename);
            *result = prog;
            delete (yyvsp[(1) - (2)].decl_list);
        ;}
    break;

  case 3:
#line 305 "src/frontend/parser.y"
    { (yyval.decl_list) = new std::vector<Decl*>(); ;}
    break;

  case 4:
#line 306 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].decl_list)->push_back((yyvsp[(2) - (2)].decl)); (yyval.decl_list) = (yyvsp[(1) - (2)].decl_list); ;}
    break;

  case 5:
#line 310 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 6:
#line 311 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 7:
#line 312 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 8:
#line 313 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 9:
#line 314 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 10:
#line 315 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 11:
#line 316 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 12:
#line 317 "src/frontend/parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); ;}
    break;

  case 13:
#line 319 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new HashAssertTopDecl(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 14:
#line 327 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new CImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 15:
#line 336 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ImportDecl(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 16:
#line 346 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 17:
#line 352 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new UnionDecl(r, *(yyvsp[(1) - (5)].str), {});
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 18:
#line 369 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 19:
#line 371 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 20:
#line 373 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 21:
#line 375 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 22:
#line 377 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 23:
#line 380 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 24:
#line 382 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), nullptr, (yyvsp[(3) - (3)].expr)); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 25:
#line 384 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].type), nullptr); delete (yyvsp[(1) - (3)].str); ;}
    break;

  case 26:
#line 386 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 27:
#line 388 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.decl) = new VarDecl(r, *(yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr)); delete (yyvsp[(1) - (5)].str); ;}
    break;

  case 28:
#line 393 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 29:
#line 399 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new ConstDecl(r, *(yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 30:
#line 408 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new StructDecl(r, *(yyvsp[(1) - (6)].str), *(yyvsp[(5) - (6)].field_list));
            delete (yyvsp[(1) - (6)].str);
            delete (yyvsp[(5) - (6)].field_list);
        ;}
    break;

  case 31:
#line 417 "src/frontend/parser.y"
    { (yyval.field_list) = new std::vector<Field>(); ;}
    break;

  case 32:
#line 418 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].field_list)->push_back(*(yyvsp[(2) - (2)].field)); delete (yyvsp[(2) - (2)].field); (yyval.field_list) = (yyvsp[(1) - (2)].field_list); ;}
    break;

  case 33:
#line 423 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 34:
#line 430 "src/frontend/parser.y"
    {
            (yyval.field) = new Field();
            (yyval.field)->names = *(yyvsp[(1) - (4)].ident_list);
            (yyval.field)->type = (yyvsp[(3) - (4)].type);
            delete (yyvsp[(1) - (4)].ident_list);
        ;}
    break;

  case 35:
#line 442 "src/frontend/parser.y"
    {
            (yyval.ident_list) = new std::vector<std::string>();
            (yyval.ident_list)->push_back(*(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 36:
#line 448 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].ident_list)->push_back(*(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
            (yyval.ident_list) = (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 37:
#line 459 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 38:
#line 460 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 39:
#line 466 "src/frontend/parser.y"
    { (yyval.str) = new std::string("len");        ;}
    break;

  case 40:
#line 467 "src/frontend/parser.y"
    { (yyval.str) = new std::string("cap");        ;}
    break;

  case 41:
#line 468 "src/frontend/parser.y"
    { (yyval.str) = new std::string("append");     ;}
    break;

  case 42:
#line 469 "src/frontend/parser.y"
    { (yyval.str) = new std::string("reserve");    ;}
    break;

  case 43:
#line 470 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clear");      ;}
    break;

  case 44:
#line 471 "src/frontend/parser.y"
    { (yyval.str) = new std::string("to_cstr");    ;}
    break;

  case 45:
#line 472 "src/frontend/parser.y"
    { (yyval.str) = new std::string("from_cstr");  ;}
    break;

  case 46:
#line 473 "src/frontend/parser.y"
    { (yyval.str) = new std::string("panic");      ;}
    break;

  case 47:
#line 474 "src/frontend/parser.y"
    { (yyval.str) = new std::string("free");       ;}
    break;

  case 48:
#line 475 "src/frontend/parser.y"
    { (yyval.str) = new std::string("copy");       ;}
    break;

  case 49:
#line 476 "src/frontend/parser.y"
    { (yyval.str) = new std::string("enum_name");  ;}
    break;

  case 50:
#line 477 "src/frontend/parser.y"
    { (yyval.str) = new std::string("bit_cast");   ;}
    break;

  case 51:
#line 478 "src/frontend/parser.y"
    { (yyval.str) = new std::string("min");        ;}
    break;

  case 52:
#line 479 "src/frontend/parser.y"
    { (yyval.str) = new std::string("max");        ;}
    break;

  case 53:
#line 480 "src/frontend/parser.y"
    { (yyval.str) = new std::string("abs");        ;}
    break;

  case 54:
#line 481 "src/frontend/parser.y"
    { (yyval.str) = new std::string("swap");       ;}
    break;

  case 55:
#line 482 "src/frontend/parser.y"
    { (yyval.str) = new std::string("clamp");      ;}
    break;

  case 56:
#line 488 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 57:
#line 489 "src/frontend/parser.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 58:
#line 495 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 59:
#line 503 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (7)].param_list) ? *(yyvsp[(5) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (7)].str), params, nullptr, {}, nullptr);
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(5) - (7)].param_list);
        ;}
    break;

  case 60:
#line 511 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, (yyvsp[(9) - (9)].block));
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 61:
#line 519 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (9)].param_list) ? *(yyvsp[(5) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (9)].str), params, (yyvsp[(8) - (9)].type), {}, nullptr);
            delete (yyvsp[(1) - (9)].str);
            delete (yyvsp[(5) - (9)].param_list);
        ;}
    break;

  case 62:
#line 528 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), (yyvsp[(11) - (11)].block));
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 63:
#line 535 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(5) - (11)].param_list) ? *(yyvsp[(5) - (11)].param_list) : std::vector<ParamGroup>();
            (yyval.decl) = new ProcDecl(r, *(yyvsp[(1) - (11)].str), params, nullptr, *(yyvsp[(9) - (11)].type_list), nullptr);
            delete (yyvsp[(1) - (11)].str); delete (yyvsp[(5) - (11)].param_list); delete (yyvsp[(9) - (11)].type_list);
        ;}
    break;

  case 64:
#line 545 "src/frontend/parser.y"
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
#line 562 "src/frontend/parser.y"
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
#line 581 "src/frontend/parser.y"
    { (yyval.param_list) = nullptr; ;}
    break;

  case 67:
#line 582 "src/frontend/parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 68:
#line 587 "src/frontend/parser.y"
    {
            (yyval.param_list) = new std::vector<ParamGroup>();
            (yyval.param_list)->push_back(*(yyvsp[(1) - (1)].param_group));
            delete (yyvsp[(1) - (1)].param_group);
        ;}
    break;

  case 69:
#line 593 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].param_list)->push_back(*(yyvsp[(3) - (3)].param_group));
            delete (yyvsp[(3) - (3)].param_group);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 70:
#line 599 "src/frontend/parser.y"
    {
            // variadic sentinel: proc(fmt: cstr, ..)
            ParamGroup sentinel;
            sentinel.is_vararg_sentinel = true;
            (yyvsp[(1) - (3)].param_list)->push_back(sentinel);
            (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
        ;}
    break;

  case 71:
#line 610 "src/frontend/parser.y"
    {
            (yyval.param_group) = new ParamGroup();
            (yyval.param_group)->names = *(yyvsp[(1) - (3)].ident_list);
            (yyval.param_group)->type = (yyvsp[(3) - (3)].type);
            delete (yyvsp[(1) - (3)].ident_list);
        ;}
    break;

  case 72:
#line 624 "src/frontend/parser.y"
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
#line 633 "src/frontend/parser.y"
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
#line 645 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 75:
#line 646 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 76:
#line 647 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 77:
#line 648 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 78:
#line 649 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 79:
#line 650 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 80:
#line 651 "src/frontend/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 81:
#line 656 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new DynArrayTypeAST(r, (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 82:
#line 664 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new StringTypeAST(r);
        ;}
    break;

  case 83:
#line 672 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new NamedType(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 84:
#line 681 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new PtrType(r, (yyvsp[(2) - (2)].type));
        ;}
    break;

  case 85:
#line 689 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].int_val), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 86:
#line 694 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, std::string(*(yyvsp[(2) - (4)].str)), (yyvsp[(4) - (4)].type));
            delete (yyvsp[(2) - (4)].str);
        ;}
    break;

  case 87:
#line 700 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new ArrayType(r, (yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].type));
        ;}
    break;

  case 88:
#line 709 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_STAR,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 89:
#line 710 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 90:
#line 711 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 91:
#line 712 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 92:
#line 713 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new BinaryExpr(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 93:
#line 714 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val)); ;}
    break;

  case 94:
#line 715 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); ;}
    break;

  case 95:
#line 720 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.type) = new SliceType(r, (yyvsp[(3) - (3)].type));
        ;}
    break;

  case 96:
#line 730 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (4)].type_list) ? *(yyvsp[(3) - (4)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), nullptr);
            delete (yyvsp[(3) - (4)].type_list);
        ;}
    break;

  case 97:
#line 737 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Type*> pts = (yyvsp[(3) - (6)].type_list) ? *(yyvsp[(3) - (6)].type_list) : std::vector<Type*>();
            (yyval.type) = new ProcTypeAST(r, std::move(pts), (yyvsp[(6) - (6)].type));
            delete (yyvsp[(3) - (6)].type_list);
        ;}
    break;

  case 98:
#line 746 "src/frontend/parser.y"
    { (yyval.type_list) = nullptr; ;}
    break;

  case 99:
#line 747 "src/frontend/parser.y"
    { (yyval.type_list) = (yyvsp[(1) - (1)].type_list); ;}
    break;

  case 100:
#line 752 "src/frontend/parser.y"
    {
            (yyval.type_list) = new std::vector<Type*>();
            (yyval.type_list)->push_back((yyvsp[(1) - (1)].type));
        ;}
    break;

  case 101:
#line 757 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].type_list)->push_back((yyvsp[(3) - (3)].type));
            (yyval.type_list) = (yyvsp[(1) - (3)].type_list);
        ;}
    break;

  case 102:
#line 764 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 103:
#line 769 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeclStmt(r, (yyvsp[(1) - (1)].decl));
        ;}
    break;

  case 104:
#line 773 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 105:
#line 774 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 106:
#line 775 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 107:
#line 776 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 108:
#line 777 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 109:
#line 778 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 110:
#line 779 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 111:
#line 780 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 112:
#line 781 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 113:
#line 782 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 114:
#line 783 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 115:
#line 784 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 116:
#line 785 "src/frontend/parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].block); ;}
    break;

  case 117:
#line 791 "src/frontend/parser.y"
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
#line 802 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*, BlockStmt*>>(); ;}
    break;

  case 119:
#line 804 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block)));
            (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list);
        ;}
    break;

  case 120:
#line 811 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 121:
#line 812 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 122:
#line 829 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (2)].block));
        ;}
    break;

  case 123:
#line 834 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LoopStmt(r, (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].block));
        ;}
    break;

  case 124:
#line 843 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (4)].block));
            s->label = *(yyvsp[(1) - (4)].str); delete (yyvsp[(1) - (4)].str); (yyval.stmt) = s;
        ;}
    break;

  case 125:
#line 849 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new LoopStmt(r, (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            s->label = *(yyvsp[(1) - (5)].str); delete (yyvsp[(1) - (5)].str); (yyval.stmt) = s;
        ;}
    break;

  case 126:
#line 856 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), false, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 127:
#line 862 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 128:
#line 869 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), true, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 129:
#line 875 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(2) - (9)].str), (yyvsp[(4) - (9)].expr), (yyvsp[(6) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->step_expr = (yyvsp[(8) - (9)].expr); delete (yyvsp[(2) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 130:
#line 882 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, "", *(yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].block));
            delete (yyvsp[(2) - (5)].str);
        ;}
    break;

  case 131:
#line 889 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ForEachStmt(r, *(yyvsp[(2) - (7)].str), *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            delete (yyvsp[(2) - (7)].str); delete (yyvsp[(4) - (7)].str);
        ;}
    break;

  case 132:
#line 896 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), false, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 133:
#line 902 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), false, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 134:
#line 908 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].expr), (yyvsp[(8) - (9)].expr), true, (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 135:
#line 914 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForRangeStmt(r, *(yyvsp[(4) - (11)].str), (yyvsp[(6) - (11)].expr), (yyvsp[(8) - (11)].expr), true, (yyvsp[(11) - (11)].block));
            s->step_expr = (yyvsp[(10) - (11)].expr); s->label = *(yyvsp[(1) - (11)].str); delete (yyvsp[(1) - (11)].str); delete (yyvsp[(4) - (11)].str); (yyval.stmt) = s;
        ;}
    break;

  case 136:
#line 921 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, "", *(yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].block));
            s->label = *(yyvsp[(1) - (7)].str); delete (yyvsp[(1) - (7)].str); delete (yyvsp[(4) - (7)].str); (yyval.stmt) = s;
        ;}
    break;

  case 137:
#line 927 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto* s = new ForEachStmt(r, *(yyvsp[(4) - (9)].str), *(yyvsp[(6) - (9)].str), (yyvsp[(8) - (9)].expr), (yyvsp[(9) - (9)].block));
            s->label = *(yyvsp[(1) - (9)].str); delete (yyvsp[(1) - (9)].str); delete (yyvsp[(4) - (9)].str); delete (yyvsp[(6) - (9)].str); (yyval.stmt) = s;
        ;}
    break;

  case 138:
#line 936 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new DeferStmt(r, new ExprStmt(r,(yyvsp[(2) - (2)].expr)));
        ;}
    break;

  case 139:
#line 944 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MatchStmt(r,(yyvsp[(2) - (5)].expr),*(yyvsp[(4) - (5)].match_case_list)); delete (yyvsp[(4) - (5)].match_case_list);
        ;}
    break;

  case 140:
#line 951 "src/frontend/parser.y"
    { (yyval.match_case_list) = new std::vector<MatchCase>(); ;}
    break;

  case 141:
#line 952 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].match_case_list)->push_back(*(yyvsp[(2) - (2)].match_case)); delete (yyvsp[(2) - (2)].match_case); (yyval.match_case_list) = (yyvsp[(1) - (2)].match_case_list); ;}
    break;

  case 142:
#line 957 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = (yyvsp[(2) - (3)].expr); (yyval.match_case)->body = (yyvsp[(3) - (3)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (3)]).first_line,(yylsp[(1) - (3)]).first_column);
        ;}
    break;

  case 143:
#line 963 "src/frontend/parser.y"
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
#line 974 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 145:
#line 980 "src/frontend/parser.y"
    {
            (yyval.match_case) = new MatchCase();
            (yyval.match_case)->value = nullptr; (yyval.match_case)->body = (yyvsp[(2) - (2)].block);
            (yyval.match_case)->loc = SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column);
        ;}
    break;

  case 146:
#line 989 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            WhenStmt* ws = new WhenStmt(r,(yyvsp[(2) - (5)].expr),(yyvsp[(3) - (5)].block));
            ws->else_whens = *(yyvsp[(4) - (5)].else_if_list); ws->else_block = (yyvsp[(5) - (5)].block); (yyval.stmt) = ws; delete (yyvsp[(4) - (5)].else_if_list);
        ;}
    break;

  case 147:
#line 997 "src/frontend/parser.y"
    { (yyval.else_if_list) = new std::vector<std::pair<Expr*,BlockStmt*>>(); ;}
    break;

  case 148:
#line 999 "src/frontend/parser.y"
    { (yyvsp[(1) - (5)].else_if_list)->push_back(std::make_pair((yyvsp[(4) - (5)].expr),(yyvsp[(5) - (5)].block))); (yyval.else_if_list) = (yyvsp[(1) - (5)].else_if_list); ;}
    break;

  case 149:
#line 1003 "src/frontend/parser.y"
    { (yyval.block) = nullptr; ;}
    break;

  case 150:
#line 1004 "src/frontend/parser.y"
    { (yyval.block) = (yyvsp[(2) - (2)].block); ;}
    break;

  case 151:
#line 1009 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.decl) = new EnumDecl(r,*(yyvsp[(1) - (6)].str),*(yyvsp[(5) - (6)].enum_variant_list)); delete (yyvsp[(1) - (6)].str); delete (yyvsp[(5) - (6)].enum_variant_list);
        ;}
    break;

  case 152:
#line 1016 "src/frontend/parser.y"
    { (yyval.enum_variant_list) = new std::vector<EnumVariantAST>(); ;}
    break;

  case 153:
#line 1017 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].enum_variant_list)->push_back(*(yyvsp[(2) - (2)].enum_variant)); delete (yyvsp[(2) - (2)].enum_variant); (yyval.enum_variant_list) = (yyvsp[(1) - (2)].enum_variant_list); ;}
    break;

  case 154:
#line 1022 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (2)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column); delete (yyvsp[(1) - (2)].str);
        ;}
    break;

  case 155:
#line 1027 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (4)].str); (yyval.enum_variant)->value=(yyvsp[(3) - (4)].expr);
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (4)]).first_line,(yylsp[(1) - (4)]).first_column); delete (yyvsp[(1) - (4)].str);
        ;}
    break;

  case 156:
#line 1032 "src/frontend/parser.y"
    {
            (yyval.enum_variant) = new EnumVariantAST(); (yyval.enum_variant)->name=*(yyvsp[(1) - (1)].str); (yyval.enum_variant)->value=nullptr;
            (yyval.enum_variant)->loc=SourceLoc(filename,(yylsp[(1) - (1)]).first_line,(yylsp[(1) - (1)]).first_column); delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 157:
#line 1043 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new HashAssertStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 158:
#line 1051 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, nullptr);
        ;}
    break;

  case 159:
#line 1056 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, new TupleExpr(r, *(yyvsp[(2) - (2)].expr_list)));
            delete (yyvsp[(2) - (2)].expr_list);
        ;}
    break;

  case 160:
#line 1062 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 161:
#line 1067 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ReturnStmt(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 162:
#line 1078 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 163:
#line 1084 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 164:
#line 1093 "src/frontend/parser.y"
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

  case 165:
#line 1107 "src/frontend/parser.y"
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

  case 166:
#line 1121 "src/frontend/parser.y"
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

  case 167:
#line 1140 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), (yyvsp[(3) - (3)].expr));
            delete (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 168:
#line 1146 "src/frontend/parser.y"
    {
            // a, b = x, y  — tuple literal on RHS (also handles swap: a,b = b,a)
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new MultiAssignStmt(r, *(yyvsp[(1) - (3)].expr_list), new TupleExpr(r, *(yyvsp[(3) - (3)].expr_list)));
            delete (yyvsp[(1) - (3)].expr_list); delete (yyvsp[(3) - (3)].expr_list);
        ;}
    break;

  case 169:
#line 1156 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (3)].expr));
            (yyval.expr_list)->push_back((yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 170:
#line 1162 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 171:
#line 1170 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new BreakStmt(r);
        ;}
    break;

  case 172:
#line 1175 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledBreakStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 173:
#line 1184 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ContinueStmt(r);
        ;}
    break;

  case 174:
#line 1189 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new LabeledContinueStmt(r, *(yyvsp[(2) - (2)].str));
            delete (yyvsp[(2) - (2)].str);
        ;}
    break;

  case 175:
#line 1198 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 176:
#line 1203 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new ExprStmt(r, (yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 177:
#line 1208 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 178:
#line 1213 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.stmt) = new AssignStmt(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 179:
#line 1218 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PLUS,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 180:
#line 1220 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_MINUS,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 181:
#line 1222 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_STAR,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 182:
#line 1224 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SLASH,  (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 183:
#line 1226 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PERCENT,(yyvsp[(3) - (3)].expr)); ;}
    break;

  case 184:
#line 1228 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_AMP,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 185:
#line 1230 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_PIPE,   (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 186:
#line 1232 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_XOR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 187:
#line 1234 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHL,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 188:
#line 1236 "src/frontend/parser.y"
    { SourceRange r = to_sourcerange((yyloc), filename); (yyval.stmt) = new CompoundAssignStmt(r,(yyvsp[(1) - (3)].expr),TOK_SHR,    (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 189:
#line 1241 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.block) = new BlockStmt(r, *(yyvsp[(2) - (3)].stmt_list));
            delete (yyvsp[(2) - (3)].stmt_list);
        ;}
    break;

  case 190:
#line 1249 "src/frontend/parser.y"
    { (yyval.stmt_list) = new std::vector<Stmt*>(); ;}
    break;

  case 191:
#line 1250 "src/frontend/parser.y"
    { (yyvsp[(1) - (2)].stmt_list)->push_back((yyvsp[(2) - (2)].stmt)); (yyval.stmt_list) = (yyvsp[(1) - (2)].stmt_list); ;}
    break;

  case 192:
#line 1255 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 193:
#line 1256 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 194:
#line 1258 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IfExpr(r, (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr));
        ;}
    break;

  case 195:
#line 1268 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 196:
#line 1270 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IfExpr(r, (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr));
        ;}
    break;

  case 198:
#line 1279 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_OR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 200:
#line 1288 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AND, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 202:
#line 1297 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 203:
#line 1304 "src/frontend/parser.y"
    { (yyval.op) = TOK_EQ; ;}
    break;

  case 204:
#line 1305 "src/frontend/parser.y"
    { (yyval.op) = TOK_NEQ; ;}
    break;

  case 205:
#line 1306 "src/frontend/parser.y"
    { (yyval.op) = TOK_LT; ;}
    break;

  case 206:
#line 1307 "src/frontend/parser.y"
    { (yyval.op) = TOK_LEQ; ;}
    break;

  case 207:
#line 1308 "src/frontend/parser.y"
    { (yyval.op) = TOK_GT; ;}
    break;

  case 208:
#line 1309 "src/frontend/parser.y"
    { (yyval.op) = TOK_GEQ; ;}
    break;

  case 210:
#line 1315 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_PIPE, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 212:
#line 1324 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_XOR, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 214:
#line 1333 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), TOK_AMP, (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 216:
#line 1342 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 217:
#line 1349 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHL; ;}
    break;

  case 218:
#line 1350 "src/frontend/parser.y"
    { (yyval.op) = TOK_SHR; ;}
    break;

  case 220:
#line 1356 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 221:
#line 1363 "src/frontend/parser.y"
    { (yyval.op) = TOK_PLUS; ;}
    break;

  case 222:
#line 1364 "src/frontend/parser.y"
    { (yyval.op) = TOK_MINUS; ;}
    break;

  case 224:
#line 1370 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BinaryExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 225:
#line 1377 "src/frontend/parser.y"
    { (yyval.op) = TOK_STAR; ;}
    break;

  case 226:
#line 1378 "src/frontend/parser.y"
    { (yyval.op) = TOK_SLASH; ;}
    break;

  case 227:
#line 1379 "src/frontend/parser.y"
    { (yyval.op) = TOK_PERCENT; ;}
    break;

  case 228:
#line 1384 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_MINUS, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 229:
#line 1389 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new UnaryExpr(r, TOK_NOT, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 230:
#line 1394 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new AddrExpr(r, (yyvsp[(2) - (2)].expr));
        ;}
    break;

  case 232:
#line 1403 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 233:
#line 1405 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new FieldExpr(r, (yyvsp[(1) - (3)].expr), *(yyvsp[(3) - (3)].str));
            delete (yyvsp[(3) - (3)].str);
        ;}
    break;

  case 234:
#line 1411 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IndexExpr(r, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 235:
#line 1416 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), false);
        ;}
    break;

  case 236:
#line 1421 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (6)].expr), (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr), true);
        ;}
    break;

  case 237:
#line 1426 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SliceExpr(r, (yyvsp[(1) - (4)].expr));  // full slice
        ;}
    break;

  case 238:
#line 1431 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            std::vector<Expr*> args = (yyvsp[(3) - (4)].expr_list) ? *(yyvsp[(3) - (4)].expr_list) : std::vector<Expr*>();
            (yyval.expr) = new CallExpr(r, (yyvsp[(1) - (4)].expr), args);
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 239:
#line 1438 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new DerefExpr(r, (yyvsp[(1) - (2)].expr));
        ;}
    break;

  case 240:
#line 1443 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (2)].expr), nullptr);
        ;}
    break;

  case 241:
#line 1448 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new OrReturnExpr(r, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
        ;}
    break;

  case 242:
#line 1456 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].int_val));
        ;}
    break;

  case 243:
#line 1461 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].float_val));
        ;}
    break;

  case 244:
#line 1466 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, (yyvsp[(1) - (1)].bool_val));
        ;}
    break;

  case 245:
#line 1471 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, true);
        ;}
    break;

  case 246:
#line 1476 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, false);
        ;}
    break;

  case 247:
#line 1481 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, nullptr);
        ;}
    break;

  case 248:
#line 1486 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new LitExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 249:
#line 1492 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 250:
#line 1498 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 251:
#line 1500 "src/frontend/parser.y"
    {
            (yyval.expr) = (yyvsp[(2) - (3)].expr);
        ;}
    break;

  case 252:
#line 1503 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 253:
#line 1504 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 254:
#line 1505 "src/frontend/parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 255:
#line 1507 "src/frontend/parser.y"
    {
            // Soft keyword used as a plain identifier (e.g. `len` after `len :=`).
            // When followed by '(' the builtin_call_expr alternative takes priority
            // via Bison's default shift-over-reduce preference.
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new IdentExpr(r, *(yyvsp[(1) - (1)].str));
            delete (yyvsp[(1) - (1)].str);
        ;}
    break;

  case 256:
#line 1520 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (5)].param_list) ? *(yyvsp[(3) - (5)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, {}, (yyvsp[(5) - (5)].block));
            delete (yyvsp[(3) - (5)].param_list);
        ;}
    break;

  case 257:
#line 1527 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (7)].param_list) ? *(yyvsp[(3) - (7)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, (yyvsp[(6) - (7)].type), {}, (yyvsp[(7) - (7)].block));
            delete (yyvsp[(3) - (7)].param_list);
        ;}
    break;

  case 258:
#line 1534 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            auto params = (yyvsp[(3) - (9)].param_list) ? *(yyvsp[(3) - (9)].param_list) : std::vector<ParamGroup>();
            (yyval.expr) = new ProcLitExpr(r, params, nullptr, *(yyvsp[(7) - (9)].type_list), (yyvsp[(9) - (9)].block));
            delete (yyvsp[(3) - (9)].param_list); delete (yyvsp[(7) - (9)].type_list);
        ;}
    break;

  case 259:
#line 1544 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 260:
#line 1549 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, false, nullptr, (yyvsp[(3) - (4)].expr));
        ;}
    break;

  case 261:
#line 1554 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new SizeofExpr(r, true, (yyvsp[(3) - (4)].type), nullptr);
        ;}
    break;

  case 262:
#line 1559 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new TypeIdExpr(r, (yyvsp[(3) - (4)].type));
        ;}
    break;

  case 263:
#line 1567 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (3)].expr_list));
            delete (yyvsp[(2) - (3)].expr_list);
        ;}
    break;

  case 264:
#line 1573 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new ArrayInitExpr(r, *(yyvsp[(2) - (4)].expr_list));
            delete (yyvsp[(2) - (4)].expr_list);
        ;}
    break;

  case 265:
#line 1582 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_APPEND, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 266:
#line 1588 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_LEN, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 267:
#line 1593 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CAP, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 268:
#line 1598 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_RESERVE, *(yyvsp[(3) - (4)].expr_list));
            delete (yyvsp[(3) - (4)].expr_list);
        ;}
    break;

  case 269:
#line 1604 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLEAR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 270:
#line 1609 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_TO_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 271:
#line 1614 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FROM_CSTR, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 272:
#line 1619 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_PANIC, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 273:
#line 1624 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_FREE, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 274:
#line 1629 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_COPY, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 275:
#line 1634 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ENUM_NAME, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 276:
#line 1639 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MIN, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 277:
#line 1644 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_MAX, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 278:
#line 1649 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_ABS, {(yyvsp[(3) - (4)].expr)});
        ;}
    break;

  case 279:
#line 1654 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_SWAP, {(yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr)});
        ;}
    break;

  case 280:
#line 1659 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new BuiltinCallExpr(r, TOK_KW_CLAMP, {(yyvsp[(3) - (8)].expr), (yyvsp[(5) - (8)].expr), (yyvsp[(7) - (8)].expr)});
        ;}
    break;

  case 281:
#line 1666 "src/frontend/parser.y"
    { (yyval.expr_list) = nullptr; ;}
    break;

  case 282:
#line 1667 "src/frontend/parser.y"
    { (yyval.expr_list) = (yyvsp[(1) - (1)].expr_list); ;}
    break;

  case 283:
#line 1672 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 284:
#line 1677 "src/frontend/parser.y"
    {
            (yyval.expr_list) = new std::vector<Expr*>();
            (yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr));
        ;}
    break;

  case 285:
#line 1682 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 286:
#line 1687 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].expr_list)->push_back((yyvsp[(3) - (3)].expr));
            (yyval.expr_list) = (yyvsp[(1) - (3)].expr_list);
        ;}
    break;

  case 287:
#line 1696 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].field_init_list), nullptr);
            delete (yyvsp[(1) - (4)].str);
            delete (yyvsp[(3) - (4)].field_init_list);
        ;}
    break;

  case 288:
#line 1704 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (5)].str), {}, (yyvsp[(4) - (5)].expr));
            delete (yyvsp[(1) - (5)].str);
        ;}
    break;

  case 289:
#line 1710 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new StructLitExpr(r, *(yyvsp[(1) - (7)].str), *(yyvsp[(6) - (7)].field_init_list), (yyvsp[(4) - (7)].expr));
            delete (yyvsp[(1) - (7)].str);
            delete (yyvsp[(6) - (7)].field_init_list);
        ;}
    break;

  case 290:
#line 1719 "src/frontend/parser.y"
    { (yyval.field_init_list) = new std::vector<FieldInit>(); ;}
    break;

  case 291:
#line 1721 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (1)].field_init_list);
        ;}
    break;

  case 292:
#line 1728 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = new std::vector<FieldInit>();
            (yyval.field_init_list)->push_back(*(yyvsp[(1) - (1)].field_init));
            delete (yyvsp[(1) - (1)].field_init);
        ;}
    break;

  case 293:
#line 1734 "src/frontend/parser.y"
    {
            (yyvsp[(1) - (3)].field_init_list)->push_back(*(yyvsp[(3) - (3)].field_init));
            delete (yyvsp[(3) - (3)].field_init);
            (yyval.field_init_list) = (yyvsp[(1) - (3)].field_init_list);
        ;}
    break;

  case 294:
#line 1740 "src/frontend/parser.y"
    {
            (yyval.field_init_list) = (yyvsp[(1) - (2)].field_init_list);
        ;}
    break;

  case 295:
#line 1747 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 296:
#line 1755 "src/frontend/parser.y"
    {
            (yyval.field_init) = new FieldInit();
            (yyval.field_init)->name = *(yyvsp[(1) - (3)].str);
            (yyval.field_init)->value = (yyvsp[(3) - (3)].expr);
            (yyval.field_init)->loc = SourceLoc(filename, (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
            delete (yyvsp[(1) - (3)].str);
        ;}
    break;

  case 297:
#line 1767 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), false);
        ;}
    break;

  case 298:
#line 1772 "src/frontend/parser.y"
    {
            SourceRange r = to_sourcerange((yyloc), filename);
            (yyval.expr) = new CastExpr(r, (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].expr), true);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4571 "src/flex_bison/parser.cpp"
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


#line 1778 "src/frontend/parser.y"


void yyerror(YYLTYPE* loc, yyscan_t scanner, ErrorReporter* err,
             const char* filename, ZedLang::Program** result, const char* msg) {
    (void)scanner; (void)result;
    SourceLoc sloc(filename, loc->first_line, loc->first_column);
    err->error(sloc, std::string("syntax error: ") + msg);
}

