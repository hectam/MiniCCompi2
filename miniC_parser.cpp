/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "miniC.y"

//http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf
    #include <cstdio>
    using namespace std;
    int yylex();
    extern int yylineno;
    void yyerror(const char * s){
        fprintf(stderr, "Line: %d, error: %s\n", yylineno, s);
    }

    #define YYERROR_VERBOSE 1
    #define YYDEBUG 1
    #define EQUAL 1
    #define PLUSEQUAL 2
    #define MINUSEQUAL 3

#line 87 "miniC_parser.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_TOKENS_H_INCLUDED
# define YY_YY_TOKENS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "miniC.y"

    #include "ast.h"

#line 134 "miniC_parser.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_LIT_STRING = 258,
    TK_ID = 259,
    TK_LIT_INT = 260,
    TK_LIT_FLOAT = 261,
    TK_IF = 262,
    TK_ELSE = 263,
    TK_FOR = 264,
    TK_WHILE = 265,
    TK_BREAK = 266,
    TK_CONTINUE = 267,
    TK_RETURN = 268,
    TK_VOID = 269,
    TK_INT_TYPE = 270,
    TK_FLOAT_TYPE = 271,
    TK_PRINTF = 272,
    TK_PLUS_EQUAL = 273,
    TK_MINUS_EQUAL = 274,
    TK_PLUS_PLUS = 275,
    TK_MINUS_MINUS = 276,
    TK_NOT = 277,
    TK_OR = 278,
    TK_AND = 279,
    TK_EQUAL = 280,
    TK_NOT_EQUAL = 281,
    TK_GREATER_OR_EQUAL = 282,
    TK_LESS_OR_EQUAL = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "miniC.y"

    const char * string_t;
    int int_t;
    float float_t;
    Expr * expr_t;
    ArgumentList * argument_list_t;
    Statement * statement_t;
    StatementList * statement_list_t;
    InitDeclaratorList * init_declarator_list_t;
    InitDeclarator * init_declarator_t;
    Declarator * declarator_t;
    Initializer * initializer_t;
    InitializerElementList * initializer_list_t;
    Declaration * declaration_t;
    DeclarationList * declaration_list_t;
    Parameter * parameter_t;
    ParameterList * parameter_list_t;

#line 193 "miniC_parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKENS_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

