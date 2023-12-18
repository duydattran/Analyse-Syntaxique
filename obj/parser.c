/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include "tree.h"
int tree = 0, help = 0;
int yylex();
void yyerror(char *msg);
extern int lineno;

#line 83 "obj/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHARACTER = 3,                  /* CHARACTER  */
  YYSYMBOL_ADDSUB = 4,                     /* ADDSUB  */
  YYSYMBOL_DIVSTAR = 5,                    /* DIVSTAR  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_IDENT = 7,                      /* IDENT  */
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_ORDER = 9,                      /* ORDER  */
  YYSYMBOL_EQ = 10,                        /* EQ  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_18_ = 18,                       /* ';'  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* '['  */
  YYSYMBOL_21_ = 21,                       /* ']'  */
  YYSYMBOL_22_ = 22,                       /* '('  */
  YYSYMBOL_23_ = 23,                       /* ')'  */
  YYSYMBOL_24_ = 24,                       /* '{'  */
  YYSYMBOL_25_ = 25,                       /* '}'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_Prog = 29,                      /* Prog  */
  YYSYMBOL_DeclVars = 30,                  /* DeclVars  */
  YYSYMBOL_Declarateurs = 31,              /* Declarateurs  */
  YYSYMBOL_DeclFoncts = 32,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 33,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 34,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 35,                /* Parametres  */
  YYSYMBOL_ListTypVar = 36,                /* ListTypVar  */
  YYSYMBOL_Corps = 37,                     /* Corps  */
  YYSYMBOL_SuiteInstr = 38,                /* SuiteInstr  */
  YYSYMBOL_Instr = 39,                     /* Instr  */
  YYSYMBOL_Exp = 40,                       /* Exp  */
  YYSYMBOL_TB = 41,                        /* TB  */
  YYSYMBOL_FB = 42,                        /* FB  */
  YYSYMBOL_M = 43,                         /* M  */
  YYSYMBOL_E = 44,                         /* E  */
  YYSYMBOL_T = 45,                         /* T  */
  YYSYMBOL_F = 46,                         /* F  */
  YYSYMBOL_LValue = 47,                    /* LValue  */
  YYSYMBOL_Arguments = 48,                 /* Arguments  */
  YYSYMBOL_ListExp = 49                    /* ListExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  117

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,     2,     2,     2,
      22,    23,     2,     2,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    24,     2,    25,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    40,    46,    50,    55,    61,    66,    70,
      74,    79,    85,    93,   102,   107,   112,   117,   122,   127,
     133,   139,   143,   147,   152,   157,   165,   170,   174,   178,
     181,   184,   188,   193,   197,   202,   206,   211,   215,   220,
     224,   229,   233,   238,   242,   246,   250,   253,   256,   259,
     262,   267,   270,   275,   278,   282,   287
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHARACTER", "ADDSUB",
  "DIVSTAR", "NUM", "IDENT", "TYPE", "ORDER", "EQ", "OR", "AND", "VOID",
  "IF", "ELSE", "WHILE", "RETURN", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "'='", "'!'", "$accept", "Prog", "DeclVars",
  "Declarateurs", "DeclFoncts", "DeclFonct", "EnTeteFonct", "Parametres",
  "ListTypVar", "Corps", "SuiteInstr", "Instr", "Exp", "TB", "FB", "M",
  "E", "T", "F", "LValue", "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -72,     3,    52,   -72,    15,    19,    62,   -72,    42,    54,
      27,    32,    66,   -72,   -72,   -72,    76,    64,   -72,    78,
      64,    61,    79,    65,    81,   -72,    67,    70,    71,    69,
      86,    18,   -72,    74,   -72,    87,    90,   -72,    77,    58,
      80,    82,     2,   -72,   -72,   -72,   -72,    72,    84,    92,
      85,    11,    11,    11,    11,   -72,    11,   -72,    59,   -72,
      11,    11,    37,    88,    91,    94,   103,   104,   -72,   -72,
      33,    11,   -72,    93,   -72,    10,    97,    89,    95,    -7,
       0,   -72,    11,    30,   -72,    11,   -72,    11,    11,    11,
      11,    11,   -72,    53,    96,   -72,    98,    11,    45,    45,
      99,   -72,    88,    91,    94,   103,   104,   -72,   -72,   -72,
     -72,    97,   100,   -72,   -72,    45,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,    10,     0,     8,
       0,     0,     0,     9,     4,    11,     0,     0,     3,     0,
       0,     0,    22,     0,     0,    14,     0,    15,     5,     0,
       0,     0,     7,    18,    12,     0,     0,    13,     8,    51,
       0,     0,     0,    31,    22,    20,    21,     0,     0,     0,
       0,     0,    54,     0,     0,    48,     0,    47,    51,    29,
       0,     0,     0,    33,    35,    37,    39,    41,    43,    49,
       0,     0,    19,    16,     6,     0,    56,     0,    53,     0,
       0,    44,    54,     0,    45,     0,    28,     0,     0,     0,
       0,     0,    30,     0,     0,    52,     0,     0,     0,     0,
       0,    46,    32,    34,    36,    38,    40,    42,    23,    17,
      27,    55,    24,    26,    50,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   105,   -72,   -72,   112,   -72,   101,   -72,   -72,
      83,   -71,   -41,    25,    24,    35,    31,    34,   -54,   -31,
      43,   -72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    10,     6,     7,     8,    26,    27,    15,
      31,    46,    76,    63,    64,    65,    66,    67,    68,    69,
      77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      47,    62,    81,     3,    85,    55,    56,    84,    57,    58,
      75,    85,    79,    80,    55,    56,    98,    57,    58,    83,
      59,    85,     9,    99,    60,    39,    11,   112,   113,    61,
      93,    95,    40,    60,    41,    42,    43,   107,    61,    47,
      39,    85,    44,    45,   116,    18,    19,    40,    85,    41,
      42,    43,    39,   101,    20,    86,   111,    44,    92,    40,
       4,    41,    42,    43,    85,     5,    14,    47,    47,    44,
      12,   108,    24,    21,    16,     5,    17,    25,    51,    51,
      52,    82,    23,    17,    47,    28,    32,    30,    33,    35,
      34,    36,    37,    38,    48,    49,    50,    16,    71,    73,
      87,    88,    53,    89,    54,    72,    74,    90,    85,    91,
     102,   103,    96,    94,    97,   115,   110,   109,    13,    22,
     105,    29,   114,   104,   106,   100,     0,    70
};

static const yytype_int8 yycheck[] =
{
      31,    42,    56,     0,    11,     3,     4,    61,     6,     7,
      51,    11,    53,    54,     3,     4,    23,     6,     7,    60,
      18,    11,     7,    23,    22,     7,     7,    98,    99,    27,
      71,    21,    14,    22,    16,    17,    18,    91,    27,    70,
       7,    11,    24,    25,   115,    18,    19,    14,    11,    16,
      17,    18,     7,    23,    22,    18,    97,    24,    25,    14,
       8,    16,    17,    18,    11,    13,    24,    98,    99,    24,
       8,    18,     8,     7,    20,    13,    22,    13,    20,    20,
      22,    22,     6,    22,   115,     7,    21,     8,     7,    19,
      23,    20,    23,     7,    20,     8,     6,    20,    26,     7,
      12,    10,    22,     9,    22,    21,    21,     4,    11,     5,
      85,    87,    23,    20,    19,    15,    18,    21,     6,    14,
      89,    20,    23,    88,    90,    82,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    30,     0,     8,    13,    32,    33,    34,     7,
      31,     7,     8,    33,    24,    37,    20,    22,    18,    19,
      22,     7,    30,     6,     8,    13,    35,    36,     7,    35,
       8,    38,    21,     7,    23,    19,    20,    23,     7,     7,
      14,    16,    17,    18,    24,    25,    39,    47,    20,     8,
       6,    20,    22,    22,    22,     3,     4,     6,     7,    18,
      22,    27,    40,    41,    42,    43,    44,    45,    46,    47,
      38,    26,    21,     7,    21,    40,    40,    48,    49,    40,
      40,    46,    22,    40,    46,    11,    18,    12,    10,     9,
       4,     5,    25,    40,    20,    21,    23,    19,    23,    23,
      48,    23,    41,    42,    43,    44,    45,    46,    18,    21,
      18,    40,    39,    39,    23,    15,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    31,    32,
      32,    33,    34,    34,    35,    35,    36,    36,    36,    36,
      37,    38,    38,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    47,    47,    48,    48,    49,    49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     0,     3,     6,     4,     1,     2,
       1,     2,     5,     5,     1,     1,     4,     6,     2,     4,
       4,     2,     0,     4,     5,     7,     5,     5,     3,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     3,     1,     1,     1,
       4,     1,     4,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Prog: DeclVars DeclFoncts  */
