/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0




/* Copy the first part of user declarations.  */

#line 67 "bison-chapel.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-chapel.h".  */
#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp" /* yacc.c:355  */

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;
#line 47 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 67 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class NamedExpr;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct PotentialRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  struct WhereAndLifetime {
    Expr* where;
    Expr* lifetime;
  };
  static inline
  WhereAndLifetime makeWhereAndLifetime(Expr* w, Expr* lt) {
    WhereAndLifetime ret;
    ret.where = w;
    ret.lifetime = lt;
    return ret;
  }

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    std::vector<DefExpr*>*    pvecOfDefs;
    FnSymbol*                 pfnsymbol;
    ModuleSymbol*             pmodsymbol;
    ProcIter                  procIter;
    FlagSet*                  flagSet;
    ShadowVarSymbol*          pShadowVar;
    ShadowVarPrefix           pShadowVarPref;
    std::vector<PotentialRename*>* ponlylist;
    std::set<Flag>*           pflagset;
    WhereAndLifetime          lifetimeAndWhere;
  };

  #endif
#line 148 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
    const char* prevModule;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 171 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 239 "bison-chapel.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENT = 258,
    TQUERIEDIDENT = 259,
    INTLITERAL = 260,
    REALLITERAL = 261,
    IMAGLITERAL = 262,
    STRINGLITERAL = 263,
    BYTESLITERAL = 264,
    CSTRINGLITERAL = 265,
    EXTERNCODE = 266,
    TALIGN = 267,
    TAS = 268,
    TATOMIC = 269,
    TBEGIN = 270,
    TBREAK = 271,
    TBOOL = 272,
    TBORROWED = 273,
    TBY = 274,
    TBYTES = 275,
    TCATCH = 276,
    TCLASS = 277,
    TCOBEGIN = 278,
    TCOFORALL = 279,
    TCOMPLEX = 280,
    TCONFIG = 281,
    TCONST = 282,
    TCONTINUE = 283,
    TDEFER = 284,
    TDELETE = 285,
    TDMAPPED = 286,
    TDO = 287,
    TDOMAIN = 288,
    TELSE = 289,
    TENUM = 290,
    TEXCEPT = 291,
    TEXPORT = 292,
    TEXTERN = 293,
    TFALSE = 294,
    TFOR = 295,
    TFORALL = 296,
    TFORWARDING = 297,
    TIF = 298,
    TIMAG = 299,
    TIMPORT = 300,
    TIN = 301,
    TINCLUDE = 302,
    TINDEX = 303,
    TINLINE = 304,
    TINOUT = 305,
    TINT = 306,
    TITER = 307,
    TINITEQUALS = 308,
    TLABEL = 309,
    TLAMBDA = 310,
    TLET = 311,
    TLIFETIME = 312,
    TLOCAL = 313,
    TLOCALE = 314,
    TMINUSMINUS = 315,
    TMODULE = 316,
    TNEW = 317,
    TNIL = 318,
    TNOINIT = 319,
    TNONE = 320,
    TNOTHING = 321,
    TON = 322,
    TONLY = 323,
    TOTHERWISE = 324,
    TOUT = 325,
    TOVERRIDE = 326,
    TOWNED = 327,
    TPARAM = 328,
    TPLUSPLUS = 329,
    TPRAGMA = 330,
    TPRIMITIVE = 331,
    TPRIVATE = 332,
    TPROC = 333,
    TPROTOTYPE = 334,
    TPUBLIC = 335,
    TREAL = 336,
    TRECORD = 337,
    TREDUCE = 338,
    TREF = 339,
    TREQUIRE = 340,
    TRETURN = 341,
    TSCAN = 342,
    TSELECT = 343,
    TSERIAL = 344,
    TSHARED = 345,
    TSINGLE = 346,
    TSPARSE = 347,
    TSTRING = 348,
    TSUBDOMAIN = 349,
    TSYNC = 350,
    TTHEN = 351,
    TTHIS = 352,
    TTHROW = 353,
    TTHROWS = 354,
    TTRUE = 355,
    TTRY = 356,
    TTRYBANG = 357,
    TTYPE = 358,
    TUINT = 359,
    TUNDERSCORE = 360,
    TUNION = 361,
    TUNMANAGED = 362,
    TUSE = 363,
    TVAR = 364,
    TVOID = 365,
    TWHEN = 366,
    TWHERE = 367,
    TWHILE = 368,
    TWITH = 369,
    TYIELD = 370,
    TZIP = 371,
    TALIAS = 372,
    TAND = 373,
    TASSIGN = 374,
    TASSIGNBAND = 375,
    TASSIGNBOR = 376,
    TASSIGNBXOR = 377,
    TASSIGNDIVIDE = 378,
    TASSIGNEXP = 379,
    TASSIGNLAND = 380,
    TASSIGNLOR = 381,
    TASSIGNMINUS = 382,
    TASSIGNMOD = 383,
    TASSIGNMULTIPLY = 384,
    TASSIGNPLUS = 385,
    TASSIGNREDUCE = 386,
    TASSIGNSL = 387,
    TASSIGNSR = 388,
    TBANG = 389,
    TBAND = 390,
    TBNOT = 391,
    TBOR = 392,
    TBXOR = 393,
    TCOLON = 394,
    TCOMMA = 395,
    TDIVIDE = 396,
    TDOT = 397,
    TDOTDOT = 398,
    TDOTDOTDOT = 399,
    TEQUAL = 400,
    TEXP = 401,
    TGREATER = 402,
    TGREATEREQUAL = 403,
    THASH = 404,
    TIO = 405,
    TLESS = 406,
    TLESSEQUAL = 407,
    TMINUS = 408,
    TMOD = 409,
    TNOTEQUAL = 410,
    TOR = 411,
    TPLUS = 412,
    TQUESTION = 413,
    TSEMI = 414,
    TSHIFTLEFT = 415,
    TSHIFTRIGHT = 416,
    TSTAR = 417,
    TSWAP = 418,
    TLCBR = 419,
    TRCBR = 420,
    TLP = 421,
    TRP = 422,
    TLSBR = 423,
    TRSBR = 424,
    TNOELSE = 425,
    TDOTDOTOPENHIGH = 426,
    TUPLUS = 427,
    TUMINUS = 428,
    TLNOT = 429
  };
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;

int yypush_parse (yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate * yypstate_new (void);
void yypstate_delete (yypstate *ps);
/* "%code provides" blocks.  */
#line 202 "chapel.ypp" /* yacc.c:355  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 459 "bison-chapel.cpp" /* yacc.c:355  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 465 "bison-chapel.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 39 "chapel.ypp" /* yacc.c:359  */

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;
#line 210 "chapel.ypp" /* yacc.c:359  */

  #include "build.h"
  #include "CatchStmt.h"
  #include "DeferStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForallStmt.h"
  #include "ForLoop.h"
  #include "IfExpr.h"
  #include "misc.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {

    // like USR_FATAL_CONT
    setupError("parser", __FILE__, __LINE__, 3);

    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);
      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");
  }

#line 538 "bison-chapel.cpp" /* yacc.c:359  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   19077

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  149
/* YYNRULES -- Number of rules.  */
#define YYNRULES  633
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1138

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   429

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   502,   502,   507,   508,   514,   515,   520,   521,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   561,   574,   579,   584,   592,   593,   594,   598,   599,
     603,   604,   605,   610,   609,   630,   631,   632,   637,   638,
     643,   648,   653,   657,   664,   669,   673,   678,   682,   683,
     684,   688,   689,   690,   691,   692,   696,   697,   698,   702,
     706,   708,   710,   712,   714,   721,   722,   726,   727,   728,
     729,   730,   731,   734,   735,   736,   737,   738,   739,   751,
     752,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   803,   804,   805,   806,   810,   811,   815,   816,
     820,   821,   822,   832,   832,   837,   838,   839,   840,   841,
     842,   843,   847,   848,   849,   850,   855,   854,   870,   869,
     886,   885,   901,   900,   916,   920,   925,   933,   944,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   975,   981,
     987,   993,  1000,  1007,  1011,  1018,  1022,  1023,  1024,  1025,
    1026,  1028,  1030,  1032,  1037,  1040,  1041,  1042,  1043,  1044,
    1045,  1049,  1050,  1054,  1055,  1056,  1060,  1061,  1065,  1068,
    1070,  1075,  1076,  1080,  1082,  1084,  1091,  1101,  1115,  1120,
    1125,  1133,  1134,  1139,  1140,  1142,  1147,  1163,  1170,  1179,
    1187,  1191,  1198,  1199,  1204,  1209,  1203,  1236,  1239,  1243,
    1251,  1261,  1250,  1293,  1297,  1302,  1306,  1311,  1318,  1319,
    1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1354,  1355,
    1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,
    1369,  1370,  1374,  1378,  1379,  1380,  1384,  1386,  1388,  1390,
    1392,  1397,  1398,  1402,  1403,  1404,  1405,  1406,  1407,  1408,
    1409,  1410,  1414,  1415,  1416,  1417,  1418,  1419,  1423,  1424,
    1428,  1429,  1430,  1431,  1432,  1433,  1437,  1438,  1441,  1442,
    1446,  1447,  1451,  1456,  1460,  1461,  1462,  1470,  1471,  1473,
    1475,  1477,  1482,  1484,  1489,  1490,  1491,  1492,  1493,  1494,
    1495,  1499,  1501,  1506,  1508,  1510,  1515,  1528,  1545,  1546,
    1548,  1553,  1554,  1555,  1556,  1557,  1561,  1567,  1575,  1576,
    1584,  1586,  1591,  1593,  1595,  1600,  1602,  1604,  1611,  1612,
    1613,  1618,  1620,  1622,  1626,  1630,  1632,  1636,  1644,  1645,
    1646,  1647,  1648,  1653,  1654,  1655,  1656,  1657,  1677,  1681,
    1685,  1693,  1700,  1701,  1702,  1706,  1708,  1714,  1716,  1718,
    1723,  1724,  1725,  1726,  1727,  1733,  1734,  1735,  1736,  1740,
    1741,  1745,  1746,  1747,  1751,  1752,  1756,  1757,  1761,  1762,
    1766,  1767,  1768,  1769,  1773,  1774,  1785,  1787,  1789,  1795,
    1796,  1797,  1798,  1799,  1800,  1802,  1804,  1806,  1808,  1810,
    1812,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,  1832,
    1834,  1839,  1841,  1843,  1845,  1847,  1849,  1851,  1853,  1855,
    1857,  1859,  1861,  1863,  1870,  1876,  1882,  1888,  1897,  1907,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1927,  1928,
    1932,  1936,  1937,  1941,  1945,  1946,  1950,  1954,  1958,  1965,
    1966,  1967,  1968,  1969,  1970,  1974,  1975,  1980,  1982,  1986,
    1990,  1994,  2002,  2007,  2013,  2019,  2026,  2035,  2039,  2046,
    2054,  2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,  2064,
    2066,  2068,  2083,  2085,  2087,  2089,  2094,  2095,  2099,  2100,
    2101,  2105,  2106,  2107,  2108,  2119,  2120,  2121,  2122,  2126,
    2127,  2128,  2132,  2133,  2134,  2135,  2136,  2144,  2145,  2146,
    2147,  2151,  2152,  2156,  2157,  2158,  2159,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,  2168,  2172,  2180,  2181,  2185,
    2186,  2187,  2188,  2189,  2190,  2191,  2192,  2193,  2194,  2195,
    2196,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2204,  2205,
    2206,  2207,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2221,
    2222,  2223,  2224,  2228,  2229,  2230,  2231,  2236,  2237,  2238,
    2239,  2240,  2241,  2242
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "TQUERIEDIDENT", "INTLITERAL",
  "REALLITERAL", "IMAGLITERAL", "STRINGLITERAL", "BYTESLITERAL",
  "CSTRINGLITERAL", "EXTERNCODE", "TALIGN", "TAS", "TATOMIC", "TBEGIN",
  "TBREAK", "TBOOL", "TBORROWED", "TBY", "TBYTES", "TCATCH", "TCLASS",
  "TCOBEGIN", "TCOFORALL", "TCOMPLEX", "TCONFIG", "TCONST", "TCONTINUE",
  "TDEFER", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM",
  "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE", "TFOR", "TFORALL",
  "TFORWARDING", "TIF", "TIMAG", "TIMPORT", "TIN", "TINCLUDE", "TINDEX",
  "TINLINE", "TINOUT", "TINT", "TITER", "TINITEQUALS", "TLABEL", "TLAMBDA",
  "TLET", "TLIFETIME", "TLOCAL", "TLOCALE", "TMINUSMINUS", "TMODULE",
  "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY",
  "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM", "TPLUSPLUS",
  "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE", "TPUBLIC",
  "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE", "TRETURN", "TSCAN",
  "TSELECT", "TSERIAL", "TSHARED", "TSINGLE", "TSPARSE", "TSTRING",
  "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW", "TTHROWS", "TTRUE",
  "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE", "TUNION",
  "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN", "TWHERE", "TWHILE",
  "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "module_decl_start",
  "module_decl_stmt", "access_control", "opt_prototype",
  "include_access_control", "include_module_stmt", "$@1", "block_stmt",
  "stmt_ls", "renames_ls", "opt_only_ls", "except_ls",
  "use_access_control", "use_stmt", "import_stmt", "require_stmt",
  "assignment_stmt", "opt_label_ident", "ident_fn_def", "ident_def",
  "ident_use", "internal_type_ident_def", "scalar_type",
  "reserved_type_ident_use", "do_stmt", "return_stmt", "class_level_stmt",
  "@2", "private_decl", "forwarding_stmt", "extern_export_decl_stmt",
  "$@3", "$@4", "$@5", "$@6", "extern_block_stmt", "loop_stmt",
  "zippered_iterator", "if_stmt", "defer_stmt", "try_stmt",
  "catch_stmt_ls", "catch_stmt", "catch_expr", "throw_stmt", "select_stmt",
  "when_stmt_ls", "when_stmt", "class_decl_stmt", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt", "enum_header",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@7", "$@8", "linkage_spec",
  "fn_decl_stmt", "$@9", "$@10", "fn_decl_stmt_inner",
  "fn_decl_receiver_expr", "fn_ident", "assignop_ident", "opt_formal_ls",
  "req_formal_ls", "formal_ls", "formal", "opt_intent_tag",
  "required_intent_tag", "opt_this_intent_tag", "proc_or_iter",
  "opt_ret_tag", "opt_throws_error", "opt_function_body_stmt",
  "function_body_stmt", "query_expr", "var_arg_expr", "opt_lifetime_where",
  "lifetime_components_expr", "lifetime_expr", "lifetime_ident",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_type", "var_decl_stmt", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "ret_array_type",
  "opt_ret_type", "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "simple_expr_ls",
  "tuple_component", "tuple_expr_ls", "opt_actual_ls", "actual_ls",
  "actual_expr", "ident_expr", "type_level_expr", "sub_type_level_expr",
  "for_expr", "cond_expr", "nil_expr", "stmt_level_expr",
  "opt_task_intent_ls", "task_intent_clause", "task_intent_ls",
  "forall_intent_clause", "forall_intent_ls", "intent_expr",
  "shadow_var_prefix", "io_expr", "new_maybe_decorated", "new_expr",
  "let_expr", "expr", "opt_expr", "opt_try_expr", "lhs_expr", "fun_expr",
  "call_expr", "dot_expr", "parenthesized_expr", "bool_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429
};
# endif

#define YYPACT_NINF -1058

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1058)))

