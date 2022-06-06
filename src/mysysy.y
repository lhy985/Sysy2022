%define parse.error verbose
%locations
%{
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct node *,int);
int yylex ();
%}

%union {
	int    type_int;
	float  type_float;
	char   type_id[32];
	struct node *ptr;
};

//  %type 定义非终结符的语义值类型
%type  <ptr> Program CompUnit Decl ConstDecl ConstDefLoop BType ConstDef ConstExpLoop  ConstInitVal ConstInitValLoop VarDecl VarDefLoop VarDef 
%type  <ptr> InitVal InitValLoop FuncDef  FuncFParams FuncFParam ExpLoop Block BlockItemLoop BlockItem Stmt LVal Exp ConstExp Number Args

//% token 定义终结符的语义值类型
%token <type_int> IntConst             //指定IntConst的语义值是type_int，由词法分析得到的数值
%token <type_id> ID RELOP INT FLOAT    //指定ID,RELOP INT FLOAT的语义值是type_id，有词法分析得到的标识符字符串
%token <type_float> FloatConst         //指定FloatConst的语义值是type_int，由词法分析得到的数值

%token VOID CONST RETURN IF ELSE FOR WHILE BREAK  CONTINUE
%token LP RP LB RB LC RC  COMMA  SEMI //用bison对该文件编译时，带参数-d，生成的exp.tab.h中给这些单词进行编码，可在lex.l中包含parser.tab.h使用这些单词种类码
%token  ASSIGNOP PLUS MINUS STAR DIV AND OR NOT  LEX_ERR

%left ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right UMINUS NOT
%nonassoc ELSE

%%
Program:      CompUnit {};
CompUnit:     Decl {}
            | FuncDef {}
            | CompUnit Decl {}
            | CompUnit FuncDef {}
            ;
Decl:         ConstDecl {}
            | VarDecl {}
            ;
ConstDecl:    CONST BType ConstDef ConstDefLoop SEMI {}
            ;
ConstDefLoop: {$$ = NULL;}
            | COMMA ConstDef ConstDefLoop {}
            ;
BType:        INT {}
            | FLOAT {}
            ;
ConstDef:     ID ConstExpLoop ASSIGNOP ConstInitVal {}
            ;
ConstExpLoop:{$$ = NULL;}
            | LB ConstExp RB ConstDefLoop { }
            ;
ConstInitVal: ConstExp {}
            | LC RC {}
            | LC ConstInitVal ConstInitValLoop RC {}
            ;
ConstInitValLoop: {$$ = NULL;}
            | COMMA ConstInitVal ConstInitValLoop {}
            ;
VarDecl: BType VarDef VarDefLoop SEMI {}
            ;
VarDefLoop: {}
            | COMMA VarDef VarDefLoop {}
            ;
VarDef:       ID ConstExpLoop {}
            | ID ConstExpLoop ASSIGNOP InitVal {}
            ;

InitVal:      Exp {}
            | LC RC {}
            | LC InitVal InitValLoop RC {}
            ;
InitValLoop: {}
            |COMMA InitVal InitValLoop {}
            ;
FuncDef:     BType ID LP RP Block {}
            |VOID  ID LP RP Block {}
            |BType ID LP FuncFParams RP Block {}
            |VOID ID LP FuncFParams RP Block {}
            ;



FuncFParams:  FuncFParam {}
            | FuncFParam COMMA FuncFParams {}
            ;

FuncFParam:   BType ID {}
            | BType ID LB RB ExpLoop {}
            ;
ExpLoop:    {}
            |LB Exp RB ExpLoop {}
            ;

Block:      LC BlockItemLoop RC {}
            ;
BlockItemLoop: {}
            | BlockItem BlockItemLoop {}
            ;
BlockItem:    Decl {}
            | Stmt {}
            ;
Stmt:         LVal ASSIGNOP Exp SEMI {}
            | Block {}
            | SEMI {}
            | Exp SEMI {}
            | IF LP Exp RP Stmt {}
            | IF LP Exp RP Stmt ELSE Stmt {}
            | WHILE LP Exp RP Stmt {}
            | BREAK SEMI {}
            | CONTINUE SEMI {}
            | RETURN SEMI {}
            | RETURN Exp SEMI {}
            | FOR LP  VarDef SEMI Exp SEMI Exp  RP Stmt {}
            ;
LVal:        ID ExpLoop {}
            ;
Exp:   Exp ASSIGNOP Exp  {}
      | Exp AND Exp {}
      | Exp OR Exp  {}   
      | Exp RELOP Exp  {}
      | Exp PLUS Exp  {} 
      | Exp MINUS Exp  {}
      | Exp STAR Exp   {}
      | Exp DIV Exp   {} 
      | LP Exp RP      {}
      | MINUS Exp %prec UMINUS    {}
      | NOT Exp       {}
      | ID LP Args RP  {}
      | ID LP RP       {}
      | ID             {}
      | Number         {}
      ;
/* ConstExp: ConstExp PLUS ConstExp  {}
        | ConstExp MINUS ConstExp {}
        | ConstExp STAR ConstExp {}
        | ConstExp DIV ConstExp {}
        | LP ConstExp RP {}
        | MINUS ConstExp %prec UMINUS {}
        | Number {}
        ; */
Number:   IntConst {}
        | FloatConst {}
        ;
Args:    Exp COMMA Args    {}
       | Exp               {}
       ;





%%

int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	