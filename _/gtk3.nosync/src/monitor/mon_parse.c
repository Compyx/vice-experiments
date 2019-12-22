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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     H_NUMBER = 258,
     D_NUMBER = 259,
     O_NUMBER = 260,
     B_NUMBER = 261,
     CONVERT_OP = 262,
     B_DATA = 263,
     H_RANGE_GUESS = 264,
     D_NUMBER_GUESS = 265,
     O_NUMBER_GUESS = 266,
     B_NUMBER_GUESS = 267,
     BAD_CMD = 268,
     MEM_OP = 269,
     IF = 270,
     MEM_COMP = 271,
     MEM_DISK8 = 272,
     MEM_DISK9 = 273,
     MEM_DISK10 = 274,
     MEM_DISK11 = 275,
     EQUALS = 276,
     TRAIL = 277,
     CMD_SEP = 278,
     LABEL_ASGN_COMMENT = 279,
     CMD_LOG = 280,
     CMD_LOGNAME = 281,
     CMD_SIDEFX = 282,
     CMD_RETURN = 283,
     CMD_BLOCK_READ = 284,
     CMD_BLOCK_WRITE = 285,
     CMD_UP = 286,
     CMD_DOWN = 287,
     CMD_LOAD = 288,
     CMD_SAVE = 289,
     CMD_VERIFY = 290,
     CMD_IGNORE = 291,
     CMD_HUNT = 292,
     CMD_FILL = 293,
     CMD_MOVE = 294,
     CMD_GOTO = 295,
     CMD_REGISTERS = 296,
     CMD_READSPACE = 297,
     CMD_WRITESPACE = 298,
     CMD_RADIX = 299,
     CMD_MEM_DISPLAY = 300,
     CMD_BREAK = 301,
     CMD_TRACE = 302,
     CMD_IO = 303,
     CMD_BRMON = 304,
     CMD_COMPARE = 305,
     CMD_DUMP = 306,
     CMD_UNDUMP = 307,
     CMD_EXIT = 308,
     CMD_DELETE = 309,
     CMD_CONDITION = 310,
     CMD_COMMAND = 311,
     CMD_ASSEMBLE = 312,
     CMD_DISASSEMBLE = 313,
     CMD_NEXT = 314,
     CMD_STEP = 315,
     CMD_PRINT = 316,
     CMD_DEVICE = 317,
     CMD_HELP = 318,
     CMD_WATCH = 319,
     CMD_DISK = 320,
     CMD_QUIT = 321,
     CMD_CHDIR = 322,
     CMD_BANK = 323,
     CMD_LOAD_LABELS = 324,
     CMD_SAVE_LABELS = 325,
     CMD_ADD_LABEL = 326,
     CMD_DEL_LABEL = 327,
     CMD_SHOW_LABELS = 328,
     CMD_CLEAR_LABELS = 329,
     CMD_RECORD = 330,
     CMD_MON_STOP = 331,
     CMD_PLAYBACK = 332,
     CMD_CHAR_DISPLAY = 333,
     CMD_SPRITE_DISPLAY = 334,
     CMD_TEXT_DISPLAY = 335,
     CMD_SCREENCODE_DISPLAY = 336,
     CMD_ENTER_DATA = 337,
     CMD_ENTER_BIN_DATA = 338,
     CMD_KEYBUF = 339,
     CMD_BLOAD = 340,
     CMD_BSAVE = 341,
     CMD_SCREEN = 342,
     CMD_UNTIL = 343,
     CMD_CPU = 344,
     CMD_YYDEBUG = 345,
     CMD_BACKTRACE = 346,
     CMD_SCREENSHOT = 347,
     CMD_PWD = 348,
     CMD_DIR = 349,
     CMD_RESOURCE_GET = 350,
     CMD_RESOURCE_SET = 351,
     CMD_LOAD_RESOURCES = 352,
     CMD_SAVE_RESOURCES = 353,
     CMD_ATTACH = 354,
     CMD_DETACH = 355,
     CMD_MON_RESET = 356,
     CMD_TAPECTRL = 357,
     CMD_CARTFREEZE = 358,
     CMD_CPUHISTORY = 359,
     CMD_MEMMAPZAP = 360,
     CMD_MEMMAPSHOW = 361,
     CMD_MEMMAPSAVE = 362,
     CMD_COMMENT = 363,
     CMD_LIST = 364,
     CMD_STOPWATCH = 365,
     RESET = 366,
     CMD_EXPORT = 367,
     CMD_AUTOSTART = 368,
     CMD_AUTOLOAD = 369,
     CMD_MAINCPU_TRACE = 370,
     CMD_LABEL_ASGN = 371,
     L_PAREN = 372,
     R_PAREN = 373,
     ARG_IMMEDIATE = 374,
     REG_A = 375,
     REG_X = 376,
     REG_Y = 377,
     COMMA = 378,
     INST_SEP = 379,
     L_BRACKET = 380,
     R_BRACKET = 381,
     LESS_THAN = 382,
     REG_U = 383,
     REG_S = 384,
     REG_PC = 385,
     REG_PCR = 386,
     REG_B = 387,
     REG_C = 388,
     REG_D = 389,
     REG_E = 390,
     REG_H = 391,
     REG_L = 392,
     REG_AF = 393,
     REG_BC = 394,
     REG_DE = 395,
     REG_HL = 396,
     REG_IX = 397,
     REG_IY = 398,
     REG_SP = 399,
     REG_IXH = 400,
     REG_IXL = 401,
     REG_IYH = 402,
     REG_IYL = 403,
     PLUS = 404,
     MINUS = 405,
     STRING = 406,
     FILENAME = 407,
     R_O_L = 408,
     OPCODE = 409,
     LABEL = 410,
     BANKNAME = 411,
     CPUTYPE = 412,
     MON_REGISTER = 413,
     COND_OP = 414,
     RADIX_TYPE = 415,
     INPUT_SPEC = 416,
     CMD_CHECKPT_ON = 417,
     CMD_CHECKPT_OFF = 418,
     TOGGLE = 419,
     MASK = 420
   };
#endif
/* Tokens.  */
#define H_NUMBER 258
#define D_NUMBER 259
#define O_NUMBER 260
#define B_NUMBER 261
#define CONVERT_OP 262
#define B_DATA 263
#define H_RANGE_GUESS 264
#define D_NUMBER_GUESS 265
#define O_NUMBER_GUESS 266
#define B_NUMBER_GUESS 267
#define BAD_CMD 268
#define MEM_OP 269
#define IF 270
#define MEM_COMP 271
#define MEM_DISK8 272
#define MEM_DISK9 273
#define MEM_DISK10 274
#define MEM_DISK11 275
#define EQUALS 276
#define TRAIL 277
#define CMD_SEP 278
#define LABEL_ASGN_COMMENT 279
#define CMD_LOG 280
#define CMD_LOGNAME 281
#define CMD_SIDEFX 282
#define CMD_RETURN 283
#define CMD_BLOCK_READ 284
#define CMD_BLOCK_WRITE 285
#define CMD_UP 286
#define CMD_DOWN 287
#define CMD_LOAD 288
#define CMD_SAVE 289
#define CMD_VERIFY 290
#define CMD_IGNORE 291
#define CMD_HUNT 292
#define CMD_FILL 293
#define CMD_MOVE 294
#define CMD_GOTO 295
#define CMD_REGISTERS 296
#define CMD_READSPACE 297
#define CMD_WRITESPACE 298
#define CMD_RADIX 299
#define CMD_MEM_DISPLAY 300
#define CMD_BREAK 301
#define CMD_TRACE 302
#define CMD_IO 303
#define CMD_BRMON 304
#define CMD_COMPARE 305
#define CMD_DUMP 306
#define CMD_UNDUMP 307
#define CMD_EXIT 308
#define CMD_DELETE 309
#define CMD_CONDITION 310
#define CMD_COMMAND 311
#define CMD_ASSEMBLE 312
#define CMD_DISASSEMBLE 313
#define CMD_NEXT 314
#define CMD_STEP 315
#define CMD_PRINT 316
#define CMD_DEVICE 317
#define CMD_HELP 318
#define CMD_WATCH 319
#define CMD_DISK 320
#define CMD_QUIT 321
#define CMD_CHDIR 322
#define CMD_BANK 323
#define CMD_LOAD_LABELS 324
#define CMD_SAVE_LABELS 325
#define CMD_ADD_LABEL 326
#define CMD_DEL_LABEL 327
#define CMD_SHOW_LABELS 328
#define CMD_CLEAR_LABELS 329
#define CMD_RECORD 330
#define CMD_MON_STOP 331
#define CMD_PLAYBACK 332
#define CMD_CHAR_DISPLAY 333
#define CMD_SPRITE_DISPLAY 334
#define CMD_TEXT_DISPLAY 335
#define CMD_SCREENCODE_DISPLAY 336
#define CMD_ENTER_DATA 337
#define CMD_ENTER_BIN_DATA 338
#define CMD_KEYBUF 339
#define CMD_BLOAD 340
#define CMD_BSAVE 341
#define CMD_SCREEN 342
#define CMD_UNTIL 343
#define CMD_CPU 344
#define CMD_YYDEBUG 345
#define CMD_BACKTRACE 346
#define CMD_SCREENSHOT 347
#define CMD_PWD 348
#define CMD_DIR 349
#define CMD_RESOURCE_GET 350
#define CMD_RESOURCE_SET 351
#define CMD_LOAD_RESOURCES 352
#define CMD_SAVE_RESOURCES 353
#define CMD_ATTACH 354
#define CMD_DETACH 355
#define CMD_MON_RESET 356
#define CMD_TAPECTRL 357
#define CMD_CARTFREEZE 358
#define CMD_CPUHISTORY 359
#define CMD_MEMMAPZAP 360
#define CMD_MEMMAPSHOW 361
#define CMD_MEMMAPSAVE 362
#define CMD_COMMENT 363
#define CMD_LIST 364
#define CMD_STOPWATCH 365
#define RESET 366
#define CMD_EXPORT 367
#define CMD_AUTOSTART 368
#define CMD_AUTOLOAD 369
#define CMD_MAINCPU_TRACE 370
#define CMD_LABEL_ASGN 371
#define L_PAREN 372
#define R_PAREN 373
#define ARG_IMMEDIATE 374
#define REG_A 375
#define REG_X 376
#define REG_Y 377
#define COMMA 378
#define INST_SEP 379
#define L_BRACKET 380
#define R_BRACKET 381
#define LESS_THAN 382
#define REG_U 383
#define REG_S 384
#define REG_PC 385
#define REG_PCR 386
#define REG_B 387
#define REG_C 388
#define REG_D 389
#define REG_E 390
#define REG_H 391
#define REG_L 392
#define REG_AF 393
#define REG_BC 394
#define REG_DE 395
#define REG_HL 396
#define REG_IX 397
#define REG_IY 398
#define REG_SP 399
#define REG_IXH 400
#define REG_IXL 401
#define REG_IYH 402
#define REG_IYL 403
#define PLUS 404
#define MINUS 405
#define STRING 406
#define FILENAME 407
#define R_O_L 408
#define OPCODE 409
#define LABEL 410
#define BANKNAME 411
#define CPUTYPE 412
#define MON_REGISTER 413
#define COND_OP 414
#define RADIX_TYPE 415
#define INPUT_SPEC 416
#define CMD_CHECKPT_ON 417
#define CMD_CHECKPT_OFF 418
#define TOGGLE 419
#define MASK 420




/* Copy the first part of user declarations.  */
#line 1 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"

/* -*- C -*-
 *
 * mon_parse.y - Parser for the VICE built-in monitor.
 *
 * Written by
 *  Daniel Sladic <sladic@eecg.toronto.edu>
 *  Andreas Boose <viceteam@t-online.de>
 *  Thomas Giesel <skoe@directbox.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#include "vice.h"

#if !defined(MACOS_COMPILE) && !(defined(__OS2__) && defined(IDE_COMPILE))
#ifdef __GNUC__
#undef alloca
#ifndef ANDROID_COMPILE
#define        alloca(n)       __builtin_alloca (n)
#endif
#else
#ifdef HAVE_ALLOCA_H
#include <alloca.h>
#else  /* Not HAVE_ALLOCA_H.  */
#if !defined(_AIX) && !defined(WINCE)
#ifndef _MSC_VER
extern char *alloca();
#else
#define alloca(n)   _alloca(n)
#endif  /* MSVC */
#endif /* Not AIX and not WINCE.  */
#endif /* HAVE_ALLOCA_H.  */
#endif /* GCC.  */
#endif /* MACOS OS2 */

/* SunOS 4.x specific stuff */
#if defined(sun) || defined(__sun)
#  if !defined(__SVR4) && !defined(__svr4__)
#    ifdef __sparc__
#      define YYFREE
#    endif
#  endif
#endif

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "asm.h"
#include "console.h"
#include "lib.h"
#include "machine.h"
#include "mon_breakpoint.h"
#include "mon_command.h"
#include "mon_disassemble.h"
#include "mon_drive.h"
#include "mon_file.h"
#include "mon_memmap.h"
#include "mon_memory.h"
#include "mon_register.h"
#include "mon_util.h"
#include "montypes.h"
#include "resources.h"
#include "types.h"
#include "uimon.h"

#ifdef AMIGA_MORPHOS
#undef REG_PC
#endif

#define join_ints(x,y) (LO16_TO_HI16(x)|y)
#define separate_int1(x) (HI16_TO_LO16(x))
#define separate_int2(x) (LO16(x))

static int yyerror(char *s);
static int temp;
static int resolve_datatype(unsigned guess_type, const char *num);
static int resolve_range(enum t_memspace memspace, MON_ADDR range[2],
                         const char *num);

#ifdef __IBMC__
static void __yy_memcpy (char *to, char *from, int count);
#endif

/* Defined in the lexer */
extern int new_cmd, opt_asm;
extern void free_buffer(void);
extern void make_buffer(char *str);
extern int yylex(void);
extern int cur_len, last_len;