#define YYTABLE_NINF -584

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1058,   187,  3043, -1058,   -61, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058,  4395,   133,   205, -1058, 13547, -1058, 18671,   133,
   10286, -1058,   214,   170,   205,  4395, 10286,  4395,   101, 18721,
   10453,  7765, -1058,  7932,  8942,  6421, 10286, -1058, -1058,   117,
   -1058, -1058, 18771, -1058,  2735,  9109, -1058, 10286,   209, -1058,
   -1058, -1058, 10286, -1058, 13547, -1058, 10286,   311,   202,   216,
   18968, -1058, 18821, -1058,  9278,  7262, 10286,  9109, 13547, 10286,
     324, -1058,   220,  4395, -1058, 10286, -1058, 10620, 10620, 18771,
   -1058, -1058, 13547, -1058, -1058, 10286, 10286, -1058, 10286, -1058,
   10286, -1058, -1058, 13083, 10286, -1058, 10286, -1058, -1058, -1058,
    3381,  6590,  8101, 10286, -1058,  4226, -1058,   264, -1058,   362,
   -1058, -1058,    -4, -1058, -1058, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, 18771, -1058, 18771,   277,    63, -1058, -1058,  2735,
   -1058,   320, -1058,   343, -1058, -1058,   353,   358,   392, 10286,
     364,   365, 18166, 13076,   -57,   388,   396, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058,   431, -1058, -1058, 18166,   390,  4395,
   -1058, -1058,   406, 10286, -1058, -1058, 10286, 10286, 10286, -1058,
   10286,  9278,  9278,   369, -1058, -1058, -1058, -1058,   229,   372,
   -1058, -1058,   397, 14960, 18771,  2735, -1058,   415, -1058,    27,
   18166,   447,  7431,   493, 18871, 18166,   223,   502, -1058, 18921,
   18771,   223, 18771,   420,    53,  2049,    13, 14728,   339, -1058,
    2786, 14024,   456,  7431, -1058, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,  4395, -1058,
     423,  2262,    86,    16, -1058,  4395, -1058, -1058, 15040,   479,
   -1058,   428,   438, -1058, 15040,   229,   479, -1058,  7431,  6164,
   -1058, -1058,  9445, -1058, -1058, -1058, 18771, -1058,    90, 18166,
   10286, 10286, -1058, 18166,   436, 15664, -1058, 15040,   229, 18166,
     442,  7431, -1058, 18166, 15740, -1058, -1058, 15820, 13540, -1058,
   -1058, 15900,   495,   439,   229, 15040, 15980,   631,   631,  1085,
     479,   479,   161, -1058, -1058,  3550,   160, -1058, 10286, -1058,
      99,   103, -1058,   -17,    -9, 16060,   -73,  1085,   607, -1058,
    3719, -1058,   556, 10286, 10286,   480,   458, -1058, -1058, -1058,
     112,   373, -1058, 10286,   484, 10286, 10286, 10286,  8942,  8942,
   10286,   377, 10286, 10286, 10286, 10286, 10286,   402, 13083, 10286,
   10286, 10286, 10286, 10286, 10286, 10286, 10286, 10286, 10286, 10286,
   10286, 10286, 10286, 10286, 10286, -1058, -1058, -1058, -1058, -1058,
   -1058,  8268,  8268, -1058, -1058, -1058, -1058,  8268, -1058, -1058,
    8268,  8268,  7431,  7431,  8942,  8942,  7095, -1058, -1058, 15116,
   15196, 16136,    23,  3888, -1058,  8942,    53,   471,   144, -1058,
   10286, -1058, 10286,   519, -1058,   478,   506, -1058, -1058, -1058,
   18771, -1058,  2735, -1058, 18771,   488, -1058,  2735,   603,  9278,
   -1058,  4564,  8942, -1058,   485, -1058,    53,  4733,  8942, -1058,
      53, 10787, 10286, -1058,  4395,   618, 10286, -1058, -1058,   362,
     490, -1058,   739, -1058, -1058,  2262, -1058,   520,   494, -1058,
   10954,   544, 10286,  2735, -1058, -1058, 10286, 10286, -1058,   497,
   -1058, -1058,  9278, -1058, 18166, 18166, -1058,    31, -1058,  7431,
     498, -1058,   648, -1058,   648, -1058, 11121,   530, -1058, -1058,
   -1058, -1058, -1058, -1058,  8437, -1058, 16216,  6759, -1058,  6928,
   -1058,  4395,   503,  8942,  8606,  3212,   505, 10286,  9612, -1058,
   -1058,   292, -1058,  4057, 18771, 15272,   268, 14804,  9278,   507,
   18621,   374, -1058, 16292, 18359, 18359,   -40, -1058,   -40, -1058,
     -40, 18454,  1879,  1274,  1814,   229,   631,   509, -1058, -1058,
   -1058, -1058,  1085,  2529,   -40,  1131,  1131, 18359,  1131,  1131,
     151,   631,  2529, 18416,   151,   479,   479,   631,  1085,   517,
     518,   521,   528,   531,   511,   510, -1058,   -40, -1058,   -40,
      26, -1058, -1058, -1058,   108, -1058,  2449, 18246,   432, 11288,
    8942, 11455,  8942, 10286,  8942, 13811,   133, 16372, -1058, -1058,
   -1058, 18166, 16448,  7431, -1058,  7431, 18771,   480,   312, 18771,
     480, -1058,   319, 10286,   115, 10286, 18166,    54, 15352,  7095,
   -1058, 10286, 18166,    15, 14884, -1058,   533,   553,   535, 16528,
     553,   536,   663, 16604,  4395, 15428,   641, -1058,    78, -1058,
   -1058, -1058, -1058, -1058, -1058,  1029,   162, -1058, 13892, -1058,
     429,   539,  2262,    86,   101,   117, 10286, 10286,  6254, -1058,
   -1058,   330,  7598, -1058, 18166, -1058, 16684, 16760, -1058, -1058,
   18166,   538,    24,   540, -1058,  2537, -1058, -1058,   341, 18771,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058,  4395,   122, 15508,
   -1058, -1058, 18166,  4395, 18166, -1058, 16841, -1058, -1058, -1058,
      98,   100, -1058, 10286, -1058, 10286, 10787, 10286,   570,  1562,
     550,   598,   174, -1058,   635, -1058, -1058, -1058, -1058, 12921,
     554, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,
    7095, -1058,    35,  8942,  8942, 10286,   688, 16917, 10286,   691,
   16997,   555, 17073,    53,    53, -1058, -1058, -1058, -1058,   480,
     564, -1058,   480,   566, -1058, 15040, -1058, 14100,  4902, -1058,
    5071, -1058,   232, -1058, 14180,  5240, -1058,    53,  5409, -1058,
      53, -1058, 10286, -1058,  4395, 10286, -1058,  4395,   697, 18771,
   -1058, -1058, 18771,  1279, -1058,  2262,   594,   650, -1058, -1058,
   -1058,    59, -1058, -1058,   544,   568,    73, -1058, -1058,   574,
     578, -1058,  5578,  9278, -1058, -1058, -1058, 18771, -1058,   608,
     397, -1058, -1058,  5747,   579,  5916,   580, -1058, 10286,   592,
   10286, 17153, 15584,   596,   597,   606,  1655, -1058, 10286, 18771,
   -1058, -1058,   429,   593,   297, -1058,   621, -1058,   626,   630,
     642,   633,   636, -1058,   637,   649,   640,   646,   652,   356,
     656,   657,   660, -1058, -1058, 18771, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058, -1058, -1058, 10286, -1058,   669,   673,   668,
     593,   593, -1058, -1058, -1058,   544,   254,   257, 17229, 11622,
   11789, 17309, 11956, 12123, 12290, 12457, -1058, -1058,   651, -1058,
     653, -1058, -1058,  4395, 10286, 18166, 10286, 18166,  7095, -1058,
    4395, 10286, 18166, -1058, 10286, 18166, -1058, 18166, -1058, 18166,
     779,  4395,   659,   594, -1058,   654,  9781,   246, -1058,   189,
   -1058, -1058,  8942, 13679,  7431,  7431,  4395, -1058,    60,   658,
   10286, -1058, 10286, -1058, 18166,  4395, 10286, -1058, 18166,  4395,
   18166, -1058,   249, 10286, 10787, 10286, -1058, -1058, -1058, -1058,
    6164, -1058, 18591, -1058, 18166, -1058,    94,   739, -1058, -1058,
   17385, -1058, 13942, -1058, -1058, -1058, 10286, 10286, 10286, 10286,
   10286, 10286, 10286, 10286, -1058,  1800, -1058,  2267, 16604, 14256,
   14336, -1058, 16604, 14412, 14492,  4395, -1058, -1058,   544,   594,
    8775, -1058, -1058, -1058,   248,  9278, -1058, -1058,   135, 10286,
      -7, 17466, -1058,   738,   661,   662,   447, -1058,   397, 18166,
   14568, -1058, 14648, -1058, -1058, 18166,   671,   674, -1058, -1058,
   12624,   717,   271, -1058,   685,   686,   593,   593, 17542, 17622,
   17698, 17778, 17854, 17934,  2380, -1058, 18383, -1058,  4395,  4395,
    4395,  4395, -1058, -1058,   246,  9950,    82, -1058, 18166, -1058,
     147, -1058,   -32, -1058,   401, 18010, -1058, -1058, -1058, 12457,
     678,   679, -1058,  4395,  4395, -1058, -1058,  6085, -1058, -1058,
     464, -1058,   189, -1058, -1058, -1058, 10286, 10286, 10286, 10286,
   10286, 10286, -1058, -1058, 16604, 16604, 16604, 16604, -1058, -1058,
   -1058, -1058, -1058,   266,  8942, 13249, -1058, 10286,   135,   147,
     147,   147,   147,   147,   147,   135,   879, -1058, -1058, 16604,
   16604,   670, 12791,    88,   -47, 18090, -1058, -1058, 18166, -1058,
   -1058, -1058, -1058, -1058, -1058, -1058,   698, -1058, -1058,   465,
   13415, -1058, -1058, -1058, 10119, -1058,   610, -1058
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     0,    99,   574,   575,   576,   577,
     578,   579,     0,   498,    85,   120,   467,   127,   469,   498,
       0,   126,     0,   372,    85,     0,     0,     0,     0,   121,
     546,   546,   571,     0,     0,     0,     0,   125,    53,     0,
     248,   122,     0,   244,     0,     0,   129,     0,   517,   489,
     580,   130,     0,   249,   461,   371,     0,     0,     0,   143,
      46,   124,   470,   373,     0,     0,     0,     0,   465,     0,
       0,   128,     0,     0,   100,     0,   572,     0,     0,     0,
     123,   230,   463,   375,   131,     0,     0,   629,     0,   631,
       0,   632,   633,   545,     0,   630,   627,   448,   140,   628,
       0,     0,     0,     0,     4,     0,     5,     0,     9,    48,
      10,    11,     0,    12,    13,    14,    16,   444,   445,    24,
      15,   141,   150,   151,    17,    19,    18,    21,    22,    23,
      20,   149,     0,   147,     0,   535,     0,   145,   148,     0,
     146,   551,   531,   446,   532,   451,   449,     0,     0,     0,
     536,   537,     0,   450,     0,   552,   553,   554,   573,   530,
     453,   452,   533,   534,     0,    40,    26,   459,     0,     0,
     499,    86,     0,     0,   469,   121,     0,     0,     0,   470,
       0,     0,     0,   535,   551,   449,   536,   537,   468,   450,
     552,   553,     0,   498,     0,     0,   374,     0,   204,     0,
     429,     0,   436,   577,   470,   547,   247,   577,   168,   470,
       0,   247,     0,     0,     0,     0,     0,     0,     0,   155,
       0,     0,    50,   436,    93,   101,   113,   107,   106,   115,
      96,   105,   116,   102,   117,    94,   118,   111,   104,   112,
     110,   108,   109,    95,    97,   103,   114,   119,     0,    98,
       0,     0,     0,     0,   378,     0,   137,    34,     0,   614,
     521,   518,   519,   520,     0,   462,   615,     7,   436,   247,
     228,   238,   546,   229,   142,   343,   448,   426,     0,   425,
       0,     0,   138,   550,     0,     0,    37,     0,   466,   454,
       0,   436,    38,   460,     0,   211,   207,     0,   450,   211,
     208,     0,   368,     0,   464,     0,     0,   616,   618,   543,
     613,   612,     0,    55,    58,     0,     0,   431,     0,   433,
       0,     0,   432,     0,     0,   425,     0,   544,     0,     6,
       0,    49,     0,     0,     0,   231,     0,   329,   328,   250,
       0,   447,    25,     0,   522,     0,     0,     0,     0,     0,
       0,   617,     0,     0,     0,     0,     0,     0,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,   295,   296,   297,   292,
     294,     0,     0,   290,   293,   291,   289,     0,   299,   298,
       0,     0,   436,   436,     0,     0,     0,    27,    28,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
       0,    31,     0,   444,   442,     0,   437,   438,   443,   162,
       0,   165,     0,   158,     0,     0,   164,     0,     0,     0,
     177,     0,     0,   176,     0,   185,     0,     0,     0,   183,
       0,     0,    64,   152,     0,   197,     0,    52,    51,    48,
       0,    32,   311,   245,   382,     0,   383,   385,     0,   407,
       0,   388,     0,     0,   136,    33,     0,     0,    35,     0,
     144,   342,     0,    79,   548,   549,   139,     0,    36,   436,
       0,   218,   209,   205,   210,   206,     0,   366,   363,   170,
      39,    57,    56,    59,     0,   581,     0,     0,   567,     0,
     569,     0,     0,     0,     0,     0,     0,     0,     0,   585,
       8,     0,    42,     0,     0,     0,     0,    60,     0,     0,
       0,   322,   377,   497,   609,   608,   611,   620,   619,   624,
     623,   605,   602,   603,   604,   539,   592,     0,   564,   565,
     563,   562,   540,   596,   607,   601,   599,   610,   600,   598,
     590,   595,   597,   606,   589,   593,   594,   591,   541,     0,
       0,     0,     0,     0,     0,     0,   622,   621,   626,   625,
     509,   510,   512,   514,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   498,   498,   173,   364,
     376,   430,     0,     0,   456,     0,     0,   231,     0,     0,
     231,   365,     0,     0,     0,     0,   473,     0,     0,     0,
     186,     0,   479,     0,     0,   184,   628,    67,     0,    60,
      65,     0,   196,     0,     0,     0,     0,   455,   316,   313,
     314,   315,   319,   320,   321,   311,     0,   304,     0,   312,
     330,     0,   386,     0,   134,   135,   133,   132,     0,   406,
     405,   531,     0,   380,   529,   379,     0,     0,   561,   428,
     427,     0,     0,     0,   457,     0,   212,   370,   531,     0,
     582,   538,   568,   434,   570,   435,   193,     0,     0,     0,
     584,   191,   483,     0,   587,   586,     0,    44,    43,    41,
       0,     0,    76,     0,    71,     0,     0,    64,   232,     0,
       0,   242,     0,   239,   326,   323,   324,   327,   251,     0,
       0,    83,    84,    82,    81,    80,   559,   560,   511,   513,
       0,   500,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   440,   441,   439,   231,
       0,   167,   231,     0,   166,     0,   195,     0,     0,   175,
       0,   174,     0,   504,     0,     0,   181,     0,     0,   179,
       0,   153,     0,   154,     0,     0,   199,     0,   201,     0,
     317,   318,     0,   311,   302,     0,   420,   331,   334,   333,
     335,     0,   384,   387,   388,     0,     0,   389,   390,   527,
     528,   220,     0,     0,   219,   222,   458,     0,   213,   216,
       0,   367,   194,     0,     0,     0,     0,   192,     0,     0,
       0,    62,    61,     0,     0,     0,   247,   237,     0,   240,
     236,   325,   330,   300,    87,   283,   101,   281,   107,   106,
      90,   105,   102,   286,   117,    88,   118,   104,   108,    89,
      91,   103,   119,   280,   262,   265,   263,   264,   275,   266,
     279,   271,   269,   282,   285,   270,   268,   273,   278,   267,
     272,   276,   277,   274,   284,     0,   260,     0,    92,     0,
     300,   300,   258,   566,   502,   388,   551,   551,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   171,     0,   233,
       0,   233,   178,     0,     0,   472,     0,   471,     0,   503,
       0,     0,   478,   182,     0,   477,   180,    61,   198,   488,
     200,     0,     0,   420,   305,     0,     0,   388,   332,   347,
     381,   411,     0,   583,   436,   436,     0,   224,     0,     0,
       0,   214,     0,   189,   485,     0,     0,   187,   484,     0,
     588,    77,     0,     0,     0,    64,    72,    74,   227,   143,
     247,   226,   247,   234,   243,   241,     0,   311,   257,   261,
       0,   287,     0,   253,   254,   506,     0,     0,     0,     0,
       0,     0,     0,     0,   233,   247,   233,   247,   476,     0,
       0,   505,   482,     0,     0,     0,   203,    54,   388,   420,
       0,   423,   422,   424,   531,   344,   308,   306,     0,     0,
       0,     0,   409,   531,     0,     0,   225,   223,     0,   217,
       0,   190,     0,   188,    78,    63,     0,     0,   235,   402,
       0,   336,     0,   259,    87,    89,   300,   300,     0,     0,
       0,     0,     0,     0,   247,   161,   247,   157,     0,     0,
       0,     0,   202,   307,   388,   412,     0,   346,   345,   361,
       0,   362,   349,   352,     0,   348,   340,   341,   246,     0,
     523,   524,   215,     0,     0,    73,    75,     0,   401,   400,
     531,   337,   347,   301,   255,   256,     0,     0,     0,     0,
       0,     0,   163,   159,   475,   474,   481,   480,   310,   309,
     414,   415,   417,   531,     0,   583,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   531,   525,   526,   487,
     486,     0,   392,     0,     0,     0,   416,   418,   351,   353,
     354,   357,   358,   359,   355,   356,   350,   397,   395,   531,
     583,   338,   252,   339,   412,   396,   531,   419
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1058, -1058, -1058,     3,  -309,  2060, -1058, -1058, -1058,   394,
   -1058, -1058, -1058,   395,   514,  -306,  -671,  -666, -1058, -1058,
   -1058, -1058,   296,   821, -1058,   -11,   -84,  -699, -1058,  -865,
     386,  -966,  -799, -1058,   -59, -1058, -1058, -1058, -1058, -1058,
   -1058, -1058, -1058,   294, -1058, -1058, -1058,   547, -1058,    51,
   -1058, -1058, -1058, -1058, -1058, -1058,  -551,  -745, -1058, -1058,
   -1058,    30,  1061, -1058, -1058, -1058,   196, -1058, -1058, -1058,
   -1058,  -111,  -151,  -812, -1058,  -105,    81,   224, -1058, -1058,
   -1058,    33, -1058, -1058,  -254,   263,  -183,  -209,  -241,  -233,
    -574, -1058,  -181, -1058,    -2,   831,  -112,   412, -1058,  -430,
    -768,  -850, -1058,  -600,  -477, -1057,  -970,  -849,   -52, -1058,
      83, -1058,  -220, -1058,   274,   532,   -23, -1058, -1058, -1058,
    1112, -1058,    -8, -1058, -1058,  -210, -1058,  -594, -1058, -1058,
   -1058,  1178,  1485,   -12,   847,    93,   727, -1058,  1819,  1977,
   -1058, -1058, -1058, -1058, -1058, -1058, -1058, -1058,  -390
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   314,   105,   622,   107,   108,   109,   332,
     449,   110,   222,   111,   315,   617,   621,   618,   112,   113,
     114,   115,   116,   172,   866,   252,   117,   249,   118,   649,
     257,   119,   120,   269,   121,   122,   123,   424,   599,   420,
     596,   124,   125,   731,   126,   127,   128,   482,   666,   800,
     129,   130,   662,   795,   131,   132,   519,   816,   133,   134,
     702,   703,   183,   250,   640,   136,   137,   521,   822,   708,
     869,   870,   446,   958,   453,   636,   637,   638,   639,   709,
     339,   781,  1072,  1132,  1058,   277,   996,  1000,  1052,  1053,
    1054,   138,   303,   487,   139,   140,   253,   254,   457,   458,
     653,  1069,  1021,   461,   650,  1091,   993,   917,   316,   199,
     320,   321,   415,   416,   417,   184,   142,   143,   144,   145,
     185,   147,   169,   170,   574,   436,   752,   575,   576,   148,
     149,   186,   187,   152,   211,   418,   189,   154,   190,   191,
     157,   158,   159,   326,   160,   161,   162,   163,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     167,   274,   391,   450,   188,   104,   578,   440,   193,   667,
     868,   192,   278,   407,   200,   753,   920,   953,   205,   205,
     195,   215,   217,   220,   221,   641,   814,   340,   516,   425,
     813,   248,   661,   258,  1057,   259,   459,   503,  1116,    65,
     264,   333,   265,   784,   266,   255,   740,   755,   469,   743,
     324,   991,   279,   283,   285,   287,   288,   289,   963,   964,
     459,   293,   462,   294,   988,   297,   301,   508,   302,   584,
     304,   480,   718,   305,   306,  1092,   307,  1137,   308,    65,
    1097,   309,   310,   408,   311,   255,   748,   459,   279,   283,
     325,   327,   255,   792,   351,  1019,   509,   434,   165,   355,
    -221,     5,   357,     5,   334,   434,   360,   965,  1098,   392,
     719,   393,  1131,   502,   506,   337,  -403,   403,   413,   922,
     537,   335,   875,   336,   770,  1117,   874,   434,  1094,   434,
     402,   504,  -403,   538,   584,   793,   620,   344,  1049,   413,
    1044,   338,  -221,   635,   975,  -403,   977,   391,  1057,   997,
    1049,  -398,   501,  1018,  -403,  1068,   463,   403,   284,   539,
     505,   167,   771,   504,   399,   400,   401,   410,   293,   279,
     325,  -403,   564,   565,   460,  -403,   953,   403,   953,   403,
    -398,   919,   347,   302,   413,   406,   411,     3,   888,   794,
     283,   890,   585,  -398,   322,    74,  -221,    74,   460,   302,
     472,   428,  -403,   540,   422,  -403,  -398,   413,   171,   427,
     470,   283,   783,   504,  1074,  1075,   195,   403,   403,   578,
    1043,  1050,   504,  -403,   403,   460,  -403,   260,   504,  1034,
     472,  1036,  1051,  1020,   348,   953,   434,   953,   349,   497,
     456,    23,   923,   499,  1051,  -403,   998,   168,   720,   473,
      23,  1095,   463,  -398,   196,   472,   283,  1130,  -398,   663,
     205,   -70,  1128,   868,   810,   471,   498,   202,   474,   475,
     500,   522,    40,   541,  1017,   721,  1089,   -47,  1016,   283,
    1135,   261,   746,   223,   463,   351,   352,    55,   353,   354,
     355,   803,   356,   357,    53,   -47,    55,   360,    63,   262,
     494,   999,   773,   590,   981,   367,   496,    63,   413,   413,
     598,   371,   372,   373,   819,   602,   263,   194,   493,   267,
     165,   515,   517,    83,   -70,   495,   491,   214,   216,   774,
     578,   523,    83,   524,   525,   526,   528,   530,   531,   820,
     532,   533,   534,   535,   536,   915,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   351,   319,   652,    23,  -421,   268,   283,
     283,   357,   898,   296,   300,   283,  -404,   604,   283,   283,
     283,   283,   567,   569,   577,  -413,   291,  -404,  -421,   693,
     995,   620,  -421,   587,  -508,   413,   323,  -507,   591,   899,
     592,   704,   421,   757,   760,     5,  -413,   426,   693,   597,
    -413,   773,    55,   600,  1014,  -421,  -404,   279,   290,   606,
     608,  -508,   537,    63,  -507,   612,   614,   694,   330,   619,
     619,   -93,   623,  -413,   625,   538,  -494,   651,  1073,   -99,
     256,   331,  -404,  -558,   456,  -558,  1002,   705,    83,  -404,
     654,   165,   463,   286,   656,   657,   777,   687,   706,   463,
     660,   539,   256,   668,   635,   414,   698,   283,   804,   806,
    -404,   741,   295,   299,   559,   560,  1096,   707,   744,  -491,
     561,  -369,   660,   562,   563,   283,   414,   283,   801,  -404,
     -95,   679,   660,   682,  -404,   684,   686,  -404,  -100,    74,
    -369,   341,   778,   689,   942,   540,   279,   952,   578,   701,
     347,   413,  -490,   779,   394,   724,   493,   342,   395,   395,
    1099,  -399,  -391,  -495,  -496,  1120,  1121,  1122,  1123,  1124,
    1125,   414,   780,   447,   141,  -558,   448,  -558,  -555,  -557,
    -555,  -557,   343,  -556,   141,  -556,  1100,  -493,  1101,  1102,
    -399,  -391,  1103,  1104,   414,  -492,   396,   141,   871,   141,
     412,   403,   348,  -399,  -391,   398,   349,   606,   727,   612,
     730,   623,   732,   682,   409,   419,  -399,  -391,   733,   734,
     673,   283,   675,   283,   423,   739,   429,   404,   742,   452,
     322,   745,   322,   747,   466,   476,   786,   577,   488,   754,
     430,   433,   435,   439,   467,   141,   809,   541,   479,   256,
     256,   256,   256,   351,   486,   510,   445,   514,   355,   518,
     356,   357,   520,  -399,  -391,   360,   357,   776,  -399,  -391,
     589,   456,   141,   367,   289,   293,   325,   141,   593,   620,
     283,   373,   527,   529,   465,   594,   595,   601,   635,   603,
     468,   609,   624,   256,   799,   414,   414,   627,   302,   256,
     642,   643,   347,   652,   658,   664,   952,  -393,   952,   665,
     669,   699,   677,   478,   683,   710,   711,   712,   716,   717,
     713,   811,   256,   812,   619,   619,   737,   714,   566,   568,
     715,   489,   -66,   693,   761,   763,  -393,   764,   867,   586,
     256,   141,   769,   791,  1004,  1005,   782,   796,   577,  -393,
     472,   528,   567,   878,   348,   817,   881,   818,   349,   821,
     879,   873,  -393,   882,   884,   952,   607,   952,   889,   153,
     891,   911,   613,   916,   918,   659,   895,   921,   897,   153,
     924,   928,   414,   902,   925,   788,   905,   930,   935,   939,
     907,   941,   153,   909,   153,   946,   947,   659,   912,   957,
     319,   913,   319,  -120,   456,   351,   628,   659,  -127,  -393,
     355,   948,  -126,   357,  -393,  -125,   -96,   360,  -122,  -129,
     141,   279,  -130,   -94,  -408,   629,   799,   141,  -124,   630,
     -97,   934,   588,   938,  -128,  -408,   940,   678,   619,  -123,
     153,   256,  -131,   961,   298,   298,   954,   -98,   701,   631,
     962,  1027,   632,   985,    57,   974,  1071,   976,   987,   -93,
     -95,   989,   610,   633,  -408,  1008,   615,   153,  1060,  1061,
    1065,   256,   153,  1066,   959,   256,  1107,  1108,  1098,  1127,
     413,   413,   634,   626,   513,   197,   484,   141,   929,   955,
    -408,  1026,  1022,   960,   914,   956,   736,  -408,   414,   772,
    1133,  1088,   141,  1114,  1126,  1119,   219,   895,   897,   738,
     902,   905,   934,   938,   726,   655,   729,   206,  -408,  -303,
       0,   978,   979,     0,   980,     0,   577,     0,   982,   983,
       0,   274,   984,   994,     0,     0,   153,  -408,     0,     0,
    1003,     0,  -408,     0,     0,  -408,  -303,     0,     0,     0,
    1001,   682,   283,   283,     0,     0,     0,     0,  1009,     0,
    1010,     0,     0,     0,  1012,  -410,     0,     0,     0,     0,
       0,  1015,   619,   619,     0,   141,  -410,     0,  1046,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   867,     0,     0,   978,  1028,  1029,   982,  1030,  1031,
    1032,  1033,     0,   141,     0,  -410,     0,     0,     0,   141,
       0,     0,     0,     0,     0,   153,   141,     0,   325,     0,
       0,     0,   153,  1048,     0,     0,     0,  1055,     0,     0,
       0,  -410,     0,   749,   751,     0,     0,  1070,  -410,   756,
     759,     0,   256,   256,     0,     0,     0,     0,   256,   256,
       0,     0,     0,     0,     0,  1113,     0,   527,   566,  -410,
     768,     0,  1093,     0,     0,     0,  1084,  1085,  1086,  1087,
       0,     0,     0,   141,     0,     0,  1106,   141,  -410,     0,
       0,     0,   153,  -410,     0,   141,  -410,   938,     0,     0,
       0,  1109,  1110,     0,     0,   325,   628,   153,     0,     0,
     798,     0,     0,   135,  1084,  1085,  1086,  1087,  1109,  1110,
       0,     0,  1093,   135,     0,   629,     0,     0,     0,   630,
       0,     0,  1115,   682,     0,  1118,   135,     0,   135,  1129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   631,
       0,     0,   632,     0,   328,     0,     0,  1136,   722,     0,
       0,  1093,     0,   633,   146,     0,   347,     0,   682,   886,
     887,     0,   938,     0,   146,     0,     0,     0,   256,   256,
     153,   892,   634,     0,   135,     0,     0,   146,     0,   146,
     256,     0,   445,   903,     0,     0,   906,     0,     0,   445,
       0,     0,   256,     0,     0,   256,   141,     0,   153,     0,
       0,   135,   347,     0,   153,     0,   135,     0,   348,     0,
       0,   153,   349,     0,     0,     0,     0,     0,     0,   992,
     150,     0,     0,     0,     0,   146,     0,   414,   414,     0,
     150,     0,     0,     0,     0,   931,     0,     0,     0,     0,
       0,     0,     0,   150,     0,   150,     0,     0,     0,   141,
       0,     0,   146,     0,   348,   141,     0,   146,   349,   351,
     352,     0,   353,   354,   355,     0,   356,   357,   153,     0,
     135,   360,   153,     0,     0,     0,     0,     0,   366,   367,
     153,   872,   370,     0,     0,   371,   372,   373,     0,     0,
       0,   150,     0,     0,     0,   876,   877,     0,  1047,     0,
       0,     0,     0,     0,     0,   351,   352,     0,   353,   354,
     355,     0,   356,   357,   358,     0,     0,   360,   150,     0,
     141,   146,   141,   150,   366,   367,     0,   141,   370,     0,
     141,   371,   372,   373,     0,     0,   141,     0,     0,   141,
       0,     0,   374,     0,     0,   347,   628,     0,  1090,   135,
       0,     0,     0,     0,  1007,     0,   135,     0,     0,     0,
       0,     0,     0,   256,   141,   629,     0,     0,     0,   630,
       0,     0,     0,     0,     0,   141,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,   631,
       0,   153,   632,     0,    57,     0,     0,   348,  1090,     0,
     146,   349,     0,   633,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,   445,   445,   135,     0,   445,   445,
       0,     0,   634,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,  1056,     0,  1090,     0,     0,
       0,     0,     0,  1062,   153,   445,     0,   445,   351,   352,
     153,     0,   354,   355,     0,   356,   357,     0,     0,     0,
     360,     0,     0,     0,     0,   141,   150,   146,   367,     0,
       0,     0,   141,   150,   371,   372,   373,     0,     0,     0,
       0,     0,   146,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   135,     0,     0,   141,     0,     0,
       0,   141,     0,     0,     0,   153,     0,   153,     0,     0,
       0,     0,   153,     0,     0,   153,     0,   151,     0,     0,
       0,   153,   135,   150,   153,     0,     0,   151,   135,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   150,  1056,
     151,     0,   151,     0,     0,   146,     0,   141,     0,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,   146,     0,   151,     0,
       0,     0,   135,   815,     0,     0,   135,     0,     0,     0,
     141,   141,   141,   141,   135,     0,     0,     0,     0,     0,
       0,   150,     0,     0,  -233,   151,     0,     0,  -233,  -233,
     151,     0,     0,     0,     0,   141,   141,  -233,     0,  -233,
    -233,     0,     0,     0,  -233,     0,     0,     0,     0,   150,
       0,  -233,     0,   146,  -233,   150,     0,   146,     0,     0,
     153,     0,   150,     0,     0,   146,     0,   153,     0,     0,
       0,     0,     0,  -233,     0,  -233,     0,  -233,   153,  -233,
    -233,     0,  -233,     0,  -233,     0,  -233,     0,     0,     0,
       0,     0,     0,   153,   151,     0,     0,     0,     0,     0,
       0,     0,   153,     0,     0,  -233,   153,     0,  -233,     0,
       0,  -233,     0,     0,     0,     0,     0,   270,     0,   150,
       0,    22,    23,   150,     0,   135,     0,     0,     0,     0,
     271,   150,    30,   272,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,  -233,     0,     0,     0,     0,    53,  -233,    55,     0,
      57,     0,   949,   151,     0,   950,   146,   273,   135,    63,
     151,     0,     0,     0,   135,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    81,     0,     0,    83,   153,   153,   153,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     153,   153,     0,     0,     0,   146,     0,     0,     0,     0,
     151,     0,   150,     0,     0,     0,     0,     0,     0,   135,
       0,   135,     0,     0,    98,   151,   135,     0,     0,   135,
     951,   155,   270,     0,     0,   135,    22,    23,   135,     0,
       0,   155,     0,     0,     0,   271,     0,    30,   272,     0,
       0,     0,    35,     0,   155,   347,   155,     0,     0,    40,
       0,     0,     0,   135,     0,   150,     0,     0,     0,     0,
     146,   150,   146,     0,   135,     0,   135,   146,     0,     0,
     146,    53,     0,    55,     0,    57,   146,   949,     0,   146,
     950,     0,   273,     0,    63,     0,     0,     0,   151,     0,
       0,     0,   155,     0,     0,     0,     0,   348,     0,     0,
       0,   349,     0,    79,   146,     0,    81,     0,     0,    83,
     347,     0,     0,     0,     0,   146,   151,   146,     0,   155,
       0,     0,   151,     0,   155,     0,   150,     0,   150,   151,
       0,     0,     0,   150,     0,     0,   150,     0,     0,     0,
       0,     0,   150,     0,     0,   150,     0,     0,   351,   352,
       0,     0,     0,   355,   135,   356,   357,     0,     0,    98,
     360,   135,   348,     0,     0,  1035,   349,     0,   367,     0,
     150,     0,   135,     0,   371,   372,   373,     0,     0,   156,
       0,   150,     0,   150,     0,     0,   151,   135,   155,   156,
     151,     0,     0,     0,     0,     0,   135,     0,   151,     0,
     135,     0,   156,     0,   156,   146,     0,     0,     0,     0,
       0,     0,   146,   351,     0,     0,     0,     0,   355,     0,
     356,   357,     0,   146,     0,   360,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,   146,   371,
     372,   373,     0,     0,     0,     0,   135,   146,     0,     0,
     156,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   345,   106,     0,     0,     0,     0,   155,   346,     0,
       0,   150,   166,     0,   155,     0,     0,   156,   150,     0,
     347,   431,   156,     0,     0,   198,     0,   201,     0,   150,
       0,     0,     0,     0,     0,   432,     0,   146,     0,   135,
     135,   135,   135,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,   150,     0,     0,     0,   150,     0,     0,
       0,     0,     0,     0,   135,   135,     0,     0,     0,     0,
       0,     0,   348,   292,   155,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,   155,
     146,   146,   146,   146,     0,     0,     0,     0,     0,     0,
     106,     0,   151,   150,     0,   329,     0,   350,   151,     0,
       0,     0,     0,     0,     0,   146,   146,     0,     0,     0,
       0,     0,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,     0,     0,   371,
     372,   373,     0,   403,     0,     0,   150,   150,   150,   150,
     374,     0,   155,     0,     0,   156,     0,     0,     0,   397,
       0,     0,   156,   151,     0,   151,     0,     0,     0,     0,
     151,   150,   150,   151,     0,     0,     0,     0,     0,   151,
     155,     0,   151,     0,     0,     0,   155,     0,     0,     0,
       0,     0,     0,   155,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,     0,   225,
     226,     0,   227,     0,     0,     0,     0,   228,   151,   270,
     151,     0,   156,    22,    23,   229,     0,     0,     0,     0,
       0,   230,   271,     0,    30,   272,   231,   156,   451,    35,
     232,     0,     0,   233,     0,   464,    40,     0,     0,     0,
     155,   234,     0,     0,   155,     0,     0,   235,   236,     0,
       0,     0,   155,     0,   237,     0,     0,     0,    53,     0,
      55,     0,    57,   238,   949,     0,     0,   950,     0,   273,
       0,    63,   239,   240,     0,   241,     0,   242,     0,   243,
       0,     0,   244,     0,     0,     0,   245,   454,     0,   246,
      79,     0,   247,    81,     0,   106,    83,     0,   151,     0,
     156,     0,     0,     0,     0,   151,     0,     0,     0,     0,
     106,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,   270,     0,     0,     0,    22,    23,   156,     0,
       0,   151,     0,     0,   156,   271,     0,    30,   272,     0,
     151,   156,    35,     0,   151,     0,    98,     0,   455,    40,
       0,     0,  1037,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,    53,     5,    55,     0,    57,     0,   949,     0,     0,
     950,     0,   273,   106,    63,     0,    15,     0,     0,    17,
     151,     0,     0,     0,    21,     0,     0,     0,   156,     0,
       0,     0,   156,    79,   175,     0,    81,     0,     0,    83,
     156,   464,     0,    37,     0,     0,   155,   464,     0,     0,
      41,     0,   155,     0,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,   151,   151,   151,   151,     0,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,    98,
     224,     0,    71,     0,     0,  1082,    74,     0,   151,   151,
       0,     0,     0,    80,   225,   226,     0,   227,     0,    84,
     347,   676,   228,     0,     0,   681,     0,   155,     0,   155,
     229,     0,     0,   106,   155,     0,   230,   155,     0,     0,
       0,   231,     0,   155,     0,   232,   155,     0,   233,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
       0,   156,   235,   236,     0,     0,     0,     0,     0,   237,
       0,   155,   348,     0,     0,     0,   349,     0,   238,     0,
       0,     0,   155,     0,   155,     0,     0,   239,   240,     0,
     241,     0,   242,     0,   243,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,     0,   247,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,     0,
     156,     0,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,     0,   360,   361,   362,     0,     0,
     364,   365,   366,   367,   766,     0,   370,     0,     0,   371,
     372,   373,     0,     0,     0,     0,     0,     0,     0,     0,
     374,   403,     0,   797,     0,     0,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,     0,     0,   156,     0,   156,     0,     0,
     155,     0,   156,     0,     0,   156,     0,   802,   224,     0,
       0,   156,     0,   807,   156,   155,     0,     0,     0,     0,
       0,     0,   225,   226,   155,   227,     0,     0,   155,     0,
     228,     0,     0,     0,     0,     0,     0,     0,   229,   156,
       0,     0,     0,     0,   230,     0,     0,     0,     0,   231,
     156,     0,   156,   232,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,   345,     0,
     235,   236,     0,     0,   155,   346,     0,   237,   464,     0,
     464,     0,     0,     0,     0,   464,   238,   347,   464,     0,
       0,     0,   441,     0,   908,   239,   240,   910,   241,     0,
     242,     0,   243,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,     0,   247,     0,     0,     0,     0,
       0,     0,   927,     0,   442,     0,     0,   155,   155,   155,
     155,     0,     0,   933,     0,   937,     0,     0,     0,   348,
     156,     0,     0,   349,     0,     0,     0,   156,     0,     0,
       0,     0,   155,   155,     0,     0,     0,     0,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   251,     0,   156,   350,     0,     0,     0,     0,     0,
       0,     0,   156,     0,     0,     0,   156,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   443,   371,   372,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   374,     0,     0,
       0,     0,   156,     0,     0,     0,     0,     0,     0,     0,
       0,   986,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,     0,     0,     0,     0,  1011,     0,     0,     0,  1013,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,   156,   156,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   156,     0,    -2,     4,  1042,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,   -68,     0,
      38,    39,    40,     0,    41,  -247,     0,    42,    43,    44,
       0,    45,    46,    47,   -45,    48,    49,     0,    50,    51,
      52,     0,     0,     0,    53,    54,    55,    56,    57,    58,
      59,  -247,   -45,    60,    61,    62,     0,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,    77,    78,    79,    80,     0,    81,
      82,   -68,    83,    84,     0,     0,    85,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,    98,     0,     0,    99,     0,   100,     0,   101,
       0,   102,     0,     4,   103,     5,     0,     6,     7,     8,
       9,    10,    11,     0,  -583,     0,    12,    13,    14,    15,
      16,  -583,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,  -583,    27,    28,  -583,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,   -68,     0,    38,
      39,    40,     0,    41,  -247,     0,    42,    43,    44,     0,
      45,    46,    47,   -45,    48,    49,     0,    50,    51,    52,
       0,     0,     0,    53,    54,    55,    56,     0,    58,    59,
    -247,   -45,    60,    61,    62,  -583,    63,    64,    65,  -583,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,    77,    78,    79,    80,     0,    81,    82,
     -68,    83,    84,     0,     0,    85,     0,    86,     0,     0,
    -583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -583,  -583,    90,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,     0,  -583,  -583,  -583,
    -583,  -583,     0,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    -583,    98,  -583,  -583,  -583,     0,   100,  -583,   101,     0,
     102,     0,   312,  -583,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,   -68,     0,    38,    39,
      40,     0,    41,  -247,     0,    42,    43,    44,     0,    45,
      46,    47,   -45,    48,    49,     0,    50,    51,    52,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,  -247,
     -45,    60,    61,    62,     0,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
       0,    76,    77,    78,    79,    80,     0,    81,    82,   -68,
      83,    84,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   276,
      98,     0,     0,    99,     0,   100,   313,   101,     0,   102,
       0,     4,   103,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,   -68,     0,    38,    39,    40,
       0,    41,  -247,     0,    42,    43,    44,     0,    45,    46,
      47,   -45,    48,    49,     0,    50,    51,    52,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    59,  -247,   -45,
      60,    61,    62,     0,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,    77,    78,    79,    80,     0,    81,    82,   -68,    83,
      84,     0,     0,    85,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,    98,
       0,     0,    99,     0,   100,   492,   101,     0,   102,     0,
     511,   103,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,   -68,     0,    38,    39,    40,     0,
      41,  -247,     0,    42,    43,    44,     0,    45,    46,    47,
     -45,    48,    49,     0,    50,    51,    52,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,  -247,   -45,    60,
      61,    62,     0,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
      77,    78,    79,    80,     0,    81,    82,   -68,    83,    84,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,    98,     0,
       0,    99,     0,   100,   512,   101,     0,   102,     0,   312,
     103,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,   -68,     0,    38,    39,    40,     0,    41,
    -247,     0,    42,    43,    44,     0,    45,    46,    47,   -45,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,  -247,   -45,    60,    61,
      62,     0,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,    77,
      78,    79,    80,     0,    81,    82,   -68,    83,    84,     0,
       0,    85,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,    98,     0,     0,
      99,     0,   100,   313,   101,     0,   102,     0,     4,   103,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,   -68,     0,    38,    39,    40,     0,    41,  -247,
       0,    42,    43,    44,     0,    45,    46,    47,   -45,    48,
      49,     0,    50,    51,    52,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,  -247,   -45,    60,    61,    62,
       0,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,     0,    76,    77,    78,
      79,    80,     0,    81,    82,   -68,    83,    84,     0,     0,
      85,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,    98,     0,     0,    99,
       0,   100,   688,   101,     0,   102,     0,     4,   103,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,   -68,     0,    38,    39,    40,     0,    41,  -247,     0,
      42,    43,    44,     0,    45,    46,    47,   -45,    48,    49,
       0,    50,    51,    52,     0,     0,     0,    53,    54,    55,
      56,   328,    58,    59,  -247,   -45,    60,    61,    62,     0,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,    77,    78,    79,
      80,     0,    81,    82,   -68,    83,    84,     0,     0,    85,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,    98,     0,     0,    99,     0,
     100,     0,   101,     0,   102,     0,     4,   103,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
     -68,     0,    38,    39,    40,     0,    41,  -247,     0,    42,
      43,    44,     0,    45,    46,    47,   -45,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -247,   -45,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -68,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,   605,    37,   -68,
       0,    38,    39,    40,     0,    41,  -247,     0,    42,    43,
      44,     0,    45,    46,    47,   -45,    48,    49,     0,    50,
      51,    52,     0,     0,     0,    53,    54,    55,    56,     0,
      58,    59,  -247,   -45,    60,    61,    62,     0,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,    77,    78,    79,    80,     0,
      81,    82,   -68,    83,    84,     0,     0,    85,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,    98,     0,     0,    99,     0,   100,     0,
     101,     0,   102,     0,     4,   103,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,   611,    37,   -68,     0,
      38,    39,    40,     0,    41,  -247,     0,    42,    43,    44,
       0,    45,    46,    47,   -45,    48,    49,     0,    50,    51,
      52,     0,     0,     0,    53,    54,    55,    56,     0,    58,
      59,  -247,   -45,    60,    61,    62,     0,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,    77,    78,    79,    80,     0,    81,
      82,   -68,    83,    84,     0,     0,    85,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,    98,     0,     0,    99,     0,   100,     0,   101,
       0,   102,     0,     4,   103,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,   894,    37,   -68,     0,    38,
      39,    40,     0,    41,  -247,     0,    42,    43,    44,     0,
      45,    46,    47,   -45,    48,    49,     0,    50,    51,    52,
       0,     0,     0,    53,    54,    55,    56,     0,    58,    59,
    -247,   -45,    60,    61,    62,     0,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,    77,    78,    79,    80,     0,    81,    82,
     -68,    83,    84,     0,     0,    85,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,    98,     0,     0,    99,     0,   100,     0,   101,     0,
     102,     0,     4,   103,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,   896,    37,   -68,     0,    38,    39,
      40,     0,    41,  -247,     0,    42,    43,    44,     0,    45,
      46,    47,   -45,    48,    49,     0,    50,    51,    52,     0,
       0,     0,    53,    54,    55,    56,     0,    58,    59,  -247,
     -45,    60,    61,    62,     0,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
       0,    76,    77,    78,    79,    80,     0,    81,    82,   -68,
      83,    84,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
      98,     0,     0,    99,     0,   100,     0,   101,     0,   102,
       0,     4,   103,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,   901,    37,   -68,     0,    38,    39,    40,
       0,    41,  -247,     0,    42,    43,    44,     0,    45,    46,
      47,   -45,    48,    49,     0,    50,    51,    52,     0,     0,
       0,    53,    54,    55,    56,     0,    58,    59,  -247,   -45,
      60,    61,    62,     0,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,    77,    78,    79,    80,     0,    81,    82,   -68,    83,
      84,     0,     0,    85,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,    98,
       0,     0,    99,     0,   100,     0,   101,     0,   102,     0,
       4,   103,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,   904,    37,   -68,     0,    38,    39,    40,     0,
      41,  -247,     0,    42,    43,    44,     0,    45,    46,    47,
     -45,    48,    49,     0,    50,    51,    52,     0,     0,     0,
      53,    54,    55,    56,     0,    58,    59,  -247,   -45,    60,
      61,    62,     0,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
      77,    78,    79,    80,     0,    81,    82,   -68,    83,    84,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,    98,     0,
       0,    99,     0,   100,     0,   101,     0,   102,     0,     4,
     103,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     926,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,   -68,     0,    38,    39,    40,     0,    41,
    -247,     0,    42,    43,    44,     0,    45,    46,    47,   -45,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,    56,     0,    58,    59,  -247,   -45,    60,    61,
      62,     0,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,    77,
      78,    79,    80,     0,    81,    82,   -68,    83,    84,     0,
       0,    85,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,    98,     0,     0,
      99,     0,   100,     0,   101,     0,   102,     0,     4,   103,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
     932,    37,   -68,     0,    38,    39,    40,     0,    41,  -247,
       0,    42,    43,    44,     0,    45,    46,    47,   -45,    48,
      49,     0,    50,    51,    52,     0,     0,     0,    53,    54,
      55,    56,     0,    58,    59,  -247,   -45,    60,    61,    62,
       0,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,     0,    76,    77,    78,
      79,    80,     0,    81,    82,   -68,    83,    84,     0,     0,
      85,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,    98,     0,     0,    99,
       0,   100,     0,   101,     0,   102,     0,     4,   103,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,   936,
      37,   -68,     0,    38,    39,    40,     0,    41,  -247,     0,
      42,    43,    44,     0,    45,    46,    47,   -45,    48,    49,
       0,    50,    51,    52,     0,     0,     0,    53,    54,    55,
      56,     0,    58,    59,  -247,   -45,    60,    61,    62,     0,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,    77,    78,    79,
      80,     0,    81,    82,   -68,    83,    84,     0,     0,    85,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,    98,     0,     0,    99,     0,
     100,     0,   101,     0,   102,     0,  1111,   103,     5,   275,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,   270,     0,     0,    80,
      22,    23,    82,     0,     0,    84,     0,     0,     0,   271,
       0,    30,   272,    87,     0,     0,    35,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,    53,     0,    55,    94,     0,
       0,    95,    96,   276,     0,     0,   273,    99,    63,   181,
       0,   101,     0,   182,  1112,   785,   103,     5,   275,     6,
       7,     8,     9,    10,    11,     0,     0,    79,   173,     0,
      81,    15,    16,    83,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   178,    37,     0,
       0,     0,    39,     0,     0,    41,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,     0,    50,
      51,     0,     0,     0,     0,     0,    54,     0,    56,     0,
      58,     0,     0,     0,     0,    61,   179,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,   180,
       0,    74,     0,     0,    76,     0,     0,     0,    80,     0,
       0,    82,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,   276,     0,     0,     0,    99,     0,   181,     0,
     101,     0,   182,     0,     5,   103,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,   218,    23,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,    55,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,    63,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     0,   103,     5,   275,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,   280,   281,     0,    80,   317,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,   318,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,   276,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       0,   103,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
     280,   281,     0,    80,   317,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   276,     0,     0,
       0,    99,     0,   181,     0,   101,   672,   182,     0,     0,
     103,     5,   275,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,   280,
     281,     0,    80,   317,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,   276,     0,     0,     0,
      99,     0,   181,     0,   101,   674,   182,     0,     5,   103,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,   570,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,   571,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,   572,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,   573,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,   280,   281,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,   282,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     0,   103,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,   280,   281,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   276,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,   787,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,   280,
     281,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     5,   103,
       6,     7,     8,   207,    10,    11,   208,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   209,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,   210,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,   212,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,   213,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     0,   103,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,   213,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   276,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,   280,
     281,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     0,   103,
       5,   275,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,   276,     0,     0,     0,    99,
       0,   181,   670,   101,     0,   182,     0,     0,   103,     5,
     275,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,   276,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,   680,     0,   103,     5,   275,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,   276,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,  1045,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,   213,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     5,   103,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,   255,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   100,     0,   101,     0,   182,     0,     0,
     103,     5,   275,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,     0,
       0,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,   276,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     5,   103,
       6,     7,     8,   207,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   209,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,   210,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,   685,     0,   103,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,   644,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,   645,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,   646,    70,    71,    72,   647,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   276,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   990,
       0,     0,   103,     5,   275,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,   276,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   990,     0,
       0,   103,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   973,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   276,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,     0,     5,   103,     6,     7,
       8,   203,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   204,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   100,     0,   101,     0,   182,     0,
       5,   103,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   616,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,   644,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   178,    37,     0,
       0,     0,   645,     0,     0,    41,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,     0,    50,
      51,     0,     0,     0,     0,     0,    54,     0,    56,     0,
      58,     0,     0,     0,     0,    61,   179,     0,     0,     0,
       0,     0,     0,     0,    68,   646,    70,    71,    72,   647,
       0,    74,     0,     0,    76,     0,     0,     0,    80,     0,
       0,    82,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,    99,     0,   181,     0,
     101,     0,   648,     0,     5,   103,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   648,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   725,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,     0,
       0,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     5,   103,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   728,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   967,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     5,   103,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   968,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   970,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,     0,     5,   103,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   971,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   972,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       5,   103,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     973,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,   644,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   178,    37,     0,
       0,     0,   645,     0,     0,    41,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,     0,    50,
      51,     0,     0,     0,     0,     0,    54,     0,    56,     0,
      58,     0,     0,     0,     0,    61,   179,     0,     0,     0,
       0,     0,     0,     0,    68,   646,    70,    71,    72,   647,
       0,    74,     0,     0,    76,     0,     0,     0,    80,     0,
       0,    82,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,    99,     0,   181,     0,
     101,     0,  1067,     0,     5,   103,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   823,     0,   824,    88,    89,    90,    91,    92,
       0,     0,     0,   825,    93,     0,     0,     0,   826,   226,
     827,   828,     0,     0,    94,     0,   829,    95,    96,    97,
       0,     0,     0,    99,   229,     0,   175,   101,     0,  1067,
     830,     0,   103,     0,     0,   831,     0,     0,     0,   232,
       0,     0,   832,     0,   833,     0,     0,     0,     0,     0,
     834,     0,     0,     0,     0,     0,   835,   836,     0,     0,
       0,     0,     0,   237,     0,     0,     0,     0,     0,     0,
       0,     0,   837,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,     0,   838,     0,   242,     0,   839,     0,
       0,   840,     0,     0,     0,   841,     0,     0,   246,     0,
       0,   842,     0,     0,     0,     0,     0,     0,     0,     0,
     375,   376,   377,   378,   379,   380,     0,     0,   383,   384,
     385,   386,     0,   388,   389,   843,   844,   845,   846,   847,
       0,     0,   848,     0,     0,     0,   849,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,     0,   860,     0,
       0,   861,   862,   863,   864,     0,     5,   865,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,  -515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   390,
      96,    97,  -555,     0,  -555,    99,     0,   181,     0,   101,
       0,   182,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,  -412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,  -412,
       0,     0,     0,  -412,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,     0,   181,     0,   101,  -412,   990,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,  -394,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,  -394,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,  -394,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,  -394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    90,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,    97,  -394,     0,     0,     0,     0,  -394,
      28,   101,   175,  1067,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,     0,     0,     0,     0,     0,     0,
       0,    88,     5,    90,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,   390,    21,    97,  -555,     0,  -555,     0,
       0,   181,    28,   101,   175,   182,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    90,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,    97,     0,     0,
       0,     0,     0,   181,    28,   101,   175,   648,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,   224,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,   225,
     226,    76,   227,     0,     0,    80,     0,   228,    82,     0,
       0,    84,     0,     0,     0,   229,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,   231,     0,     0,     0,
     232,     0,     0,   233,     0,  1024,     0,    90,     0,     0,
       0,   234,     0,     0,   825,     0,     0,   235,   236,   225,
     226,   827,   227,     0,   237,     0,     0,   228,     0,     0,
       0,     0,     0,   238,     0,   229,     0,   101,     0,   182,
       0,   830,   239,   240,     0,   241,   231,   242,     0,   243,
     232,     0,   244,   233,     0,   833,   245,     0,     0,   246,
       0,   234,   247,     0,     0,     0,     0,   835,   236,     0,
       0,     0,     0,     0,   237,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,     0,   241,   345,   242,     0,  1025,
       0,     0,   840,   346,     0,     0,   245,     0,     0,   246,
       0,     0,   247,     0,     0,   347,     0,     0,   775,     0,
       0,   375,   376,   377,   378,   379,   380,     0,     0,   383,
     384,   385,   386,     0,   388,   389,   843,   844,   845,   846,
     847,     0,     0,   848,     0,     0,     0,   849,   850,   851,
     852,   853,   854,   855,   856,   857,   858,   859,     0,   860,
       0,     0,   861,   862,   863,   864,     0,   348,     0,     0,
       0,   349,   345,     0,     0,     0,     0,     0,     0,   346,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,   375,   376,   377,   378,   379,   380,     0,
       0,   383,   384,   385,   386,     0,   388,   389,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,   403,     0,
       0,     0,   345,     0,     0,   374,   893,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,   375,
     376,   377,   378,   379,   380,     0,     0,   383,   384,   385,
     386,     0,   388,   389,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,   348,   403,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,   900,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,   375,
     376,   377,   378,   379,   380,     0,     0,   383,   384,   385,
     386,     0,   388,   389,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,   403,     0,     0,     0,   345,     0,
       0,   374,  1038,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,   375,   376,   377,   378,   379,
     380,     0,     0,   383,   384,   385,   386,     0,   388,   389,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   348,
     403,     0,     0,   349,   345,     0,     0,   374,     0,     0,
       0,   346,  1039,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,   375,   376,   377,   378,   379,
     380,     0,     0,   383,   384,   385,   386,     0,   388,   389,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
     403,     0,     0,     0,   345,     0,     0,   374,  1040,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     350,   375,   376,   377,   378,   379,   380,     0,     0,   383,
     384,   385,   386,     0,   388,   389,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,   348,   403,     0,     0,   349,
     345,     0,     0,   374,     0,     0,     0,   346,  1041,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,   375,   376,   377,   378,   379,   380,     0,     0,   383,
     384,   385,   386,     0,   388,   389,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   348,   371,   372,   373,   349,   403,     0,     0,     0,
     345,     0,     0,   374,  1063,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,   350,   375,   376,   377,
     378,   379,   380,     0,     0,   383,   384,   385,   386,     0,
     388,   389,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,     0,   371,   372,
     373,   348,   403,     0,     0,   349,     0,     0,     0,   374,
     345,     0,     0,     0,  1064,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
     437,     0,     0,     0,     0,     0,   350,   375,   376,   377,
     378,   379,   380,     0,   438,   383,   384,   385,   386,     0,
     388,   389,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,     0,   371,   372,
     373,   348,   403,     0,     0,   349,   345,   695,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
     696,     0,   434,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,   697,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,   403,     0,     0,     0,   345,     0,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   758,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,     0,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   434,     0,
       0,     0,   350,     0,     0,     0,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,   403,     0,
       0,     0,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,   255,     0,   168,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,   348,     0,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,   579,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,   580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,   403,     0,     0,     0,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,   581,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,   582,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   348,
       0,     0,     0,   349,   345,   690,     0,   374,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
       0,     0,     0,     0,   345,     0,     0,   374,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,   750,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   691,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   692,   371,   372,   373,   348,     0,     0,     0,   349,
     345,     0,     0,   374,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   348,   371,   372,   373,   349,   403,     0,     0,     0,
     345,     0,     0,   374,   767,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,     0,   371,   372,
     373,   348,   403,     0,     0,   349,   345,     0,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
     944,     0,   434,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,   945,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,     0,     0,     0,     0,   345,   805,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,     0,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,   477,     0,
       0,     0,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   481,
     371,   372,   373,   348,     0,     0,     0,   349,     0,     0,
       0,   374,   345,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   483,
     371,   372,   373,   348,     0,     0,     0,   349,     0,     0,
       0,   374,   345,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   485,
     371,   372,   373,   348,     0,     0,     0,   349,     0,     0,
       0,   374,   345,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   490,
     371,   372,   373,   348,     0,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   507,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,     0,     0,     0,     0,   345,     0,
       0,   374,   583,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   348,
       0,     0,     0,   349,   345,     0,     0,   374,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
       0,     0,     0,   671,   345,     0,     0,   374,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,  -516,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,   348,     0,     0,     0,   349,
     345,     0,     0,   374,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   348,   371,   372,   373,   349,     0,     0,     0,     0,
     345,   762,     0,   374,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   735,   371,   372,
     373,   348,     0,     0,     0,   349,   345,     0,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,   765,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,     0,     0,     0,     0,   345,     0,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,     0,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,     0,     0,
       0,   789,     0,   345,     0,   374,     0,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,     0,   348,     0,     0,   790,   349,   345,
       0,   374,     0,     0,     0,     0,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,   880,
       0,     0,     0,     0,     0,     0,     0,     0,   808,   350,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,   352,     0,   353,   354,
     355,     0,   356,   357,   358,     0,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,     0,
     348,   371,   372,   373,   349,     0,     0,     0,     0,   345,
       0,     0,   374,     0,     0,     0,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,   883,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,     0,     0,   371,   372,   373,
     348,     0,     0,     0,   349,   345,     0,     0,   374,     0,
       0,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,     0,   348,   371,   372,   373,
     349,     0,     0,     0,     0,   345,   943,     0,   374,     0,
       0,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,   352,     0,
     353,   354,   355,     0,   356,   357,   358,     0,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,     0,     0,   371,   372,   373,   348,     0,     0,     0,
     349,   345,   885,     0,   374,     0,     0,     0,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,   352,     0,
     353,   354,   355,     0,   356,   357,   358,     0,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,     0,   348,   371,   372,   373,   349,     0,     0,     0,
       0,   345,     0,     0,   374,   966,     0,     0,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,     0,     0,   371,
     372,   373,   348,     0,     0,     0,   349,   345,     0,     0,
     374,     0,     0,     0,   346,   969,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,     0,   348,   371,
     372,   373,   349,     0,     0,     0,     0,     0,   345,     0,
     374,     0,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,   350,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
     352,     0,   353,   354,   355,     0,   356,   357,   358,     0,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,     0,     0,   371,   372,   373,     0,   348,
       0,     0,  1023,   349,   345,     0,   374,     0,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
       0,     0,     0,     0,   345,  1059,     0,   374,  1076,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,   348,     0,     0,     0,   349,
     345,     0,     0,   374,     0,     0,     0,   346,  1077,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   348,   371,   372,   373,   349,     0,     0,     0,     0,
     345,     0,     0,   374,  1078,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,     0,   371,   372,
     373,   348,     0,     0,     0,   349,   345,     0,     0,   374,
       0,     0,     0,   346,  1079,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,     0,     0,     0,     0,   345,     0,     0,   374,
    1080,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,     0,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
    1081,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1105,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,     0,     0,
       0,     0,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,   348,     0,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,     0,     0,     0,     0,   345,  1134,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   723,
       0,     0,     0,   349,     0,     0,     0,   374,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
     347,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   270,   371,   372,   373,    22,
      23,     0,     0,     0,     0,     0,     0,   374,   271,     0,
      30,   272,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,   349,   347,     0,     0,
       0,     0,     0,     0,    53,     0,    55,     0,    57,     0,
     949,     0,     0,   950,     0,   273,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,   347,    79,     0,     0,    81,
       0,     0,    83,   351,   352,     0,   353,   354,   355,   348,
     356,   357,   358,   349,   359,   360,   361,   362,     0,     0,
     364,   365,   366,   367,   368,   369,   370,     0,     0,   371,
     372,   373,     0,     0,     0,     0,     0,     0,     0,     0,
     374,     0,     0,     0,   350,     0,     0,   348,     0,     0,
       0,   349,    98,     0,     0,     0,     0,     0,  1083,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,     0,     0,   364,   365,   366,
     367,   368,     0,   370,     0,     0,   371,   372,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   374,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,     0,     0,   364,   365,   366,   367,   368,
       0,   370,     0,   270,   371,   372,   373,    22,    23,     0,
       0,     0,   700,     0,   224,   374,   271,     0,    30,   272,
       0,     0,     0,    35,     0,     0,     0,     0,   225,   226,
      40,   227,     0,     0,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,     0,     0,     0,     0,     0,
     230,     0,    53,     0,    55,   231,   328,     0,   949,   232,
       0,   950,   233,   273,  -228,    63,     0,     0,     0,     0,
     234,     0,     0,     0,     0,     0,   235,   236,  -228,  -228,
       0,  -228,     0,   237,    79,     0,  -228,    81,     0,     0,
      83,     0,   238,     0,  -228,     0,     0,     0,     0,     0,
    -228,   239,   240,     0,   241,  -228,   242,     0,   243,  -228,
       0,   244,  -228,     0,  -238,   245,     0,     0,   246,     0,
    -228,   247,     0,     0,     0,     0,  -228,  -228,  -238,  -238,
       0,  -238,     0,  -228,     0,     0,  -238,     0,     0,     0,
      98,     0,  -228,     0,  -238,     0,     0,     0,     0,     0,
    -238,  -228,  -228,     0,  -228,  -238,  -228,     0,  -228,  -238,
       0,  -228,  -238,     0,   224,  -228,     0,     0,  -228,     0,
    -238,  -228,     0,     0,     0,     0,  -238,  -238,   225,   226,
       0,   227,     0,  -238,     0,     0,   228,     0,     0,     0,
       0,     0,  -238,     0,   229,     0,     0,     0,     0,     0,
     230,  -238,  -238,     0,  -238,   231,  -238,     0,  -238,   232,
       0,  -238,   233,     0,  -229,  -238,     0,     0,  -238,     0,
     234,  -238,     0,     0,     0,     0,   235,   236,  -229,  -229,
       0,  -229,     0,   237,     0,     0,  -229,     0,     0,     0,
       0,     0,   238,     0,  -229,     0,     0,     0,     0,     0,
    -229,   239,   240,     0,   241,  -229,   242,     0,   243,  -229,
       0,   244,  -229,     0,  -160,   245,     0,     0,   246,     0,
    -229,   247,     0,     0,     0,     0,  -229,  -229,  -160,  -160,
       0,  -160,     0,  -229,     0,     0,  -160,     0,     0,     0,
       0,     0,  -229,     0,  -160,     0,     0,     0,     0,     0,
    -160,  -229,  -229,     0,  -229,  -160,  -229,     0,  -229,  -160,
       0,  -229,  -160,     0,  -156,  -229,     0,     0,  -229,     0,
    -160,  -229,     0,     0,     0,     0,  -160,  -160,  -156,  -156,
       0,  -156,     0,  -160,     0,     0,  -156,     0,     0,     0,
       0,     0,  -160,     0,  -156,     0,     0,     0,     0,     0,
    -156,  -160,  -160,     0,  -160,  -156,  -160,     0,  -160,  -156,
       0,  -160,  -156,     0,     0,  -160,     0,     0,  -160,     0,
    -156,  -160,     0,     0,     0,     0,  -156,  -156,     0,     0,
     270,     0,     0,  -156,    22,    23,     0,     0,     0,     0,
       0,     0,  -156,   271,     0,    30,   272,     0,     0,     0,
      35,  -156,  -156,   -69,  -156,     0,  -156,    40,  -156,     0,
    -247,  -156,     0,     0,     0,  -156,     0,     0,  -156,     0,
       0,  -156,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    55,     0,     0,     0,     0,  -247,     0,     0,     0,
     273,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    81,     0,   -69,    83
};

