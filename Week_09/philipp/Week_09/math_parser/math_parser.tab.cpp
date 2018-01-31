/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
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

// Take the name prefix into account.
#define yylex   derivativelex

/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 1 "math_parser.y"


#include <cstdio>
#include <string>
#include <vector>

#include "math_expression.h"


/* Line 279 of lalr1.cc  */
#line 50 "math_parser.tab.cpp"


#include "math_parser.tab.h"

/* User implementation prologue.  */
/* Line 285 of lalr1.cc  */
#line 80 "math_parser.y"


#include "math_driver.h"
#include "math_scanner.h"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex


/* Line 285 of lalr1.cc  */
#line 71 "math_parser.tab.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace derivative {
/* Line 353 of lalr1.cc  */
#line 166 "math_parser.tab.cpp"

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  MathParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  MathParser::MathParser (class MathDriver &driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  MathParser::~MathParser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  MathParser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  MathParser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  MathParser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
        case 6: /* "string" */
/* Line 455 of lalr1.cc  */
#line 74 "math_parser.y"
        { delete ((*yyvaluep).stringVal); };
/* Line 455 of lalr1.cc  */
#line 273 "math_parser.tab.cpp"
        break;
      case 16: /* constant */
/* Line 455 of lalr1.cc  */
#line 75 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 280 "math_parser.tab.cpp"
        break;
      case 17: /* variable */
/* Line 455 of lalr1.cc  */
#line 75 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 287 "math_parser.tab.cpp"
        break;
      case 18: /* atomExpr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 294 "math_parser.tab.cpp"
        break;
      case 19: /* powExpr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 301 "math_parser.tab.cpp"
        break;
      case 20: /* unaryExpr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 308 "math_parser.tab.cpp"
        break;
      case 21: /* mulExpr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 315 "math_parser.tab.cpp"
        break;
      case 22: /* addExpr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 322 "math_parser.tab.cpp"
        break;
      case 23: /* Expr */
/* Line 455 of lalr1.cc  */
#line 76 "math_parser.y"
        { delete ((*yyvaluep).exprNode); };
/* Line 455 of lalr1.cc  */
#line 329 "math_parser.tab.cpp"
        break;

	default:
	  break;
      }
  }

  void
  MathParser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  MathParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  MathParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  MathParser::debug_level_type
  MathParser::debug_level () const
  {
    return yydebug_;
  }

  void
  MathParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  MathParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  MathParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  MathParser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 37 "math_parser.y"
{
    // init initial location object
    yylloc.begin.filename = yylloc.end.filename = &driver.streamName;
}
/* Line 545 of lalr1.cc  */
#line 430 "math_parser.tab.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */
#line 97 "math_parser.y"
    { (yyval.exprNode) = new ConstantExpr((yysemantic_stack_[(1) - (1)].integerVal)); }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 98 "math_parser.y"
    { (yyval.exprNode) = new ConstantExpr((yysemantic_stack_[(1) - (1)].doubleVal)); }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 101 "math_parser.y"
    {
                                        if(!driver.context.existsVariable(*(yysemantic_stack_[(1) - (1)].stringVal))) {
                                            error(yyloc, std::string("Unknown variable \"") + *(yysemantic_stack_[(1) - (1)].stringVal) + "\"");
                                            delete (yysemantic_stack_[(1) - (1)].stringVal);
                                            YYERROR;
                                        } else {
                                            (yyval.exprNode) = new ConstantExpr(driver.context.getVariable(*(yysemantic_stack_[(1) - (1)].stringVal)));
                                        }
                                    }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 112 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 113 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 114 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(3) - (2)].exprNode); }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 117 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 118 "math_parser.y"
    { (yyval.exprNode) = new PowerExpr((yysemantic_stack_[(3) - (1)].exprNode), (yysemantic_stack_[(3) - (3)].exprNode)); }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 121 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 11:
/* Line 670 of lalr1.cc  */
#line 122 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(2) - (2)].exprNode); }
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 123 "math_parser.y"
    { (yyval.exprNode) = new NegateExpr((yysemantic_stack_[(2) - (2)].exprNode)); }
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 126 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 127 "math_parser.y"
    { (yyval.exprNode) = new MultiplyExpr((yysemantic_stack_[(3) - (1)].exprNode), (yysemantic_stack_[(3) - (3)].exprNode)); }
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 128 "math_parser.y"
    { (yyval.exprNode) = new DivideExpr((yysemantic_stack_[(3) - (1)].exprNode), (yysemantic_stack_[(3) - (3)].exprNode)); }
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 131 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 132 "math_parser.y"
    { (yyval.exprNode) = new AddExpr((yysemantic_stack_[(3) - (1)].exprNode), (yysemantic_stack_[(3) - (3)].exprNode)); }
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 133 "math_parser.y"
    { (yyval.exprNode) = new SubtractExpr((yysemantic_stack_[(3) - (1)].exprNode), (yysemantic_stack_[(3) - (3)].exprNode)); }
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 136 "math_parser.y"
    { (yyval.exprNode) = (yysemantic_stack_[(1) - (1)].exprNode); }
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 148 "math_parser.y"
    { driver.context.expressions.push_back((yysemantic_stack_[(3) - (2)].exprNode)); }
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 149 "math_parser.y"
    { driver.context.expressions.push_back((yysemantic_stack_[(3) - (2)].exprNode)); }
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 150 "math_parser.y"
    { driver.context.expressions.push_back((yysemantic_stack_[(3) - (2)].exprNode)); }
    break;


