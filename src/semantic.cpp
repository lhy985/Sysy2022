 /* 静态语义分析程序 */
#include "semantic.h"
#include <cstring>
#define FUN 400
#define POINTER 401
#define ERROR 402
int curlevel = 0;//当前层次
symbol cursymbol;//当前符号
symbolTable tb;//全局符号表
extern char filename[30];
int flag = 0;
int return_type;
int fun_type;
int loop_num = 0;
char ts[33];


//将符号压入符号表
void push(symbol x)
{
    tb.symbols[tb.index] = x;
    tb.index++;
    return;
}

void initTable()
{
    tb.index = 0;
    strcpy(cursymbol.name,"putint");
    cursymbol.dimen = 0;
    cursymbol.flag = 'F';
    cursymbol.level = 0;
    cursymbol.paramnum = 1;
    cursymbol.type = "void(int)";
    push(cursymbol);
    return;
}


void checksymtb(int lineNo)
{
    int i = 0;
    symbol x = tb.symbols[tb.index-1];
    for ( i = 0; i < tb.index-1; i++)
    {
        if (strcmp(tb.symbols[i].name,x.name)==0 && tb.symbols[i].level == x.level)
        {
            if (tb.symbols[i].type == x.type)
            {
                printf("%s:%d redefinition of \‘%s\’\n",filename, lineNo, tb.symbols[i].name);
                tb.index--;
                break;
            }else
            {
                printf("%s:%d \‘%s\’ redeclared as different kind of symbol\n",filename, lineNo, tb.symbols[i].name);
                tb.index--;
                break;
            }
            
        }
    }
    return;
}



// void displaySymTable()
// {
//     printf("----------------symbol table-----------------------\n");
//     printf("Index	Name	Level	Type	Flag    Dime	Param_num\n");
//     printf("---------------------------------------------------\n");
//     int i = 0, n = tb.index;
//     while (i<n)
//     {
//         cout << i<< "\t" << tb.symbols[i].name <<"\t"<<tb.symbols[i].level<<"\t";
//         cout << tb.symbols[i].type <<"\t" << tb.symbols[i].flag <<"\t"<< tb.symbols[i].dimen;
// 	  if(tb.symbols[i].flag == 'F')
// 	  {
// 		cout << "\t" << tb.symbols[i].paramnum;
// 	  }
// 	cout << endl;
//         i++;
//     }
// 	printf("---------------------------------------------------\n");
//     return;
// }