#define YYUNDEFTOK  2
#define YYMAXUTOK   283


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    38,    40,    32,    41,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      43,    33,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    72,    72,    73,    76,    77,    80,    84,    89,    92,
      99,   100,   103,   106,   107,   110,   111,   114,   115,   116,
     119,   120,   123,   124,   125,   128,   133,   136,   137,   140,
     141,   142,   143,   144,   145,   146,   149,   152,   153,   156,
     157,   160,   165,   169,   175,   178,   179,   180,   183,   188,
     189,   199,   200,   201,   204,   205,   206,   207,   210,   211,
     214,   215,   216,   217,   218,   219,   223,   224,   227,   228,
     229,   230,   233,   234,   235,   238,   239,   240,   243,   244,
     245,   246,   247,   250,   251,   252,   255,   256,   259,   260,
     263,   264,   265,   268,   272,   273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_LIT_STRING", "TK_ID", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_IF", "TK_ELSE", "TK_FOR", "TK_WHILE", "TK_BREAK",
  "TK_CONTINUE", "TK_RETURN", "TK_VOID", "TK_INT_TYPE", "TK_FLOAT_TYPE",
  "TK_PRINTF", "TK_PLUS_EQUAL", "TK_MINUS_EQUAL", "TK_PLUS_PLUS",
  "TK_MINUS_MINUS", "TK_NOT", "TK_OR", "TK_AND", "TK_EQUAL",
  "TK_NOT_EQUAL", "TK_GREATER_OR_EQUAL", "TK_LESS_OR_EQUAL", "'('", "')'",
  "';'", "','", "'='", "'['", "']'", "'{'", "'}'", "'*'", "'/'", "'+'",
  "'-'", "'>'", "'<'", "$accept", "input", "external_declaration",
  "method_definition", "declaration_list", "declaration",
  "init_declarator_list", "init_declarator", "declarator",
  "parameters_type_list", "parameter_declaration", "initializer",
  "initializer_list", "statement", "print_statement", "statement_list",
  "if_statement", "for_statement", "expression_statement",
  "while_statement", "jump_statement", "block_statement", "type",
  "primary_expression", "assignment_expression", "postfix_expression",
  "argument_expression_list", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_or_expression",
  "logical_and_expression", "assignment_operator", "expression",
  "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    40,
      41,    59,    44,    61,    91,    93,   123,   125,    42,    47,
      43,    45,    62,    60
};
# endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     149,   -92,   -92,   -92,    35,   -92,   -92,   -92,    15,   -92,
     -92,    55,    13,   -92,    -6,    62,     8,   -92,    19,     4,
      38,    97,   -92,     2,   -92,   -92,   -92,   -92,   261,   261,
     261,   261,   -92,   -92,    -4,    66,    -1,    52,   115,    54,
     165,    71,    74,   -92,    68,   -92,   261,   -92,   -92,   102,
      79,    57,   149,    85,   -92,   -92,   -92,   -92,   -92,    96,
     -92,   -92,   -92,   166,   261,   -92,   -92,   -92,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,    67,   -92,    71,   116,   132,   138,   171,   173,   261,
     261,   -92,   -92,   207,   -92,   -92,   -92,   137,   -92,   -92,
     -92,   -92,   -92,   -92,    19,   174,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   100,   145,   -92,   -92,   -92,    52,
      52,   115,   115,   115,   115,    54,    54,    74,   165,   261,
     -92,   261,   131,   261,   -92,   -92,   175,   176,   -92,   172,
     -92,   -92,   -92,   -92,   261,   -92,    71,   185,   131,   195,
     -92,   -92,   -92,   -92,   241,   261,   241,   218,   200,   -92,
     241,   241,   -92,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    51,    52,    53,     0,     3,     4,     5,     0,     1,
       2,    17,     0,    14,    15,     0,     0,    12,     0,     0,
       0,     0,    21,    23,    57,    55,    94,    95,     0,     0,
       0,     0,    19,    60,     0,    71,    74,    77,    82,    85,
      89,    59,    87,    56,    17,    13,     0,    16,    25,     0,
       7,     0,     0,     0,    22,    68,    69,    70,    93,     0,
      18,    64,    65,     0,     0,    91,    92,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    28,     0,     0,     0,     0,     0,     0,
       0,    42,    50,     0,    11,    38,    35,     0,    31,    32,
      30,    29,    34,    33,     0,     0,     9,     8,     6,    20,
      24,    54,    62,    67,     0,     0,    58,    72,    73,    75,
      76,    80,    81,    78,    79,    83,    84,    86,    88,     0,
      26,     0,     0,     0,    47,    46,     0,     0,    10,     0,
      48,    37,    43,    63,     0,    61,    27,     0,     0,     0,
      45,    36,    49,    66,     0,     0,     0,    39,     0,    44,
       0,     0,    40,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   227,   -92,   -92,   -45,   -92,   214,   210,   -92,
     182,   -92,   -92,   -81,   -92,   142,   -92,   -92,   -91,   -92,
     -92,    -5,   -10,   -92,   -16,   -92,   -92,    -8,   126,   -20,
     122,   157,   -44,   160,   -92,   -30,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    93,     7,    12,    13,    14,    21,
      22,    47,    81,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     8,    33,    58,    35,   114,    36,    37,    38,
      39,    40,    41,    42,    68,   105,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    59,    83,    48,    94,    23,    44,    24,    25,    26,
      27,    24,    25,    26,    27,    50,   141,    65,    66,    11,
      55,    56,    57,    44,    28,    29,    30,    19,    28,    29,
      30,    60,    67,    31,   115,     9,    53,    31,    82,   104,
      46,   148,    23,    32,    17,    18,   108,   113,   138,     1,
       2,     3,   116,   121,   122,   123,   124,   155,   141,   136,
     137,   117,   118,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,   157,    49,   159,     1,     2,     3,   162,
     163,    73,    74,   104,    15,   146,    61,    62,   107,    16,
      69,    70,    20,    49,    79,    63,    75,    76,    80,   129,
      64,   147,    16,   149,   130,    24,    25,    26,    27,    84,
     106,    85,    86,    87,    88,    89,     1,     2,     3,    90,
     110,    82,    28,    29,    30,   158,   111,    51,   153,    52,
     143,    31,   144,    91,    24,    25,    26,    27,    49,    92,
      24,    25,    26,    27,    84,   131,    85,    86,    87,    88,
      89,    28,    29,    30,    90,    71,    72,    28,    29,    30,
      31,   132,    91,     1,     2,     3,    31,   133,    91,    24,
      25,    26,    27,    49,   140,    24,    25,    26,    27,    84,
     145,    85,    86,    87,    88,    89,    28,    29,    30,    90,
      77,    78,    28,    29,    30,    31,   112,   119,   120,   125,
     126,    31,   134,    91,   135,   142,   150,   151,    49,   152,
      24,    25,    26,    27,    84,   154,    85,    86,    87,    88,
      89,     1,     2,     3,    90,   156,   160,    28,    29,    30,
     161,    10,    45,    54,   109,   139,    31,   128,    91,   127,
       0,     0,     0,    49,    24,    25,    26,    27,    84,     0,
      85,    86,    87,    88,    89,     0,     0,     0,    90,     0,
       0,    28,    29,    30,    24,    25,    26,    27,     0,     0,
      31,     0,    91,     0,     0,     0,     0,    49,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
      31
};