static const yytype_int16 yycheck[] =
{
      12,    60,   153,   223,    16,     2,   396,   217,    20,   486,
     709,    19,    64,   194,    26,   609,   784,   816,    30,    31,
      22,    33,    34,    35,    36,   455,   697,   139,   334,   210,
     696,    42,     1,    45,  1000,    47,     1,    46,  1095,    86,
      52,    45,    54,   643,    56,    32,   597,    32,   268,   600,
     102,   916,    64,    65,    66,    67,    68,    69,   870,   871,
       1,    73,    46,    75,   913,    77,    78,   140,    79,    46,
      82,   291,    46,    85,    86,  1045,    88,  1134,    90,    86,
     112,    93,    94,   195,    96,    32,    32,     1,   100,   101,
     102,   103,    32,    69,   134,     1,   169,   114,   159,   139,
      69,     3,   142,     3,   108,   114,   146,   875,   140,   166,
      84,   168,   159,   323,   324,    52,    57,   164,   202,    46,
      20,   132,   722,   134,    46,  1095,   720,   114,    46,   114,
     182,   140,    46,    33,    46,   111,   442,   149,     3,   223,
     989,    78,   111,   452,   889,    86,   891,   298,  1114,   917,
       3,    57,   169,   952,   119,  1020,   140,   164,    65,    59,
     169,   173,    84,   140,   176,   177,   178,   140,   180,   181,
     182,   112,   392,   393,   139,   140,   975,   164,   977,   164,
      86,   781,    31,   194,   268,   193,   159,     0,   739,   165,
     202,   742,   169,    99,   101,    97,   165,    97,   139,   210,
     140,   212,   167,   103,   206,   119,   112,   291,     3,   211,
     269,   223,   642,   140,  1026,  1027,   218,   164,   164,   609,
     988,    86,   140,   164,   164,   139,   140,    18,   140,   974,
     140,   976,    97,   139,    83,  1034,   114,  1036,    87,   140,
     251,    27,   169,   140,    97,   159,    57,   114,   140,   159,
      27,   169,   140,   159,    84,   140,   268,   169,   164,   479,
     272,    45,  1112,   962,   164,   276,   167,   166,   280,   281,
     167,   159,    49,   357,   945,   167,  1044,    61,   944,   291,
    1130,    72,   167,   166,   140,   134,   135,    73,   137,   138,
     139,   169,   141,   142,    71,    79,    73,   146,    84,    90,
     140,   112,   140,   159,   898,   154,   318,    84,   392,   393,
     422,   160,   161,   162,   140,   427,   107,   103,   315,     8,
     159,   333,   334,   109,   108,   165,   165,    33,    34,   167,
     720,   343,   109,   345,   346,   347,   348,   349,   350,   165,
     352,   353,   354,   355,   356,   775,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   134,   101,   119,    27,   119,   166,   381,
     382,   142,   140,    77,    78,   387,    46,   429,   390,   391,
     392,   393,   394,   395,   396,   119,   166,    57,   140,   140,
     144,   697,   144,   405,   140,   479,   102,   140,   410,   167,
     412,    27,   206,   613,   614,     3,   140,   211,   140,   420,
     144,   140,    73,   424,   165,   167,    86,   429,    94,   431,
     432,   167,    20,    84,   167,   437,   438,   159,   164,   441,
     442,   134,   444,   167,   446,    33,   159,   460,   167,   142,
      45,    79,   112,   166,   455,   168,   923,    73,   109,   119,
     462,   159,   140,    67,   466,   467,    27,   165,    84,   140,
     472,    59,    67,   486,   773,   202,   518,   479,   678,   679,
     140,   159,    77,    78,   381,   382,  1050,   103,   159,   159,
     387,   140,   494,   390,   391,   497,   223,   499,   669,   159,
     134,   503,   504,   505,   164,   507,   508,   167,   142,    97,
     159,   158,    73,   514,   810,   103,   518,   816,   898,   520,
      31,   595,   159,    84,    83,    83,   513,   159,    87,    87,
     119,    57,    57,   159,   159,  1099,  1100,  1101,  1102,  1103,
    1104,   268,   103,    77,     2,   166,    80,   168,   166,   166,
     168,   168,   150,   166,    12,   168,   145,   159,   147,   148,
      86,    86,   151,   152,   291,   159,   166,    25,   709,    27,
     113,   164,    83,    99,    99,   159,    87,   579,   580,   581,
     582,   583,   584,   585,   159,    82,   112,   112,   586,   587,
     497,   593,   499,   595,    82,   596,   166,   192,   599,   166,
     497,   603,   499,   605,   166,   159,   648,   609,   159,   611,
     214,   215,   216,   217,   166,    73,   690,   691,   166,   214,
     215,   216,   217,   134,   119,     8,   221,    61,   139,   139,
     141,   142,   164,   159,   159,   146,   142,   638,   164,   164,
     159,   642,   100,   154,   646,   647,   648,   105,   119,   945,
     652,   162,   348,   349,   258,   167,   140,   159,   957,    46,
     264,   166,    34,   258,   665,   392,   393,   167,   669,   264,
     140,   167,    31,   119,   167,   167,   975,    57,   977,    21,
     140,   164,   169,   287,   169,   166,   159,   159,   167,   169,
     159,   693,   287,   695,   696,   697,   593,   159,   394,   395,
     159,   305,   159,   140,   159,   159,    86,    34,   709,   405,
     305,   169,    61,   165,   924,   925,   167,   167,   720,    99,
     140,   723,   724,   725,    83,   165,   728,   119,    87,    84,
      32,   167,   112,    32,   169,  1034,   432,  1036,   164,     2,
     164,    34,   438,   139,    84,   472,   748,   169,   750,    12,
     166,   793,   479,   755,   166,   652,   758,   139,   169,   169,
     762,   159,    25,   765,    27,   159,   159,   494,   769,   166,
     497,   772,   499,   142,   775,   134,    27,   504,   142,   159,
     139,   165,   142,   142,   164,   142,   134,   146,   142,   142,
     248,   793,   142,   134,    46,    46,   797,   255,   142,    50,
     134,   803,   406,   805,   142,    57,   808,   503,   810,   142,
      73,   406,   142,   134,    77,    78,   818,   134,   819,    70,
     142,   962,    73,    34,    75,   164,    99,   164,   159,   134,
     134,   167,   436,    84,    86,   167,   440,   100,   167,   167,
     159,   436,   105,   159,   845,   440,   158,   158,   140,   169,
     924,   925,   103,   449,   330,    24,   299,   315,   797,   819,
     112,   962,   957,   865,   773,   822,   593,   119,   595,   635,
    1114,  1044,   330,  1072,  1105,  1098,    35,   879,   880,   595,
     882,   883,   884,   885,   580,   463,   582,    30,   140,   140,
      -1,   893,   894,    -1,   896,    -1,   898,    -1,   900,   901,
      -1,   950,   904,   916,    -1,    -1,   169,   159,    -1,    -1,
     923,    -1,   164,    -1,    -1,   167,   167,    -1,    -1,    -1,
     922,   923,   924,   925,    -1,    -1,    -1,    -1,   930,    -1,
     932,    -1,    -1,    -1,   936,    46,    -1,    -1,    -1,    -1,
      -1,   943,   944,   945,    -1,   403,    57,    -1,   990,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   962,    -1,    -1,   966,   967,   968,   969,   970,   971,
     972,   973,    -1,   431,    -1,    86,    -1,    -1,    -1,   437,
      -1,    -1,    -1,    -1,    -1,   248,   444,    -1,   990,    -1,
      -1,    -1,   255,   995,    -1,    -1,    -1,   999,    -1,    -1,
      -1,   112,    -1,   607,   608,    -1,    -1,  1020,   119,   613,
     614,    -1,   607,   608,    -1,    -1,    -1,    -1,   613,   614,
      -1,    -1,    -1,    -1,    -1,  1067,    -1,   723,   724,   140,
     625,    -1,  1045,    -1,    -1,    -1,  1038,  1039,  1040,  1041,
      -1,    -1,    -1,   501,    -1,    -1,  1059,   505,   159,    -1,
      -1,    -1,   315,   164,    -1,   513,   167,  1059,    -1,    -1,
      -1,  1063,  1064,    -1,    -1,  1067,    27,   330,    -1,    -1,
     665,    -1,    -1,     2,  1076,  1077,  1078,  1079,  1080,  1081,
      -1,    -1,  1095,    12,    -1,    46,    -1,    -1,    -1,    50,
      -1,    -1,  1094,  1095,    -1,  1097,    25,    -1,    27,  1112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    75,    -1,    -1,  1130,   576,    -1,
      -1,  1134,    -1,    84,     2,    -1,    31,    -1,  1130,   733,
     734,    -1,  1134,    -1,    12,    -1,    -1,    -1,   733,   734,
     403,   745,   103,    -1,    73,    -1,    -1,    25,    -1,    27,
     745,    -1,   747,   757,    -1,    -1,   760,    -1,    -1,   754,
      -1,    -1,   757,    -1,    -1,   760,   624,    -1,   431,    -1,
      -1,   100,    31,    -1,   437,    -1,   105,    -1,    83,    -1,
      -1,   444,    87,    -1,    -1,    -1,    -1,    -1,    -1,   916,
       2,    -1,    -1,    -1,    -1,    73,    -1,   924,   925,    -1,
      12,    -1,    -1,    -1,    -1,   800,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,   677,
      -1,    -1,   100,    -1,    83,   683,    -1,   105,    87,   134,
     135,    -1,   137,   138,   139,    -1,   141,   142,   501,    -1,
     169,   146,   505,    -1,    -1,    -1,    -1,    -1,   153,   154,
     513,   709,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,    73,    -1,    -1,    -1,   723,   724,    -1,   995,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   100,    -1,
     748,   169,   750,   105,   153,   154,    -1,   755,   157,    -1,
     758,   160,   161,   162,    -1,    -1,   764,    -1,    -1,   767,
      -1,    -1,   171,    -1,    -1,    31,    27,    -1,  1045,   248,
      -1,    -1,    -1,    -1,   928,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   928,   792,    46,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,   803,    -1,   805,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    70,
      -1,   624,    73,    -1,    75,    -1,    -1,    83,  1095,    -1,
     248,    87,    -1,    84,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   979,   980,   315,    -1,   983,   984,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   330,    -1,    -1,    -1,  1000,    -1,  1134,    -1,    -1,
      -1,    -1,    -1,  1008,   677,  1010,    -1,  1012,   134,   135,
     683,    -1,   138,   139,    -1,   141,   142,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   893,   248,   315,   154,    -1,
      -1,    -1,   900,   255,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,   330,   911,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,
      -1,    -1,    -1,    -1,   403,    -1,    -1,   935,    -1,    -1,
      -1,   939,    -1,    -1,    -1,   748,    -1,   750,    -1,    -1,
      -1,    -1,   755,    -1,    -1,   758,    -1,     2,    -1,    -1,
      -1,   764,   431,   315,   767,    -1,    -1,    12,   437,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,   330,  1114,
      25,    -1,    27,    -1,    -1,   403,    -1,   985,    -1,   792,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     803,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,   437,
      -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    73,    -1,
      -1,    -1,   501,     1,    -1,    -1,   505,    -1,    -1,    -1,
    1038,  1039,  1040,  1041,   513,    -1,    -1,    -1,    -1,    -1,
      -1,   403,    -1,    -1,    22,   100,    -1,    -1,    26,    27,
     105,    -1,    -1,    -1,    -1,  1063,  1064,    35,    -1,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,   431,
      -1,    49,    -1,   501,    52,   437,    -1,   505,    -1,    -1,
     893,    -1,   444,    -1,    -1,   513,    -1,   900,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    75,   911,    77,
      78,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,   926,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   935,    -1,    -1,   103,   939,    -1,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    22,    -1,   501,
      -1,    26,    27,   505,    -1,   624,    -1,    -1,    -1,    -1,
      35,   513,    37,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    71,   165,    73,    -1,
      75,    -1,    77,   248,    -1,    80,   624,    82,   677,    84,
     255,    -1,    -1,    -1,   683,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,   106,    -1,    -1,   109,  1038,  1039,  1040,  1041,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   677,
    1063,  1064,    -1,    -1,    -1,   683,    -1,    -1,    -1,    -1,
     315,    -1,   624,    -1,    -1,    -1,    -1,    -1,    -1,   748,
      -1,   750,    -1,    -1,   159,   330,   755,    -1,    -1,   758,
     165,     2,    22,    -1,    -1,   764,    26,    27,   767,    -1,
      -1,    12,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    42,    -1,    25,    31,    27,    -1,    -1,    49,
      -1,    -1,    -1,   792,    -1,   677,    -1,    -1,    -1,    -1,
     748,   683,   750,    -1,   803,    -1,   805,   755,    -1,    -1,
     758,    71,    -1,    73,    -1,    75,   764,    77,    -1,   767,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,   403,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,   103,   792,    -1,   106,    -1,    -1,   109,
      31,    -1,    -1,    -1,    -1,   803,   431,   805,    -1,   100,
      -1,    -1,   437,    -1,   105,    -1,   748,    -1,   750,   444,
      -1,    -1,    -1,   755,    -1,    -1,   758,    -1,    -1,    -1,
      -1,    -1,   764,    -1,    -1,   767,    -1,    -1,   134,   135,
      -1,    -1,    -1,   139,   893,   141,   142,    -1,    -1,   159,
     146,   900,    83,    -1,    -1,   165,    87,    -1,   154,    -1,
     792,    -1,   911,    -1,   160,   161,   162,    -1,    -1,     2,
      -1,   803,    -1,   805,    -1,    -1,   501,   926,   169,    12,
     505,    -1,    -1,    -1,    -1,    -1,   935,    -1,   513,    -1,
     939,    -1,    25,    -1,    27,   893,    -1,    -1,    -1,    -1,
      -1,    -1,   900,   134,    -1,    -1,    -1,    -1,   139,    -1,
     141,   142,    -1,   911,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,   926,   160,
     161,   162,    -1,    -1,    -1,    -1,   985,   935,    -1,    -1,
      73,   939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,     2,    -1,    -1,    -1,    -1,   248,    19,    -1,
      -1,   893,    12,    -1,   255,    -1,    -1,   100,   900,    -1,
      31,    32,   105,    -1,    -1,    25,    -1,    27,    -1,   911,
      -1,    -1,    -1,    -1,    -1,    46,    -1,   985,    -1,  1038,
    1039,  1040,  1041,    -1,   926,    -1,    -1,    -1,    -1,   624,
      -1,    -1,    -1,   935,    -1,    -1,    -1,   939,    -1,    -1,
      -1,    -1,    -1,    -1,  1063,  1064,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    73,   315,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,   330,
    1038,  1039,  1040,  1041,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   677,   985,    -1,   105,    -1,   118,   683,    -1,
      -1,    -1,    -1,    -1,    -1,  1063,  1064,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,   162,    -1,   164,    -1,    -1,  1038,  1039,  1040,  1041,
     171,    -1,   403,    -1,    -1,   248,    -1,    -1,    -1,   169,
      -1,    -1,   255,   748,    -1,   750,    -1,    -1,    -1,    -1,
     755,  1063,  1064,   758,    -1,    -1,    -1,    -1,    -1,   764,
     431,    -1,   767,    -1,    -1,    -1,   437,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   792,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,   803,    22,
     805,    -1,   315,    26,    27,    33,    -1,    -1,    -1,    -1,
      -1,    39,    35,    -1,    37,    38,    44,   330,   248,    42,
      48,    -1,    -1,    51,    -1,   255,    49,    -1,    -1,    -1,
     501,    59,    -1,    -1,   505,    -1,    -1,    65,    66,    -1,
      -1,    -1,   513,    -1,    72,    -1,    -1,    -1,    71,    -1,
      73,    -1,    75,    81,    77,    -1,    -1,    80,    -1,    82,
      -1,    84,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,   105,    -1,   107,
     103,    -1,   110,   106,    -1,   315,   109,    -1,   893,    -1,
     403,    -1,    -1,    -1,    -1,   900,    -1,    -1,    -1,    -1,
     330,    -1,    -1,    -1,    -1,    -1,   911,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,   431,    -1,
      -1,   926,    -1,    -1,   437,    35,    -1,    37,    38,    -1,
     935,   444,    42,    -1,   939,    -1,   159,    -1,   166,    49,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   624,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,     3,    73,    -1,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,   403,    84,    -1,    17,    -1,    -1,    20,
     985,    -1,    -1,    -1,    25,    -1,    -1,    -1,   501,    -1,
      -1,    -1,   505,   103,    35,    -1,   106,    -1,    -1,   109,
     513,   431,    -1,    44,    -1,    -1,   677,   437,    -1,    -1,
      51,    -1,   683,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1038,  1039,  1040,  1041,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
       3,    -1,    93,    -1,    -1,   165,    97,    -1,  1063,  1064,
      -1,    -1,    -1,   104,    17,    18,    -1,    20,    -1,   110,
      31,   501,    25,    -1,    -1,   505,    -1,   748,    -1,   750,
      33,    -1,    -1,   513,   755,    -1,    39,   758,    -1,    -1,
      -1,    44,    -1,   764,    -1,    48,   767,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,   624,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,   792,    83,    -1,    -1,    -1,    87,    -1,    81,    -1,
      -1,    -1,   803,    -1,   805,    -1,    -1,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,   677,    -1,    -1,    -1,    -1,    -1,
     683,    -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,   148,    -1,    -1,
     151,   152,   153,   154,   624,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   893,    -1,    -1,    -1,    -1,    -1,    -1,   900,
      -1,    -1,    -1,    -1,    -1,   748,    -1,   750,    -1,    -1,
     911,    -1,   755,    -1,    -1,   758,    -1,   677,     3,    -1,
      -1,   764,    -1,   683,   767,   926,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,   935,    20,    -1,    -1,   939,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,   792,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,
     803,    -1,   805,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    12,    -1,
      65,    66,    -1,    -1,   985,    19,    -1,    72,   748,    -1,
     750,    -1,    -1,    -1,    -1,   755,    81,    31,   758,    -1,
      -1,    -1,    36,    -1,   764,    90,    91,   767,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   792,    -1,    68,    -1,    -1,  1038,  1039,  1040,
    1041,    -1,    -1,   803,    -1,   805,    -1,    -1,    -1,    83,
     893,    -1,    -1,    87,    -1,    -1,    -1,   900,    -1,    -1,
      -1,    -1,  1063,  1064,    -1,    -1,    -1,    -1,   911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,   926,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   935,    -1,    -1,    -1,   939,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,   985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   911,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   935,    -1,    -1,    -1,   939,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1038,  1039,  1040,  1041,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1063,  1064,    -1,     0,     1,   985,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    -1,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     1,   171,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    -1,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,    -1,
     168,    -1,     1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
     159,    -1,    -1,   162,    -1,   164,   165,   166,    -1,   168,
      -1,     1,   171,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,
      -1,    -1,   162,    -1,   164,   165,   166,    -1,   168,    -1,
       1,   171,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,
      -1,   162,    -1,   164,   165,   166,    -1,   168,    -1,     1,
     171,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,   165,   166,    -1,   168,    -1,     1,   171,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    -1,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,
      -1,   164,   165,   166,    -1,   168,    -1,     1,   171,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    -1,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     1,   171,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    -1,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,    -1,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     1,   171,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     1,   171,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    -1,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     1,   171,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    -1,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     1,   171,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
     159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     1,   171,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       1,   171,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     1,
     171,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     1,   171,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    -1,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,     1,   171,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    -1,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     1,   171,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    22,    -1,    -1,   104,
      26,    27,   107,    -1,    -1,   110,    -1,    -1,    -1,    35,
      -1,    37,    38,   118,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    82,   162,    84,   164,
      -1,   166,    -1,   168,   169,     1,   171,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,   103,    14,    -1,
     106,    17,    18,   109,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     3,   171,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
     109,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,    -1,   171,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
     101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,   167,   168,    -1,    -1,
     171,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,   101,
     102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,   167,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,   101,   102,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,   101,   102,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     3,   171,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,   101,
     102,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     3,   171,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,   101,
     102,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,   165,   166,    -1,   168,    -1,    -1,   171,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,   169,    -1,   171,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,   169,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     3,   171,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,
     171,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,   169,    -1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,    -1,   171,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       3,   171,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     3,   171,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     3,   171,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     3,   171,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       3,   171,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     3,   171,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    12,   143,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,   153,    -1,    25,   156,   157,   158,
      -1,    -1,    -1,   162,    33,    -1,    35,   166,    -1,   168,
      39,    -1,   171,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,   141,    -1,    -1,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
      -1,   160,   161,   162,   163,    -1,     3,   166,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   163,
     157,   158,   166,    -1,   168,   162,    -1,   164,    -1,   166,
      -1,   168,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,   140,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,    -1,   164,    -1,   166,   167,   168,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   136,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,   158,   159,    -1,    -1,    -1,    -1,   164,
      33,   166,    35,   168,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,     3,   136,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,   163,    25,   158,   166,    -1,   168,    -1,
      -1,   164,    33,   166,    35,   168,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   136,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   158,    -1,    -1,
      -1,    -1,    -1,   164,    33,   166,    35,   168,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    17,
      18,   100,    20,    -1,    -1,   104,    -1,    25,   107,    -1,
      -1,   110,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,     3,    -1,   136,    -1,    -1,
      -1,    59,    -1,    -1,    12,    -1,    -1,    65,    66,    17,
      18,    19,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    33,    -1,   166,    -1,   168,
      -1,    39,    90,    91,    -1,    93,    44,    95,    -1,    97,
      48,    -1,   100,    51,    -1,    53,   104,    -1,    -1,   107,
      -1,    59,   110,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    12,    95,    -1,    97,
      -1,    -1,   100,    19,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    31,    -1,    -1,   166,    -1,
      -1,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,   141,    -1,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,    -1,   160,   161,   162,   163,    -1,    83,    -1,    -1,
      -1,    87,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,   164,    -1,
      -1,    -1,    12,    -1,    -1,   171,    96,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    83,   164,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,   164,    -1,    -1,    -1,    12,    -1,
      -1,   171,    96,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
     164,    -1,    -1,    87,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
     164,    -1,    -1,    -1,    12,    -1,    -1,   171,    96,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    83,   164,    -1,    -1,    87,
      12,    -1,    -1,   171,    -1,    -1,    -1,    19,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    83,   160,   161,   162,    87,   164,    -1,    -1,    -1,
      12,    -1,    -1,   171,    96,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
     162,    83,   164,    -1,    -1,    87,    -1,    -1,    -1,   171,
      12,    -1,    -1,    -1,    96,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,   121,
     122,   123,   124,    -1,    46,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
     162,    83,   164,    -1,    -1,    87,    12,    13,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      36,    -1,   114,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    68,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,   164,    -1,    -1,    -1,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,    -1,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,   164,    -1,
      -1,    -1,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,   114,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,   164,    -1,    -1,    -1,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
      -1,    -1,    -1,    87,    12,    13,    -1,   171,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
      -1,    -1,    -1,    -1,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,   159,   160,   161,   162,    83,    -1,    -1,    -1,    87,
      12,    -1,    -1,   171,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    83,   160,   161,   162,    87,   164,    -1,    -1,    -1,
      12,    -1,    -1,   171,    96,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
     162,    83,   164,    -1,    -1,    87,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      36,    -1,   114,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    68,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,    -1,    -1,    -1,    -1,    12,   169,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,    -1,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,   164,    -1,
      -1,    -1,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,   159,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   171,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,   159,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   171,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,   159,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   171,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,   159,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,    -1,    -1,    -1,    -1,    12,    -1,
      -1,   171,    96,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
      -1,    -1,    -1,    87,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
      -1,    -1,    -1,   167,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    83,    -1,    -1,    -1,    87,
      12,    -1,    -1,   171,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    83,   160,   161,   162,    87,    -1,    -1,    -1,    -1,
      12,    13,    -1,   171,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,   159,   160,   161,
     162,    83,    -1,    -1,    -1,    87,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,    -1,    -1,    -1,    -1,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,    -1,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,    -1,    -1,
      -1,   167,    -1,    12,    -1,   171,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    -1,    83,    -1,    -1,   167,    87,    12,
      -1,   171,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,    -1,
      83,   160,   161,   162,    87,    -1,    -1,    -1,    -1,    12,
      -1,    -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161,   162,
      83,    -1,    -1,    -1,    87,    12,    -1,    -1,   171,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,    -1,    83,   160,   161,   162,
      87,    -1,    -1,    -1,    -1,    12,    13,    -1,   171,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,
     137,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,   161,   162,    83,    -1,    -1,    -1,
      87,    12,   169,    -1,   171,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,
     137,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,    -1,    83,   160,   161,   162,    87,    -1,    -1,    -1,
      -1,    12,    -1,    -1,   171,    96,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,   162,    83,    -1,    -1,    -1,    87,    12,    -1,    -1,
     171,    -1,    -1,    -1,    19,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,    -1,    83,   160,
     161,   162,    87,    -1,    -1,    -1,    -1,    -1,    12,    -1,
     171,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,    -1,   137,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,    -1,    -1,   160,   161,   162,    -1,    83,
      -1,    -1,   167,    87,    12,    -1,   171,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
      -1,    -1,    -1,    -1,    12,   169,    -1,   171,    96,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    83,    -1,    -1,    -1,    87,
      12,    -1,    -1,   171,    -1,    -1,    -1,    19,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    83,   160,   161,   162,    87,    -1,    -1,    -1,    -1,
      12,    -1,    -1,   171,    96,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
     162,    83,    -1,    -1,    -1,    87,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,    -1,    -1,    -1,    -1,    12,    -1,    -1,   171,
      96,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,    -1,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,    -1,    -1,
      -1,    -1,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,    -1,    -1,    -1,    -1,    12,   169,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      31,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    22,   160,   161,   162,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,   171,    35,    -1,
      37,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,   103,    -1,    -1,   106,
      -1,    -1,   109,   134,   135,    -1,   137,   138,   139,    83,
     141,   142,   143,    87,   145,   146,   147,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,   118,    -1,    -1,    83,    -1,    -1,
      -1,    87,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,    -1,    -1,   151,   152,   153,
     154,   155,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,    -1,    -1,   151,   152,   153,   154,   155,
      -1,   157,    -1,    22,   160,   161,   162,    26,    27,    -1,
      -1,    -1,     1,    -1,     3,   171,    35,    -1,    37,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    17,    18,
      49,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    71,    -1,    73,    44,    75,    -1,    77,    48,
      -1,    80,    51,    82,     3,    84,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,   103,    -1,    25,   106,    -1,    -1,
     109,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,     3,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,    -1,
     159,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,     3,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,     3,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,     3,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,     3,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    17,    18,
      -1,    20,    -1,    72,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    90,    91,    -1,    93,    44,    95,    -1,    97,    48,
      -1,   100,    51,    -1,    -1,   104,    -1,    -1,   107,    -1,
      59,   110,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      22,    -1,    -1,    72,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    90,    91,    45,    93,    -1,    95,    49,    97,    -1,
      52,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,   106,    -1,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   176,   177,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    47,    48,
      49,    51,    54,    55,    56,    58,    59,    60,    62,    63,
      65,    66,    67,    71,    72,    73,    74,    75,    76,    77,
      80,    81,    82,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    94,    95,    97,    98,   100,   101,   102,   103,
     104,   106,   107,   109,   110,   113,   115,   118,   134,   135,
     136,   137,   138,   143,   153,   156,   157,   158,   159,   162,
     164,   166,   168,   171,   178,   179,   180,   181,   182,   183,
     186,   188,   193,   194,   195,   196,   197,   201,   203,   206,
     207,   209,   210,   211,   216,   217,   219,   220,   221,   225,
     226,   229,   230,   233,   234,   237,   240,   241,   266,   269,
     270,   290,   291,   292,   293,   294,   295,   296,   304,   305,
     306,   307,   308,   311,   312,   313,   314,   315,   316,   317,
     319,   320,   321,   322,   323,   159,   180,   308,   114,   297,
     298,     3,   198,    14,    22,    35,    40,    41,    43,    82,
      95,   164,   168,   237,   290,   295,   306,   307,   308,   311,
     313,   314,   297,   308,   103,   269,    84,   198,   180,   284,
     308,   180,   166,     8,    82,   308,   309,     8,    11,    82,
     103,   309,    73,   116,   218,   308,   218,   308,    26,   270,
     308,   308,   187,   166,     3,    17,    18,    20,    25,    33,
      39,    44,    48,    51,    59,    65,    66,    72,    81,    90,
      91,    93,    95,    97,   100,   104,   107,   110,   200,   202,
     238,   166,   200,   271,   272,    32,   188,   205,   308,   308,
      18,    72,    90,   107,   308,   308,   308,     8,   166,   208,
      22,    35,    38,    82,   209,     4,   158,   260,   283,   308,
     101,   102,   159,   308,   310,   308,   205,   308,   308,   308,
      94,   166,   180,   308,   308,   188,   197,   308,   311,   188,
     197,   308,   200,   267,   308,   308,   308,   308,   308,   308,
     308,   308,     1,   165,   178,   189,   283,   105,   144,   260,
     285,   286,   310,   218,   283,   308,   318,   308,    75,   180,
     164,    79,   184,    45,   108,   200,   200,    52,    78,   255,
     271,   158,   159,   150,   308,    12,    19,    31,    83,    87,
     118,   134,   135,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   151,   152,   153,   154,   155,   156,
     157,   160,   161,   162,   171,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     163,   247,   166,   168,    83,    87,   166,   180,   159,   308,
     308,   308,   283,   164,   188,    46,   297,   267,   271,   159,
     140,   159,   113,   201,   260,   287,   288,   289,   310,    82,
     214,   241,   269,    82,   212,   267,   241,   269,   200,   166,
     205,    32,    46,   205,   114,   205,   300,    32,    46,   205,
     300,    36,    68,   159,    96,   188,   247,    77,    80,   185,
     287,   180,   166,   249,   105,   166,   200,   273,   274,     1,
     139,   278,    46,   140,   180,   205,   166,   166,   205,   287,
     209,   200,   140,   159,   308,   308,   159,   164,   205,   166,
     287,   159,   222,   159,   222,   159,   119,   268,   159,   205,
     159,   165,   165,   178,   140,   165,   308,   140,   167,   140,
     167,   169,   300,    46,   140,   169,   300,   117,   140,   169,
       8,     1,   165,   189,    61,   308,   190,   308,   139,   231,
     164,   242,   159,   308,   308,   308,   308,   218,   308,   218,
     308,   308,   308,   308,   308,   308,   308,    20,    33,    59,
     103,   201,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   310,
     310,   310,   310,   310,   287,   287,   218,   308,   218,   308,
      27,    46,    84,   109,   299,   302,   303,   308,   323,    32,
      46,    32,    46,    96,    46,   169,   218,   308,   205,   159,
     159,   308,   308,   119,   167,   140,   215,   200,   271,   213,
     200,   159,   271,    46,   283,    43,   308,   218,   308,   166,
     205,    43,   308,   218,   308,   205,   162,   190,   192,   308,
     190,   191,   180,   308,    34,   308,   184,   167,    27,    46,
      50,    70,    73,    84,   103,   179,   250,   251,   252,   253,
     239,   274,   140,   167,    33,    48,    91,    95,   168,   204,
     279,   291,   119,   275,   308,   272,   308,   308,   167,   260,
     308,     1,   227,   287,   167,    21,   223,   279,   291,   140,
     165,   167,   167,   285,   167,   285,   180,   169,   218,   308,
     169,   180,   308,   169,   308,   169,   308,   165,   165,   200,
      13,   142,   159,   140,   159,    13,    36,    68,   283,   164,
       1,   200,   235,   236,    27,    73,    84,   103,   244,   254,
     166,   159,   159,   159,   159,   159,   167,   169,    46,    84,
     140,   167,   290,    83,    83,    43,   218,   308,    43,   218,
     308,   218,   308,   297,   297,   159,   260,   310,   289,   200,
     231,   159,   200,   231,   159,   308,   167,   308,    32,   205,
      32,   205,   301,   302,   308,    32,   205,   300,    32,   205,
     300,   159,    13,   159,    34,    34,   180,    96,   188,    61,
      46,    84,   252,   140,   167,   166,   200,    27,    73,    84,
     103,   256,   167,   274,   278,     1,   283,    64,   310,   167,
     167,   165,    69,   111,   165,   228,   167,   166,   188,   200,
     224,   267,   180,   169,   300,   169,   300,   180,   117,   201,
     164,   308,   308,   192,   191,     1,   232,   165,   119,   140,
     165,    84,   243,     1,     3,    12,    17,    19,    20,    25,
      39,    44,    51,    53,    59,    65,    66,    81,    93,    97,
     100,   104,   110,   134,   135,   136,   137,   138,   141,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     157,   160,   161,   162,   163,   166,   199,   200,   202,   245,
     246,   247,   290,   167,   302,   278,   290,   290,   308,    32,
      32,   308,    32,    32,   169,   169,   205,   205,   231,   164,
     231,   164,   205,    96,    43,   308,    43,   308,   140,   167,
      96,    43,   308,   205,    43,   308,   205,   308,   180,   308,
     180,    34,   200,   200,   251,   274,   139,   282,    84,   278,
     275,   169,    46,   169,   166,   166,    32,   180,   283,   224,
     139,   188,    43,   180,   308,   169,    43,   180,   308,   169,
     308,   159,   190,    13,    36,    68,   159,   159,   165,    77,
      80,   165,   179,   207,   308,   236,   256,   166,   248,   200,
     308,   134,   142,   248,   248,   275,    96,    43,    43,    96,
      43,    43,    43,    43,   164,   232,   164,   232,   308,   308,
     308,   302,   308,   308,   308,    34,   180,   159,   282,   167,
     168,   204,   260,   281,   291,   144,   261,   275,    57,   112,
     262,   308,   279,   291,   287,   287,   180,   205,   167,   308,
     308,   180,   308,   180,   165,   308,   192,   191,   207,     1,
     139,   277,   250,   167,     3,    97,   246,   247,   308,   308,
     308,   308,   308,   308,   232,   165,   232,   165,    96,    96,
      96,    96,   180,   275,   282,   169,   283,   260,   308,     3,
      86,    97,   263,   264,   265,   308,   188,   206,   259,   169,
     167,   167,   188,    96,    96,   159,   159,   168,   204,   276,
     291,    99,   257,   167,   248,   248,    96,    96,    96,    96,
      96,    96,   165,   165,   308,   308,   308,   308,   261,   275,
     260,   280,   281,   291,    46,   169,   265,   112,   140,   119,
     145,   147,   148,   151,   152,    57,   291,   158,   158,   308,
     308,     1,   169,   283,   262,   308,   280,   281,   308,   264,
     265,   265,   265,   265,   265,   265,   263,   169,   276,   291,
     169,   159,   258,   259,   169,   276,   291,   280
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   181,   182,   182,   182,   183,   183,   183,   184,   184,
     185,   185,   185,   187,   186,   188,   188,   188,   189,   189,
     190,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     193,   194,   194,   194,   194,   194,   195,   195,   195,   196,
     197,   197,   197,   197,   197,   198,   198,   199,   199,   199,
     199,   199,   199,   200,   200,   200,   200,   200,   200,   201,
     201,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   205,   205,   206,   206,
     207,   207,   207,   208,   207,   209,   209,   209,   209,   209,
     209,   209,   210,   210,   210,   210,   212,   211,   213,   211,
     214,   211,   215,   211,   211,   211,   211,   211,   216,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   218,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   221,   221,   221,   221,   221,
     221,   222,   222,   223,   223,   223,   224,   224,   225,   226,
     226,   227,   227,   228,   228,   228,   229,   229,   230,   230,
     230,   231,   231,   232,   232,   232,   233,   233,   234,   235,
     235,   235,   236,   236,   238,   239,   237,   240,   240,   240,
     242,   243,   241,   244,   244,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     248,   248,   249,   250,   250,   250,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   254,   254,   254,   254,   254,   254,   255,   255,
     256,   256,   256,   256,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   260,   261,   261,   261,   262,   262,   262,
     262,   262,   263,   263,   264,   264,   264,   264,   264,   264,
     264,   265,   265,   266,   266,   266,   267,   267,   268,   268,
     268,   269,   269,   269,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   273,   274,   274,   274,   275,   275,
     275,   276,   276,   276,   276,   276,   276,   276,   277,   277,
     277,   277,   277,   278,   278,   278,   278,   278,   279,   279,
     279,   279,   280,   280,   280,   281,   281,   281,   281,   281,
     282,   282,   282,   282,   282,   283,   283,   283,   283,   284,
     284,   285,   285,   285,   286,   286,   287,   287,   288,   288,
     289,   289,   289,   289,   290,   290,   291,   291,   291,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   294,   295,
     296,   296,   296,   296,   296,   296,   296,   296,   297,   297,
     298,   299,   299,   300,   301,   301,   302,   302,   302,   303,
     303,   303,   303,   303,   303,   304,   304,   305,   305,   305,
     305,   305,   306,   306,   306,   306,   306,   306,   306,   307,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   309,   309,   310,   310,
     310,   311,   311,   311,   311,   312,   312,   312,   312,   313,
     313,   313,   314,   314,   314,   314,   314,   315,   315,   315,
     315,   316,   316,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   318,   318,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   321,   321,   322,   322,   322,   322,   323,   323,   323,
     323,   323,   323,   323
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     2,     2,     3,
       2,     4,     3,     4,     4,     0,     1,     1,     0,     1,
       0,     1,     1,     0,     7,     2,     3,     3,     1,     2,
       1,     3,     3,     5,     0,     1,     1,     1,     0,     1,
       1,     4,     6,     8,     6,     8,     4,     6,     7,     3,
       4,     4,     4,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       1,     1,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     5,     2,     0,     8,     0,     9,
       0,     8,     0,     9,     3,     3,     5,     5,     2,     5,
       3,     6,     6,     4,     5,     5,     3,     3,     6,     5,
       6,     5,     6,     3,     4,     3,     4,     6,     7,     6,
       7,     4,     5,     4,     5,     4,     4,     3,     6,     5,
       6,     5,     8,     7,     2,     3,     3,     2,     2,     3,
       3,     0,     2,     2,     3,     5,     1,     3,     3,     5,
       5,     0,     2,     3,     2,     3,     6,     6,     1,     1,
       1,     0,     2,     0,     2,     3,     5,     5,     1,     1,
       2,     3,     1,     3,     0,     0,     8,     0,     1,     1,
       0,     0,    10,     3,     3,     5,     5,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     3,     0,     1,     3,     4,     5,     4,     6,
       6,     0,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       0,     1,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     2,     0,     2,     2,
       4,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     3,     4,     4,     2,     4,     0,     2,
       2,     1,     1,     1,     2,     1,     4,     3,     1,     3,
       3,     5,     1,     1,     3,     1,     2,     3,     0,     2,
       2,     3,     2,     4,     3,     3,     4,     3,     0,     2,
       2,     2,     1,     0,     2,     2,     2,     1,     4,     4,
       6,     3,     0,     1,     1,     3,     4,     3,     4,     6,
       0,     2,     2,     2,     2,     1,     1,     3,     3,     1,
       3,     1,     1,     1,     3,     3,     0,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     5,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     6,     6,     4,     9,     9,     7,     6,     6,     4,
       9,     9,     7,     4,     6,     6,     9,     9,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       4,     1,     3,     4,     1,     3,     4,     3,     3,     1,
       1,     2,     1,     2,     1,     1,     3,     1,     2,     2,
       2,     2,     2,     8,     8,     9,     9,     5,     5,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     3,     2,     2,     2,     1,     0,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     4,
       4,     4,     3,     3,     3,     3,     5,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     4,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULLPTR;
  yyps->yynew = 1;
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
     '$$ = $1'.

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
#line 502 "chapel.ypp" /* yacc.c:1646  */
    { yyblock = (yyval.pblockstmt); }
#line 6214 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 507 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6220 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 508 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6226 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 515 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6232 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 520 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6238 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 521 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6244 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 542 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6250 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 543 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6256 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 544 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6262 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 545 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6268 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 546 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6274 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 547 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 6280 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 548 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 6286 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 549 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 6292 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 550 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6298 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 551 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 6304 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 552 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6310 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 553 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6316 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 554 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 6322 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 555 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 6328 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 556 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 6334 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 557 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6340 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 562 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 6354 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 575 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 6363 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 580 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6372 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 585 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6381 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 592 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6387 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 593 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6393 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 594 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6399 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 598 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 6405 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 599 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = true;  }
#line 6411 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 603 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 6417 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 604 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 6423 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 605 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = true; }
#line 6429 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 610 "chapel.ypp" /* yacc.c:1646  */
    {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 6438 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 615 "chapel.ypp" /* yacc.c:1646  */
    {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 6446 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 630 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 6452 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 631 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 6458 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 632 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6464 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 637 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6470 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 638 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6476 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 643 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 6486 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 648 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6496 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 653 "chapel.ypp" /* yacc.c:1646  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 6505 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 657 "chapel.ypp" /* yacc.c:1646  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6514 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 664 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6524 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 673 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6534 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 682 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = (currentModuleType != MOD_INTERNAL ? true : false); }
#line 6540 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 683 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 6546 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 684 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = true; }
#line 6552 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 688 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 6558 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 689 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 6564 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 690 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 6570 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 691 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 6576 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 692 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 6582 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 696 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildImportStmt((yyvsp[-1].pexpr), (yyvsp[-3].b)); }
#line 6588 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 697 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildImportStmt((yyvsp[-3].pexpr), (yyvsp[-1].pch), (yyvsp[-5].b)); }
#line 6594 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 698 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist), (yyvsp[-6].b)); }
#line 6600 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 702 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 6606 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 707 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 6612 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 709 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 6618 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 711 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 6624 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 713 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 6630 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 715 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 6636 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 721 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = NULL; }
#line 6642 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 722 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6648 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 726 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6654 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 727 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6660 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 728 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "this"; }
#line 6666 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 729 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6672 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 730 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6678 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 731 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6684 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 734 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6690 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 735 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6696 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 736 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 6702 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 737 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6708 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 738 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6714 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 739 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6720 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 751 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6726 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 752 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "this"; }
#line 6732 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 763 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "bool"; }
#line 6738 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 764 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "int"; }
#line 6744 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 765 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "uint"; }
#line 6750 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 766 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "real"; }
#line 6756 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 767 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "imag"; }
#line 6762 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 768 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "complex"; }
#line 6768 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 769 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "bytes"; }
#line 6774 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 770 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "string"; }
#line 6780 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 771 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "sync"; }
#line 6786 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 772 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "single"; }
#line 6792 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 773 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "owned"; }
#line 6798 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 774 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "shared"; }
#line 6804 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 775 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "borrowed"; }
#line 6810 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 776 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "unmanaged"; }
#line 6816 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 777 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "domain"; }
#line 6822 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 778 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "index"; }
#line 6828 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 779 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "locale"; }
#line 6834 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 780 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "nothing"; }
#line 6840 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 781 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "void"; }
#line 6846 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 785 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 6852 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 786 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 6858 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 787 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 6864 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 788 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 6870 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 789 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 6876 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 790 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 6882 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 791 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 6888 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 792 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 6894 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 793 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 6900 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 794 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 6906 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 795 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 6912 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 796 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 6918 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 803 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "_syncvar"; }
#line 6924 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 804 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "_singlevar"; }
#line 6930 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 805 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "_domain"; }
#line 6936 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 806 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "_index"; }
#line 6942 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 810 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 6948 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 811 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 6954 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 815 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 6960 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 816 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 6966 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 820 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 6972 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 822 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 6978 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 832 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 6984 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 833 "chapel.ypp" /* yacc.c:1646  */
    { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 6990 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 847 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 6996 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 848 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7002 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 849 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7008 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 850 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7014 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 855 "chapel.ypp" /* yacc.c:1646  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7023 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 860 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7037 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 870 "chapel.ypp" /* yacc.c:1646  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7046 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 875 "chapel.ypp" /* yacc.c:1646  */
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7061 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 886 "chapel.ypp" /* yacc.c:1646  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7070 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 891 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7084 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 901 "chapel.ypp" /* yacc.c:1646  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7093 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 906 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7107 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 917 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7115 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 921 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7123 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 926 "chapel.ypp" /* yacc.c:1646  */
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7135 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 934 "chapel.ypp" /* yacc.c:1646  */
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7147 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 945 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7155 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 951 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7161 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 952 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7167 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 953 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 7173 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 954 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 7179 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 955 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 7185 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 956 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7191 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 957 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7197 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 958 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7203 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 959 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7209 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 960 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7215 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 961 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7221 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 962 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7227 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 963 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7233 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 964 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7239 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 965 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7245 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 966 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7251 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 967 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7257 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 968 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7263 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 970 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7273 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 976 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7283 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 982 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7293 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 988 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7303 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 994 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7314 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1001 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7325 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1008 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7333 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1012 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7341 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1018 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 7347 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1022 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 7353 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1023 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7359 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1024 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7365 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1025 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7371 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1026 "chapel.ypp" /* yacc.c:1646  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7378 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1028 "chapel.ypp" /* yacc.c:1646  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7385 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1030 "chapel.ypp" /* yacc.c:1646  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7392 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1032 "chapel.ypp" /* yacc.c:1646  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7399 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1037 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 7405 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1040 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 7411 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1041 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 7417 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1042 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 7423 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1043 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 7429 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1044 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7435 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1045 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7441 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1049 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7447 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1050 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7453 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1054 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 7459 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1055 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7465 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1056 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7471 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1060 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 7477 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1061 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 7483 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1065 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 7489 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1069 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 7495 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1071 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7501 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1075 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7507 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1076 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7513 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1081 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 7519 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1083 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7525 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1085 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7531 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1092 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7545 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1102 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7559 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1115 "chapel.ypp" /* yacc.c:1646  */
    {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7569 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1120 "chapel.ypp" /* yacc.c:1646  */
    {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7579 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1125 "chapel.ypp" /* yacc.c:1646  */
    {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7589 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1133 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = NULL; }
#line 7595 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1134 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 7601 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1139 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 7607 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1141 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 7613 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1143 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 7619 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1148 "chapel.ypp" /* yacc.c:1646  */
    {
      EnumType* pdt = (yyvsp[-4].penumtype);
      for_vector(DefExpr, ec, *(yyvsp[-1].pvecOfDefs)) {
        ec->sym->type = pdt;
        pdt->constants.insertAtTail(ec);
        if (pdt->defaultValue == NULL) {
          pdt->defaultValue = ec->sym;
        }
      }
      delete (yyvsp[-1].pvecOfDefs);
      pdt->doc = (yylsp[-4]).comment;
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-4].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 7639 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1164 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 7647 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1171 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7657 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1180 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 7669 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1188 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 7677 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1192 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 7685 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1198 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 7691 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1199 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 7697 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1204 "chapel.ypp" /* yacc.c:1646  */
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 7706 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1209 "chapel.ypp" /* yacc.c:1646  */
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7715 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1214 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF || (yyvsp[-3].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].lifetimeAndWhere).where)
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].lifetimeAndWhere).where);
      if ((yyvsp[-1].lifetimeAndWhere).lifetime)
        (yyvsp[-5].pfnsymbol)->lifetimeConstraints = new BlockStmt((yyvsp[-1].lifetimeAndWhere).lifetime);
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 7737 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1236 "chapel.ypp" /* yacc.c:1646  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 7745 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1239 "chapel.ypp" /* yacc.c:1646  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 7754 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1243 "chapel.ypp" /* yacc.c:1646  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 7763 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1251 "chapel.ypp" /* yacc.c:1646  */
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 7777 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1261 "chapel.ypp" /* yacc.c:1646  */
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7788 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1268 "chapel.ypp" /* yacc.c:1646  */
    {
      FnSymbol* fn = (yyvsp[-6].pfnsymbol);
      FnSymbol* linkageFn = (yyvsp[-9].pfnsymbol);

      fn->copyFlags((yyvsp[-9].pfnsymbol));
      if (*linkageFn->name)
        // The user explicitly named this function (controls mangling).
        fn->cname = linkageFn->name;
      else if (linkageFn->numFormals() == 1)
        // cname should be set based upon param
        fn->insertFormalAtTail(linkageFn->getFormal(1));

      if ((yyvsp[-8].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-6].pfnsymbol), (yyvsp[-4].retTag), (yyvsp[-3].pexpr), (yyvsp[-2].b), (yyvsp[-1].lifetimeAndWhere).where, (yyvsp[-1].lifetimeAndWhere).lifetime, (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 7815 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1294 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 7823 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1298 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7832 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1303 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 7840 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1307 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7849 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1312 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 7857 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1319 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 7863 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1323 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 7869 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1324 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 7875 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1325 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "&"; }
#line 7881 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1326 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "|"; }
#line 7887 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1327 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "^"; }
#line 7893 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1328 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "~"; }
#line 7899 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1329 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "=="; }
#line 7905 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1330 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "!="; }
#line 7911 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1331 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<="; }
#line 7917 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1332 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = ">="; }
#line 7923 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1333 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<"; }
#line 7929 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1334 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = ">"; }
#line 7935 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1335 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "+"; }
#line 7941 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1336 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "-"; }
#line 7947 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1337 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "*"; }
#line 7953 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1338 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "/"; }
#line 7959 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1339 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<<"; }
#line 7965 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1340 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = ">>"; }
#line 7971 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1341 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "%"; }
#line 7977 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1342 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "**"; }
#line 7983 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1343 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "!"; }
#line 7989 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1344 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "chpl_by"; }
#line 7995 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1345 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "#"; }
#line 8001 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1346 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "chpl_align"; }
#line 8007 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1347 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<=>"; }
#line 8013 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1348 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<~>"; }
#line 8019 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1349 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "init="; }
#line 8025 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1350 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 8031 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1354 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "="; }
#line 8037 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1355 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "+="; }
#line 8043 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1356 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "-="; }
#line 8049 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1357 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "*="; }
#line 8055 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1358 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "/="; }
#line 8061 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1359 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "%="; }
#line 8067 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1360 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "**="; }
#line 8073 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1361 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "&="; }
#line 8079 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1362 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "|="; }
#line 8085 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1363 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "^="; }
#line 8091 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1364 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = ">>="; }
#line 8097 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1365 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pch) = "<<="; }
#line 8103 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1369 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 8109 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1370 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8115 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1374 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8121 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1378 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 8127 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1379 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 8133 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1380 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 8139 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1385 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 8145 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1387 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 8151 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1389 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 8157 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1391 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8163 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1393 "chapel.ypp" /* yacc.c:1646  */
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 8169 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1397 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_BLANK; }
#line 8175 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1398 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = (yyvsp[0].pt); }
#line 8181 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1402 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_IN; }
#line 8187 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1403 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_INOUT; }
#line 8193 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1404 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_OUT; }
#line 8199 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1405 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_CONST; }
#line 8205 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1406 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_CONST_IN; }
#line 8211 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1407 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_CONST_REF; }
#line 8217 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1408 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_PARAM; }
#line 8223 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1409 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_REF; }
#line 8229 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1410 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_TYPE; }
#line 8235 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1414 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_BLANK; }
#line 8241 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1415 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_PARAM; }
#line 8247 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1416 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_REF;   }
#line 8253 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1417 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_CONST_REF;   }
#line 8259 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1418 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_CONST;   }
#line 8265 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1419 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pt) = INTENT_TYPE;  }
#line 8271 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1423 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.procIter) = ProcIter_PROC; }
#line 8277 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1424 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.procIter) = ProcIter_ITER; }
#line 8283 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1428 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_VALUE; }
#line 8289 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1429 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_VALUE; }
#line 8295 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1430 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_CONST_REF; }
#line 8301 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1431 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_REF; }
#line 8307 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1432 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_PARAM; }
#line 8313 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1433 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.retTag) = RET_TYPE; }
#line 8319 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1437 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 8325 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1438 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.b) = true;  }
#line 8331 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1441 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = NULL; }
#line 8337 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1447 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 8343 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1451 "chapel.ypp" /* yacc.c:1646  */
    { 
      DefExpr * de = new DefExpr(new VarSymbol((yyvsp[0].pch)));
      USR_WARN(de, "support for space in query expressions is deprecated");
      (yyval.pexpr) = de;
  }
#line 8353 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1456 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 8359 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1460 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 8365 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1461 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8371 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1462 "chapel.ypp" /* yacc.c:1646  */
    { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 8381 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1470 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 8387 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1472 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 8393 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1474 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 8399 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1476 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8405 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1478 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 8411 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1483 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8417 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1485 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8423 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1489 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8429 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1490 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8435 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1491 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8441 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1492 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8447 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1493 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8453 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1494 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8459 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1495 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 8465 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1500 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 8471 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1502 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 8477 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1507 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 8483 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1509 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 8489 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1511 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 8495 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1516 "chapel.ypp" /* yacc.c:1646  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 8512 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1529 "chapel.ypp" /* yacc.c:1646  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 8530 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1545 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8536 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1547 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8542 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1549 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 8548 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1553 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 8554 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1554 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 8560 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1555 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 8566 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1556 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 8572 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1557 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pflagset) = buildVarDeclFlags(); }
#line 8578 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1562 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8588 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1568 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8597 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1577 "chapel.ypp" /* yacc.c:1646  */
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 8606 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1585 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 8612 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1587 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8618 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1592 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 8624 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 1594 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 8630 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 1596 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 8636 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 1601 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 8642 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 1603 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 8648 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 1605 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8654 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 1611 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8660 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 1612 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 8666 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 1613 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8672 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 1619 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8678 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 1621 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 8684 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 1623 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8692 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 1627 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 8700 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 1631 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8706 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 1633 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8714 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 1637 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8722 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 1644 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8728 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 1645 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8734 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 1646 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8740 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 1647 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8746 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 1648 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8752 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 1653 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8758 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 1654 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8764 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 1655 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 8770 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1656 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8776 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 1657 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8782 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 1678 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8790 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1682 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 8798 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1686 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 8810 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1694 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8818 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1700 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8824 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1701 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8830 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1702 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8836 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1707 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8842 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1709 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8848 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1715 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8854 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1717 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8860 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1719 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 8866 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1723 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 8872 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1724 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8878 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1725 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8884 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1726 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8890 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1727 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8896 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1733 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 8902 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1734 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 8908 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1735 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 8914 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1736 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 8920 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1740 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 8926 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1741 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 8932 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1745 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 8938 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1746 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8944 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1747 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8950 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1751 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8956 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1752 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 8962 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1756 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 8968 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1761 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 8974 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1762 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 8980 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1766 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 8986 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1767 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 8992 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1768 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8998 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1769 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9004 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1773 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9010 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1774 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9016 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1786 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9022 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1788 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 9028 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1790 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9034 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1801 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 9040 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1803 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 9046 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1805 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 9052 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1807 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 9058 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1809 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pcallexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pcallexpr)); }
#line 9064 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1811 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 9070 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1813 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 9076 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1816 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 9082 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1818 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 9088 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1820 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 9094 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1822 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9100 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1824 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 9106 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1826 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 9112 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1828 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 9118 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1830 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9124 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1833 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 9130 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1835 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 9136 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1840 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9142 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1842 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9148 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1844 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9154 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1846 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9160 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1848 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9166 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1850 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9172 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1852 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9178 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1854 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9184 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1856 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9190 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1858 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9196 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1860 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9202 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1862 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9208 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1864 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 9219 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1871 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 9229 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1877 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 9239 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1883 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9249 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1889 "chapel.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 9259 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1898 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9265 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1907 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gNil); }
#line 9271 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1923 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9277 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1927 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = NULL; }
#line 9283 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1932 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9289 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1936 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9295 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1937 "chapel.ypp" /* yacc.c:1646  */
    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9301 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1941 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9307 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1945 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9313 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1946 "chapel.ypp" /* yacc.c:1646  */
    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9319 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1951 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 9327 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1955 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9335 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1959 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9343 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1965 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 9349 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1966 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_IN;        }
