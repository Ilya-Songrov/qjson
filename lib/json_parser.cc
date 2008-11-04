/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

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


#include "json_parser.hh"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc.  */
#line 43 "json_parser.cc"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG							\
  for (bool yydebugcond_ = yydebug_; yydebugcond_; yydebugcond_ = false)	\
    (*yycdebug_)

/* Enable debugging if requested.  */
#if YYDEBUG

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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab

namespace yy
{
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  json_parser::yytnamerr_ (const char *yystr)
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

#endif

  /// Build a parser object.
  json_parser::json_parser (JSonDriver* driver_yyarg)
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
      driver (driver_yyarg)
  {
  }

  json_parser::~json_parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  json_parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  json_parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif /* ! YYDEBUG */

  void
  json_parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  json_parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

  std::ostream&
  json_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  json_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  json_parser::debug_level_type
  json_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  json_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }


  int
  json_parser::parse ()
  {
    /// Look-ahead and look-ahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the look-ahead.
    semantic_type yylval;
    /// Location of the look-ahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


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
    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without look-ahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a look-ahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, driver);
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
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Accept?  */
    if (yyn == yyfinal_)
      goto yyacceptlab;

    /* Shift the look-ahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted unless it is eof.  */
    if (yychar != yyeof_)
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

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:
#line 70 "json_parser.yy"
    {
              driver->m_result = (yysemantic_stack_[(1) - (1)]);
              qDebug() << "json_parser - parsing finished";
            ;}
    break;

  case 3:
#line 75 "json_parser.yy"
    {(yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 4:
#line 76 "json_parser.yy"
    {(yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 5:
#line 78 "json_parser.yy"
    {
            qDebug()<< "json_parser - syntax error found, "
                    << "forcing exit";
          ;}
    break;

  case 7:
#line 84 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(3) - (2)]); ;}
    break;

  case 8:
#line 86 "json_parser.yy"
    { (yyval) = QVariant (QVariantMap()); ;}
    break;

  case 9:
#line 87 "json_parser.yy"
    {
            QVariantMap members = (yysemantic_stack_[(2) - (2)]).toMap();
            (yyval) = QVariant(members.unite ((yysemantic_stack_[(2) - (1)]).toMap()));
          ;}
    break;

  case 10:
#line 92 "json_parser.yy"
    { (yyval) = QVariant (QVariantMap()); ;}
    break;

  case 11:
#line 93 "json_parser.yy"
    {
          QVariantMap members = (yysemantic_stack_[(3) - (3)]).toMap();
          
          (yyval) = QVariant(members.unite ((yysemantic_stack_[(3) - (2)]).toMap()));
          ;}
    break;

  case 12:
#line 99 "json_parser.yy"
    {
            QVariantMap pair;
            pair.insert ((yysemantic_stack_[(3) - (1)]).toString(), QVariant((yysemantic_stack_[(3) - (3)])));
            (yyval) = QVariant (pair);
          ;}
    break;

  case 13:
#line 105 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(3) - (2)]); ;}
    break;

  case 14:
#line 107 "json_parser.yy"
    { (yyval) = QVariant (QVariantList()); ;}
    break;

  case 15:
#line 108 "json_parser.yy"
    {
          QVariantList members = (yysemantic_stack_[(2) - (2)]).toList();
          members.prepend ((yysemantic_stack_[(2) - (1)]));
          (yyval) = QVariant(members);
        ;}
    break;

  case 16:
#line 114 "json_parser.yy"
    { (yyval) = QVariant (QVariantList()); ;}
    break;

  case 17:
#line 115 "json_parser.yy"
    {
            QVariantList members = (yysemantic_stack_[(3) - (3)]).toList();
            members.prepend ((yysemantic_stack_[(3) - (2)]));
            (yyval) = QVariant(members);
          ;}
    break;

  case 18:
#line 121 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 19:
#line 122 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 20:
#line 123 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 21:
#line 124 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(1) - (1)]); ;}
    break;

  case 22:
#line 125 "json_parser.yy"
    { (yyval) = QVariant (true); ;}
    break;

  case 23:
#line 126 "json_parser.yy"
    { (yyval) = QVariant (false); ;}
    break;

  case 24:
#line 127 "json_parser.yy"
    {
          QVariant null_variant;
          (yyval) = null_variant;
        ;}
    break;

  case 25:
#line 132 "json_parser.yy"
    { (yyval) = QVariant ((yysemantic_stack_[(1) - (1)])); ;}
    break;

  case 26:
#line 133 "json_parser.yy"
    {  (yyval) = QVariant ((yysemantic_stack_[(2) - (1)]).toString().append((yysemantic_stack_[(2) - (2)]).toString())); ;}
    break;

  case 27:
#line 134 "json_parser.yy"
    {  (yyval) = QVariant ((yysemantic_stack_[(2) - (1)]).toString().append((yysemantic_stack_[(2) - (2)]).toString())); ;}
    break;

  case 28:
#line 135 "json_parser.yy"
    {
          QString value = (yysemantic_stack_[(3) - (1)]).toString();
          value += (yysemantic_stack_[(3) - (2)]).toString();
          value += (yysemantic_stack_[(3) - (3)]).toString();
          (yyval) = QVariant (value);
        ;}
    break;

  case 29:
#line 142 "json_parser.yy"
    { (yyval) = QVariant ((yysemantic_stack_[(2) - (1)]).toString().append((yysemantic_stack_[(2) - (2)]).toString())); ;}
    break;

  case 30:
#line 143 "json_parser.yy"
    { (yyval) = QVariant ((yysemantic_stack_[(3) - (3)]).toString().prepend((yysemantic_stack_[(3) - (2)]).toString().prepend("-"))); ;}
    break;

  case 31:
#line 145 "json_parser.yy"
    { (yyval) = QVariant (""); ;}
    break;

  case 32:
#line 146 "json_parser.yy"
    {
          QString digits = (yysemantic_stack_[(2) - (2)]).toString();
          digits.prepend ((yysemantic_stack_[(2) - (1)]).toString());
          (yyval) = QVariant(digits);
        ;}
    break;

  case 33:
#line 152 "json_parser.yy"
    {
          QString digits = (yysemantic_stack_[(2) - (2)]).toString();
          digits.prepend (".");
          (yyval) = QVariant(digits);
        ;}
    break;

  case 34:
#line 158 "json_parser.yy"
    { (yyval) = QVariant((yysemantic_stack_[(2) - (1)]).toString().append((yysemantic_stack_[(2) - (2)]).toString())); ;}
    break;

  case 35:
#line 160 "json_parser.yy"
    { (yyval) = (yysemantic_stack_[(3) - (2)]) ;}
    break;

  case 36:
#line 162 "json_parser.yy"
    { (yyval) = QVariant (""); ;}
    break;

  case 37:
#line 163 "json_parser.yy"
    {
                QString string = (yysemantic_stack_[(2) - (1)]).toString();
                string += (yysemantic_stack_[(2) - (2)]).toString();
                (yyval) = QVariant(string);
              ;}
    break;


    /* Line 675 of lalr1.cc.  */
#line 609 "json_parser.cc"
	default: break;
      }
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
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse look-ahead token after an
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
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
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
	if (yyn != yypact_ninf_)
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

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    if (yyn == yyfinal_)
      goto yyacceptlab;

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the look-ahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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
    if (yychar != yyeof_ && yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  json_parser::yysyntax_error_ (int yystate, int tok)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char json_parser::yypact_ninf_ = -25;
  const signed char
  json_parser::yypact_[] =
  {
         3,   -25,   -25,   -15,     0,     5,   -25,   -25,   -25,   -25,
       6,    -4,     7,    12,    15,   -25,   -25,   -25,   -25,   -25,
      21,    20,   -25,    10,   -25,   -25,    -2,   -25,   -15,   -25,
       0,    15,    15,   -25,   -25,     0,   -25,    15,    15,    17,
     -25,   -25,   -25,    -4,   -25,   -25,   -25,    20,   -25,   -25,
     -25,   -25,   -25
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  json_parser::yydefact_[] =
  {
         0,     6,     5,     8,    14,     0,     2,     3,     4,    36,
       0,    10,     0,     0,    31,    22,    23,    24,    20,    21,
       0,    16,    19,    25,    18,     1,     0,     7,     0,     9,
       0,    31,    31,    29,    13,     0,    15,    31,    31,    26,
      27,    37,    35,    10,    12,    30,    32,    16,    33,    34,
      28,    11,    17
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  json_parser::yypgoto_[] =
  {
       -25,   -25,   -25,    34,   -25,    -8,     8,    37,   -25,    -7,
     -24,   -25,   -25,    -9,   -25,    -1,    -3,   -25
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  json_parser::yydefgoto_[] =
  {
        -1,     5,     6,    18,    10,    29,    11,    19,    20,    36,
      21,    22,    23,    33,    39,    40,    24,    26
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char json_parser::yytable_ninf_ = -1;
  const unsigned char
  json_parser::yytable_[] =
  {
        12,    41,     9,     1,     2,    25,    44,     3,    28,     4,
       3,    47,     4,    13,    27,    14,    42,     9,    30,    15,
      16,    17,    45,    46,    37,    12,    38,    31,    48,    49,
      32,    34,    35,    38,     7,    51,    43,     8,    50,     0,
      52
  };

  /* YYCHECK.  */
  const signed char
  json_parser::yycheck_[] =
  {
         3,     3,    17,     0,     1,     0,    30,     7,    12,     9,
       7,    35,     9,    13,     8,    15,    18,    17,    11,    19,
      20,    21,    31,    32,    14,    28,    16,    15,    37,    38,
      15,    10,    12,    16,     0,    43,    28,     0,    39,    -1,
      47
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  json_parser::yystos_[] =
  {
         0,     0,     1,     7,     9,    23,    24,    25,    29,    17,
      26,    28,    38,    13,    15,    19,    20,    21,    25,    29,
      30,    32,    33,    34,    38,     0,    39,     8,    12,    27,
      11,    15,    15,    35,    10,    12,    31,    14,    16,    36,
      37,     3,    18,    28,    32,    35,    35,    32,    35,    35,
      37,    27,    31
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  json_parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  json_parser::yyr1_[] =
  {
         0,    22,    23,    24,    24,    24,    24,    25,    26,    26,
      27,    27,    28,    29,    30,    30,    31,    31,    32,    32,
      32,    32,    32,    32,    32,    33,    33,    33,    33,    34,
      34,    35,    35,    36,    37,    38,    39,    39
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  json_parser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     3,     0,     2,
       0,     3,     3,     3,     0,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       3,     0,     2,     2,     2,     3,     0,     2
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const json_parser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "WORD", "KEYWORD", "RELATION",
  "MODIFIER", "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE",
  "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE", "COLON", "COMMA", "MINUS",
  "DOT", "DIGIT", "E", "QUOTMARKOPEN", "QUOTMARKCLOSE", "TRUE_VAL",
  "FALSE_VAL", "NULL_VAL", "$accept", "start", "data", "object", "members",
  "r_members", "pair", "array", "values", "r_values", "value", "number",
  "int", "digits", "fract", "exp", "string", "string_arg", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const json_parser::rhs_number_type
  json_parser::yyrhs_[] =
  {
        23,     0,    -1,    24,    -1,    25,    -1,    29,    -1,     1,
      -1,     0,    -1,     7,    26,     8,    -1,    -1,    28,    27,
      -1,    -1,    12,    28,    27,    -1,    38,    11,    32,    -1,
       9,    30,    10,    -1,    -1,    32,    31,    -1,    -1,    12,
      32,    31,    -1,    38,    -1,    33,    -1,    25,    -1,    29,
      -1,    19,    -1,    20,    -1,    21,    -1,    34,    -1,    34,
      36,    -1,    34,    37,    -1,    34,    36,    37,    -1,    15,
      35,    -1,    13,    15,    35,    -1,    -1,    15,    35,    -1,
      14,    35,    -1,    16,    35,    -1,    17,    39,    18,    -1,
      -1,    39,     3,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  json_parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    17,    18,
      21,    22,    26,    30,    34,    35,    38,    39,    43,    45,
      47,    49,    51,    53,    55,    57,    59,    62,    65,    69,
      72,    76,    77,    80,    83,    86,    90,    91
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  json_parser::yyrline_[] =
  {
         0,    70,    70,    75,    76,    77,    82,    84,    86,    87,
      92,    93,    99,   105,   107,   108,   114,   115,   121,   122,
     123,   124,   125,   126,   127,   132,   133,   134,   135,   142,
     143,   145,   146,   152,   158,   160,   162,   163
  };

  // Print the state stack on the debug stream.
  void
  json_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  json_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "), ";
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  json_parser::token_number_type
  json_parser::yytranslate_ (int t)
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
      15,    16,    17,    18,    19,    20,    21
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int json_parser::yyeof_ = 0;
  const int json_parser::yylast_ = 40;
  const int json_parser::yynnts_ = 18;
  const int json_parser::yyempty_ = -2;
  const int json_parser::yyfinal_ = 25;
  const int json_parser::yyterror_ = 1;
  const int json_parser::yyerrcode_ = 256;
  const int json_parser::yyntokens_ = 22;

  const unsigned int json_parser::yyuser_token_number_max_ = 276;
  const json_parser::token_number_type json_parser::yyundef_token_ = 2;

} // namespace yy

#line 169 "json_parser.yy"


int yy::yylex(YYSTYPE *yylval, JSonDriver* driver)//, yy::location *yylloc, JSonDriver* driver)
{
  JSonScanner* scanner = driver->scanner();
  yylval->clear();
  int ret = scanner->yylex(yylval);

  char buff [50];
  snprintf (buff, 50 * sizeof (char), "%i", ret);

  qDebug() << ("json_parser::yylex - calling scanner yylval==|" + yylval->toString()
                    + "|, ret==|" + buff + "|");
  
  return ret;
}

void yy::json_parser::error (const yy::location& yyloc,
                                 const std::string& error)
{
  qDebug("json_parser::error - %s", error.c_str()) ;
  driver->setError();
}

