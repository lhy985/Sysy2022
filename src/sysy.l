%option noyywrap
%option yylineno
/* flex生成C源代码文件lex.yy.c，其中定义了一个函数yylex()*/
/*yylineno 维护着输入文件的当前行编号*/
/*noyywrap 当扫描器遇到end-of-file 时，不会调用yywrap()*/
/*辅助定义部分*/
%{
#include "parser.tab.h"
#include "string.h"
#include "def.h"
int yycolumn=1;
#define YY_USER_ACTION    	yylloc.first_line=yylloc.last_line=yylineno; \
	yylloc.first_column=yycolumn;	yylloc.last_column=yycolumn+yyleng-1; yycolumn+=yyleng;
typedef union {
	int type_int;
	int type_float;
	char type_id[32];
	struct node *ptr;
} YYLVAL;
#define YYSTYPE YYLVAL
/*yylval记录读取的值是int类型，这样设计是让它存储多种类型*/
%}


/* yytext:存放当前被识别的词形*/
/* yyleng:存放字符串yytext的长度*/

EXP ([Ee][+-]?[0-9]+)
float (([0-9]*\.[0-9]+|[0-9]+\.){EXP}?[fF]?)|[0-9]+{EXP}[fF]?
MultiLineComment "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"
SingleLineComment "//".*$
Invalid [0-9a-zA-Z]+
id [A-Z_a-z][A-Z_a-z0-9]*
int ((0x|0X)[0-9a-fA-F]+)|(0[0-7]*)|([1-9][0-9]*)

/*规则部分*/
%%
{int}        {yylval.type_int=atoi(yytext); return IntConst;}
{float}      {yylval.type_float=atof(yytext); return FloatConst;}
"int"        {strcpy(yylval.type_id,  yytext);return INT;}
"float"      {strcpy(yylval.type_id,  yytext);return FLOAT;}
"void"      {return VOID; }
"const"     {return CONST; }
"return"    {return RETURN; }
"if"        {return IF; }
"else"      {return ELSE; }
"for"       {return FOR; }
"while"     {return WHILE; }
"break"     {return BREAK; }
"continue"  {return CONTINUE; }
{id}       {strcpy(yylval.type_id,  yytext); return ID;/*由于关键字的形式也符合表示符的规则，所以把关键字的处理全部放在标识符的前面，优先识别*/}

"("			{return LP;}
")"			{return RP;}
"["         { return LB; }
"]"         { return RB; }
"{"			{return LC;}
"}"			{return RC;}
","			{return COMMA;}
";"			{return SEMI;}
">"|"<"|">="|"<="|"=="|"!=" {strcpy(yylval.type_id, yytext);;return RELOP;}
"="			{return ASSIGNOP;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return STAR;}
"/"			{return DIV;}
"&&"         {return AND;}
"||"            {return OR;}
"!"			{return NOT;}

[\n]           {yycolumn=1;}   
[ \n\r\t]+         {}   
{MultiLineComment} {}
{SingleLineComment} {}
{Invalid} {printf("Lexical error - line %d : %s\n",yylineno,yytext);return LEX_ERR;}
.		{printf("Error type A :Mysterious character \"%s\"\n\t at Line %d\n",yytext,yylineno);}
%%