#line 9355 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1967 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 9361 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1968 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_REF;       }
#line 9367 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1969 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 9373 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1970 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 9379 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1976 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9385 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1981 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 9391 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1983 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 9399 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1987 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 9407 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1991 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 9415 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1995 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 9423 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2003 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 9430 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 2008 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9440 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2014 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9450 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2020 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9461 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2027 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9472 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2036 "chapel.ypp" /* yacc.c:1646  */
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new owned(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'owned.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtOwned->symbol, (yyvsp[-1].pexpr))); }
#line 9480 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2040 "chapel.ypp" /* yacc.c:1646  */
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new shared(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'shared.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtShared->symbol, (yyvsp[-1].pexpr))); }
#line 9488 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2047 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 9494 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 2063 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 9500 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2065 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9506 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2067 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9512 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2069 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 9518 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2084 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 9524 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 2086 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 9530 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 2088 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 9536 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 2090 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 9542 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 2094 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = NULL; }
#line 9548 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 2095 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9554 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 2099 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 9560 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2100 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 9566 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2101 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9572 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 2119 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9578 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 2120 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 9584 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 2121 "chapel.ypp" /* yacc.c:1646  */
    {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 9590 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 2122 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9596 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 2126 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9602 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 2127 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9608 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 2128 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 9614 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 2132 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 9620 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 2133 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 9626 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 2134 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 9632 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 2135 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 9638 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 2136 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 9644 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 2144 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 9650 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 2145 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 9656 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 2146 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 9662 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 2147 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 9668 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 2151 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gFalse); }
#line 9674 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 2152 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gTrue); }
#line 9680 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 2157 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 9686 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 2158 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 9692 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 2159 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 9698 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 2160 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 9704 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 2161 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 9710 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 2162 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 9716 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 2163 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new SymExpr(gNone); }
#line 9722 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 2164 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 9728 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 2165 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr)); }
#line 9734 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 2166 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 9740 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 2167 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 9746 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 2169 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 9754 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 2173 "chapel.ypp" /* yacc.c:1646  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 9762 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 2180 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9768 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 2181 "chapel.ypp" /* yacc.c:1646  */
    { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9774 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 2185 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9780 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 2186 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9786 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 2187 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9792 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 2188 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9798 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 2189 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9804 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 2190 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9810 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 2191 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9816 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 2192 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9822 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 2193 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9828 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 2194 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9834 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 2195 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9840 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 2196 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9846 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 2197 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9852 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 2198 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9858 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 2199 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9864 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 2200 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9870 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 2201 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9876 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 2202 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9882 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 2203 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9888 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 2204 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9894 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 2205 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9900 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 2206 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9906 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 2207 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9912 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 2211 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 9918 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 2212 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 9924 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 2213 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 9930 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 2214 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 9936 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 2215 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 9942 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 2216 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 9948 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 2217 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 9954 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 2221 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9960 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 2222 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 9966 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 621:
#line 2223 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9972 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 622:
#line 2224 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 9978 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 2228 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9984 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 2229 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 9990 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 625:
#line 2230 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9996 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 626:
#line 2231 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10002 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 627:
#line 2236 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 10008 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 628:
#line 2237 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 10014 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 629:
#line 2238 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 10020 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 630:
#line 2239 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 10026 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 631:
#line 2240 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 10032 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 632:
#line 2241 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 10038 "bison-chapel.cpp" /* yacc.c:1646  */
    break;

  case 633:
#line 2242 "chapel.ypp" /* yacc.c:1646  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 10044 "bison-chapel.cpp" /* yacc.c:1646  */
    break;


#line 10048 "bison-chapel.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, &yylloc, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
