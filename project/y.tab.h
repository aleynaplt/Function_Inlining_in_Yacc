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
extern YYSTYPE yylval;