/* Line 670 of lalr1.cc  */
#line 684 "math_parser.tab.cpp"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
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
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  MathParser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char MathParser::yypact_ninf_ = -8;
  const signed char
  MathParser::yypact_[] =
  {
        -8,     2,    -8,    -8,    -8,    -8,    -8,     7,     7,    18,
      -8,    -8,    -8,    23,    -8,    -8,    -6,    20,    17,    -8,
      -8,     5,     7,    18,    18,    18,    18,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -6,    -6
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  MathParser::yydefact_[] =
  {
        20,     0,     1,    22,     2,     3,     4,     0,     0,     0,
      21,     5,     6,     8,    10,    13,    16,    19,     0,    11,
      12,     0,     0,     0,     0,     0,     0,    25,    24,    23,
       7,     9,    14,    15,    17,    18
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  MathParser::yypgoto_[] =
  {
        -8,    -8,    -8,    -8,    -7,     9,    10,    -8,    12,    -8
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  MathParser::yydefgoto_[] =
  {
        -1,    11,    12,    13,    14,    15,    16,    17,    18,     1
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char MathParser::yytable_ninf_ = -1;
  const unsigned char
  MathParser::yytable_[] =
  {
        19,    20,     2,    23,    24,     3,     4,     5,     6,     7,
       8,     4,     5,     6,     9,    31,    10,    27,    30,     9,
      28,    21,     4,     5,     6,     7,     8,    25,    26,     0,
       9,    29,    32,    33,    22,    34,    35
  };

  /* YYCHECK.  */
  const signed char
  MathParser::yycheck_[] =
  {
         7,     8,     0,     9,    10,     3,     4,     5,     6,     7,
       8,     4,     5,     6,    12,    22,    14,     0,    13,    12,
       3,     9,     4,     5,     6,     7,     8,     7,     8,    -1,
      12,    14,    23,    24,    11,    25,    26
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  MathParser::yystos_[] =
  {
         0,    24,     0,     3,     4,     5,     6,     7,     8,    12,
      14,    16,    17,    18,    19,    20,    21,    22,    23,    19,
      19,    23,    11,     9,    10,     7,     8,     0,     3,    14,
      13,    19,    20,    20,    21,    21
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  MathParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    59
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  MathParser::yyr1_[] =
  {
         0,    15,    16,    16,    17,    18,    18,    18,    19,    19,
      20,    20,    20,    21,    21,    21,    22,    22,    22,    23,
      24,    24,    24,    24,    24,    24
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  MathParser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     1,
       0,     2,     2,     3,     3,     3
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const MathParser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "\"end of line\"",
  "\"integer\"", "\"double\"", "\"string\"", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "POWER", "LPARENT", "RPARENT", "';'", "$accept", "constant",
  "variable", "atomExpr", "powExpr", "unaryExpr", "mulExpr", "addExpr",
  "Expr", "start", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const MathParser::rhs_number_type
  MathParser::yyrhs_[] =
  {
        24,     0,    -1,     4,    -1,     5,    -1,     6,    -1,    16,
      -1,    17,    -1,    12,    23,    13,    -1,    18,    -1,    18,
      11,    19,    -1,    19,    -1,     7,    19,    -1,     8,    19,
      -1,    20,    -1,    21,     9,    20,    -1,    21,    10,    20,
      -1,    21,    -1,    22,     7,    21,    -1,    22,     8,    21,
      -1,    22,    -1,    -1,    24,    14,    -1,    24,     3,    -1,
      24,    23,    14,    -1,    24,    23,     3,    -1,    24,    23,
       0,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  MathParser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      23,    25,    28,    31,    33,    37,    41,    43,    47,    51,
      53,    54,    57,    60,    64,    68
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  MathParser::yyrline_[] =
  {
         0,    97,    97,    98,   101,   112,   113,   114,   117,   118,
     121,   122,   123,   126,   127,   128,   131,   132,   133,   136,
     144,   146,   147,   148,   149,   150
  };

  // Print the state stack on the debug stream.
  void
  MathParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  MathParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  MathParser::token_number_type
  MathParser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    14,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int MathParser::yyeof_ = 0;
  const int MathParser::yylast_ = 36;
  const int MathParser::yynnts_ = 10;
  const int MathParser::yyempty_ = -2;
  const int MathParser::yyfinal_ = 2;
  const int MathParser::yyterror_ = 1;
  const int MathParser::yyerrcode_ = 256;
  const int MathParser::yyntokens_ = 15;

  const unsigned int MathParser::yyuser_token_number_max_ = 268;
  const MathParser::token_number_type MathParser::yyundef_token_ = 2;


} // derivative
/* Line 1141 of lalr1.cc  */
#line 1216 "math_parser.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 155 "math_parser.y"


/***** Additional Code *****/

void derivative::MathParser::error(const MathParser::location_type &l,
                                   const std::string &m)
{
    driver.error(l, m);
}