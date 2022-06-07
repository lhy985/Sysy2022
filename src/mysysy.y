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
extern int yylex ();
char filename[30];
%}

%union {
	int    type_int;
	float  type_float;
	char   type_id[32];
	struct node *ptr;
};

//  %type 定义非终结符的语义值类型
%type  <ptr> Program CompUnit Decl  BType VoidType VarDecl VarDefList VarDef ForArgs ForArg
%type  <ptr> InitVal InitValList FuncDef  FuncFParams FuncFParam Arrays Block  BlockItem Stmt LVal Exp  Args

//% token 定义终结符的语义值类型
%token <type_int> IntConst             //指定IntConst的语义值是type_int，由词法分析得到的数值
%token <type_id> ID RELOP INT FLOAT VOID   //指定ID,RELOP INT FLOAT VOID的语义值是type_id，有词法分析得到的标识符字符串
%token <type_float> FloatConst         //指定FloatConst的语义值是type_int，由词法分析得到的数值

%token CONST RETURN IF ELSE FOR WHILE BREAK  CONTINUE
%token LP RP LB RB LC RC  COMMA  SEMI //用bison对该文件编译时，带参数-d，生成的exp.tab.h中给这些单词进行编码，可在lex.l中包含parser.tab.h使用这些单词种类码
%token  ASSIGN ADD MINUS MUL DIV MOD AND OR NOT  SELF_ADD SELF_MINUS

%left ASSIGN
%left OR
%left AND
%left RELOP
%left ADD MINUS MOD
%left MUL DIV
%right UMINUS NOT
%left SEMI
%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE

%%
Program:      CompUnit {printf("CompUnit:\n"); display($1,3);};
CompUnit:     Decl {$$=$1;}
            | FuncDef {$$=$1;}
            | CompUnit Decl {$$=mknode(COMP_UNIT,$1,$2,NULL,yylineno);}
            | CompUnit FuncDef {$$=mknode(COMP_UNIT,$1,$2,NULL,yylineno);}
            | error SEMI  {$$=NULL; }
            ;
Decl:         CONST VarDecl {$$=$2; $$->type = CONST;}
            | VarDecl {$$=$1;}
            ;
BType:        INT {$$=mknode(INT_TYPE,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);$$->type= INT;}
            | FLOAT {$$=mknode(FLOAT_TYPE,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);$$->type= FLOAT;}
            ;
VoidType:   VOID {$$=mknode(VOID_TYPE,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);$$->type=VOID;}
            ;
VarDecl:      BType VarDef VarDefList SEMI {$$=mknode(VAR_DECL,$1,$2,$3,yylineno); }
            ;
VarDefList: {$$=NULL;}
            | COMMA VarDef VarDefList {$$=mknode(VAR_DEF_LIST,$2,$3,NULL,yylineno);}
            ;