#line 32 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Program, NULL);
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                            addSibling((yyvsp[-1].node), (yyvsp[0].node));
                                                            if (tree == 1)
                                                                printTree((yyval.node));
                                                        }
#line 1194 "obj/parser.c"
    break;

  case 3: /* DeclVars: DeclVars TYPE Declarateurs ';'  */
#line 40 "src/parser.y"
                                                        {           
                                                            Node *f = makeNode(Type, (yyvsp[-2].value));
                                                            addChild(f, (yyvsp[-1].node));
                                                            addChild((yyvsp[-3].node), f);
                                                            (yyval.node) = (yyvsp[-3].node);
                                                        }
#line 1205 "obj/parser.c"
    break;

  case 4: /* DeclVars: %empty  */
#line 46 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Declarations, NULL);
                                                        }
#line 1213 "obj/parser.c"
    break;

  case 5: /* Declarateurs: Declarateurs ',' IDENT  */
#line 50 "src/parser.y"
                                                        {
                                                            Node *f = makeNode(Ident, (yyvsp[0].value));
                                                            addSibling((yyvsp[-2].node), f);
                                                            (yyval.node) = (yyvsp[-2].node);
                                                        }
#line 1223 "obj/parser.c"
    break;

  case 6: /* Declarateurs: Declarateurs ',' IDENT '[' NUM ']'  */
