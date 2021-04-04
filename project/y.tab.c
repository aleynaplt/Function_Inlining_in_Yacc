/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "project.y"

	#include <stdio.h>
	#include <iostream>
	#include <string>
	#include <map>
	using namespace std;
	#include "y.tab.h"
	extern FILE *yyin;
	extern int yylex();
	void yyerror(string s);
	extern int linenum;/* use variable linenum from the lex file*/
	int indent = 0;
	map<string,string> defValue;
	string finalOutput;
	void printTab()
	{
		for(int i=0;i<indent;i++)
			finalOutput+="\t";
	}

#line 22 "project.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	char * str;
	int number;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 54 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define MINUSOP 257
#define PLUSOP 258
#define DIVIDEOP 259
#define MULTOP 260
#define IFRKW 261
#define WHILERKW 262
#define SEMICOLON 263
#define OP 264
#define CP 265
#define OCB 266
#define CCB 267
#define EQ 268
#define EQSMALLER 269
#define EQLARGER 270
#define DEFINERSW 271
#define VOIDSW 272
#define INTRSW 273
#define VARIABLE 274
#define ANDOR 275
#define IDENTIFIER 276
#define COMP 277
#define COMMA 278
#define INTEGER 279
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    9,    9,    9,    9,    9,   15,   13,    6,
   16,   14,    8,    8,    4,    4,    4,    5,    5,    5,
    5,    2,    3,    3,    7,   10,   10,    1,    1,   11,
   12,
};
static const YYINT yylen[] = {                            2,
    2,    0,    5,    1,    1,    1,    1,    4,    7,    1,
    4,    3,    1,    3,    1,    1,    3,    1,    1,    1,
    1,    3,    3,    1,    3,    1,    1,    1,    1,    1,
    1,
};
static const YYINT yydefred[] = {                         0,
   26,   27,    0,    0,    0,    0,    0,    0,    4,    5,
    6,    7,   10,    0,   13,    0,    0,    0,    1,    0,
    0,    0,   12,    0,    0,   16,   15,    0,   28,   29,
    0,    0,   24,   30,    0,    0,   14,   11,   18,   19,
   20,   21,    8,    0,    0,   22,    0,    0,    0,    0,
   25,   23,   31,    3,    0,    9,
};
static const YYINT yydgoto[] = {                          6,
   31,   21,   32,   28,   44,   14,   33,   16,    7,    8,
   35,   54,    9,   10,   11,   12,
};
static const YYINT yysindex[] = {                      -258,
    0,    0, -267, -262, -255,    0, -258, -241,    0,    0,
    0,    0,    0, -240,    0, -261, -239, -269,    0, -268,
 -233, -231,    0, -247, -227,    0,    0, -238,    0,    0,
 -242, -257,    0,    0, -258, -229,    0,    0,    0,    0,
    0,    0,    0, -269, -268,    0, -268, -226, -258, -228,
    0,    0,    0,    0, -224,    0,
};
static const YYINT yyrindex[] = {                        38,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -223,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -223, -218,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                        -7,
   -6,    0,    0,   -4,    0,    0,   -1,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 268
static const YYINT yytable[] = {                         19,
    2,   23,    1,    2,   26,   29,   13,   46,   17,   27,
   30,   15,   18,    3,    4,    5,   24,   47,   39,   40,
   41,   42,   20,   22,   43,   25,   37,   48,   39,   40,
   41,   42,   34,   36,   45,   38,   49,    2,   51,   50,
   53,   55,   56,    2,   17,   52,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    2,
};
static const YYINT yycheck[] = {                          7,
    0,  263,  261,  262,  274,  274,  274,  265,  264,  279,
  279,  274,  268,  272,  273,  274,  278,  275,  257,  258,
  259,  260,  264,  264,  263,  265,  274,   35,  257,  258,
  259,  260,  266,  265,  277,  263,  266,    0,   45,   44,
  267,   49,  267,  267,  263,   47,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  267,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#define YYUNDFTOKEN 298
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"MINUSOP","PLUSOP","DIVIDEOP",
"MULTOP","IFRKW","WHILERKW","SEMICOLON","OP","CP","OCB","CCB","EQ","EQSMALLER",
"EQLARGER","DEFINERSW","VOIDSW","INTRSW","VARIABLE","ANDOR","IDENTIFIER","COMP",
"COMMA","INTEGER",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : statements",
"statements : statement statements",
"statements :",
"statement : condition_op condition_block openCurly statements closeCurly",
"statement : function_definition",
"statement : declaration",
"statement : assignment_rule",
"statement : function_call",
"assignment_rule : VARIABLE EQ assignment SEMICOLON",
"function_definition : VOIDSW function_name OP CP OCB statements CCB",
"function_name : VARIABLE",
"function_call : VARIABLE OP CP SEMICOLON",
"declaration : INTRSW integer_assignment_list SEMICOLON",
"integer_assignment_list : VARIABLE",
"integer_assignment_list : integer_assignment_list COMMA VARIABLE",
"assignment : INTEGER",
"assignment : VARIABLE",
"assignment : assignment islem assignment",
"islem : MINUSOP",
"islem : PLUSOP",
"islem : DIVIDEOP",
"islem : MULTOP",
"condition_block : OP comparison_block CP",
"comparison_block : comparison_block ANDOR comparison",
"comparison_block : comparison",
"comparison : operand COMP operand",
"condition_op : IFRKW",
"condition_op : WHILERKW",
"operand : VARIABLE",
"operand : INTEGER",
"openCurly : OCB",
"closeCurly : CCB",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 181 "project.y"

void yyerror(string s){

		cerr<<"Error at line: "<<linenum<<endl;
}
int yywrap(){
	return 1;
}
int main(int argc, char *argv[])
{
    /* Call the lexer, then quit. */
    yyin=fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
	cout<<"void main()"<<endl;
	cout<<defValue["main"]<<endl;
	
	//cout<<finalOutput<<endl;
    return 0;
}
#line 327 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 49 "project.y"
	{
		indent--;
		printTab();
		finalOutput+="}\n";

	}
break;
case 8:
#line 66 "project.y"
	{
		finalOutput+=string(yystack.l_mark[-3].str)+"="+string(yystack.l_mark[-1].str)+";\n"; 
	}
break;
case 9:
#line 73 "project.y"
	{
		finalOutput+="\n}\n";
		/*cout<<finalOutput<<endl;*/
	
		/*cout<<"-------------"<<endl;*/
		defValue[string(yystack.l_mark[-5].str)]=finalOutput;	
		finalOutput="";
	}
break;
case 10:
#line 84 "project.y"
	{
		finalOutput+="{\n"; 
	}
break;
case 11:
#line 90 "project.y"
	{	
	 finalOutput+= defValue[string(yystack.l_mark[-3].str)];
	}
break;
case 12:
#line 97 "project.y"
	{
	
	finalOutput+="int "+string(yystack.l_mark[-1].str)+";\n" ; 
	
	}
break;
case 13:
#line 105 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 14:
#line 107 "project.y"
	{
		string combined =  string(yystack.l_mark[-2].str) + ","  + string(yystack.l_mark[0].str) ;
		yyval.str = strdup(combined.c_str());
	}
break;
case 15:
#line 114 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 16:
#line 116 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 17:
#line 119 "project.y"
	{
		string combined =  string(yystack.l_mark[-2].str)+ string(yystack.l_mark[-1].str)  + string(yystack.l_mark[0].str) ;
		yyval.str = strdup(combined.c_str());
	}
break;
case 18:
#line 125 "project.y"
	{yyval.str=strdup("-");}
break;
case 19:
#line 127 "project.y"
	{yyval.str=strdup("+");}
break;
case 20:
#line 129 "project.y"
	{yyval.str=strdup("/");}
break;
case 21:
#line 131 "project.y"
	{yyval.str=strdup("*");}
break;
case 22:
#line 136 "project.y"
	{
		finalOutput+=string(yystack.l_mark[-1].str) + " )\n";
		finalOutput+="{\n";

	}
break;
case 23:
#line 145 "project.y"
	{
		string combined = string(yystack.l_mark[-2].str)+ string(yystack.l_mark[-1].str) + string(yystack.l_mark[0].str)+" " ;
		yyval.str = strdup(combined.c_str());


	}
break;
case 24:
#line 152 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 25:
#line 156 "project.y"
	{
		string combined =  " "+string(yystack.l_mark[-2].str)+ string(yystack.l_mark[-1].str)  + string(yystack.l_mark[0].str)+" " ;
		yyval.str = strdup(combined.c_str());
	}
break;
case 26:
#line 162 "project.y"
	{finalOutput+="if(";}
break;
case 27:
#line 164 "project.y"
	{finalOutput+="while(";}
break;
case 28:
#line 169 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 29:
#line 172 "project.y"
	{yyval.str=yystack.l_mark[0].str;}
break;
case 30:
#line 176 "project.y"
	{indent++;}
break;
#line 665 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