static const yytype_int16 yycheck[] =
{
      16,    31,    46,    19,    49,    15,     4,     3,     4,     5,
       6,     3,     4,     5,     6,    20,    97,    18,    19,     4,
      28,    29,    30,     4,    20,    21,    22,    33,    20,    21,
      22,    35,    33,    29,    64,     0,    34,    29,    46,    49,
      36,   132,    52,    35,    31,    32,    51,    63,    93,    14,
      15,    16,    68,    73,    74,    75,    76,   148,   139,    89,
      90,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   154,    36,   156,    14,    15,    16,   160,
     161,    27,    28,    93,    29,   129,    20,    21,    31,    34,
      38,    39,    30,    36,    23,    29,    42,    43,    24,    32,
      34,   131,    34,   133,    37,     3,     4,     5,     6,     7,
      31,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      35,   129,    20,    21,    22,   155,    30,    30,   144,    32,
      30,    29,    32,    31,     3,     4,     5,     6,    36,    37,
       3,     4,     5,     6,     7,    29,     9,    10,    11,    12,
      13,    20,    21,    22,    17,    40,    41,    20,    21,    22,
      29,    29,    31,    14,    15,    16,    29,    29,    31,     3,
       4,     5,     6,    36,    37,     3,     4,     5,     6,     7,
      35,     9,    10,    11,    12,    13,    20,    21,    22,    17,
      25,    26,    20,    21,    22,    29,    30,    71,    72,    77,
      78,    29,    31,    31,    31,    31,    31,    31,    36,    37,
       3,     4,     5,     6,     7,    30,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    30,     8,    20,    21,    22,
      30,     4,    18,    23,    52,    93,    29,    80,    31,    79,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    17,    -1,
      -1,    20,    21,    22,     3,     4,     5,     6,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    15,    16,    45,    46,    47,    49,    66,     0,
      46,     4,    50,    51,    52,    29,    34,    31,    32,    33,
      30,    53,    54,    66,     3,     4,     5,     6,    20,    21,
      22,    29,    35,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    80,     4,    51,    36,    55,    68,    36,
      65,    30,    32,    34,    52,    71,    71,    71,    68,    79,
      35,    20,    21,    29,    34,    18,    19,    33,    78,    38,
      39,    40,    41,    27,    28,    42,    43,    25,    26,    23,
      24,    56,    71,    76,     7,     9,    10,    11,    12,    13,
      17,    31,    37,    48,    49,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    79,    31,    31,    65,    54,
      35,    30,    30,    68,    70,    79,    68,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    77,    75,    32,
      37,    29,    29,    29,    31,    31,    79,    79,    49,    59,
      37,    57,    31,    30,    32,    35,    76,    79,    62,    79,
      31,    31,    37,    68,    30,    62,    30,    57,    79,    57,
       8,    30,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      48,    48,    49,    50,    50,    51,    51,    52,    52,    52,
      53,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    58,    59,    59,    60,
      60,    61,    62,    62,    63,    64,    64,    64,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    77,    77,
      78,    78,    78,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     6,     5,     6,     6,
       2,     1,     3,     3,     1,     1,     3,     1,     4,     3,
       3,     1,     2,     1,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     5,
       7,     7,     1,     2,     5,     3,     2,     2,     3,     4,
       2,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     2,     2,     3,     1,     2,     2,
       2,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 4:
#line 76 "miniC.y"
                                        {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1519 "miniC_parser.cpp"
    break;

  case 5:
#line 77 "miniC.y"
                          {(yyval.statement_t) = new GlobalDeclaration((yyvsp[0].declaration_t));}
#line 1525 "miniC_parser.cpp"
    break;

  case 6:
#line 80 "miniC.y"
                                                                           {
                    (yyval.statement_t) = new MethodDefinition((yyvsp[-5].int_t), (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), (yyvsp[0].statement_t), yylineno );
                    delete (yyvsp[-2].parameter_list_t);
                 }
#line 1534 "miniC_parser.cpp"
    break;

  case 7:
#line 84 "miniC.y"
                                                     {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((yyvsp[-4].int_t), (yyvsp[-3].string_t), *pm, (yyvsp[0].statement_t), yylineno );
                     delete pm;
                 }
#line 1544 "miniC_parser.cpp"
    break;

  case 8:
#line 89 "miniC.y"
                                                              {
                     (yyval.statement_t) = new MethodDefinition((yyvsp[-5].int_t), (yyvsp[-4].string_t), *(yyvsp[-2].parameter_list_t), NULL, yylineno);
                 }
#line 1552 "miniC_parser.cpp"
    break;

  case 9:
#line 92 "miniC.y"
                                                         {
                     ParameterList * pm = new ParameterList;
                     (yyval.statement_t) = new MethodDefinition((yyvsp[-5].int_t), (yyvsp[-4].string_t), *pm , NULL, yylineno);
                     delete pm;
                 }
#line 1562 "miniC_parser.cpp"
    break;

  case 10:
#line 99 "miniC.y"
                                               { (yyval.declaration_list_t) = (yyvsp[-1].declaration_list_t); (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t)); }
#line 1568 "miniC_parser.cpp"
    break;

  case 11:
#line 100 "miniC.y"
                              {(yyval.declaration_list_t) = new DeclarationList; (yyval.declaration_list_t)->push_back((yyvsp[0].declaration_t));}
#line 1574 "miniC_parser.cpp"
    break;

  case 12:
#line 103 "miniC.y"
                                           { (yyval.declaration_t) = new Declaration((yyvsp[-2].int_t), *(yyvsp[-1].init_declarator_list_t), yylineno); delete (yyvsp[-1].init_declarator_list_t);  }
#line 1580 "miniC_parser.cpp"
    break;

  case 13:
#line 106 "miniC.y"
                                                               { (yyval.init_declarator_list_t) = (yyvsp[-2].init_declarator_list_t); (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1586 "miniC_parser.cpp"
    break;

  case 14:
#line 107 "miniC.y"
                                  { (yyval.init_declarator_list_t) = new InitDeclaratorList; (yyval.init_declarator_list_t)->push_back((yyvsp[0].init_declarator_t)); }
#line 1592 "miniC_parser.cpp"
    break;

  case 15:
#line 110 "miniC.y"
                            {(yyval.init_declarator_t) = new InitDeclarator((yyvsp[0].declarator_t), NULL, yylineno);}
#line 1598 "miniC_parser.cpp"
    break;

  case 16:
#line 111 "miniC.y"
                                             { (yyval.init_declarator_t) = new InitDeclarator((yyvsp[-2].declarator_t), (yyvsp[0].initializer_t), yylineno); }
#line 1604 "miniC_parser.cpp"
    break;

  case 17:
#line 114 "miniC.y"
                  {(yyval.declarator_t) = new Declarator((yyvsp[0].string_t), NULL, false, yylineno);}
#line 1610 "miniC_parser.cpp"
    break;

  case 18:
#line 115 "miniC.y"
                                                { (yyval.declarator_t) = new Declarator((yyvsp[-3].string_t), (yyvsp[-1].expr_t), true, yylineno);}
#line 1616 "miniC_parser.cpp"
    break;

  case 19:
#line 116 "miniC.y"
                          {(yyval.declarator_t) = new Declarator((yyvsp[-2].string_t), NULL, true, yylineno);}
#line 1622 "miniC_parser.cpp"
    break;

  case 20:
#line 119 "miniC.y"
                                                                     {(yyval.parameter_list_t) = (yyvsp[-2].parameter_list_t); (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t));}
#line 1628 "miniC_parser.cpp"
    break;

  case 21:
#line 120 "miniC.y"
                                           { (yyval.parameter_list_t) = new ParameterList; (yyval.parameter_list_t)->push_back((yyvsp[0].parameter_t)); }
#line 1634 "miniC_parser.cpp"
    break;

  case 22:
#line 123 "miniC.y"
                                       { (yyval.parameter_t) = new Parameter((yyvsp[-1].int_t), (yyvsp[0].declarator_t), false, yylineno); }
#line 1640 "miniC_parser.cpp"
    break;

  case 23:
#line 124 "miniC.y"
                            { (yyval.parameter_t) = new Parameter((yyvsp[0].int_t), NULL, false, yylineno); }
#line 1646 "miniC_parser.cpp"
    break;

  case 24:
#line 125 "miniC.y"
                                     { (yyval.parameter_t) = new Parameter((yyvsp[-2].int_t), NULL, true, yylineno); }
#line 1652 "miniC_parser.cpp"
    break;

  case 25:
#line 128 "miniC.y"
                                   {
    InitializerElementList * list = new InitializerElementList;
    list->push_back((yyvsp[0].expr_t));
    (yyval.initializer_t) = new Initializer(*list, yylineno);
}
#line 1662 "miniC_parser.cpp"
    break;

  case 26:
#line 133 "miniC.y"
                                     { (yyval.initializer_t) = new Initializer(*(yyvsp[-1].initializer_list_t), yylineno); delete (yyvsp[-1].initializer_list_t);  }
#line 1668 "miniC_parser.cpp"
    break;

  case 27:
#line 136 "miniC.y"
                                                             { (yyval.initializer_list_t) = (yyvsp[-2].initializer_list_t); (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t)); }
#line 1674 "miniC_parser.cpp"
    break;

  case 28:
#line 137 "miniC.y"
                                        {(yyval.initializer_list_t) = new InitializerElementList; (yyval.initializer_list_t)->push_back((yyvsp[0].expr_t));}
#line 1680 "miniC_parser.cpp"
    break;

  case 29:
#line 140 "miniC.y"
                           {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1686 "miniC_parser.cpp"
    break;

  case 30:
#line 141 "miniC.y"
                               {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1692 "miniC_parser.cpp"
    break;

  case 31:
#line 142 "miniC.y"
                       {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1698 "miniC_parser.cpp"
    break;

  case 32:
#line 143 "miniC.y"
                        {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1704 "miniC_parser.cpp"
    break;

  case 33:
#line 144 "miniC.y"
                          {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1710 "miniC_parser.cpp"
    break;

  case 34:
#line 145 "miniC.y"
                         {(yyval.statement_t) = (yyvsp[0].statement_t);}
#line 1716 "miniC_parser.cpp"
    break;

  case 35:
#line 146 "miniC.y"
                          {(yyval.statement_t) =(yyvsp[0].statement_t);}
#line 1722 "miniC_parser.cpp"
    break;

  case 36:
#line 149 "miniC.y"
                                         {(yyval.statement_t) = new PrintStatement((yyvsp[-1].expr_t),yylineno);}
#line 1728 "miniC_parser.cpp"
    break;

  case 37:
#line 152 "miniC.y"
                                         { (yyval.statement_list_t) = (yyvsp[-1].statement_list_t); (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1734 "miniC_parser.cpp"
    break;

  case 38:
#line 153 "miniC.y"
                          { (yyval.statement_list_t) = new StatementList; (yyval.statement_list_t)->push_back((yyvsp[0].statement_t)); }
#line 1740 "miniC_parser.cpp"
    break;

  case 39:
#line 156 "miniC.y"
                                                { (yyval.statement_t) = new IfStatement((yyvsp[-2].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1746 "miniC_parser.cpp"
    break;

  case 40:
#line 157 "miniC.y"
                                                                  { (yyval.statement_t) = new ElseStatement((yyvsp[-4].expr_t), (yyvsp[-2].statement_t), (yyvsp[0].statement_t) , yylineno);}
#line 1752 "miniC_parser.cpp"
    break;

  case 41:
#line 160 "miniC.y"
                                                                                            {
    (yyval.statement_t) = new ForStatement((yyvsp[-4].statement_t),(yyvsp[-3].statement_t),(yyvsp[-2].expr_t),(yyvsp[0].statement_t),yylineno);
}
#line 1760 "miniC_parser.cpp"
    break;

  case 42:
#line 166 "miniC.y"
                    {
                        (yyval.statement_t) = new ExpressionStatement(NULL,yylineno);
                    }
#line 1768 "miniC_parser.cpp"
    break;

  case 43:
#line 170 "miniC.y"
                    {
                        (yyval.statement_t) = new ExpressionStatement((yyvsp[-1].expr_t),yylineno);
                    }
#line 1776 "miniC_parser.cpp"
    break;

  case 44:
#line 175 "miniC.y"
                                                      { (yyval.statement_t) = new WhileStatement((yyvsp[-2].expr_t), (yyvsp[0].statement_t), yylineno);}
#line 1782 "miniC_parser.cpp"
    break;

  case 45:
#line 178 "miniC.y"
                                         {(yyval.statement_t) = new ReturnStatement((yyvsp[-1].expr_t),yylineno);}
#line 1788 "miniC_parser.cpp"
    break;

  case 46:
#line 179 "miniC.y"
                               {(yyval.statement_t) = new ContinueStatement(yylineno);}
#line 1794 "miniC_parser.cpp"
    break;

  case 47:
#line 180 "miniC.y"
                            {(yyval.statement_t) = new BreakStatement(yylineno);}
#line 1800 "miniC_parser.cpp"
    break;

  case 48:
#line 183 "miniC.y"
                                        { 
                    DeclarationList * list = new DeclarationList();
                    (yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *list, yylineno);
                    delete list;
               }
#line 1810 "miniC_parser.cpp"
    break;

  case 49:
#line 188 "miniC.y"
                                                          {(yyval.statement_t) = new BlockStatement(*(yyvsp[-1].statement_list_t), *(yyvsp[-2].declaration_list_t), yylineno); delete (yyvsp[-2].declaration_list_t); delete (yyvsp[-1].statement_list_t); }
#line 1816 "miniC_parser.cpp"
    break;

  case 50:
#line 189 "miniC.y"
                         {
                   StatementList * stmts = new StatementList();
                   DeclarationList * decls = new DeclarationList();
                   (yyval.statement_t) = new BlockStatement(*stmts, *decls, yylineno);
                   delete stmts;
                   delete decls;

               }
#line 1829 "miniC_parser.cpp"
    break;

  case 51:
#line 199 "miniC.y"
              {(yyval.int_t) = VOID;}
#line 1835 "miniC_parser.cpp"
    break;

  case 52:
#line 200 "miniC.y"
                 {(yyval.int_t) = INT;}
#line 1841 "miniC_parser.cpp"
    break;

  case 53:
#line 201 "miniC.y"
                   {(yyval.int_t) = FLOAT;}
#line 1847 "miniC_parser.cpp"
    break;

  case 54:
#line 204 "miniC.y"
                                       {(yyval.expr_t) = (yyvsp[-1].expr_t);}
#line 1853 "miniC_parser.cpp"
    break;

  case 55:
#line 205 "miniC.y"
            {(yyval.expr_t) = new IdExpr((yyvsp[0].string_t), yylineno);}
#line 1859 "miniC_parser.cpp"
    break;

  case 56:
#line 206 "miniC.y"
               {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1865 "miniC_parser.cpp"
    break;

  case 57:
#line 207 "miniC.y"
                    { (yyval.expr_t) = new StringExpr((yyvsp[0].string_t), yylineno); }
#line 1871 "miniC_parser.cpp"
    break;

  case 59:
#line 211 "miniC.y"
                                            {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1877 "miniC_parser.cpp"
    break;

  case 60:
#line 214 "miniC.y"
                                       {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1883 "miniC_parser.cpp"
    break;

  case 61:
#line 215 "miniC.y"
                                                            { (yyval.expr_t) = new ArrayExpr((IdExpr*)(yyvsp[-3].expr_t), (yyvsp[-1].expr_t), yylineno); }
#line 1889 "miniC_parser.cpp"
    break;

  case 62:
#line 216 "miniC.y"
                                                 { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-2].expr_t), *(new ArgumentList), yylineno); }
#line 1895 "miniC_parser.cpp"
    break;

  case 63:
#line 217 "miniC.y"
                                                                          { (yyval.expr_t) = new MethodInvocationExpr((IdExpr*)(yyvsp[-3].expr_t), *(yyvsp[-1].argument_list_t), yylineno); }
#line 1901 "miniC_parser.cpp"
    break;

  case 64:
#line 218 "miniC.y"
                                                      { (yyval.expr_t) = new PostIncrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 1907 "miniC_parser.cpp"
    break;

  case 65:
#line 219 "miniC.y"
                                                        { (yyval.expr_t) = new PostDecrementExpr((IdExpr*)(yyvsp[-1].expr_t), yylineno); }
#line 1913 "miniC_parser.cpp"
    break;

  case 66:
#line 223 "miniC.y"
                                                                             {(yyval.argument_list_t) = (yyvsp[-2].argument_list_t);  (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 1919 "miniC_parser.cpp"
    break;

  case 67:
#line 224 "miniC.y"
                                                { (yyval.argument_list_t) = new ArgumentList; (yyval.argument_list_t)->push_back((yyvsp[0].expr_t));}
#line 1925 "miniC_parser.cpp"
    break;

  case 68:
#line 227 "miniC.y"
                                                {(yyval.expr_t) = new UnaryExpr(INCREMENT, (yyvsp[0].expr_t), yylineno);}
#line 1931 "miniC_parser.cpp"
    break;

  case 69:
#line 228 "miniC.y"
                                                  {(yyval.expr_t) = new UnaryExpr(DECREMENT, (yyvsp[0].expr_t), yylineno);}
#line 1937 "miniC_parser.cpp"
    break;

  case 70:
#line 229 "miniC.y"
                                           {(yyval.expr_t) = new UnaryExpr(NOT, (yyvsp[0].expr_t), yylineno);}
#line 1943 "miniC_parser.cpp"
    break;

  case 71:
#line 230 "miniC.y"
                                     { (yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1949 "miniC_parser.cpp"
    break;

  case 72:
#line 233 "miniC.y"
                                                                          { (yyval.expr_t) = new MulExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1955 "miniC_parser.cpp"
    break;

  case 73:
#line 234 "miniC.y"
                                                       { (yyval.expr_t) = new DivExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1961 "miniC_parser.cpp"
    break;

  case 74:
#line 235 "miniC.y"
                         {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1967 "miniC_parser.cpp"
    break;

  case 75:
#line 238 "miniC.y"
                                                                       { (yyval.expr_t) = new AddExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1973 "miniC_parser.cpp"
    break;

  case 76:
#line 239 "miniC.y"
                                                                        { (yyval.expr_t) = new SubExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1979 "miniC_parser.cpp"
    break;

  case 77:
#line 240 "miniC.y"
                                                {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 1985 "miniC_parser.cpp"
    break;

  case 78:
#line 243 "miniC.y"
                                                                     { (yyval.expr_t) = new GtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1991 "miniC_parser.cpp"
    break;

  case 79:
#line 244 "miniC.y"
                                                                     { (yyval.expr_t) = new LtExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 1997 "miniC_parser.cpp"
    break;

  case 80:
#line 245 "miniC.y"
                                                                                     { (yyval.expr_t) = new GteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2003 "miniC_parser.cpp"
    break;

  case 81:
#line 246 "miniC.y"
                                                                                  { (yyval.expr_t) = new LteExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2009 "miniC_parser.cpp"
    break;

  case 82:
#line 247 "miniC.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2015 "miniC_parser.cpp"
    break;

  case 83:
#line 250 "miniC.y"
                                                                         { (yyval.expr_t) = new EqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2021 "miniC_parser.cpp"
    break;

  case 84:
#line 251 "miniC.y"
                                                                            { (yyval.expr_t) = new NeqExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2027 "miniC_parser.cpp"
    break;

  case 85:
#line 252 "miniC.y"
                                           {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2033 "miniC_parser.cpp"
    break;

  case 86:
#line 255 "miniC.y"
                                                                          { (yyval.expr_t) = new LogicalOrExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2039 "miniC_parser.cpp"
    break;

  case 87:
#line 256 "miniC.y"
                                             {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2045 "miniC_parser.cpp"
    break;

  case 88:
#line 259 "miniC.y"
                                                                          { (yyval.expr_t) = new LogicalAndExpr((yyvsp[-2].expr_t), (yyvsp[0].expr_t), yylineno); }
#line 2051 "miniC_parser.cpp"
    break;

  case 89:
#line 260 "miniC.y"
                                            {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2057 "miniC_parser.cpp"
    break;

  case 90:
#line 263 "miniC.y"
                         { (yyval.int_t) = EQUAL; }
#line 2063 "miniC_parser.cpp"
    break;

  case 91:
#line 264 "miniC.y"
                                   {(yyval.int_t) = PLUSEQUAL; }
#line 2069 "miniC_parser.cpp"
    break;

  case 92:
#line 265 "miniC.y"
                                    { (yyval.int_t) = MINUSEQUAL; }
#line 2075 "miniC_parser.cpp"
    break;

  case 93:
#line 268 "miniC.y"
                                  {(yyval.expr_t) = (yyvsp[0].expr_t);}
#line 2081 "miniC_parser.cpp"
    break;

  case 94:
#line 272 "miniC.y"
                     { (yyval.expr_t) = new IntExpr((yyvsp[0].int_t) , yylineno);}
#line 2087 "miniC_parser.cpp"
    break;

  case 95:
#line 273 "miniC.y"
                       { (yyval.expr_t) = new FloatExpr((yyvsp[0].float_t) , yylineno);}
#line 2093 "miniC_parser.cpp"
    break;


#line 2097 "miniC_parser.cpp"

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 275 "miniC.y"