#line 55 "src/parser.y"
                                                        {
                                                            Node *f = makeNode(Ident, (yyvsp[-3].value));
                                                            addChild(f, makeNode(num, (yyvsp[-1].value)));
                                                            addSibling((yyvsp[-5].node), f);
                                                            (yyval.node) = (yyvsp[-5].node);
                                                        }
#line 1234 "obj/parser.c"
    break;

  case 7: /* Declarateurs: IDENT '[' NUM ']'  */
#line 61 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[-3].value));
                                                            Node *f = makeNode(num, (yyvsp[-1].value));
                                                            addChild((yyval.node), f);
                                                        }
#line 1244 "obj/parser.c"
    break;

  case 8: /* Declarateurs: IDENT  */
#line 66 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[0].value));
                                                        }
#line 1252 "obj/parser.c"
    break;

  case 9: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 70 "src/parser.y"
                                                        {
                                                            addChild((yyvsp[-1].node), (yyvsp[0].node));
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        }
#line 1261 "obj/parser.c"
    break;

  case 10: /* DeclFoncts: DeclFonct  */
#line 74 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Functions, NULL);
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1270 "obj/parser.c"
    break;

  case 11: /* DeclFonct: EnTeteFonct Corps  */
#line 79 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Function, NULL);
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                            addSibling((yyvsp[-1].node), (yyvsp[0].node));
                                                        }
#line 1280 "obj/parser.c"
    break;

  case 12: /* EnTeteFonct: TYPE IDENT '(' Parametres ')'  */
#line 85 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Header, NULL);
                                                            Node *f1 = makeNode(Type, (yyvsp[-4].value));
                                                            Node *f2 = makeNode(Ident, (yyvsp[-3].value));
                                                            addChild((yyval.node), f1);
                                                            addSibling(f1, f2);
                                                            addSibling(f1, (yyvsp[-1].node));
                                                        }
#line 1293 "obj/parser.c"
    break;

  case 13: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 93 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Header, NULL);
                                                            Node *f1 = makeNode(Void, NULL);
                                                            Node *f2 = makeNode(Ident, (yyvsp[-3].value));
                                                            addChild((yyval.node), f1);
                                                            addChild((yyval.node), f2);
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1306 "obj/parser.c"
    break;

  case 14: /* Parametres: VOID  */
#line 102 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Parametres, NULL);
                                                            Node *f = makeNode(Void, NULL);
                                                            addChild((yyval.node), f);
                                                        }
#line 1316 "obj/parser.c"
    break;

  case 15: /* Parametres: ListTypVar  */
