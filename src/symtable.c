#include "def.h"

symbolTable * initTable()
{
    symbolTable *symtb = (symbolTable *)malloc(sizeof(symbolTable));
    symtb->index=0;
    return symtb;
}

void push(symbolTable * tb, symbol x)
{
    tb->symbols[tb->index] = x;
    tb->index++;
    return;
}

//打印符号表
void DisplaySymTable(symbolTable * tb)
{
    printf("----------------symbol table-----------------------\n");
    printf("ndex	Name	Level	Type	Flag	Param_num\n");
    int i = 0, n = tb->index;
    while (i<n)
    {
        printf("%d %s %d %s %c %d\n",i,tb->symbols[i].name,tb->symbols[i].level,
        tb->symbols[i].type,tb->symbols[i].flag,tb->symbols[i].paramnum);
        i++;
    }
    return;
}

//遍历语法树，构建符号表
void creatSymTb(struct node *T ,symbolTable * tb, int level)
{
    
    if (T)
    {
        switch (T->kind)
        {
        case COMP_UNIT:
            break;

        case 

        
        default:
            break;
        }
    }
    
}