//遍历语法树，构建符号表,同时静态语义分析
int semantic_Analysis(struct node *T)
{
    struct node * temp;
    int fronum;
    int exp_first;
    int exp_second;
    if (T)
    {
        switch (T->kind)
        {
        case COMP_UNIT:
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            break;
        case VAR_DECL:
            cursymbol.flag = 'V';
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            semantic_Analysis(T->ptr[2]);
            // displaySymTable();
            break;
        case INT_TYPE:
            cursymbol.type = "int";
            break;
        case FLOAT_TYPE:
            cursymbol.type = "float";
            break;
        case VOID_TYPE:
            cursymbol.type = "void";
            break;
        case VAR_DEF:
            strcpy(cursymbol.name,T->type_id);
            cursymbol.level = curlevel;
            cursymbol.dimen = 0;
            semantic_Analysis(T->ptr[0]);
            push(cursymbol);
            // displaySymTable();
            checksymtb(T->pos);
            semantic_Analysis(T->ptr[1]);
            break;
        case INIT_VAL:
            semantic_Analysis(T->ptr[0]);
            break;
        case ARRAYS:
            cursymbol.dimen++;
            while (T->ptr[1])
            {
                cursymbol.dimen++;
                T = T->ptr[1];
            }
            exp_first = semantic_Analysis(T->ptr[0]);
            exp_second = semantic_Analysis(T->ptr[1]);
            if (exp_first != INT)
            {
                printf("%s:%d array subscript is not an integer\n",filename, T->pos);
            }else
            {
                return INT;
            }
            break;
        case VAR_DEF_LIST:
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            break;
        case FUNC_DEF:
            cursymbol.flag = 'F';
            semantic_Analysis(T->ptr[0]);
            fun_type = T->ptr[0]->type;
            strcpy(cursymbol.name,T->type_id);
            cursymbol.paramnum = 0;
            if (T->ptr[1])//函数含有参数
            {
                cursymbol.type = cursymbol.type + "(";
                temp = T->ptr[1];//temp 指向PARAM_LIST节点
                if (temp->ptr[0]->ptr[0]->type == INT)
                {
                    cursymbol.type = cursymbol.type + "int";
                }else
                {
                    cursymbol.type = cursymbol.type + "float";
                }
                cursymbol.paramnum++;
                while (temp->ptr[1])
                {
                    temp = temp->ptr[1];
                    if (temp->ptr[0]->ptr[0]->type == INT)
                    {
                        cursymbol.type = cursymbol.type + ",int";
                    }else
                    {
                        cursymbol.type = cursymbol.type + ",float";
                    }
                    cursymbol.paramnum++;
                }
                cursymbol.type = cursymbol.type + ")";
            }else//函数没有形式参数
            {
                cursymbol.type = cursymbol.type + "(void)";
            }
            cursymbol.level = curlevel;
            cursymbol.dimen = 0;
            push(cursymbol);//函数名入符号表
            checksymtb(T->pos);
            // displaySymTable();
            fronum = tb.index;
            curlevel++;
            semantic_Analysis(T->ptr[1]);//函数形参入符号表
            curlevel--;
            semantic_Analysis(T->ptr[2]);//函数体入符号表
            tb.index = fronum;
            // displaySymTable();
            break;
        case PARAM_LIST:
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            break;
        case FUNC_PARAM:
            semantic_Analysis(T->ptr[0]);
            strcpy(cursymbol.name,T->type_id);
            cursymbol.level = curlevel;
            cursymbol.flag = 'P';
            cursymbol.dimen = 0;
            semantic_Analysis(T->ptr[1]);
            push(cursymbol);
            checksymtb(T->pos);
            // displaySymTable();
            break;
        case BLOCK:
            curlevel++;
            semantic_Analysis(T->ptr[0]);
            curlevel--;
            break;
        case BLOCK_ITEM_LIST:
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            break;
        case EXP_STMT:
        case SELF_ADD_EXP:
        case SELF_MINUS_EXP:
        case UMINUS_EXP:
        case NOT_EXP:
            semantic_Analysis(T->ptr[0]);
            break;
        case LVAL:
            flag = 0;
            semantic_Analysis(T->ptr[0]);
            // displaySymTable();
            for (int i = tb.index -1; i >= 0; i--)
            {
                if (strcmp(T->type_id,tb.symbols[i].name) == 0)//找到变量
                {
                    flag = 1;
                    if (tb.symbols[i].flag == 'F')
                    {
                        // printf("%s:FUN\n",tb.symbols[i].name);
                        return FUN;
                    }else //变量
                    {
                         int x = 0;
                         temp = T->ptr[0];
                         while (temp)
                         {
                             x++;
                             temp = temp->ptr[1];
                         }
                         if (x == tb.symbols[i].dimen)
                         {
                             if(tb.symbols[i].type == "int")
                                {
                                    // printf("%s:INT\n",tb.symbols[i].name);
                                    return INT;
                                }else
                                {
                                    // printf("%s:FLOAT\n",tb.symbols[i].name);
                                    return FLOAT;
                                    
                                }
                         }else
                         {
                            if (tb.symbols[i].dimen == 0)
                            {
                                 printf("%s:%d subscripted value is not an array\n",filename, T->pos);
                            }
                            
                            //  printf("%s:POINTER\n",tb.symbols[i].name);
                             return POINTER;
                         }       
                    }
                }
            }
            if (!flag)//没有被定义
            {
                printf("%s:%d \‘%s\’ undeclared\n",filename, T->pos, T->type_id);
                strcpy(cursymbol.name ,T->type_id);
                cursymbol.flag = 'V';
                cursymbol.level = curlevel;
                cursymbol.type = "float";
                push(cursymbol);
				return FLOAT;
            }
            break;
        case ASSIGN_EXP:
            exp_first = semantic_Analysis(T->ptr[0]);
            exp_second = semantic_Analysis(T->ptr[1]);
            if (exp_first == POINTER)
            {
                printf("%s:%d assignment to expression with array type\n",filename, T->pos);
            }else if (exp_first == FUN)
            {
                printf("%s:%d lvalue required as left operand of assignment\n",filename, T->pos);
            }            
            if (exp_first == exp_second)
            {
                return exp_first;
            }
            break;

        case AND_EXP:
        case OR_EXP:
        case RELOP_EXP:
                break;
        case ADD_EXP:
        case MINUS_EXP:
        case MUL_EXP:
        case DIV_EXP:
            exp_first = semantic_Analysis(T->ptr[0]);
            exp_second = semantic_Analysis(T->ptr[1]);
            if (exp_first == INT)
            {
                if (exp_second == INT)
                {
                    return INT;
                }else if (exp_second == FLOAT)
                {
                    return FLOAT;
                }else
                {
                    printf("%s:%d invalid operands to binary operator %s\n",filename, T->pos, T->type_id);
                    return ERROR;
                }
                 
            }else if (exp_first == FLOAT )
            {
                if (exp_second == INT)
                {
                    return FLOAT;
                }else if (exp_second == FLOAT)
                {
                    return FLOAT;
                }else
                {
                    printf("%s:%d invalid operands to binary operator %s\n",filename, T->pos, T->type_id);
                    return ERROR;
                }
            }else
            {
                printf("%s:%d invalid operands to binary operator %s\n",filename, T->pos, T->type_id);
                return ERROR;
            }
            

        case MOD_EXP:
                break;
        case ARGS:
            semantic_Analysis(T->ptr[0]);
            semantic_Analysis(T->ptr[1]);
            break;
        case INT_CONST: return INT; break;
        case FLOAT_CONST: return FLOAT; break;
        case RETURN_STMT:
            return_type = semantic_Analysis(T->ptr[0]);
            if (fun_type == VOID)
            {
                strcpy(ts,"void");
            }else if(fun_type == INT)
            {
                strcpy(ts,"int");
            }
            else{
                strcpy(ts,"float");
            }
            if (return_type != fun_type)
            {
                printf("%s:%d \‘return\’ with a value, in function returning %s\n",filename, T->pos,ts);
            }
            break;
        case WHILE_STMT:
        case FOR_STMT:
                fronum = tb.index;
                loop_num ++;
                semantic_Analysis(T->ptr[1]);
			    tb.index = fronum;
                loop_num --;
                break;
        case CONTINUE_STMT:
                if (loop_num <= 0)
                {
                    printf("%s:%d continue statement not within a loop\n",filename, T->pos);
                }
                break;
        case BREAK_STMT:
                if (loop_num <= 0)
                {
                    printf("%s:%d break statement not within a loop\n",filename, T->pos);
                }
                break;
        case IF_THEN:
                fronum = tb.index;
                semantic_Analysis(T->ptr[1]);
			    tb.index = fronum;
                break;
        case IF_THEN_ELSE:
                semantic_Analysis(T->ptr[0]);
                semantic_Analysis(T->ptr[1]);
                semantic_Analysis(T->ptr[2]);
                break;
        case FUNC_CALL:
                flag = 0;
                // printf("call %s\n",T->type_id);
                for (int i = tb.index - 1; i >= 0; i--)
                {
                    if (strcmp(T->type_id, tb.symbols[i].name) == 0)//找到函数
                    {
                        // printf("call %s",T->type_id);
                        flag = 1;
                        if(tb.symbols[i].flag != 'F')
                        {
                            printf("%s:%d \‘%s\’ is not a function\n",filename, T->pos, T->type_id);
                            break;
                        }
                        int x = 0;
                        temp = T->ptr[0];
                        while (temp)
                        {
                            x++;
                            temp = temp->ptr[1];
                        }
                        
                        if (x > tb.symbols[i].paramnum)
                        {
                            printf("%s:%d too many arguments to function \‘%s\’\n",filename, T->pos, T->type_id);
                        }else if(x < tb.symbols[i].paramnum)
                        {
                            printf("%s:%d too few arguments to function \‘%s\’\n",filename, T->pos, T->type_id);
                        }
                        break;
                    }
                    
                }
                if (flag  == 0)
                {
                    printf("%s:%d \‘%s\’ undeclared\n",filename, T->pos, T->type_id);
                }
                return FLOAT;
                
            break;
        default:
            break;
        }
    }
    return VOID;
}