#line 107 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Parametres, NULL);
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1325 "obj/parser.c"
    break;

  case 16: /* ListTypVar: ListTypVar ',' TYPE IDENT  */
#line 112 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Type, (yyvsp[-1].value));
                                                            addChild((yyval.node), makeNode(Ident, (yyvsp[0].value)));
                                                            addSibling((yyval.node), (yyvsp[-3].node));
                                                        }
#line 1335 "obj/parser.c"
    break;

  case 17: /* ListTypVar: ListTypVar ',' TYPE IDENT '[' ']'  */
#line 117 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Type, (yyvsp[-3].value));
                                                            addChild((yyval.node), makeNode(Ident, (yyvsp[-2].value)));
                                                            addSibling((yyval.node), (yyvsp[-5].node));
                                                        }
#line 1345 "obj/parser.c"
    break;

  case 18: /* ListTypVar: TYPE IDENT  */
#line 122 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Type, (yyvsp[-1].value));
                                                            Node *f1 = makeNode(Ident, (yyvsp[0].value));
                                                            addChild((yyval.node), f1);
                                                        }
#line 1355 "obj/parser.c"
    break;

  case 19: /* ListTypVar: TYPE IDENT '[' ']'  */
#line 127 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Type, (yyvsp[-3].value));
                                                            Node *f1 = makeNode(Ident, (yyvsp[-2].value));
                                                            addChild((yyval.node), f1);
                                                        }
#line 1365 "obj/parser.c"
    break;

  case 20: /* Corps: '{' DeclVars SuiteInstr '}'  */
#line 133 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Body, NULL);
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1375 "obj/parser.c"
    break;

  case 21: /* SuiteInstr: SuiteInstr Instr  */
#line 139 "src/parser.y"
                                                        {
                                                            addChild((yyvsp[-1].node), (yyvsp[0].node));
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        }
#line 1384 "obj/parser.c"
    break;

  case 22: /* SuiteInstr: %empty  */
#line 143 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Instructions, NULL);
                                                        }
#line 1392 "obj/parser.c"
    break;

  case 23: /* Instr: LValue '=' Exp ';'  */
#line 147 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Assign, "=");
                                                            addChild((yyval.node), (yyvsp[-3].node));
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1402 "obj/parser.c"
    break;

  case 24: /* Instr: IF '(' Exp ')' Instr  */
#line 152 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(If, NULL);
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addSibling((yyvsp[-2].node), (yyvsp[0].node));
                                                        }
#line 1412 "obj/parser.c"
    break;

  case 25: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 157 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(If, NULL);
                                                            Node *f = makeNode(Else, NULL);
                                                            addChild((yyval.node), (yyvsp[-4].node));
                                                            addSibling((yyvsp[-4].node), (yyvsp[-2].node));
                                                            addChild(f, (yyvsp[0].node));
                                                            addSibling((yyval.node), f);
                                                        }
#line 1425 "obj/parser.c"
    break;

  case 26: /* Instr: WHILE '(' Exp ')' Instr  */
#line 165 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(While, NULL);
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addSibling((yyvsp[-2].node), (yyvsp[0].node));
                                                        }
#line 1435 "obj/parser.c"
    break;

  case 27: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 170 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[-4].value));
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                        }
#line 1444 "obj/parser.c"
    break;

  case 28: /* Instr: RETURN Exp ';'  */
#line 174 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Return, NULL);
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1453 "obj/parser.c"
    break;

  case 29: /* Instr: RETURN ';'  */
#line 178 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Return, NULL);
                                                        }
#line 1461 "obj/parser.c"
    break;

  case 30: /* Instr: '{' SuiteInstr '}'  */
#line 181 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        }
#line 1469 "obj/parser.c"
    break;

  case 31: /* Instr: ';'  */
#line 184 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Instruction, NULL);
                                                        }
#line 1477 "obj/parser.c"
    break;

  case 32: /* Exp: Exp OR TB  */
#line 188 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Or, "||");
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addSibling((yyvsp[-2].node), (yyvsp[0].node));
                                                        }
#line 1487 "obj/parser.c"
    break;

  case 33: /* Exp: TB  */
#line 193 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1495 "obj/parser.c"
    break;

  case 34: /* TB: TB AND FB  */
#line 197 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(And, "&&");
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1505 "obj/parser.c"
    break;

  case 35: /* TB: FB  */