#define ERR_ILLEGAL_INPUT 1     /* Generic error as returned by yacc.  */
#define ERR_RANGE_BAD_START 2
#define ERR_RANGE_BAD_END 3
#define ERR_BAD_CMD 4
#define ERR_EXPECT_CHECKNUM 5
#define ERR_EXPECT_END_CMD 6
#define ERR_MISSING_CLOSE_PAREN 7
#define ERR_INCOMPLETE_COND_OP 8
#define ERR_EXPECT_FILENAME 9
#define ERR_ADDR_TOO_BIG 10
#define ERR_IMM_TOO_BIG 11
#define ERR_EXPECT_STRING 12
#define ERR_UNDEFINED_LABEL 13
#define ERR_EXPECT_DEVICE_NUM 14
#define ERR_EXPECT_ADDRESS 15
#define ERR_INVALID_REGISTER 16

#define BAD_ADDR (new_addr(e_invalid_space, 0))
#define CHECK_ADDR(x) ((x) == addr_mask(x))

#define YYDEBUG 1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 135 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
{
    MON_ADDR a;
    MON_ADDR range[2];
    int i;
    REG_ID reg;
    CONDITIONAL cond_op;
    cond_node_t *cond_node;
    RADIXTYPE rt;
    ACTION action;
    char *str;
    asm_mode_addr_info_t mode;
}
/* Line 193 of yacc.c.  */
#line 573 "mon_parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 586 "mon_parse.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  317
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1741

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  174
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNRULES -- Number of states.  */
#define YYNSTATES  635

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   420

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     170,   171,   168,   166,     2,   167,     2,   169,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   173,     2,
       2,     2,     2,     2,   172,     2,     2,     2,     2,     2,
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
     165
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    50,    54,    58,    64,    68,    71,
      74,    78,    81,    85,    88,    93,    96,   100,   104,   107,
     112,   115,   120,   123,   128,   131,   136,   139,   141,   144,
     148,   152,   158,   162,   168,   172,   178,   182,   188,   192,
     195,   199,   202,   207,   213,   214,   220,   224,   228,   231,
     237,   243,   249,   255,   261,   265,   268,   272,   275,   279,
     282,   286,   289,   293,   296,   299,   302,   307,   313,   319,
     325,   328,   332,   335,   341,   344,   350,   353,   357,   360,
     364,   367,   371,   377,   381,   384,   390,   396,   401,   405,
     408,   412,   415,   419,   423,   426,   430,   433,   436,   439,
     443,   447,   451,   454,   458,   462,   466,   470,   473,   477,
     480,   484,   490,   494,   499,   503,   507,   510,   515,   520,
     523,   527,   531,   534,   540,   546,   552,   556,   561,   567,
     572,   578,   583,   589,   595,   598,   602,   607,   611,   615,
     621,   625,   631,   635,   638,   642,   647,   650,   653,   655,
     657,   658,   660,   662,   664,   666,   669,   671,   673,   674,
     676,   679,   683,   685,   689,   691,   693,   695,   697,   701,
     703,   707,   710,   711,   713,   717,   719,   721,   722,   724,
     726,   728,   730,   732,   734,   736,   740,   744,   748,   752,
     756,   760,   762,   765,   766,   770,   774,   778,   782,   784,
     786,   788,   793,   797,   799,   801,   803,   806,   808,   810,
     812,   814,   816,   818,   820,   822,   824,   826,   828,   830,
     832,   834,   836,   838,   840,   842,   846,   850,   853,   856,
     858,   860,   863,   865,   869,   873,   877,   881,   885,   891,
     899,   905,   909,   913,   917,   921,   925,   929,   935,   941,
     947,   953,   954,   956,   958,   960,   962,   964,   966,   968,
     970,   972,   974,   976,   978,   980,   982,   984,   986,   988,
     990,   993,   997,  1001,  1006,  1010,  1015,  1018,  1022,  1026,
    1030,  1034,  1040,  1046,  1053,  1059,  1066,  1071,  1077,  1083,
    1089,  1095,  1099,  1105,  1107,  1109,  1111,  1113
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     175,     0,    -1,   176,    -1,   224,    22,    -1,    22,    -1,
     178,    -1,   176,   178,    -1,    23,    -1,    22,    -1,     1,
      -1,   179,    -1,   181,    -1,   184,    -1,   182,    -1,   185,
      -1,   186,    -1,   187,    -1,   188,    -1,   189,    -1,   190,
      -1,   191,    -1,   192,    -1,    13,    -1,    68,   177,    -1,
      68,   208,   177,    -1,    68,   156,   177,    -1,    68,   208,
     207,   156,   177,    -1,    40,   206,   177,    -1,    40,   177,
      -1,    48,   177,    -1,    48,   206,   177,    -1,    89,   177,
      -1,    89,   157,   177,    -1,   104,   177,    -1,   104,   207,
     211,   177,    -1,    28,   177,    -1,    51,   195,   177,    -1,
      52,   195,   177,    -1,    60,   177,    -1,    60,   207,   211,
     177,    -1,    59,   177,    -1,    59,   207,   211,   177,    -1,
      31,   177,    -1,    31,   207,   211,   177,    -1,    32,   177,
      -1,    32,   207,   211,   177,    -1,    87,   177,    -1,   180,
      -1,    41,   177,    -1,    41,   208,   177,    -1,    41,   200,
     177,    -1,    69,   208,   207,   195,   177,    -1,    69,   195,
     177,    -1,    70,   208,   207,   195,   177,    -1,    70,   195,
     177,    -1,    71,   206,   207,   155,   177,    -1,    72,   155,
     177,    -1,    72,   208,   207,   155,   177,    -1,    73,   208,
     177,    -1,    73,   177,    -1,    74,   208,   177,    -1,    74,
     177,    -1,   116,    21,   206,   177,    -1,   116,    21,   206,
      24,   177,    -1,    -1,    57,   206,   183,   225,   177,    -1,
      57,   206,   177,    -1,    58,   203,   177,    -1,    58,   177,
      -1,    39,   204,   207,   206,   177,    -1,    50,   204,   207,
     206,   177,    -1,    38,   204,   207,   215,   177,    -1,    37,
     204,   207,   217,   177,    -1,    45,   160,   207,   203,   177,
      -1,    45,   203,   177,    -1,    45,   177,    -1,    78,   203,
     177,    -1,    78,   177,    -1,    79,   203,   177,    -1,    79,
     177,    -1,    80,   203,   177,    -1,    80,   177,    -1,    81,
     203,   177,    -1,    81,   177,    -1,   105,   177,    -1,   106,
     177,    -1,   106,   207,   211,   177,    -1,   106,   207,   211,
     203,   177,    -1,   107,   195,   207,   211,   177,    -1,    46,
     198,   203,   212,   177,    -1,    46,   177,    -1,    88,   203,
     177,    -1,    88,   177,    -1,    64,   198,   203,   212,   177,
      -1,    64,   177,    -1,    47,   198,   203,   212,   177,    -1,
      47,   177,    -1,   162,   202,   177,    -1,   162,   177,    -1,
     163,   202,   177,    -1,   163,   177,    -1,    36,   202,   177,
      -1,    36,   202,   207,   211,   177,    -1,    54,   202,   177,
      -1,    54,   177,    -1,    55,   202,    15,   213,   177,    -1,
      56,   202,   207,   151,   177,    -1,    56,   202,     1,   177,
      -1,    27,   164,   177,    -1,    27,   177,    -1,    25,   164,
     177,    -1,    25,   177,    -1,    26,   195,   177,    -1,    44,
     160,   177,    -1,    44,   177,    -1,    62,   208,   177,    -1,
     112,   177,    -1,    66,   177,    -1,    53,   177,    -1,   115,
     164,   177,    -1,    65,   193,   177,    -1,    61,   211,   177,
      -1,    63,   177,    -1,    63,   193,   177,    -1,     7,   211,
     177,    -1,    67,   193,   177,    -1,    84,   193,   177,    -1,
      91,   177,    -1,    94,   194,   177,    -1,    93,   177,    -1,
      92,   195,   177,    -1,    92,   195,   207,   211,   177,    -1,
      95,   151,   177,    -1,    96,   151,   151,   177,    -1,    97,
     195,   177,    -1,    98,   195,   177,    -1,   101,   177,    -1,
     101,   207,   211,   177,    -1,   102,   207,   211,   177,    -1,
     103,   177,    -1,   108,   194,   177,    -1,   110,   111,   177,
      -1,   110,   177,    -1,    33,   195,   196,   205,   177,    -1,
      85,   195,   196,   205,   177,    -1,    34,   195,   196,   204,
     177,    -1,    34,   195,     1,    -1,    34,   195,   196,     1,
      -1,    86,   195,   196,   204,   177,    -1,    86,   195,   196,
       1,    -1,    35,   195,   196,   206,   177,    -1,    35,   195,
     196,     1,    -1,    29,   211,   211,   205,   177,    -1,    30,
     211,   211,   206,   177,    -1,   109,   177,    -1,   109,   196,
     177,    -1,    99,   195,   211,   177,    -1,   100,   211,   177,
      -1,   113,   195,   177,    -1,   113,   195,   207,   222,   177,
      -1,   114,   195,   177,    -1,   114,   195,   207,   222,   177,
      -1,    75,   195,   177,    -1,    76,   177,    -1,    77,   195,
     177,    -1,    82,   206,   215,   177,    -1,    83,   177,    -1,
      90,   177,    -1,   153,    -1,   153,    -1,    -1,   152,    -1,
       1,    -1,   211,    -1,     1,    -1,   197,    14,    -1,    14,
      -1,   197,    -1,    -1,   158,    -1,   208,   158,    -1,   200,
     123,   201,    -1,   201,    -1,   199,    21,   222,    -1,   220,
      -1,     1,    -1,   204,    -1,   206,    -1,   206,   207,   206,
      -1,     9,    -1,   208,   207,     9,    -1,   207,   206,    -1,
      -1,   209,    -1,   208,   207,   209,    -1,   155,    -1,   123,
      -1,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      20,    -1,   210,    -1,   222,    -1,   211,   166,   211,    -1,
     211,   167,   211,    -1,   211,   168,   211,    -1,   211,   169,
     211,    -1,   170,   211,   171,    -1,   170,   211,     1,    -1,
     219,    -1,    15,   213,    -1,    -1,   213,   159,   213,    -1,
     213,   159,     1,    -1,   117,   213,   118,    -1,   117,   213,
       1,    -1,   214,    -1,   199,    -1,   222,    -1,   172,   156,
     173,   206,    -1,   215,   207,   216,    -1,   216,    -1,   222,
      -1,   151,    -1,   217,   218,    -1,   218,    -1,   222,    -1,
     165,    -1,   151,    -1,   222,    -1,   199,    -1,     4,    -1,
      12,    -1,    11,    -1,    10,    -1,    12,    -1,    11,    -1,
      10,    -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,
     221,    -1,   223,   124,   224,    -1,   224,   124,   224,    -1,
     224,   124,    -1,   154,   226,    -1,   224,    -1,   223,    -1,
     119,   222,    -1,   222,    -1,   222,   123,   121,    -1,   222,
     123,   122,    -1,   222,   123,   129,    -1,   222,   123,   222,
      -1,   117,   222,   118,    -1,   117,   222,   123,   121,   118,
      -1,   117,   222,   123,   129,   118,   123,   122,    -1,   117,
     222,   118,   123,   122,    -1,   117,   139,   118,    -1,   117,
     140,   118,    -1,   117,   141,   118,    -1,   117,   142,   118,
      -1,   117,   143,   118,    -1,   117,   144,   118,    -1,   117,
     222,   118,   123,   120,    -1,   117,   222,   118,   123,   141,
      -1,   117,   222,   118,   123,   142,    -1,   117,   222,   118,
     123,   143,    -1,    -1,   120,    -1,   132,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   145,    -1,   147,    -1,
     137,    -1,   146,    -1,   148,    -1,   138,    -1,   139,    -1,
     140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,    -1,
     127,   222,    -1,   222,   123,   228,    -1,   123,   227,   149,
      -1,   123,   227,   149,   149,    -1,   123,   150,   227,    -1,
     123,   150,   150,   227,    -1,   123,   227,    -1,   132,   123,
     227,    -1,   120,   123,   227,    -1,   134,   123,   227,    -1,
     222,   123,   130,    -1,   125,   222,   123,   227,   126,    -1,
     125,   123,   227,   149,   126,    -1,   125,   123,   227,   149,
     149,   126,    -1,   125,   123,   150,   227,   126,    -1,   125,
     123,   150,   150,   227,   126,    -1,   125,   123,   227,   126,
      -1,   125,   132,   123,   227,   126,    -1,   125,   120,   123,
     227,   126,    -1,   125,   134,   123,   227,   126,    -1,   125,
     222,   123,   130,   126,    -1,   125,   222,   126,    -1,   125,
     222,   126,   123,   122,    -1,   121,    -1,   122,    -1,   228,
      -1,   129,    -1,   128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   199,   199,   200,   201,   204,   205,   208,   209,   210,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   228,   230,   232,   234,   236,   238,   240,
     242,   244,   246,   248,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   279,   281,
     283,   286,   291,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   318,   325,   324,   327,   329,   331,   335,
     337,   339,   341,   343,   345,   347,   349,   351,   353,   355,
     357,   359,   361,   363,   365,   367,   369,   371,   373,   377,
     386,   389,   393,   396,   405,   408,   417,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   446,   448,
     453,   460,   472,   476,   478,   496,   498,   500,   502,   504,
     508,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   556,   558,   560,   562,   564,   566,   568,
     570,   572,   574,   576,   578,   580,   582,   584,   586,   588,
     590,   592,   596,   598,   600,   604,   606,   610,   614,   617,
     618,   621,   622,   625,   626,   629,   630,   633,   634,   637,
     643,   651,   652,   655,   659,   660,   663,   664,   667,   668,
     670,   674,   675,   678,   683,   688,   698,   699,   702,   703,
     704,   705,   706,   709,   711,   713,   714,   715,   716,   717,
     718,   719,   722,   723,   725,   730,   732,   734,   736,   740,
     746,   752,   760,   761,   764,   765,   768,   769,   772,   773,
     774,   777,   778,   781,   782,   783,   784,   787,   788,   789,
     792,   793,   794,   795,   796,   799,   800,   801,   804,   814,
     815,   818,   825,   836,   847,   855,   874,   880,   888,   896,
     898,   900,   901,   902,   903,   904,   905,   906,   908,   910,
     912,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   930,   931,   932,
     934,   935,   950,   954,   958,   962,   966,   970,   974,   978,
     982,   994,  1009,  1013,  1017,  1021,  1025,  1029,  1033,  1037,
    1041,  1053,  1058,  1066,  1067,  1068,  1069,  1073
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "H_NUMBER", "D_NUMBER", "O_NUMBER",
  "B_NUMBER", "CONVERT_OP", "B_DATA", "H_RANGE_GUESS", "D_NUMBER_GUESS",
  "O_NUMBER_GUESS", "B_NUMBER_GUESS", "BAD_CMD", "MEM_OP", "IF",
  "MEM_COMP", "MEM_DISK8", "MEM_DISK9", "MEM_DISK10", "MEM_DISK11",
  "EQUALS", "TRAIL", "CMD_SEP", "LABEL_ASGN_COMMENT", "CMD_LOG",
  "CMD_LOGNAME", "CMD_SIDEFX", "CMD_RETURN", "CMD_BLOCK_READ",
  "CMD_BLOCK_WRITE", "CMD_UP", "CMD_DOWN", "CMD_LOAD", "CMD_SAVE",
  "CMD_VERIFY", "CMD_IGNORE", "CMD_HUNT", "CMD_FILL", "CMD_MOVE",
  "CMD_GOTO", "CMD_REGISTERS", "CMD_READSPACE", "CMD_WRITESPACE",
  "CMD_RADIX", "CMD_MEM_DISPLAY", "CMD_BREAK", "CMD_TRACE", "CMD_IO",
  "CMD_BRMON", "CMD_COMPARE", "CMD_DUMP", "CMD_UNDUMP", "CMD_EXIT",
  "CMD_DELETE", "CMD_CONDITION", "CMD_COMMAND", "CMD_ASSEMBLE",
  "CMD_DISASSEMBLE", "CMD_NEXT", "CMD_STEP", "CMD_PRINT", "CMD_DEVICE",
  "CMD_HELP", "CMD_WATCH", "CMD_DISK", "CMD_QUIT", "CMD_CHDIR", "CMD_BANK",
  "CMD_LOAD_LABELS", "CMD_SAVE_LABELS", "CMD_ADD_LABEL", "CMD_DEL_LABEL",
  "CMD_SHOW_LABELS", "CMD_CLEAR_LABELS", "CMD_RECORD", "CMD_MON_STOP",
  "CMD_PLAYBACK", "CMD_CHAR_DISPLAY", "CMD_SPRITE_DISPLAY",
  "CMD_TEXT_DISPLAY", "CMD_SCREENCODE_DISPLAY", "CMD_ENTER_DATA",
  "CMD_ENTER_BIN_DATA", "CMD_KEYBUF", "CMD_BLOAD", "CMD_BSAVE",
  "CMD_SCREEN", "CMD_UNTIL", "CMD_CPU", "CMD_YYDEBUG", "CMD_BACKTRACE",
  "CMD_SCREENSHOT", "CMD_PWD", "CMD_DIR", "CMD_RESOURCE_GET",
  "CMD_RESOURCE_SET", "CMD_LOAD_RESOURCES", "CMD_SAVE_RESOURCES",
  "CMD_ATTACH", "CMD_DETACH", "CMD_MON_RESET", "CMD_TAPECTRL",
  "CMD_CARTFREEZE", "CMD_CPUHISTORY", "CMD_MEMMAPZAP", "CMD_MEMMAPSHOW",
  "CMD_MEMMAPSAVE", "CMD_COMMENT", "CMD_LIST", "CMD_STOPWATCH", "RESET",
  "CMD_EXPORT", "CMD_AUTOSTART", "CMD_AUTOLOAD", "CMD_MAINCPU_TRACE",
  "CMD_LABEL_ASGN", "L_PAREN", "R_PAREN", "ARG_IMMEDIATE", "REG_A",
  "REG_X", "REG_Y", "COMMA", "INST_SEP", "L_BRACKET", "R_BRACKET",
  "LESS_THAN", "REG_U", "REG_S", "REG_PC", "REG_PCR", "REG_B", "REG_C",
  "REG_D", "REG_E", "REG_H", "REG_L", "REG_AF", "REG_BC", "REG_DE",
  "REG_HL", "REG_IX", "REG_IY", "REG_SP", "REG_IXH", "REG_IXL", "REG_IYH",
  "REG_IYL", "PLUS", "MINUS", "STRING", "FILENAME", "R_O_L", "OPCODE",
  "LABEL", "BANKNAME", "CPUTYPE", "MON_REGISTER", "COND_OP", "RADIX_TYPE",
  "INPUT_SPEC", "CMD_CHECKPT_ON", "CMD_CHECKPT_OFF", "TOGGLE", "MASK",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'@'", "':'", "$accept",
  "top_level", "command_list", "end_cmd", "command", "machine_state_rules",
  "register_mod", "symbol_table_rules", "asm_rules", "@1", "memory_rules",
  "checkpoint_rules", "checkpoint_control_rules", "monitor_state_rules",
  "monitor_misc_rules", "disk_rules", "cmd_file_rules", "data_entry_rules",
  "monitor_debug_rules", "rest_of_line", "opt_rest_of_line", "filename",
  "device_num", "mem_op", "opt_mem_op", "register", "reg_list", "reg_asgn",
  "checkpt_num", "address_opt_range", "address_range", "opt_address",
  "address", "opt_sep", "memspace", "memloc", "memaddr", "expression",
  "opt_if_cond_expr", "cond_expr", "cond_operand", "data_list",
  "data_element", "hunt_list", "hunt_element", "value", "d_number",
  "guess_default", "number", "assembly_instr_list", "assembly_instruction",
  "post_assemble", "asm_operand_mode", "index_reg", "index_ureg", 0
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,    43,    45,    42,    47,
      40,    41,    64,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   174,   175,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   180,   180,
     180,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   183,   182,   182,   182,   182,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   191,   191,   192,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   202,   202,   203,   203,   204,   204,
     204,   205,   205,   206,   206,   206,   207,   207,   208,   208,
     208,   208,   208,   209,   210,   211,   211,   211,   211,   211,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   214,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   219,   219,   220,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   222,   222,   223,   223,   223,   224,   225,
     225,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   227,   227,   227,   227,   228
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     5,     3,     2,     2,
       3,     2,     3,     2,     4,     2,     3,     3,     2,     4,
       2,     4,     2,     4,     2,     4,     2,     1,     2,     3,
       3,     5,     3,     5,     3,     5,     3,     5,     3,     2,
       3,     2,     4,     5,     0,     5,     3,     3,     2,     5,
       5,     5,     5,     5,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     2,     2,     2,     4,     5,     5,     5,
       2,     3,     2,     5,     2,     5,     2,     3,     2,     3,
       2,     3,     5,     3,     2,     5,     5,     4,     3,     2,
       3,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     3,     3,     3,     2,     3,     2,
       3,     5,     3,     4,     3,     3,     2,     4,     4,     2,
       3,     3,     2,     5,     5,     5,     3,     4,     5,     4,
       5,     4,     5,     5,     2,     3,     4,     3,     3,     5,
       3,     5,     3,     2,     3,     4,     2,     2,     1,     1,
       0,     1,     1,     1,     1,     2,     1,     1,     0,     1,
       2,     3,     1,     3,     1,     1,     1,     1,     3,     1,
       3,     2,     0,     1,     3,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     4,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2,     1,
       1,     2,     1,     3,     3,     3,     3,     3,     5,     7,
       5,     3,     3,     3,     3,     3,     3,     5,     5,     5,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     4,     3,     4,     2,     3,     3,     3,
       3,     5,     5,     6,     5,     6,     4,     5,     5,     5,
       5,     3,     5,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    22,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   170,     0,     0,     0,     0,     0,
       0,     0,   271,     0,     0,     0,     2,     5,    10,    47,
      11,    13,    12,    14,    15,    16,    17,    18,    19,    20,
      21,     0,   240,   241,   242,   243,   239,   238,   237,   198,
     199,   200,   201,   202,   179,     0,   232,     0,     0,   211,
     244,   231,     9,     8,     7,     0,   111,   172,   171,     0,
       0,   109,    35,     0,     0,   196,    42,     0,    44,     0,
       0,     0,     0,   185,   233,   236,   235,   234,     0,   184,
     189,   195,   197,   197,   197,   193,   203,   204,   197,   197,
      28,     0,   197,    48,     0,     0,   182,     0,     0,   114,
     197,    75,     0,   186,   197,   176,    90,   177,     0,    96,
       0,    29,     0,   197,     0,     0,   118,     9,   104,     0,
       0,     0,     0,    68,     0,    40,     0,    38,     0,     0,
       0,   168,   122,     0,    94,     0,     0,   117,     0,     0,
      23,     0,     0,   197,     0,   197,   197,     0,   197,    59,
       0,    61,     0,     0,   163,     0,    77,     0,    79,     0,
      81,     0,    83,     0,     0,   166,     0,     0,     0,    46,
      92,     0,     0,    31,   167,   127,     0,   129,   169,     0,
       0,     0,     0,     0,     0,     0,   136,     0,     0,   139,
      33,     0,    84,    85,     0,   197,     0,     9,   154,     0,
     173,     0,   142,   116,     0,     0,     0,     0,     0,     0,
     272,     0,     0,     0,   273,   274,   275,   276,   277,   280,
     283,   284,   285,   286,   287,   288,   289,   278,   281,   279,
     282,   252,   248,    98,     0,   100,     0,     1,     6,     3,
       0,   180,     0,     0,     0,     0,   124,   110,   112,   108,
     197,     0,     0,     0,   174,   197,   146,     0,     0,   101,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
      50,    49,   113,     0,    74,   175,   213,   213,    30,     0,
      36,    37,   103,     0,     0,     0,    66,     0,    67,     0,
       0,   121,   115,   123,   213,   120,   125,    25,    24,     0,
      52,     0,    54,     0,     0,    56,     0,    58,    60,   162,
     164,    76,    78,    80,    82,   225,     0,   223,   224,   126,
     197,     0,    91,    32,   130,     0,   128,   132,     0,   134,
     135,     0,   157,     0,     0,     0,     0,     0,   140,   155,
     141,   158,     0,   160,     0,   119,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     0,   313,   314,   317,   316,
       0,   296,   315,     0,     0,     0,     0,     0,   290,     0,
       0,     0,    97,    99,   210,   209,   205,   206,   207,   208,
       0,     0,     0,    43,    45,     0,   147,     0,   151,     0,
       0,   230,   229,     0,   227,   228,   188,   190,   194,     0,
       0,   183,   181,     0,     0,     0,     0,     0,     0,     0,
     219,     0,   218,   220,   107,     0,   250,   249,     0,    41,
      39,     0,     0,     0,     0,     0,     0,   165,     0,     0,
     149,     0,     0,   133,   156,   137,   138,    34,    86,     0,
       0,     0,     0,     0,    62,   261,   262,   263,   264,   265,
     266,   257,     0,   298,     0,   294,   292,     0,     0,     0,
       0,     0,     0,   311,   297,   299,   253,   254,   255,   300,
     256,   291,   152,   191,   153,   143,   145,   150,   102,    72,
     226,    71,    69,    73,   212,    89,    95,    70,     0,     0,
       0,   105,   106,     0,   247,    65,    93,    26,    51,    53,
      55,    57,   222,   144,   148,   131,    87,    88,   159,   161,
      63,     0,     0,     0,   295,   293,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,   217,   216,     0,   215,
     214,   245,   246,   267,   260,   268,   269,   270,   258,     0,
     308,     0,   304,   302,     0,   307,   309,   310,   301,   312,
     221,     0,   305,   303,   259
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    95,    96,   136,    97,    98,    99,   100,   101,   367,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   213,
     259,   139,   279,   187,   188,   126,   175,   176,   158,   182,
     183,   460,   184,   461,   127,   165,   166,   280,   485,   491,
     492,   396,   397,   473,   474,   129,   159,   130,   167,   496,
     111,   498,   312,   441,   442
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -361
static const yytype_int16 yypact[] =
{
    1130,   862,  -361,  -361,     4,    24,    53,   301,   862,   862,
     147,   147,    24,    24,    24,   804,  1490,  1490,  1490,  1386,
     476,    56,   994,  1104,  1104,  1386,  1490,    24,    24,   301,
     736,   804,   804,  1508,  1246,   147,   147,   862,   643,   174,
    1104,  -142,   301,  -142,   936,   424,   424,  1508,   516,   711,
     711,    24,   301,    24,  1246,  1246,  1246,  1246,  1508,   301,
    -142,    24,    24,   301,  1246,   112,   301,   301,    24,   301,
    -140,  -116,   -80,    24,    24,    24,   862,   147,   -31,   301,
     147,   301,   147,    24,  -140,   449,   277,   301,    24,    24,
     -62,    88,  1549,   736,   736,   107,  1269,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,   119,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,   862,  -361,    -9,    96,  -361,
    -361,  -361,  -361,  -361,  -361,   301,  -361,  -361,  -361,   301,
     301,  -361,  -361,   929,   929,  -361,  -361,   862,  -361,   862,
     386,   508,   386,  -361,  -361,  -361,  -361,  -361,   147,  -361,
    -361,  -361,   -31,   -31,   -31,  -361,  -361,  -361,   -31,   -31,
    -361,   301,   -31,  -361,   152,   233,  -361,    99,   301,  -361,
     -31,  -361,   301,  -361,   217,  -361,  -361,   163,  1490,  -361,
    1490,  -361,   301,   -31,   301,   301,  -361,   348,  -361,   301,
     164,    57,    58,  -361,   301,  -361,   862,  -361,   862,    96,
     301,  -361,  -361,   301,  -361,  1490,   301,  -361,   301,   301,
    -361,   160,   301,   -31,   301,   -31,   -31,   301,   -31,  -361,
     301,  -361,   301,   301,  -361,   301,  -361,   301,  -361,   301,
    -361,   301,  -361,   301,  1129,  -361,   301,   386,   386,  -361,
    -361,   301,   301,  -361,  -361,  -361,   147,  -361,  -361,   301,
     301,    35,   301,   301,   862,    96,  -361,   862,   862,  -361,
    -361,   862,  -361,  -361,   862,   -31,   301,   361,  -361,   301,
     140,   301,  -361,  -361,  1618,  1618,   301,  1508,  1562,  1267,
      70,   175,  1587,  1267,    77,  -361,    84,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,   101,  -361,  -361,   301,  -361,   301,  -361,  -361,  -361,
      54,  -361,   862,   862,   862,   862,  -361,  -361,  -361,  -361,
      92,   269,    96,    96,  -361,   244,  1409,  1432,  1472,  -361,
     862,   699,  1508,  1572,  1129,  1508,  -361,  1267,  1267,   328,
    -361,  -361,  -361,  1490,  -361,  -361,   194,   194,  -361,  1508,
    -361,  -361,  -361,   535,   301,    75,  -361,    87,  -361,    96,
      96,  -361,  -361,  -361,   194,  -361,  -361,  -361,  -361,    90,
    -361,    24,  -361,    24,    76,  -361,    89,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  1528,  -361,  -361,  -361,
     244,  1452,  -361,  -361,  -361,   862,  -361,  -361,   301,  -361,
    -361,    96,  -361,    96,    96,    96,   664,   862,  -361,  -361,
    -361,  -361,  1267,  -361,  1267,  -361,   478,   130,   135,   150,
     158,   159,   172,   -27,  -361,   210,  -361,  -361,  -361,  -361,
     335,   146,  -361,   127,   529,   170,   189,    79,  -361,   210,
     210,  1605,  -361,  -361,  -361,  -361,    23,    23,  -361,  -361,
     301,  1508,   301,  -361,  -361,   301,  -361,   301,  -361,   301,
      96,  -361,  -361,   904,  -361,  -361,  -361,  -361,  -361,  1528,
     301,  -361,  -361,   301,   535,   301,   301,   301,   535,   157,
    -361,   132,  -361,  -361,  -361,   301,   204,   212,   301,  -361,
    -361,   301,   301,   301,   301,   301,   301,  -361,  1129,   301,
    -361,   301,    96,  -361,  -361,  -361,  -361,  -361,  -361,   301,
      96,   301,   301,   301,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,   219,    18,  -361,   210,  -361,   202,   210,   570,   -63,
     210,   210,   353,   229,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,   200,  -361,  -361,  -361,    22,   188,
     126,  -361,  -361,    87,    87,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,   273,   245,   250,  -361,  -361,   247,   210,   251,  -361,
     -60,   254,   268,   275,   281,   290,  -361,  -361,  1508,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,   253,
    -361,   287,  -361,  -361,   291,  -361,  -361,  -361,  -361,  -361,
    -361,   297,  -361,  -361,  -361
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,  -361,   561,   325,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,   144,
     339,    37,  -131,  -361,    32,    -8,  -361,    82,   288,    13,
      -2,  -327,    27,    26,   -16,  -219,  -361,   714,  -273,  -328,
    -361,    95,   -76,  -361,   -40,  -361,  -361,  -361,    86,  -361,
    -360,  -361,  -361,   452,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -198
static const yytype_int16 yytable[] =
{
     164,   164,   164,   172,   177,   132,   164,   497,   465,   172,
     164,   211,   174,   258,   162,   168,   169,   172,   164,   335,
     337,   338,   210,   606,   193,   137,   133,   134,   221,   223,
     225,   172,   228,   230,   232,   260,   147,   149,   164,   164,
     164,   164,   172,   163,   163,   163,   171,   204,   164,   150,
     151,   152,   192,   163,   132,   454,   190,   132,   364,   132,
     202,   206,   208,   599,   194,   195,   623,   237,   239,   241,
     243,   261,   215,   509,   226,   133,   134,   251,   133,   134,
     133,   134,   222,   224,   486,   244,   600,   131,   233,   624,
     235,   531,   145,  -192,   131,   131,   532,   132,   247,   248,
     132,   501,   286,   267,   268,   256,   271,   317,   274,   287,
     262,   263,   264,   132,  -192,  -192,   400,   401,   133,   134,
     275,   133,   134,   131,   478,   284,   285,   609,   478,   112,
     113,   114,   115,   132,   133,   134,   116,   117,   118,   592,
     607,   319,   119,   120,   121,   122,   123,   593,   132,   321,
    -197,  -197,  -197,  -197,   133,   134,   564,  -197,  -197,  -197,
     568,   132,   131,  -197,  -197,  -197,  -197,  -197,   135,   133,
     134,   131,   164,   348,   164,   132,   138,   355,   311,   363,
     145,   570,   133,   134,   340,   216,   408,   218,   341,   342,
     343,   324,   325,   435,   344,   345,   133,   134,   347,   164,
     449,   356,   542,   357,   246,   543,   353,   450,  -197,   484,
     342,   131,   -64,   611,   612,   145,   178,   140,  -187,   359,
     322,   323,   324,   325,   451,   455,   495,   365,   374,   131,
     131,   505,  -187,   131,   132,   131,   131,   131,   131,  -187,
    -187,    92,   610,   488,   506,  -192,   502,   379,   525,   381,
     537,   383,   384,   526,   386,   133,   134,   321,   322,   323,
     324,   325,   322,   323,   324,   325,  -192,  -192,   527,   252,
     145,   172,   112,   113,   114,   115,   528,   529,   132,   116,
     117,   118,   405,   145,   124,   119,   120,   121,   122,   123,
     530,   570,   131,   540,   131,   536,   436,   437,   489,   133,
     134,   417,   132,   438,   439,  -197,   322,   323,   324,   325,
     422,   424,   541,   569,   426,   172,  -197,  -197,   199,   200,
     201,   164,   172,   133,   134,   440,   172,   211,   573,   172,
     398,   436,   437,   131,   131,   467,   574,   164,   438,   439,
     145,   174,   591,   172,   119,   120,   121,   122,   123,  -185,
     131,   595,   605,   131,   131,   490,   349,   131,   462,   570,
     131,   608,  -174,   618,   163,   469,   483,   145,   619,   476,
    -185,  -185,   480,   620,   433,   434,   631,   622,   447,   448,
     625,   314,   316,  -174,  -174,   164,   487,   334,   281,   112,
     113,   114,   115,   613,   626,   614,   116,   117,   118,   511,
     164,   627,   119,   120,   121,   122,   123,   628,   131,   131,
     131,   131,   629,   632,   615,   616,   617,   633,   503,   634,
     504,   318,   508,   276,   161,   137,   131,   475,   163,   519,
     398,   482,   582,   560,   481,   322,   323,   324,   325,   479,
     119,   120,   121,   122,   123,   172,   551,     0,     0,   493,
     277,     0,   112,   113,   114,   115,   436,   437,     0,   116,
     117,   118,     0,   438,   439,   119,   120,   121,   122,   123,
       0,   133,   134,     0,   436,   437,   490,   132,     0,   132,
     490,   438,   439,   603,     0,   534,   124,     0,   553,     0,
       0,   131,   119,   120,   121,   122,   123,     0,   133,   134,
     133,   134,   523,   131,     0,   508,     0,     0,   521,   336,
     522,   112,   113,   114,   115,     0,     0,     0,   116,   117,
     118,     0,     0,     0,   119,   120,   121,   122,   123,     0,
       0,     0,   119,   120,   121,   122,   123,   550,   112,   113,
     114,   115,     0,     0,   124,   116,   117,   118,     0,     0,
       0,   119,   120,   121,   122,   123,   125,     0,     0,   475,
       0,     0,   490,     0,     0,     0,     0,   141,   142,     0,
     493,   146,   148,     0,   493,     0,   138,     0,     0,     0,
     170,   173,   179,   181,   186,   189,   191,     0,     0,     0,
     196,   198,   172,     0,   398,   203,   205,   207,     0,     0,
     212,   214,     0,   217,     0,   220,     0,   124,     0,     0,
     229,   231,     0,   234,     0,   236,   238,   240,   242,   125,
     245,     0,     0,     0,   249,   250,   253,   254,   255,     0,
     257,     0,     0,     0,   124,   630,     0,     0,   266,     0,
     269,   270,   272,   273,     0,     0,   278,   282,   283,     0,
     436,   437,   488,     0,   313,   315,   493,   438,   439,   119,
     120,   121,   122,   123,     0,   132,   124,   112,   113,   114,
     115,   227,     0,   160,   116,   117,   118,     0,   125,   538,
     119,   120,   121,   122,   123,     0,   133,   134,     0,   326,
       0,   436,   437,   124,     0,     0,   327,     0,   438,   439,
     328,   329,   112,   113,   114,   115,     0,   489,     0,   116,
     117,   118,   132,     0,     0,   128,     0,     0,     0,   339,
     597,     0,   143,   144,     0,     0,     0,   119,   120,   121,
     122,   123,   346,   133,   134,     0,   350,   197,   351,   352,
     154,     0,     0,   354,     0,     0,   155,   156,   157,     0,
       0,   209,     0,   358,     0,   360,   361,     0,   133,   134,
     362,     0,     0,   366,     0,   368,     0,     0,     0,     0,
     371,   372,     0,     0,   373,     0,     0,   375,     0,   376,
     377,     0,   378,   380,     0,   382,     0,     0,   385,     0,
     265,   387,     0,   388,   389,     0,   390,     0,   391,     0,
     392,     0,   393,     0,   394,   153,     0,   399,   154,     0,
       0,     0,   402,   403,   155,   156,   157,   404,     0,   161,
     406,   407,     0,   409,   410,     0,   412,     0,     0,     0,
     322,   323,   324,   325,     0,     0,     0,   418,     0,   320,
     419,     0,   420,     0,     0,   421,   423,   425,     0,     0,
     471,     0,     0,     0,     0,     0,     0,   330,   331,     0,
       0,   332,     0,   333,   472,   112,   113,   114,   115,     0,
       0,     0,   116,   117,   118,   452,     0,   453,   119,   120,
     121,   122,   123,     0,     0,     0,     0,   533,     0,     0,
       0,     0,   535,   463,   464,     0,   539,     0,     0,     0,
       0,   544,   545,     0,     0,   132,     0,   112,   113,   114,
     115,     0,     0,     0,   116,   117,   118,     0,     0,     0,
     369,     0,   370,     0,     0,   494,   133,   134,     0,     0,
     499,   500,   112,   113,   114,   115,     0,   132,     0,   116,
     117,   118,     0,     0,     0,   119,   120,   121,   122,   123,
       0,     0,   119,   120,   121,   122,   123,   507,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   513,
       0,     0,   514,     0,   515,   516,   517,   518,   411,     0,
       0,   413,   414,     0,     0,   415,   594,   524,   416,   596,
     598,     0,   601,   602,   604,   132,     0,   112,   113,   114,
     115,     0,     0,   160,   116,   117,   118,     0,     0,     0,
     119,   120,   121,   122,   123,     0,   133,   134,     0,     0,
     124,   552,     0,   554,     0,     0,   555,     0,   556,     0,
     557,   558,   125,     0,   559,     0,   456,   457,   458,   459,
     561,   562,     0,     0,   563,     0,   565,   566,   567,   621,
       0,     0,   571,     0,   470,   471,   572,     0,     0,   575,
       0,     0,   576,   577,   578,   579,   580,   581,     0,   472,
     583,     0,   584,   585,     0,     0,     0,     0,     0,     0,
     586,   587,   588,   589,   590,     0,     0,   124,     0,     0,
       0,     0,   219,     0,     0,   322,   323,   324,   325,   125,
       0,     0,     0,     0,     0,   132,     0,  -178,  -178,  -178,
    -178,     0,     0,  -178,  -178,  -178,  -178,     0,   185,   512,
    -178,  -178,  -178,  -178,  -178,     0,   133,   134,     0,     0,
       0,   520,   112,   113,   114,   115,     0,     1,     0,   116,
     117,   118,     0,     2,     0,     0,     0,     0,     0,   161,
       0,     0,     3,     0,   180,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     0,    87,    88,    89,    90,    91,   132,     0,   112,
     113,   114,   115,     0,     0,   160,   116,   117,   118,  -178,
       0,     0,   119,   120,   121,   122,   123,     0,   133,   134,
     112,   113,   114,   115,     0,     0,     1,   116,   117,   118,
     395,     0,     2,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,    94,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
       0,    87,    88,    89,    90,    91,     0,   132,     0,   112,
     113,   114,   115,     0,     0,     0,   116,   117,   118,     0,
       0,   161,   119,   120,   121,   122,   123,     0,   133,   134,
    -174,     0,  -174,  -174,  -174,  -174,     0,     0,  -174,  -174,
    -174,  -174,     0,     0,     0,  -174,  -174,  -174,  -174,  -174,
       0,    93,    94,   466,     0,   112,   113,   114,   115,     0,
       0,   160,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   510,     0,   112,   113,   114,   115,     0,
       0,   160,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   468,     0,   112,   113,   114,   115,     0,
       0,     0,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   112,   113,   114,   115,     0,     0,   160,
     116,   117,   118,     0,     0,     0,   119,   120,   121,   122,
     123,   112,   113,   114,   115,     0,     0,     0,   116,   117,
     118,     0,     0,     0,   119,   120,   121,   122,   123,   132,
       0,  -197,  -197,  -197,  -197,     0,     0,     0,  -197,  -197,
    -197,   161,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   112,   113,   114,   115,     0,     0,     0,   116,
     117,   118,     0,     0,  -174,   112,   113,   114,   115,     0,
       0,     0,   116,   117,   118,   112,   113,   114,   115,     0,
       0,   477,   116,   117,   118,     0,     0,   161,     0,     0,
     112,   113,   114,   115,     0,     0,     0,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,   161,   112,   113,
     114,   115,     0,     0,     0,   116,   117,   118,     0,   132,
       0,  -197,  -197,  -197,  -197,     0,     0,   161,  -197,  -197,
    -197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,     0,     0,     0,   161,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,   288,     0,   289,   290,
       0,     0,   291,     0,   292,     0,   293,     0,     0,  -197,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
       0,   427,   428,   429,   430,   431,   432,   443,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,   446,     0,     0,     0,     0,   546,   547,     0,     0,
       0,     0,     0,   438,   548,   549,     0,     0,     0,     0,
       0,   145
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,     1,    22,   367,   335,    25,
      26,   153,    20,   153,    16,    17,    18,    33,    34,   150,
     151,   152,    38,     1,    26,     1,    22,    23,    44,    45,
      46,    47,    48,    49,    50,   151,    10,    11,    54,    55,
      56,    57,    58,    16,    17,    18,    19,    34,    64,    12,
      13,    14,    25,    26,     1,     1,    24,     1,     1,     1,
      33,    35,    36,   126,    27,    28,   126,    54,    55,    56,
      57,   151,    40,   400,    47,    22,    23,    64,    22,    23,
      22,    23,    45,    46,   357,    58,   149,     1,    51,   149,
      53,   118,   123,     1,     8,     9,   123,     1,    61,    62,
       1,   374,   164,    77,    78,    68,    80,     0,    82,    21,
      73,    74,    75,     1,    22,    23,   247,   248,    22,    23,
      83,    22,    23,    37,   343,    88,    89,     1,   347,     3,
       4,     5,     6,     1,    22,    23,    10,    11,    12,   121,
     118,    22,    16,    17,    18,    19,    20,   129,     1,   158,
       3,     4,     5,     6,    22,    23,   484,    10,    11,    12,
     488,     1,    76,    16,    17,    18,    19,    20,   164,    22,
      23,    85,   188,    21,   190,     1,   152,    14,    92,    15,
     123,   159,    22,    23,   158,    41,   151,    43,   162,   163,
     164,   168,   169,   123,   168,   169,    22,    23,   172,   215,
     123,   188,   123,   190,    60,   126,   180,   123,   151,    15,
     184,   125,   154,   573,   574,   123,   160,   164,     1,   193,
     166,   167,   168,   169,   123,   171,   151,   201,   215,   143,
     144,   155,    15,   147,     1,   149,   150,   151,   152,    22,
      23,   154,   570,   117,   155,     1,   156,   221,   118,   223,
     123,   225,   226,   118,   228,    22,    23,   158,   166,   167,
     168,   169,   166,   167,   168,   169,    22,    23,   118,   157,
     123,   287,     3,     4,     5,     6,   118,   118,     1,    10,
      11,    12,   256,   123,   158,    16,    17,    18,    19,    20,
     118,   159,   206,   123,   208,   149,   121,   122,   172,    22,
      23,   275,     1,   128,   129,   158,   166,   167,   168,   169,
     284,   285,   123,   156,   287,   331,   156,   170,    30,    31,
      32,   337,   338,    22,    23,   150,   342,   153,   124,   345,
     244,   121,   122,   247,   248,   337,   124,   353,   128,   129,
     123,   349,   123,   359,    16,    17,    18,    19,    20,     1,
     264,   149,   123,   267,   268,   363,   123,   271,   331,   159,
     274,   173,     1,   118,   337,   338,   353,   123,   118,   342,
      22,    23,   345,   126,   288,   289,   123,   126,   292,   293,
     126,    93,    94,    22,    23,   401,   359,     1,   111,     3,
       4,     5,     6,   120,   126,   122,    10,    11,    12,   401,
     416,   126,    16,    17,    18,    19,    20,   126,   322,   323,
     324,   325,   122,   126,   141,   142,   143,   126,   381,   122,
     383,    96,   396,    84,   155,     1,   340,   341,   401,   416,
     344,   349,   508,   473,   348,   166,   167,   168,   169,   344,
      16,    17,    18,    19,    20,   461,   451,    -1,    -1,   363,
       1,    -1,     3,     4,     5,     6,   121,   122,    -1,    10,
      11,    12,    -1,   128,   129,    16,    17,    18,    19,    20,
      -1,    22,    23,    -1,   121,   122,   484,     1,    -1,     1,
     488,   128,   129,   130,    -1,   150,   158,    -1,   461,    -1,
      -1,   405,    16,    17,    18,    19,    20,    -1,    22,    23,
      22,    23,    24,   417,    -1,   479,    -1,    -1,   422,     1,
     424,     3,     4,     5,     6,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    16,    17,    18,    19,    20,   451,     3,     4,
       5,     6,    -1,    -1,   158,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    19,    20,   170,    -1,    -1,   473,
      -1,    -1,   570,    -1,    -1,    -1,    -1,     6,     7,    -1,
     484,    10,    11,    -1,   488,    -1,   152,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      29,    30,   608,    -1,   508,    34,    35,    36,    -1,    -1,
      39,    40,    -1,    42,    -1,    44,    -1,   158,    -1,    -1,
      49,    50,    -1,    52,    -1,    54,    55,    56,    57,   170,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    -1,   158,   608,    -1,    -1,    77,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    -1,
     121,   122,   117,    -1,    93,    94,   570,   128,   129,    16,
      17,    18,    19,    20,    -1,     1,   158,     3,     4,     5,
       6,   155,    -1,     9,    10,    11,    12,    -1,   170,   150,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,   128,
      -1,   121,   122,   158,    -1,    -1,   135,    -1,   128,   129,
     139,   140,     3,     4,     5,     6,    -1,   172,    -1,    10,
      11,    12,     1,    -1,    -1,     1,    -1,    -1,    -1,   158,
     150,    -1,     8,     9,    -1,    -1,    -1,    16,    17,    18,
      19,    20,   171,    22,    23,    -1,   175,     1,   177,   178,
       4,    -1,    -1,   182,    -1,    -1,    10,    11,    12,    -1,
      -1,    37,    -1,   192,    -1,   194,   195,    -1,    22,    23,
     199,    -1,    -1,   202,    -1,   204,    -1,    -1,    -1,    -1,
     209,   210,    -1,    -1,   213,    -1,    -1,   216,    -1,   218,
     219,    -1,   221,   222,    -1,   224,    -1,    -1,   227,    -1,
      76,   230,    -1,   232,   233,    -1,   235,    -1,   237,    -1,
     239,    -1,   241,    -1,   243,     1,    -1,   246,     4,    -1,
      -1,    -1,   251,   252,    10,    11,    12,   256,    -1,   155,
     259,   260,    -1,   262,   263,    -1,   265,    -1,    -1,    -1,
     166,   167,   168,   169,    -1,    -1,    -1,   276,    -1,   125,
     279,    -1,   281,    -1,    -1,   284,   285,   286,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   165,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,   314,    -1,   316,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,   435,    -1,    -1,
      -1,    -1,   440,   332,   333,    -1,   444,    -1,    -1,    -1,
      -1,   449,   450,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
     206,    -1,   208,    -1,    -1,   364,    22,    23,    -1,    -1,
     369,   370,     3,     4,     5,     6,    -1,     1,    -1,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    16,    17,    18,    19,    20,   396,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,   411,    -1,   413,   414,   415,   416,   264,    -1,
      -1,   267,   268,    -1,    -1,   271,   534,   426,   274,   537,
     538,    -1,   540,   541,   542,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    -1,
     158,   460,    -1,   462,    -1,    -1,   465,    -1,   467,    -1,
     469,   470,   170,    -1,   473,    -1,   322,   323,   324,   325,
     479,   480,    -1,    -1,   483,    -1,   485,   486,   487,   597,
      -1,    -1,   491,    -1,   340,   151,   495,    -1,    -1,   498,
      -1,    -1,   501,   502,   503,   504,   505,   506,    -1,   165,
     509,    -1,   511,   512,    -1,    -1,    -1,    -1,    -1,    -1,
     519,   520,   521,   522,   523,    -1,    -1,   158,    -1,    -1,
      -1,    -1,   156,    -1,    -1,   166,   167,   168,   169,   170,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    -1,    14,   405,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    -1,
      -1,   417,     3,     4,     5,     6,    -1,     7,    -1,    10,
      11,    12,    -1,    13,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    -1,    22,    -1,   160,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,   155,
      -1,    -1,    16,    17,    18,    19,    20,    -1,    22,    23,
       3,     4,     5,     6,    -1,    -1,     7,    10,    11,    12,
     151,    -1,    13,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,   163,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    10,    11,    12,    -1,
      -1,   155,    16,    17,    18,    19,    20,    -1,    22,    23,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      -1,   162,   163,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,     3,     4,     5,     6,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    19,    20,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    10,    11,
      12,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,   155,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    -1,    -1,   155,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,     3,     4,
       5,     6,    -1,    -1,    -1,    10,    11,    12,    -1,     1,
      -1,     3,     4,     5,     6,    -1,    -1,   155,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,   117,    -1,   119,   120,
      -1,    -1,   123,    -1,   125,    -1,   127,    -1,    -1,   151,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,    -1,
      -1,   139,   140,   141,   142,   143,   144,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,   134,    -1,    -1,    -1,    -1,   121,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,    -1,    -1,
      -1,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    13,    22,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    44,    45,    46,    47,    48,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   112,   113,   114,
     115,   116,   154,   162,   163,   175,   176,   178,   179,   180,
     181,   182,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   224,     3,     4,     5,     6,    10,    11,    12,    16,
      17,    18,    19,    20,   158,   170,   199,   208,   211,   219,
     221,   222,     1,    22,    23,   164,   177,     1,   152,   195,
     164,   177,   177,   211,   211,   123,   177,   207,   177,   207,
     195,   195,   195,     1,     4,    10,    11,    12,   202,   220,
       9,   155,   204,   206,   208,   209,   210,   222,   204,   204,
     177,   206,   208,   177,   199,   200,   201,   208,   160,   177,
     160,   177,   203,   204,   206,    14,   177,   197,   198,   177,
     198,   177,   206,   204,   195,   195,   177,     1,   177,   202,
     202,   202,   206,   177,   203,   177,   207,   177,   207,   211,
     208,   153,   177,   193,   177,   198,   193,   177,   193,   156,
     177,   208,   195,   208,   195,   208,   206,   155,   208,   177,
     208,   177,   208,   195,   177,   195,   177,   203,   177,   203,
     177,   203,   177,   203,   206,   177,   193,   195,   195,   177,
     177,   203,   157,   177,   177,   177,   195,   177,   153,   194,
     151,   151,   195,   195,   195,   211,   177,   207,   207,   177,
     177,   207,   177,   177,   207,   195,   194,     1,   177,   196,
     211,   111,   177,   177,   195,   195,   164,    21,   117,   119,
     120,   123,   125,   127,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   222,   226,   177,   202,   177,   202,     0,   178,    22,
     211,   158,   166,   167,   168,   169,   177,   177,   177,   177,
     211,   211,   211,   211,     1,   196,     1,   196,   196,   177,
     207,   207,   207,   207,   207,   207,   177,   207,    21,   123,
     177,   177,   177,   207,   177,    14,   203,   203,   177,   207,
     177,   177,   177,    15,     1,   207,   177,   183,   177,   211,
     211,   177,   177,   177,   203,   177,   177,   177,   177,   207,
     177,   207,   177,   207,   207,   177,   207,   177,   177,   177,
     177,   177,   177,   177,   177,   151,   215,   216,   222,   177,
     196,   196,   177,   177,   177,   207,   177,   177,   151,   177,
     177,   211,   177,   211,   211,   211,   211,   207,   177,   177,
     177,   177,   207,   177,   207,   177,   206,   139,   140,   141,
     142,   143,   144,   222,   222,   123,   121,   122,   128,   129,
     150,   227,   228,   120,   123,   132,   134,   222,   222,   123,
     123,   123,   177,   177,     1,   171,   211,   211,   211,   211,
     205,   207,   206,   177,   177,   205,     1,   204,     1,   206,
     211,   151,   165,   217,   218,   222,   206,     9,   209,   215,
     206,   222,   201,   203,    15,   212,   212,   206,   117,   172,
     199,   213,   214,   222,   177,   151,   223,   224,   225,   177,
     177,   212,   156,   195,   195,   155,   155,   177,   207,   205,
       1,   204,   211,   177,   177,   177,   177,   177,   177,   203,
     211,   222,   222,    24,   177,   118,   118,   118,   118,   118,
     118,   118,   123,   227,   150,   227,   149,   123,   150,   227,
     123,   123,   123,   126,   227,   227,   121,   122,   129,   130,
     222,   228,   177,   206,   177,   177,   177,   177,   177,   177,
     218,   177,   177,   177,   213,   177,   177,   177,   213,   156,
     159,   177,   177,   124,   124,   177,   177,   177,   177,   177,
     177,   177,   216,   177,   177,   177,   177,   177,   177,   177,
     177,   123,   121,   129,   227,   149,   227,   150,   227,   126,
     149,   227,   227,   130,   227,   123,     1,   118,   173,     1,
     213,   224,   224,   120,   122,   141,   142,   143,   118,   118,
     126,   227,   126,   126,   149,   126,   126,   126,   126,   122,
     206,   123,   126,   126,   122
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 199 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = 0; }
    break;

  case 3:
#line 200 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = 0; }
    break;

  case 4:
#line 201 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { new_cmd = 1; asm_mode = 0;  (yyval.i) = 0; }
    break;

  case 9:
#line 210 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_END_CMD; }
    break;

  case 22:
#line 225 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_BAD_CMD; }
    break;

  case 23:
#line 229 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_bank(e_default_space, NULL); }
    break;

  case 24:
#line 231 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_bank((yyvsp[(2) - (3)].i), NULL); }
    break;

  case 25:
#line 233 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_bank(e_default_space, (yyvsp[(2) - (3)].str)); }
    break;

  case 26:
#line 235 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_bank((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].str)); }
    break;

  case 27:
#line 237 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_jump((yyvsp[(2) - (3)].a)); }
    break;

  case 28:
#line 239 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_go(); }
    break;

  case 29:
#line 241 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_display_io_regs(0); }
    break;

  case 30:
#line 243 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_display_io_regs((yyvsp[(2) - (3)].a)); }
    break;

  case 31:
#line 245 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { monitor_cpu_type_set(""); }
    break;

  case 32:
#line 247 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { monitor_cpu_type_set((yyvsp[(2) - (3)].str)); }
    break;

  case 33:
#line 249 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_cpuhistory(-1); }
    break;

  case 34:
#line 251 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_cpuhistory((yyvsp[(3) - (4)].i)); }
    break;

  case 35:
#line 253 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_instruction_return(); }
    break;

  case 36:
#line 255 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { machine_write_snapshot((yyvsp[(2) - (3)].str),0,0,0); /* FIXME */ }
    break;

  case 37:
#line 257 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { machine_read_snapshot((yyvsp[(2) - (3)].str), 0); }
    break;

  case 38:
#line 259 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_instructions_step(-1); }
    break;

  case 39:
#line 261 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_instructions_step((yyvsp[(3) - (4)].i)); }
    break;

  case 40:
#line 263 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_instructions_next(-1); }
    break;

  case 41:
#line 265 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_instructions_next((yyvsp[(3) - (4)].i)); }
    break;

  case 42:
#line 267 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stack_up(-1); }
    break;

  case 43:
#line 269 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stack_up((yyvsp[(3) - (4)].i)); }
    break;

  case 44:
#line 271 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stack_down(-1); }
    break;

  case 45:
#line 273 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stack_down((yyvsp[(3) - (4)].i)); }
    break;

  case 46:
#line 275 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_display_screen(); }
    break;

  case 48:
#line 280 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (monitor_cpu_for_memspace[default_memspace]->mon_register_print)(default_memspace); }
    break;

  case 49:
#line 282 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (monitor_cpu_for_memspace[(yyvsp[(2) - (3)].i)]->mon_register_print)((yyvsp[(2) - (3)].i)); }
    break;

  case 51:
#line 287 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                        /* What about the memspace? */
                        mon_playback_init((yyvsp[(4) - (5)].str));
                    }
    break;

  case 52:
#line 292 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                        /* What about the memspace? */
                        mon_playback_init((yyvsp[(2) - (3)].str));
                    }
    break;

  case 53:
#line 297 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_save_symbols((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].str)); }
    break;

  case 54:
#line 299 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_save_symbols(e_default_space, (yyvsp[(2) - (3)].str)); }
    break;

  case 55:
#line 301 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_name_to_symbol_table((yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].str)); }
    break;

  case 56:
#line 303 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_remove_name_from_symbol_table(e_default_space, (yyvsp[(2) - (3)].str)); }
    break;

  case 57:
#line 305 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_remove_name_from_symbol_table((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].str)); }
    break;

  case 58:
#line 307 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_print_symbol_table((yyvsp[(2) - (3)].i)); }
    break;

  case 59:
#line 309 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_print_symbol_table(e_default_space); }
    break;

  case 60:
#line 311 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_clear_symbol_table((yyvsp[(2) - (3)].i)); }
    break;

  case 61:
#line 313 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_clear_symbol_table(e_default_space); }
    break;

  case 62:
#line 315 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                        mon_add_name_to_symbol_table((yyvsp[(3) - (4)].a), mon_prepend_dot_to_name((yyvsp[(1) - (4)].str)));
                    }
    break;

  case 63:
#line 319 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                        mon_add_name_to_symbol_table((yyvsp[(3) - (5)].a), mon_prepend_dot_to_name((yyvsp[(1) - (5)].str)));
                    }
    break;

  case 64:
#line 325 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_start_assemble_mode((yyvsp[(2) - (2)].a), NULL); }
    break;

  case 65:
#line 326 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { }
    break;

  case 66:
#line 328 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_start_assemble_mode((yyvsp[(2) - (3)].a), NULL); }
    break;

  case 67:
#line 330 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_disassemble_lines((yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1]); }
    break;

  case 68:
#line 332 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_disassemble_lines(BAD_ADDR, BAD_ADDR); }
    break;

  case 69:
#line 336 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_move((yyvsp[(2) - (5)].range)[0], (yyvsp[(2) - (5)].range)[1], (yyvsp[(4) - (5)].a)); }
    break;

  case 70:
#line 338 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_compare((yyvsp[(2) - (5)].range)[0], (yyvsp[(2) - (5)].range)[1], (yyvsp[(4) - (5)].a)); }
    break;

  case 71:
#line 340 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_fill((yyvsp[(2) - (5)].range)[0], (yyvsp[(2) - (5)].range)[1],(unsigned char *)(yyvsp[(4) - (5)].str)); }
    break;

  case 72:
#line 342 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_hunt((yyvsp[(2) - (5)].range)[0], (yyvsp[(2) - (5)].range)[1],(unsigned char *)(yyvsp[(4) - (5)].str)); }
    break;

  case 73:
#line 344 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display((yyvsp[(2) - (5)].rt), (yyvsp[(4) - (5)].range)[0], (yyvsp[(4) - (5)].range)[1], DF_PETSCII); }
    break;

  case 74:
#line 346 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(default_radix, (yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], DF_PETSCII); }
    break;

  case 75:
#line 348 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(default_radix, BAD_ADDR, BAD_ADDR, DF_PETSCII); }
    break;

  case 76:
#line 350 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display_data((yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], 8, 8); }
    break;

  case 77:
#line 352 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display_data(BAD_ADDR, BAD_ADDR, 8, 8); }
    break;

  case 78:
#line 354 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display_data((yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], 24, 21); }
    break;

  case 79:
#line 356 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display_data(BAD_ADDR, BAD_ADDR, 24, 21); }
    break;

  case 80:
#line 358 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(0, (yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], DF_PETSCII); }
    break;

  case 81:
#line 360 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(0, BAD_ADDR, BAD_ADDR, DF_PETSCII); }
    break;

  case 82:
#line 362 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(0, (yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], DF_SCREEN_CODE); }
    break;

  case 83:
#line 364 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_display(0, BAD_ADDR, BAD_ADDR, DF_SCREEN_CODE); }
    break;

  case 84:
#line 366 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memmap_zap(); }
    break;

  case 85:
#line 368 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memmap_show(-1,BAD_ADDR,BAD_ADDR); }
    break;

  case 86:
#line 370 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memmap_show((yyvsp[(3) - (4)].i),BAD_ADDR,BAD_ADDR); }
    break;

  case 87:
#line 372 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memmap_show((yyvsp[(3) - (5)].i),(yyvsp[(4) - (5)].range)[0],(yyvsp[(4) - (5)].range)[1]); }
    break;

  case 88:
#line 374 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memmap_save((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].i)); }
    break;

  case 89:
#line 378 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                      if ((yyvsp[(2) - (5)].i)) {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], TRUE, (yyvsp[(2) - (5)].i), FALSE);
                      } else {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], TRUE, e_exec, FALSE);
                      }
                      mon_breakpoint_set_checkpoint_condition(temp, (yyvsp[(4) - (5)].cond_node));
                  }
    break;

  case 90:
#line 387 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_print_checkpoints(); }
    break;

  case 91:
#line 390 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                      mon_breakpoint_add_checkpoint((yyvsp[(2) - (3)].range)[0], (yyvsp[(2) - (3)].range)[1], TRUE, e_exec, TRUE);
                  }
    break;

  case 92:
#line 394 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_print_checkpoints(); }
    break;

  case 93:
#line 397 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                      if ((yyvsp[(2) - (5)].i)) {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], TRUE, (yyvsp[(2) - (5)].i), FALSE);
                      } else {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], TRUE, e_load | e_store, FALSE);
                      }
                      mon_breakpoint_set_checkpoint_condition(temp, (yyvsp[(4) - (5)].cond_node));
                  }
    break;

  case 94:
#line 406 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_print_checkpoints(); }
    break;

  case 95:
#line 409 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                      if ((yyvsp[(2) - (5)].i)) {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], FALSE, (yyvsp[(2) - (5)].i), FALSE);
                      } else {
                          temp = mon_breakpoint_add_checkpoint((yyvsp[(3) - (5)].range)[0], (yyvsp[(3) - (5)].range)[1], FALSE, e_load | e_store, FALSE);
                      }
                      mon_breakpoint_set_checkpoint_condition(temp, (yyvsp[(4) - (5)].cond_node));
                  }
    break;

  case 96:
#line 418 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_print_checkpoints(); }
    break;

  case 97:
#line 423 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_switch_checkpoint(e_ON, (yyvsp[(2) - (3)].i)); }
    break;

  case 98:
#line 425 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_switch_checkpoint(e_ON, -1); }
    break;

  case 99:
#line 427 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_switch_checkpoint(e_OFF, (yyvsp[(2) - (3)].i)); }
    break;

  case 100:
#line 429 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_switch_checkpoint(e_OFF, -1); }
    break;

  case 101:
#line 431 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_set_ignore_count((yyvsp[(2) - (3)].i), -1); }
    break;

  case 102:
#line 433 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_set_ignore_count((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].i)); }
    break;

  case 103:
#line 435 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_delete_checkpoint((yyvsp[(2) - (3)].i)); }
    break;

  case 104:
#line 437 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_delete_checkpoint(-1); }
    break;

  case 105:
#line 439 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_set_checkpoint_condition((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].cond_node)); }
    break;

  case 106:
#line 441 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_breakpoint_set_checkpoint_command((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].str)); }
    break;

  case 107:
#line 443 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_STRING; }
    break;

  case 108:
#line 447 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { sidefx = (((yyvsp[(2) - (3)].action) == e_TOGGLE) ? (sidefx ^ 1) : (yyvsp[(2) - (3)].action)); }
    break;

  case 109:
#line 449 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                         mon_out("I/O side effects are %s\n",
                                   sidefx ? "enabled" : "disabled");
                     }
    break;

  case 110:
#line 454 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { 
                        int logenabled;
                        resources_get_int("MonitorLogEnabled", &logenabled);
                        logenabled = (((yyvsp[(2) - (3)].action) == e_TOGGLE) ? (logenabled ^ 1) : (yyvsp[(2) - (3)].action));
                        resources_set_int("MonitorLogEnabled", logenabled);
                     }
    break;

  case 111:
#line 461 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                         int logenabled;
                         const char *logfilename;
                         resources_get_int("MonitorLogEnabled", &logenabled);
                         resources_get_string("MonitorLogFileName", &logfilename);
                         if (logenabled) {
                            mon_out("Logging to '%s' is enabled.\n", logfilename);
                         } else {
                            mon_out("Logging is disabled.\n");
                         }
                     }
    break;

  case 112:
#line 473 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { 
                        resources_set_string("MonitorLogFileName", (yyvsp[(2) - (3)].str));
                     }
    break;

  case 113:
#line 477 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { default_radix = (yyvsp[(2) - (3)].rt); }
    break;

  case 114:
#line 479 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                         const char *p;

                         if (default_radix == e_hexadecimal)
                             p = "Hexadecimal";
                         else if (default_radix == e_decimal)
                             p = "Decimal";
                         else if (default_radix == e_octal)
                             p = "Octal";
                         else if (default_radix == e_binary)
                             p = "Binary";
                         else
                             p = "Unknown";

                         mon_out("Default radix is %s\n", p);
                     }
    break;

  case 115:
#line 497 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { monitor_change_device((yyvsp[(2) - (3)].i)); }
    break;

  case 116:
#line 499 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_export(); }
    break;

  case 117:
#line 501 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_quit(); YYACCEPT; }
    break;

  case 118:
#line 503 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_exit(); YYACCEPT; }
    break;

  case 119:
#line 505 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_maincpu_toggle_trace((yyvsp[(2) - (3)].action)); }
    break;

  case 120:
#line 509 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_drive_execute_disk_cmd((yyvsp[(2) - (3)].str)); }
    break;

  case 121:
#line 511 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_out("\t%d\n",(yyvsp[(2) - (3)].i)); }
    break;

  case 122:
#line 513 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_command_print_help(NULL); }
    break;

  case 123:
#line 515 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_command_print_help((yyvsp[(2) - (3)].str)); }
    break;

  case 124:
#line 517 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_print_convert((yyvsp[(2) - (3)].i)); }
    break;

  case 125:
#line 519 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_change_dir((yyvsp[(2) - (3)].str)); }
    break;

  case 126:
#line 521 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_keyboard_feed((yyvsp[(2) - (3)].str)); }
    break;

  case 127:
#line 523 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_backtrace(); }
    break;

  case 128:
#line 525 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_show_dir((yyvsp[(2) - (3)].str)); }
    break;

  case 129:
#line 527 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_show_pwd(); }
    break;

  case 130:
#line 529 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_screenshot_save((yyvsp[(2) - (3)].str),-1); }
    break;

  case 131:
#line 531 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_screenshot_save((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].i)); }
    break;

  case 132:
#line 533 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_resource_get((yyvsp[(2) - (3)].str)); }
    break;

  case 133:
#line 535 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_resource_set((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str)); }
    break;

  case 134:
#line 537 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { resources_load((yyvsp[(2) - (3)].str)); }
    break;

  case 135:
#line 539 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { resources_save((yyvsp[(2) - (3)].str)); }
    break;

  case 136:
#line 541 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_reset_machine(-1); }
    break;

  case 137:
#line 543 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_reset_machine((yyvsp[(3) - (4)].i)); }
    break;

  case 138:
#line 545 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_tape_ctrl((yyvsp[(3) - (4)].i)); }
    break;

  case 139:
#line 547 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_cart_freeze(); }
    break;

  case 140:
#line 549 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { }
    break;

  case 141:
#line 551 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stopwatch_reset(); }
    break;

  case 142:
#line 553 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_stopwatch_show("Stopwatch: ", "\n"); }
    break;

  case 143:
#line 557 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_file_load((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].i), (yyvsp[(4) - (5)].a), FALSE); }
    break;

  case 144:
#line 559 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_file_load((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].i), (yyvsp[(4) - (5)].a), TRUE); }
    break;

  case 145:
#line 561 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_file_save((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].i), (yyvsp[(4) - (5)].range)[0], (yyvsp[(4) - (5)].range)[1], FALSE); }
    break;

  case 146:
#line 563 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_DEVICE_NUM; }
    break;

  case 147:
#line 565 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_ADDRESS; }
    break;

  case 148:
#line 567 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_file_save((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].i), (yyvsp[(4) - (5)].range)[0], (yyvsp[(4) - (5)].range)[1], TRUE); }
    break;

  case 149:
#line 569 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_ADDRESS; }
    break;

  case 150:
#line 571 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_file_verify((yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].i),(yyvsp[(4) - (5)].a)); }
    break;

  case 151:
#line 573 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_ADDRESS; }
    break;

  case 152:
#line 575 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_drive_block_cmd(0,(yyvsp[(2) - (5)].i),(yyvsp[(3) - (5)].i),(yyvsp[(4) - (5)].a)); }
    break;

  case 153:
#line 577 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_drive_block_cmd(1,(yyvsp[(2) - (5)].i),(yyvsp[(3) - (5)].i),(yyvsp[(4) - (5)].a)); }
    break;

  case 154:
#line 579 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_drive_list(-1); }
    break;

  case 155:
#line 581 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_drive_list((yyvsp[(2) - (3)].i)); }
    break;

  case 156:
#line 583 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_attach((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].i)); }
    break;

  case 157:
#line 585 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_detach((yyvsp[(2) - (3)].i)); }
    break;

  case 158:
#line 587 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_autostart((yyvsp[(2) - (3)].str),0,1); }
    break;

  case 159:
#line 589 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_autostart((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].i),1); }
    break;

  case 160:
#line 591 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_autostart((yyvsp[(2) - (3)].str),0,0); }
    break;

  case 161:
#line 593 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_autostart((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].i),0); }
    break;

  case 162:
#line 597 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_record_commands((yyvsp[(2) - (3)].str)); }
    break;

  case 163:
#line 599 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_end_recording(); }
    break;

  case 164:
#line 601 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_playback_init((yyvsp[(2) - (3)].str)); }
    break;

  case 165:
#line 605 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_memory_fill((yyvsp[(2) - (4)].a), BAD_ADDR, (unsigned char *)(yyvsp[(3) - (4)].str)); }
    break;

  case 166:
#line 607 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { printf("Not yet.\n"); }
    break;

  case 167:
#line 611 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { yydebug = 1; }
    break;

  case 168:
#line 614 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 169:
#line 617 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 170:
#line 618 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.str) = NULL; }
    break;

  case 172:
#line 622 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_FILENAME; }
    break;

  case 174:
#line 626 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_DEVICE_NUM; }
    break;

  case 175:
#line 629 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i) | (yyvsp[(2) - (2)].i); }
    break;

  case 176:
#line 630 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 177:
#line 633 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 178:
#line 634 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = 0; }
    break;

  case 179:
#line 637 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                                    if (!mon_register_valid(default_memspace, (yyvsp[(1) - (1)].reg))) {
                                        return ERR_INVALID_REGISTER;
                                    }
                                    (yyval.i) = new_reg(default_memspace, (yyvsp[(1) - (1)].reg));
                                }
    break;

  case 180:
#line 643 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
                                    if (!mon_register_valid((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].reg))) {
                                        return ERR_INVALID_REGISTER;
                                    }
                                    (yyval.i) = new_reg((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].reg));
                                }
    break;

  case 183:
#line 656 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (monitor_cpu_for_memspace[reg_memspace((yyvsp[(1) - (3)].i))]->mon_register_set_val)(reg_memspace((yyvsp[(1) - (3)].i)), reg_regid((yyvsp[(1) - (3)].i)), (uint16_t) (yyvsp[(3) - (3)].i)); }
    break;

  case 184:
#line 659 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 185:
#line 660 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_EXPECT_CHECKNUM; }
    break;

  case 187:
#line 664 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.range)[0] = (yyvsp[(1) - (1)].a); (yyval.range)[1] = BAD_ADDR; }
    break;

  case 188:
#line 667 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.range)[0] = (yyvsp[(1) - (3)].a); (yyval.range)[1] = (yyvsp[(3) - (3)].a); }
    break;

  case 189:
#line 669 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if (resolve_range(e_default_space, (yyval.range), (yyvsp[(1) - (1)].str))) return ERR_ADDR_TOO_BIG; }
    break;

  case 190:
#line 671 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if (resolve_range((yyvsp[(1) - (3)].i), (yyval.range), (yyvsp[(3) - (3)].str))) return ERR_ADDR_TOO_BIG; }
    break;

  case 191:
#line 674 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.a) = (yyvsp[(2) - (2)].a); }
    break;

  case 192:
#line 675 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.a) = BAD_ADDR; }
    break;

  case 193:
#line 679 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
             (yyval.a) = new_addr(e_default_space,(yyvsp[(1) - (1)].i));
             if (opt_asm) new_cmd = asm_mode = 1;
         }
    break;

  case 194:
#line 684 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
             (yyval.a) = new_addr((yyvsp[(1) - (3)].i), (yyvsp[(3) - (3)].i));
             if (opt_asm) new_cmd = asm_mode = 1;
         }
    break;

  case 195:
#line 689 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
             temp = mon_symbol_table_lookup_addr(e_default_space, (yyvsp[(1) - (1)].str));
             if (temp >= 0)
                 (yyval.a) = new_addr(e_default_space, temp);
             else
                 return ERR_UNDEFINED_LABEL;
         }
    break;

  case 198:
#line 702 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = e_comp_space; }
    break;

  case 199:
#line 703 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = e_disk8_space; }
    break;

  case 200:
#line 704 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = e_disk9_space; }
    break;

  case 201:
#line 705 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = e_disk10_space; }
    break;

  case 202:
#line 706 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = e_disk11_space; }
    break;

  case 203:
#line 709 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); if (!CHECK_ADDR((yyvsp[(1) - (1)].i))) return ERR_ADDR_TOO_BIG; }
    break;

  case 204:
#line 711 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 205:
#line 713 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + (yyvsp[(3) - (3)].i); }
    break;

  case 206:
#line 714 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) - (yyvsp[(3) - (3)].i); }
    break;

  case 207:
#line 715 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) * (yyvsp[(3) - (3)].i); }
    break;

  case 208:
#line 716 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = ((yyvsp[(3) - (3)].i)) ? ((yyvsp[(1) - (3)].i) / (yyvsp[(3) - (3)].i)) : 1; }
    break;

  case 209:
#line 717 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); }
    break;

  case 210:
#line 718 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_MISSING_CLOSE_PAREN; }
    break;

  case 211:
#line 719 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 212:
#line 722 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = (yyvsp[(2) - (2)].cond_node); }
    break;

  case 213:
#line 723 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = 0; }
    break;

  case 214:
#line 726 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
               (yyval.cond_node) = new_cond; (yyval.cond_node)->is_parenthized = FALSE;
               (yyval.cond_node)->child1 = (yyvsp[(1) - (3)].cond_node); (yyval.cond_node)->child2 = (yyvsp[(3) - (3)].cond_node); (yyval.cond_node)->operation = (yyvsp[(2) - (3)].cond_op);
           }
    break;

  case 215:
#line 731 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_INCOMPLETE_COND_OP; }
    break;

  case 216:
#line 733 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = (yyvsp[(2) - (3)].cond_node); (yyval.cond_node)->is_parenthized = TRUE; }
    break;

  case 217:
#line 735 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { return ERR_MISSING_CLOSE_PAREN; }
    break;

  case 218:
#line 737 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = (yyvsp[(1) - (1)].cond_node); }
    break;

  case 219:
#line 740 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = new_cond;
                            (yyval.cond_node)->operation = e_INV;
                            (yyval.cond_node)->is_parenthized = FALSE;
                            (yyval.cond_node)->reg_num = (yyvsp[(1) - (1)].i); (yyval.cond_node)->is_reg = TRUE; (yyval.cond_node)->banknum=-1;
                            (yyval.cond_node)->child1 = NULL; (yyval.cond_node)->child2 = NULL;
                          }
    break;

  case 220:
#line 746 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.cond_node) = new_cond;
                            (yyval.cond_node)->operation = e_INV;
                            (yyval.cond_node)->is_parenthized = FALSE;
                            (yyval.cond_node)->value = (yyvsp[(1) - (1)].i); (yyval.cond_node)->is_reg = FALSE; (yyval.cond_node)->banknum=-1;
                            (yyval.cond_node)->child1 = NULL; (yyval.cond_node)->child2 = NULL;
                          }
    break;

  case 221:
#line 752 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {(yyval.cond_node)=new_cond;
                            (yyval.cond_node)->operation=e_INV;
                            (yyval.cond_node)->is_parenthized = FALSE;
                            (yyval.cond_node)->banknum=mon_banknum_from_bank(e_default_space,(yyvsp[(2) - (4)].str)); (yyval.cond_node)->value = (yyvsp[(4) - (4)].a); (yyval.cond_node)->is_reg = FALSE;
                            (yyval.cond_node)->child1 = NULL; (yyval.cond_node)->child2 = NULL;  
                        }
    break;

  case 224:
#line 764 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_number_to_buffer((yyvsp[(1) - (1)].i)); }
    break;

  case 225:
#line 765 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_string_to_buffer((yyvsp[(1) - (1)].str)); }
    break;

  case 228:
#line 772 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_number_to_buffer((yyvsp[(1) - (1)].i)); }
    break;

  case 229:
#line 773 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_number_masked_to_buffer((yyvsp[(1) - (1)].i), 0x00); }
    break;

  case 230:
#line 774 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { mon_add_string_to_buffer((yyvsp[(1) - (1)].str)); }
    break;

  case 231:
#line 777 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 232:
#line 778 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (monitor_cpu_for_memspace[reg_memspace((yyvsp[(1) - (1)].i))]->mon_register_get_val)(reg_memspace((yyvsp[(1) - (1)].i)), reg_regid((yyvsp[(1) - (1)].i))); }
    break;

  case 233:
#line 781 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 234:
#line 782 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = strtol((yyvsp[(1) - (1)].str), NULL, 10); }
    break;

  case 235:
#line 783 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = strtol((yyvsp[(1) - (1)].str), NULL, 10); }
    break;

  case 236:
#line 784 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = strtol((yyvsp[(1) - (1)].str), NULL, 10); }
    break;

  case 237:
#line 787 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = resolve_datatype(B_NUMBER,(yyvsp[(1) - (1)].str)); }
    break;

  case 238:
#line 788 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = resolve_datatype(O_NUMBER,(yyvsp[(1) - (1)].str)); }
    break;

  case 239:
#line 789 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = resolve_datatype(D_NUMBER,(yyvsp[(1) - (1)].str)); }
    break;

  case 240:
#line 792 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 241:
#line 793 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 242:
#line 794 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 243:
#line 795 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 244:
#line 796 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 248:
#line 804 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = 0;
                                                if ((yyvsp[(1) - (2)].str)) {
                                                    (monitor_cpu_for_memspace[default_memspace]->mon_assemble_instr)((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].mode));
                                                } else {
                                                    new_cmd = 1;
                                                    asm_mode = 0;
                                                }
                                                opt_asm = 0;
                                              }
    break;

  case 250:
#line 815 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { asm_mode = 0; }
    break;

  case 251:
#line 818 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(2) - (2)].i) > 0xff) {
                          (yyval.mode).addr_mode = ASM_ADDR_MODE_IMMEDIATE_16;
                          (yyval.mode).param = (yyvsp[(2) - (2)].i);
                        } else {
                          (yyval.mode).addr_mode = ASM_ADDR_MODE_IMMEDIATE;
                          (yyval.mode).param = (yyvsp[(2) - (2)].i);
                        } }
    break;

  case 252:
#line 825 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(1) - (1)].i) >= 0x10000) {
               (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_LONG;
               (yyval.mode).param = (yyvsp[(1) - (1)].i);
             } else if ((yyvsp[(1) - (1)].i) < 0x100) {
               (yyval.mode).addr_mode = ASM_ADDR_MODE_ZERO_PAGE;
               (yyval.mode).param = (yyvsp[(1) - (1)].i);
             } else {
               (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE;
               (yyval.mode).param = (yyvsp[(1) - (1)].i);
             }
           }
    break;

  case 253:
#line 836 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(1) - (3)].i) >= 0x10000) {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_LONG_X;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          } else if ((yyvsp[(1) - (3)].i) < 0x100) { 
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_ZERO_PAGE_X;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          } else {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_X;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          }
                        }
    break;

  case 254:
#line 847 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(1) - (3)].i) < 0x100) {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_ZERO_PAGE_Y;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          } else {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_Y;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          }
                        }
    break;

  case 255:
#line 855 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(1) - (3)].i) < 0x100) {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_STACK_RELATIVE;
                            (yyval.mode).param = (yyvsp[(1) - (3)].i);
                          } else { /* 6809 */
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
                            if ((yyvsp[(1) - (3)].i) >= -16 && (yyvsp[(1) - (3)].i) < 16) {
                                (yyval.mode).addr_submode = (yyvsp[(3) - (3)].i) | ((yyvsp[(1) - (3)].i) & 0x1F);
                            } else if ((yyvsp[(1) - (3)].i) >= -128 && (yyvsp[(1) - (3)].i) < 128) {
                                (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (3)].i) | ASM_ADDR_MODE_INDEXED_OFF8;
                                (yyval.mode).param = (yyvsp[(1) - (3)].i);
                            } else if ((yyvsp[(1) - (3)].i) >= -32768 && (yyvsp[(1) - (3)].i) < 32768) {
                                (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (3)].i) | ASM_ADDR_MODE_INDEXED_OFF16;
                                (yyval.mode).param = (yyvsp[(1) - (3)].i);
                            } else {
                                (yyval.mode).addr_mode = ASM_ADDR_MODE_ILLEGAL;
                                mon_out("offset too large even for 16 bits (signed)\n");
                            }
                          }
                        }
    break;

  case 256:
#line 874 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(1) - (3)].i) < 0x100) {
                            (yyval.mode).addr_mode = ASM_ADDR_MODE_DOUBLE;
                            (yyval.mode).param = (yyvsp[(3) - (3)].i);
                            (yyval.mode).addr_submode = (yyvsp[(1) - (3)].i);
                          }
                        }
    break;

  case 257:
#line 880 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(2) - (3)].i) < 0x100) {
                               (yyval.mode).addr_mode = ASM_ADDR_MODE_INDIRECT;
                               (yyval.mode).param = (yyvsp[(2) - (3)].i);
                             } else {
                               (yyval.mode).addr_mode = ASM_ADDR_MODE_ABS_INDIRECT;
                               (yyval.mode).param = (yyvsp[(2) - (3)].i);
                             }
                           }
    break;

  case 258:
#line 888 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { if ((yyvsp[(2) - (5)].i) < 0x100) {
                                           (yyval.mode).addr_mode = ASM_ADDR_MODE_INDIRECT_X;
                                           (yyval.mode).param = (yyvsp[(2) - (5)].i);
                                         } else {
                                           (yyval.mode).addr_mode = ASM_ADDR_MODE_ABS_INDIRECT_X;
                                           (yyval.mode).param = (yyvsp[(2) - (5)].i);
                                         }
                                       }
    break;

  case 259:
#line 897 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_STACK_RELATIVE_Y; (yyval.mode).param = (yyvsp[(2) - (7)].i); }
    break;

  case 260:
#line 899 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_INDIRECT_Y; (yyval.mode).param = (yyvsp[(2) - (5)].i); }
    break;

  case 261:
#line 900 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_BC; }
    break;

  case 262:
#line 901 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_DE; }
    break;

  case 263:
#line 902 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_HL; }
    break;

  case 264:
#line 903 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_IX; }
    break;

  case 265:
#line 904 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_IY; }
    break;

  case 266:
#line 905 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IND_SP; }
    break;

  case 267:
#line 907 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_A; (yyval.mode).param = (yyvsp[(2) - (5)].i); }
    break;

  case 268:
#line 909 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_HL; (yyval.mode).param = (yyvsp[(2) - (5)].i); }
    break;

  case 269:
#line 911 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_IX; (yyval.mode).param = (yyvsp[(2) - (5)].i); }
    break;

  case 270:
#line 913 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_ABSOLUTE_IY; (yyval.mode).param = (yyvsp[(2) - (5)].i); }
    break;

  case 271:
#line 914 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_IMPLIED; }
    break;

  case 272:
#line 915 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_ACCUMULATOR; }
    break;

  case 273:
#line 916 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_B; }
    break;

  case 274:
#line 917 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_C; }
    break;

  case 275:
#line 918 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_D; }
    break;

  case 276:
#line 919 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_E; }
    break;

  case 277:
#line 920 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_H; }
    break;

  case 278:
#line 921 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IXH; }
    break;

  case 279:
#line 922 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IYH; }
    break;

  case 280:
#line 923 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_L; }
    break;

  case 281:
#line 924 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IXL; }
    break;

  case 282:
#line 925 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IYL; }
    break;

  case 283:
#line 926 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_AF; }
    break;

  case 284:
#line 927 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_BC; }
    break;

  case 285:
#line 928 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_DE; }
    break;

  case 286:
#line 929 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_HL; }
    break;

  case 287:
#line 930 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IX; }
    break;

  case 288:
#line 931 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_IY; }
    break;

  case 289:
#line 932 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_REG_SP; }
    break;

  case 290:
#line 934 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.mode).addr_mode = ASM_ADDR_MODE_DIRECT; (yyval.mode).param = (yyvsp[(2) - (2)].i); }
    break;

  case 291:
#line 935 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {    /* Clash with addr,x addr,y addr,s modes! */
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        if ((yyvsp[(1) - (3)].i) >= -16 && (yyvsp[(1) - (3)].i) < 16) {
            (yyval.mode).addr_submode = (3 << 5) | ((yyvsp[(1) - (3)].i) & 0x1F);
        } else if ((yyvsp[(1) - (3)].i) >= -128 && (yyvsp[(1) - (3)].i) < 128) {
            (yyval.mode).addr_submode = 0x80 | (3 << 5) | ASM_ADDR_MODE_INDEXED_OFF8;
            (yyval.mode).param = (yyvsp[(1) - (3)].i);
        } else if ((yyvsp[(1) - (3)].i) >= -32768 && (yyvsp[(1) - (3)].i) < 32768) {
            (yyval.mode).addr_submode = 0x80 | (3 << 5) | ASM_ADDR_MODE_INDEXED_OFF16;
            (yyval.mode).param = (yyvsp[(1) - (3)].i);
        } else {
            (yyval.mode).addr_mode = ASM_ADDR_MODE_ILLEGAL;
            mon_out("offset too large even for 16 bits (signed)\n");
        }
    }
    break;

  case 292:
#line 950 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (3)].i) | ASM_ADDR_MODE_INDEXED_INC1;
        }
    break;

  case 293:
#line 954 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (4)].i) | ASM_ADDR_MODE_INDEXED_INC2;
        }
    break;

  case 294:
#line 958 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (3)].i) | ASM_ADDR_MODE_INDEXED_DEC1;
        }
    break;

  case 295:
#line 962 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(4) - (4)].i) | ASM_ADDR_MODE_INDEXED_DEC2;
        }
    break;

  case 296:
#line 966 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (2)].i) | ASM_ADDR_MODE_INDEXED_OFF0;
        }
    break;

  case 297:
#line 970 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (3)].i) | ASM_ADDR_MODE_INDEXED_OFFB;
        }
    break;

  case 298:
#line 974 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (3)].i) | ASM_ADDR_MODE_INDEXED_OFFA;
        }
    break;

  case 299:
#line 978 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(2) - (3)].i) | ASM_ADDR_MODE_INDEXED_OFFD;
        }
    break;

  case 300:
#line 982 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).param = (yyvsp[(1) - (3)].i);
        if ((yyvsp[(1) - (3)].i) >= -128 && (yyvsp[(1) - (3)].i) < 128) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFFPC8;
        } else if ((yyvsp[(1) - (3)].i) >= -32768 && (yyvsp[(1) - (3)].i) < 32768) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFFPC16;
        } else {
            (yyval.mode).addr_mode = ASM_ADDR_MODE_ILLEGAL;
            mon_out("offset too large even for 16 bits (signed)\n");
        }
    }
    break;

  case 301:
#line 994 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        if ((yyvsp[(2) - (5)].i) >= -16 && (yyvsp[(2) - (5)].i) < 16) {
            (yyval.mode).addr_submode = (yyvsp[(2) - (5)].i) & 0x1F;
        } else if ((yyvsp[(1) - (5)].i) >= -128 && (yyvsp[(1) - (5)].i) < 128) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFF8;
            (yyval.mode).param = (yyvsp[(2) - (5)].i);
        } else if ((yyvsp[(2) - (5)].i) >= -32768 && (yyvsp[(2) - (5)].i) < 32768) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFF16;
            (yyval.mode).param = (yyvsp[(2) - (5)].i);
        } else {
            (yyval.mode).addr_mode = ASM_ADDR_MODE_ILLEGAL;
            mon_out("offset too large even for 16 bits (signed)\n");
        }
    }
    break;

  case 302:
#line 1009 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (5)].i) | ASM_ADDR_MODE_INDEXED_INC1;
        }
    break;

  case 303:
#line 1013 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (6)].i) | ASM_ADDR_MODE_INDEXED_INC2;
        }
    break;

  case 304:
#line 1017 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(4) - (5)].i) | ASM_ADDR_MODE_INDEXED_DEC1;
        }
    break;

  case 305:
#line 1021 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(5) - (6)].i) | ASM_ADDR_MODE_INDEXED_DEC2;
        }
    break;

  case 306:
#line 1025 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (4)].i) | ASM_ADDR_MODE_INDEXED_OFF0;
        }
    break;

  case 307:
#line 1029 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (5)].i) | ASM_ADDR_MODE_INDEXED_OFFB;
        }
    break;

  case 308:
#line 1033 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (5)].i) | ASM_ADDR_MODE_INDEXED_OFFA;
        }
    break;

  case 309:
#line 1037 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | (yyvsp[(3) - (5)].i) | ASM_ADDR_MODE_INDEXED_OFFD;
        }
    break;

  case 310:
#line 1041 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).param = (yyvsp[(2) - (5)].i);
        if ((yyvsp[(2) - (5)].i) >= -128 && (yyvsp[(2) - (5)].i) < 128) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFFPC8_IND;
        } else if ((yyvsp[(2) - (5)].i) >= -32768 && (yyvsp[(2) - (5)].i) < 32768) {
            (yyval.mode).addr_submode = ASM_ADDR_MODE_INDEXED_OFFPC16_IND;
        } else {
            (yyval.mode).addr_mode = ASM_ADDR_MODE_ILLEGAL;
            mon_out("offset too large even for 16 bits (signed)\n");
        }
    }
    break;

  case 311:
#line 1053 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDEXED;
        (yyval.mode).addr_submode = 0x80 | ASM_ADDR_MODE_EXTENDED_INDIRECT;
        (yyval.mode).param = (yyvsp[(2) - (3)].i);
        }
    break;

  case 312:
#line 1058 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    {
        (yyval.mode).addr_mode = ASM_ADDR_MODE_INDIRECT_LONG_Y;
        (yyval.mode).param = (yyvsp[(2) - (5)].i);
        }
    break;

  case 313:
#line 1066 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (0 << 5); printf("reg_x\n"); }
    break;

  case 314:
#line 1067 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (1 << 5); printf("reg_y\n"); }
    break;

  case 315:
#line 1068 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 316:
#line 1069 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (3 << 5); printf("reg_s\n"); }
    break;

  case 317:
#line 1073 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"
    { (yyval.i) = (2 << 5); printf("reg_u\n"); }
    break;


/* Line 1267 of yacc.c.  */
#line 4332 "mon_parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 1077 "../../../vice-emu-code/vice/src/monitor/mon_parse.y"


void parse_and_execute_line(char *input)
{
   char *temp_buf;
   int i, rc;

   temp_buf = lib_malloc(strlen(input) + 3);
   strcpy(temp_buf,input);
   i = (int)strlen(input);
   temp_buf[i++] = '\n';
   temp_buf[i++] = '\0';
   temp_buf[i++] = '\0';

   make_buffer(temp_buf);
   mon_clear_buffer();
   if ( (rc =yyparse()) != 0) {
       mon_out("ERROR -- ");
       switch(rc) {
         case ERR_BAD_CMD:
           mon_out("Bad command:\n");
           break;
         case ERR_RANGE_BAD_START:
           mon_out("Bad first address in range:\n");
           break;
         case ERR_RANGE_BAD_END:
           mon_out("Bad second address in range:\n");
           break;
         case ERR_EXPECT_CHECKNUM:
           mon_out("Checkpoint number expected:\n");
           break;
         case ERR_EXPECT_END_CMD:
           mon_out("Unexpected token:\n");
           break;
         case ERR_MISSING_CLOSE_PAREN:
           mon_out("')' expected:\n");
           break;
         case ERR_INCOMPLETE_COND_OP:
           mon_out("Conditional operation missing an operand:\n");
           break;
         case ERR_EXPECT_FILENAME:
           mon_out("Expecting a filename:\n");
           break;
         case ERR_ADDR_TOO_BIG:
           mon_out("Address too large:\n");
           break;
         case ERR_IMM_TOO_BIG:
           mon_out("Immediate argument too large:\n");
           break;
         case ERR_EXPECT_STRING:
           mon_out("Expecting a string.\n");
           break;
         case ERR_UNDEFINED_LABEL:
           mon_out("Found an undefined label.\n");
           break;
         case ERR_EXPECT_DEVICE_NUM:
           mon_out("Expecting a device number.\n");
           break;
         case ERR_EXPECT_ADDRESS:
           mon_out("Expecting an address.\n");
           break;
         case ERR_INVALID_REGISTER:
           mon_out("Invalid register.\n");
           break;
         case ERR_ILLEGAL_INPUT:
         default:
           mon_out("Wrong syntax:\n");
       }
       mon_out("  %s\n", input);
       for (i = 0; i < last_len; i++)
           mon_out(" ");
       mon_out("  ^\n");
       asm_mode = 0;
       new_cmd = 1;
   }
   lib_free(temp_buf);
   free_buffer();
}

static int yyerror(char *s)
{
#if 0
   fprintf(stderr, "ERR:%s\n", s);
#endif
   return 0;
}

static int resolve_datatype(unsigned guess_type, const char *num)
{
   /* FIXME: Handle cases when default type is non-numerical */
   if (default_radix == e_hexadecimal) {
       return strtol(num, NULL, 16);
   }

   if ((guess_type == D_NUMBER) || (default_radix == e_decimal)) {
       return strtol(num, NULL, 10);
   }

   if ((guess_type == O_NUMBER) || (default_radix == e_octal)) {
       return strtol(num, NULL, 8);
   }

   return strtol(num, NULL, 2);
}

/*
 * Resolve a character sequence containing 8 hex digits like "08001000".
 * This could be a lazy version of "0800 1000". If the default radix is not
 * hexadecimal, we handle it like a ordinary number, in the latter case there
 * is only one number in the range.
 */
static int resolve_range(enum t_memspace memspace, MON_ADDR range[2],
                         const char *num)
{
    char start[5];
    char end[5];
    long sa;

    range[1] = BAD_ADDR;

    switch (default_radix)
    {
    case e_hexadecimal:
        /* checked twice, but as the code must have exactly 8 digits: */
        if (strlen(num) == 8) {
            memcpy(start, num, 4);
            start[4] = '\0';
            memcpy(end, num + 4, 4);
            end[4] = '\0';
            sa = strtol(start, NULL, 16);
            range[1] = new_addr(memspace, strtol(end, NULL, 16));
        }
        else
            sa = strtol(num, NULL, 16);
        break;

    case e_decimal:
       sa = strtol(num, NULL, 10);
       break;

    case e_octal:
       sa = strtol(num, NULL, 8);
       break;

    default:
       sa = strtol(num, NULL, 2);
    }

    if (!CHECK_ADDR(sa))
        return ERR_ADDR_TOO_BIG;

    range[0] = new_addr(memspace, sa);
    return 0;
}

