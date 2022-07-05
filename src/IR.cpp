#include "IR.h"
#include <cstring>
#include <iostream>
using namespace std;
extern char filename[30];
struct opn opn1,opn2,result;

char* strcat0(char* s1, char* s2) {  
    static char result[10];  
    strcpy(result, s1);  
    strcat(result, s2);  
    return result;  
}
//生成别名
char* newAlias() {  
    static int no = 1;  
    char s[10]; 
    char t[10] = "v"; 
    snprintf(s, 10, "%d", no++);  
    return strcat0(t, s);  
}

//以“label+序号”形式生成一个标号；
char* newLabel() {  
    static int no = 1;  
    char s[10];  
    snprintf(s, 10, "%d", no++);
    char t[10] = "label";   
    return strcat0(t, s);  
}

//生成一临时变量,以“temp+序号”的形式组成的符号串作为别名;
char* newTemp() {  
    static int no = 1;  
    char s[10];  
    snprintf(s, 10, "%d", no++);
    char t[10] = "temp";  
    return strcat0(t, s);  
}
//生成一条TAC代码的结点组成的双向循环链表，返回头指针  
struct codenode* genIR(int op, struct opn opn1, struct opn opn2, struct opn result) {  
    struct codenode* h = (struct codenode*)malloc(sizeof(struct codenode));  
    h->op = op;  
    h->opn1 = opn1;  
    h->opn2 = opn2;  
    h->result = result;  
    h->next = h->prior = h;  
    return h;  
}
//生成一条标号语句，返回头指针  
struct codenode* genLabel(char* label) {  
    struct codenode* h = (struct codenode*)malloc(sizeof(struct codenode));  
    h->op = LABEL;  
    strcpy(h->result.id, label);  
    h->next = h->prior = h;  
    return h;  
}
//生成GOTO语句，返回头指针  
struct codenode* genGoto(char* label) {  
    struct codenode* h = (struct codenode*)malloc(sizeof(struct codenode));  
    h->op = GOTO;  
    strcpy(h->result.id, label);  
    h->next = h->prior = h;  
    return h;  
}
//合并多个中间代码的双向循环链表，首尾相连  
struct codenode* merge(int num, ...) {  
    struct codenode* h1, * h2, * p, * t1, * t2;  
    va_list ap;  
    va_start(ap, num);  
    h1 = va_arg(ap, struct codenode*);  
    while (--num > 0) {  
        h2 = va_arg(ap, struct codenode*);  
        if (h1 == NULL) h1 = h2;  
        else if (h2) {  
            t1 = h1->prior;  
            t2 = h2->prior;  
            t1->next = h2;  
            t2->next = h1;  
            h1->prior = t2;  
            h2->prior = t1;  
        }  
    }  
    va_end(ap);  
    return h1;  
}
void  displayopn(struct opn x)
{
    switch (x.kind)
    {
    case INT_CONST:
        printf("%d",x.const_char);
        break;
    case FLOAT_CONST:
        printf("%f",x.const_float);
        break;
    case CHAR_CONST:
        printf("%c",x.const_char);
        break;
    case ID:
        // printf("%s",x.id);
        break;
    default:
        break;
    }
}

void displaycode(struct codenode* h)
{
    struct codenode* head = h;
    do
    {
        switch (h->op)
        {
        case ASSIGN:
            break;
        case  ADD:
            break;
        case MINUS:
            break;
        case MUL:
            break;
        case DIV:
            break;
        case FUNC_DEF:
            // printf("FUNCTION ");
            displayopn(h->opn1);
            displayopn(h->opn2);
            displayopn(h->result);
            printf("\n");
            break;
        case FUNC_PARAM:
            break;
        case LABEL:
            break;
        case GOTO:
            break;
        case RELOP:
            break;
        case ARGS:
            break;
        case FUNC_CALL:
            break;
        case RETURN:
            break;
        default:
            break;
        }
        h = h->next;
    }while (h!= head);
    
 
    
}
struct codenode* work(struct node *T)
{
    struct codenode* curcode;
    if (T)
    {
        switch (T->kind)
        {
        case COMP_UNIT:
            return merge(2,work(T->ptr[0]),work(T->ptr[1]));
            break;
        case FUNC_DEF:
            opn1.kind = ID;
            strcpy(opn1.id,T->type_id);
            curcode = genIR(FUNC_DEF,opn1,opn2,result);
            return merge(3,curcode, work(T->ptr[1]),work(T->ptr[2]));
            break;
        case BLOCK:
            return work(T->ptr[0]);
            break;
        case BLOCK_ITEM_LIST:
            return merge(2,work(T->ptr[0]),work(T->ptr[1]));
            break;
        case EXP_STMT:
            return work(T->ptr[0]);
            break;
        case ASSIGN_EXP:
            break;
        default:
            break;
        }
        
    }
    return NULL;
    
}