 /* 符号管理程序 */
 #include "def.h"
#include "symtable.h"
#include <cstring>
int curlevel = 0;//当前层次
symbol cursymbol;//当前符号
symbolTable tb;//全局符号表
void initTable()
{
    tb.index = 0;
    return;
}

//将符号压入符号表
void push(symbol x)
{
    tb.symbols[tb.index] = x;
    tb.index++;
    return;
}

//打印符号表
void displaySymTable()
{
    printf("----------------symbol table-----------------------\n");
    printf("Index	Name	Level	Type	Flag	Param_num\n");
    printf("---------------------------------------------------\n");
    int i = 0, n = tb.index;
    while (i<n)
    {
        cout << i<< "\t" << tb.symbols[i].name <<"\t"<<tb.symbols[i].level<<"\t";
        cout << tb.symbols[i].type <<"\t" << tb.symbols[i].flag;
	  if(tb.symbols[i].flag == 'F')
	  {
		cout << "\t" << tb.symbols[i].paramnum;
	  }
	cout << endl;
        i++;
    }
	printf("---------------------------------------------------\n");
    return;
}
/*
 @param T:抽象语法树
 @param tb:全局符号表
 @param level:当前所处层次
*/
//遍历语法树，构建符号表
void creatSymTb(struct node *T)
{
    int fronum;
    if (T)
    {
        switch (T->kind)
        {
        case COMP_UNIT:
            creatSymTb(T->ptr[0]);
            creatSymTb(T->ptr[1]);
            break;
        case VAR_DECL:
            cursymbol.flag = 'V';
            creatSymTb(T->ptr[0]);
            creatSymTb(T->ptr[1]);
            creatSymTb(T->ptr[2]);
            displaySymTable();
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
            push(cursymbol);
            break;
        case VAR_DEF_LIST:
            creatSymTb(T->ptr[0]);
            creatSymTb(T->ptr[1]);
            break;
        case FUNC_DEF:
            cursymbol.flag = 'F';
            creatSymTb(T->ptr[0]);
            strcpy(cursymbol.name,T->type_id);
            cursymbol.paramnum = 0;
            if (T->ptr[1])//函数含有参数
            {
                cursymbol.type = cursymbol.type + "(";
                struct node * temp = T->ptr[1];//temp 指向PARAM_LIST节点
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
            push(cursymbol);//函数名入符号表
            displaySymTable();
            fronum = tb.index;
            curlevel++;
            creatSymTb(T->ptr[1]);//函数形参入符号表
            curlevel--;
            creatSymTb(T->ptr[2]);//函数体入符号表
            tb.index = fronum;
            displaySymTable();
            break;
        case PARAM_LIST:
            creatSymTb(T->ptr[0]);
            creatSymTb(T->ptr[1]);//arrays待会儿处理
            break;
        case FUNC_PARAM:
            creatSymTb(T->ptr[0]);
            strcpy(cursymbol.name,T->type_id);
            cursymbol.level = curlevel;
            cursymbol.flag = 'P';
            push(cursymbol);
            displaySymTable();
            break;
        case BLOCK:
            curlevel++;
            creatSymTb(T->ptr[0]);
            curlevel--;
            break;
        case BLOCK_ITEM_LIST:
            creatSymTb(T->ptr[0]);
            creatSymTb(T->ptr[1]);
            break;
        case WHILE_STMT:
        case FOR_STMT:
        case IF_THEN:
                fronum = tb.index;
                creatSymTb(T->ptr[1]);
                if(tb.index != fronum)
                {
			tb.index = fronum;
                  displaySymTable();
                }
                break;
        case IF_THEN_ELSE:
                creatSymTb(T->ptr[1]);
                creatSymTb(T->ptr[2]);
                break;
        default:
            break;
        }
    }
    
}