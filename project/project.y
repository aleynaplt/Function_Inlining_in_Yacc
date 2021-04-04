%{
	#include <stdio.h>
	#include <iostream>
	#include <string>
	#include <map>
	using namespace std;
	#include "y.tab.h"
	extern FILE *yyin;
	extern int yylex();
	void yyerror(string s);
	extern int linenum;// use variable linenum from the lex file
	int indent = 0;
	map<string,string> defValue;
	string finalOutput;
	void printTab()
	{
		for(int i=0;i<indent;i++)
			finalOutput+="\t";
	}

%}
%union{
	char * str;
	int number;
}

%type<str> MINUSOP PLUSOP DIVIDEOP MULTOP  
%token IFRKW WHILERKW SEMICOLON OP CP OCB CCB  EQ EQSMALLER EQLARGER DEFINERSW VOIDSW INTRSW VARIABLE
%token <str> ANDOR IDENTIFIER COMP COMMA VARIABLE 
%type<str> operand condition_block  comparison_block assignment islem function_name comparison integer_assignment_list


%token<str> INTEGER
%left PLUSOP MINUSOP
%left MULTOP DIVIDEOP


%%

statements:
	statement statements 
	|
	
	;


statement:
	condition_op condition_block openCurly statements closeCurly
	{
		indent--;
		printTab();
		finalOutput+="}\n";

	}
	|
	function_definition
	|
	declaration 
	|
	assignment_rule
	| 
    function_call
	;

assignment_rule:
	VARIABLE EQ assignment SEMICOLON{
		finalOutput+=string($1)+"="+string($3)+";\n"; 
	}
	;

function_definition:
	VOIDSW function_name OP CP OCB statements CCB 
	{
		finalOutput+="\n}\n";
		//cout<<finalOutput<<endl;
	
		//cout<<"-------------"<<endl;
		defValue[string($2)]=finalOutput;	
		finalOutput="";
	}
	;
function_name:
	VARIABLE
	{
		finalOutput+="{\n"; 
	}
;
function_call:
	VARIABLE OP CP SEMICOLON 
	{	
	 finalOutput+= defValue[string($1)];
	}
	
	;
declaration:
	INTRSW integer_assignment_list SEMICOLON
	{
	
	finalOutput+="int "+string($2)+";\n" ; 
	
	}
;

integer_assignment_list:
	VARIABLE {$$=$1;}
	|
	integer_assignment_list COMMA VARIABLE{
		string combined =  string($1) + ","  + string($3) ;
		$$ = strdup(combined.c_str());
	}
	;
	
assignment:
	INTEGER	{$$=$1;}
    |
	VARIABLE  {$$=$1;}           
    |
	assignment islem assignment  
    {
		string combined =  string($1)+ string($2)  + string($3) ;
		$$ = strdup(combined.c_str());
	}       
;
islem:
	MINUSOP {$$=strdup("-");}
	|
	PLUSOP {$$=strdup("+");}
	|
	DIVIDEOP {$$=strdup("/");}
	|
	MULTOP {$$=strdup("*");}

;
condition_block:
	OP comparison_block CP
	{
		finalOutput+=string($2) + " )\n";
		finalOutput+="{\n";

	}
	;

comparison_block:
	comparison_block ANDOR comparison
	{
		string combined = string($1)+ string($2) + string($3)+" " ;
		$$ = strdup(combined.c_str());


	}
	|
	comparison{$$=$1;}
	;

comparison:
	operand COMP operand;{
		string combined =  " "+string($1)+ string($2)  + string($3)+" " ;
		$$ = strdup(combined.c_str());
	}
;
condition_op:
	IFRKW {finalOutput+="if(";}
	|
	WHILERKW {finalOutput+="while(";}
	;


operand:
	VARIABLE{$$=$1;}
	
	|
	INTEGER {$$=$1;}
	;

openCurly:
	OCB {indent++;}
	;
closeCurly:
	CCB
	;
%%
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
