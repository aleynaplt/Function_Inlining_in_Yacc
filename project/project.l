digit	[0-9]
letter	[A-Za-z]
%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
  #include <iostream>
  using namespace std;

  int linenum=1;
%}
%%
"+" return PLUSOP;
"-" return MINUSOP;
"*" return MULTOP;
"/" return DIVIDEOP;
"," return COMMA;
"=" return EQ;
"int" return INTRSW;
"void" return VOIDSW;
"if"	return IFRKW;
"while"	return WHILERKW;
"#define" return DEFINERSW;
";"	return SEMICOLON;
"(" return OP;
")" return CP;
"{" return OCB;
"}" return CCB;
 
[a-z]([a-z]|[0-9])*	{yylval.str =strdup(yytext); return VARIABLE;}
"||"|"&&" { yylval.str=strdup(yytext); return ANDOR;}
"<"|">"|"<="|">="|"=="|"!="|"=<"|"=>"|"=" { yylval.str=strdup(yytext); return COMP;}


{letter}({letter}|{digit})*	{ yylval.str=strdup(yytext); return IDENTIFIER;}
[0-9]+	{yylval.str=strdup(yytext); return INTEGER;}
\n	{linenum++;}
[ \t]+
%%