VarDef:       ID Arrays {$$=mknode(VAR_DEF,$2,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
            | ID Arrays ASSIGN InitVal {$$=mknode(VAR_DEF,$2,$4,NULL,yylineno);strcpy($$->type_id,$1);}
            ;

InitVal:      Exp {$$=mknode(INIT_VAL,$1,NULL,NULL,yylineno);}
            | LC RC {$$=NULL;}
            | LC InitVal InitValList RC {$$=mknode(INIT_VAL_LIST,$2,$3,NULL,yylineno);}
            ;
InitValList: {$$=NULL;}
            |COMMA InitVal InitValList {$$=mknode(INIT_VAL_LIST,$2,$3,NULL,yylineno);}
            ;
FuncDef:     BType ID LP RP Block {$$=mknode(FUNC_DEF,$1,NULL,$5,yylineno);strcpy($$->type_id,$2);}
            |VoidType  ID LP RP Block {$$=mknode(FUNC_DEF,$1,NULL,$5,yylineno);strcpy($$->type_id,$2);}
            |BType ID LP FuncFParams RP Block {$$=mknode(FUNC_DEF,$1,$4,$6,yylineno);strcpy($$->type_id,$2);}
            |VoidType ID LP FuncFParams RP Block {$$=mknode(FUNC_DEF,$1,$4,$6,yylineno);strcpy($$->type_id,$2);}
            ;
FuncFParams:  FuncFParam {$$=mknode(PARAM_LIST,$1,NULL,NULL,yylineno);}
            | FuncFParam COMMA FuncFParams {$$=mknode(PARAM_LIST,$1,$3,NULL,yylineno);}
            ;

FuncFParam:   BType VarDef {$$=mknode(FUNC_PARAM,$1,$2,NULL,yylineno);}
            ;
Arrays:       {$$=NULL;}
            |LB Exp RB Arrays {$$=mknode(ARRAYS,$2,$4,NULL,yylineno);}
            ;

Block:      LC BlockItem RC {$$=mknode(BLOCK,$2,NULL,NULL,yylineno);}
            ;
BlockItem:    {$$=NULL; }
            | Stmt BlockItem{$$=mknode(BLOCK_ITEM_LIST,$1,$2,NULL,yylineno);}
            | Decl BlockItem {$$=mknode(BLOCK_ITEM_LIST,$1,$2,NULL,yylineno);}
            ;
Stmt:        Exp SEMI {$$=mknode(EXP_STMT,$1,NULL,NULL,yylineno);}
            | Block {$$=$1;}
            | SEMI {$$=NULL;}
            | IF LP Exp RP Stmt %prec LOWER_THEN_ELSE {$$=mknode(IF_THEN,$3,$5,NULL,yylineno);}
            | IF LP Exp RP Stmt ELSE Stmt {$$=mknode(IF_THEN_ELSE,$3,$5,$7,yylineno);}
            | WHILE LP Exp RP Stmt {$$=mknode(WHILE_STMT,$3,$5,NULL,yylineno);}
            | BREAK SEMI {$$=mknode(BREAK_STMT,NULL,NULL,NULL,yylineno);}
            | CONTINUE SEMI {$$=mknode(CONTINUE_STMT,NULL,NULL,NULL,yylineno);}
            | RETURN SEMI {$$=mknode(RETURN_STMT,NULL,NULL,NULL,yylineno);}
            | RETURN Exp SEMI {$$=mknode(RETURN_STMT,$2,NULL,NULL,yylineno);}
            | FOR ForArgs Stmt {$$=mknode(FOR_STMT,$2,$3,NULL,yylineno);}
            ;
ForArgs:     LP ForArg SEMI ForArg SEMI ForArg RP  {$$=mknode(FOR_ARGS,$2,$4,$6,yylineno);}
            ;
ForArg:       {$$=NULL;}  
            | Exp  {$$=$1;}
            ;
LVal:        ID Arrays {$$=mknode(LVAL,$2,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
               ;
Exp:         LVal ASSIGN Exp  {$$=mknode(ASSIGN_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"ASSIGN");}
            | Exp AND Exp {$$=mknode(AND_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"AND");}
            | Exp OR Exp  {$$=mknode(OR_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"OR");}   
            | Exp RELOP Exp  {$$=mknode(RELOP_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,$2);}
            | Exp ADD Exp  {$$=mknode(ADD_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"ADD");} 
            | Exp MINUS Exp  {$$=mknode(MINUS_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"MINUS");}
            | Exp MUL Exp   {$$=mknode(MUL_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"MUL");}
            | Exp DIV Exp   {$$=mknode(DIV_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"DIV");}
            | Exp MOD Exp     {$$=mknode(MOD_EXP,$1,$3,NULL,yylineno);strcpy($$->type_id,"MOD");}
            | LVal SELF_ADD  {$$=mknode(SELF_ADD_EXP,$1,NULL,NULL,yylineno);}
            | LVal SELF_MINUS {$$=mknode(SELF_MINUS_EXP,$1,NULL,NULL,yylineno);}
            | LP Exp RP      {$$=$2;}
            | MINUS Exp %prec UMINUS    {$$=mknode(UMINUS_EXP,$2,NULL,NULL,yylineno);strcpy($$->type_id,"UMINUS");}
            | NOT Exp       {$$=mknode(NOT_EXP,$2,NULL,NULL,yylineno);strcpy($$->type_id,"NOT");}
            | ID LP Args RP  {$$=mknode(FUNC_CALL,$3,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
            | ID LP RP       {$$=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy($$->type_id,$1);}
            | LVal             {$$=$1;}
            | IntConst {$$=mknode(INT_CONST,NULL,NULL,NULL,yylineno);$$->type_int=$1;$$->type=IntConst;}
            | FloatConst {$$=mknode(FLOAT_CONST,NULL,NULL,NULL,yylineno);$$->type_float=$1;$$->type=FloatConst;}
            ;
Args:         Exp COMMA Args    {$$=mknode(ARGS,$1,$3,NULL,yylineno);}
            | Exp               {$$=mknode(ARGS,$1,NULL,NULL,yylineno);}
            ;


%%

int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;
	/* char A[30] = "cat ";
	strcpy(A+4, argv[1]); */
	/* system(A); //打印文件内容*/
	strcpy(filename,strrchr(argv[1],'/')+1);
    /* C 库函数 char *strrchr(const char *str, int c) 在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置 */
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
	fprintf(stderr, "%s:%d ",filename, yylloc.first_line);
    // fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	