#line 202 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1513 "obj/parser.c"
    break;

  case 36: /* FB: FB EQ M  */
#line 206 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Eq, (yyvsp[-1].value));
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1523 "obj/parser.c"
    break;

  case 37: /* FB: M  */
#line 211 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1531 "obj/parser.c"
    break;

  case 38: /* M: M ORDER E  */
#line 215 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Order, (yyvsp[-1].value));
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1541 "obj/parser.c"
    break;

  case 39: /* M: E  */
#line 220 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1549 "obj/parser.c"
    break;

  case 40: /* E: E ADDSUB T  */
#line 224 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(AddSub, (yyvsp[-1].value));
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1559 "obj/parser.c"
    break;

  case 41: /* E: T  */
#line 229 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1567 "obj/parser.c"
    break;

  case 42: /* T: T DIVSTAR F  */
#line 233 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(DivStar, (yyvsp[-1].value));
                                                            addChild((yyval.node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1577 "obj/parser.c"
    break;

  case 43: /* T: F  */
#line 238 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1585 "obj/parser.c"
    break;

  case 44: /* F: ADDSUB F  */
#line 242 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(AddSub, (yyvsp[-1].value));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1594 "obj/parser.c"
    break;

  case 45: /* F: '!' F  */
#line 246 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Not, "!");
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1603 "obj/parser.c"
    break;

  case 46: /* F: '(' Exp ')'  */
#line 250 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        }
#line 1611 "obj/parser.c"
    break;

  case 47: /* F: NUM  */
#line 253 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(num, (yyvsp[0].value));
                                                        }
#line 1619 "obj/parser.c"
    break;

  case 48: /* F: CHARACTER  */
#line 256 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Character, (yyvsp[0].value));
                                                        }
#line 1627 "obj/parser.c"
    break;

  case 49: /* F: LValue  */
#line 259 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1635 "obj/parser.c"
    break;

  case 50: /* F: IDENT '(' Arguments ')'  */
#line 262 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[-3].value));
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1644 "obj/parser.c"
    break;

  case 51: /* LValue: IDENT  */
#line 267 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[0].value));
                                                        }
#line 1652 "obj/parser.c"
    break;

  case 52: /* LValue: IDENT '[' Exp ']'  */
#line 270 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Ident, (yyvsp[-3].value));
                                                            addChild((yyval.node), (yyvsp[-1].node));
                                                        }
#line 1661 "obj/parser.c"
    break;

  case 53: /* Arguments: ListExp  */
#line 275 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1669 "obj/parser.c"
    break;

  case 54: /* Arguments: %empty  */
#line 278 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(Arguments, NULL);
                                                        }
#line 1677 "obj/parser.c"
    break;

  case 55: /* ListExp: ListExp ',' Exp  */
#line 282 "src/parser.y"
                                                        {
                                                            (yyval.node) = makeNode(ListExp, NULL);
                                                            addSibling((yyvsp[0].node), (yyvsp[-2].node));
                                                            addChild((yyval.node), (yyvsp[0].node));
                                                        }
#line 1687 "obj/parser.c"
    break;

  case 56: /* ListExp: Exp  */
#line 287 "src/parser.y"
                                                        {
                                                            (yyval.node) = (yyvsp[0].node);
                                                        }
#line 1695 "obj/parser.c"
    break;


#line 1699 "obj/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 291 "src/parser.y"


int main(int argc, char **argv) {
    int opt;

    struct option long_options[] = {
        {"help", no_argument, 0, 'h'},
        {"tree", no_argument, 0, 't'},
        {0, 0, 0, 0}
    };

    while ((opt = getopt_long(argc, argv, "ht", long_options, NULL)) != -1) {
        switch (opt) {
            case 'h':
                help = 1;
                break;
            case 't':
                tree = 1;
                break;
            default:
                return 2;
        }
    }

    if (help) {
        printf("Usage: ./tpcas [OPTIONS] < file.tpc.\n");
        printf("Options: -t | --tree affiche l’arbre abstrait sur la sortie standard.\n");
        printf("         -h | --help affiche une description de l’interface utilisateur et termine l’exécution.\n");
        return 0;
    }

    return yyparse();
}

void yyerror (char *s) {
    fprintf (stderr, "line %d: %s\n", lineno, s);
}
