#include "def.h"
void display_funparam(struct node *T);
struct node * mknode(enum node_kind kind,struct node *first,struct node *second, struct node *third,int pos ) {
  struct node *T=(struct node *)malloc(sizeof(struct node));
  T->kind=kind;
  T->ptr[0]=first;
  T->ptr[1]=second;
  T->ptr[2]=third;
  T->pos=pos;//行号
  return T;
}
void display(struct node *T,int indent)  {
    int i=1;
    struct node *T0;
    if(T)
    {
      switch (T->kind)
      {
      case COMP_UNIT: display(T->ptr[0],indent);//显示可编程单元
                      display(T->ptr[1],indent);//显示其他可编程单元列表
                      break;
      case VAR_DECL:
                      if (T->type == CONST)
                      {
                        printf("%*c常量声明：\n",indent,' ');
                        display(T->ptr[0],indent+3);
                        display(T->ptr[1],indent+3);
                        display(T->ptr[2],indent);

                      }else
                      {
                        printf("%*c变量声明：\n",indent,' ');
                        display(T->ptr[0],indent+3);
                        display(T->ptr[1],indent+3);
                        display(T->ptr[2],indent+3);
                      }
                      break;
      case VAR_DEF_LIST:
                      display(T->ptr[0],indent);
                      while (T->ptr[1])
                      {
                        T = T ->ptr[1];
                        display(T->ptr[0],indent);
                      }
                      
                      break;
      case VAR_DEF:   
                    printf("%*c变量：%s\n",indent,' ',T->type_id);  
                    display(T->ptr[0],indent+3);
                     if (T->ptr[1]) {
                        printf("%*c它的初值:\n",indent+3,' ');
                        display(T->ptr[1], indent+6);  //表达式初值
                        }
                  break;
      case INIT_VAL_LIST:
                      printf("%*c初始化：\n",indent,' ');
                      display(T->ptr[0],indent+3);
                      while (T->ptr[1])
                      {
                        T = T ->ptr[1];
                        display(T->ptr[0],indent+3);
                      }
                      break;
      case INIT_VAL:   
                      printf("%*c初始值：\n",indent,' ');
                      display(T->ptr[0],indent+3);
                      break;
      case INT_TYPE:
      case FLOAT_TYPE:   
      case VOID_TYPE: printf("%*c类型： %s\n",indent,' ',T->type_id);
                      break;
      

      case FUNC_DEF:  printf("%*c函数定义：\n",indent,' ');
                      printf("%*c函数返回类型：%s\n",indent+3,' ',(T->ptr[0])->type_id);  //显示函数返回类型
                      printf("%*c函数名: %s\n",indent+3,' ',T->type_id);
                      if (T->ptr[1])
                      {
                        display(T->ptr[1],indent+3);//显示函数名和参数
                      }
                      else
                      {
                        printf("%*c函数无参数\n",indent+3,' ');
                      }
                      display(T->ptr[2],indent+3);      //显示函数体
                      break;
      case PARAM_LIST: printf("%*c函数参数：",indent,' ');
                      display_funparam(T->ptr[0]);
                      while (T->ptr[1])
                      {
                        printf(", ");
                        T = T->ptr[1];
                        display_funparam(T->ptr[0]);
                      }
                      printf("\n");
                      break;
      case BLOCK:     printf("%*c过程块：\n",indent,' ');
                      display(T->ptr[0],indent+3);
                      break;
      case BLOCK_ITEM_LIST:
                      display(T->ptr[0],indent+3);//显示语句块
                      while (T->ptr[1])
                      {
                        T = T->ptr[1];
                        display(T->ptr[0],indent+3);
                      }
                      break;
      case EXP_STMT:
                    printf("%*c表达式语句：\n",indent,' ');
                    display(T->ptr[0],indent+3);
                    break;
      case IF_THEN:
                    printf("%*c条件语句(IF_THEN)：\n", indent, ' ');
                    printf("%*c条件：\n", indent + 3, ' ');
                    display(T->ptr[0], indent + 6); //显示条件
                    printf("%*cIF子句：\n", indent + 3, ' ');
                    display(T->ptr[1], indent + 6); //显示if子句
                    break;
      case IF_THEN_ELSE:
                    printf("%*c条件语句(IF_THEN_ELSE)：\n", indent, ' ');
                    printf("%*c条件：\n", indent + 3, ' ');
                    display(T->ptr[0], indent + 6); //显示条件
                    printf("%*cIF子句：\n", indent + 3, ' ');
                    display(T->ptr[1], indent + 6); //显示if子句
                    printf("%*cELSE子句：\n", indent + 3, ' ');
                    display(T->ptr[2], indent + 6); //显示else子句
                    break;
      case WHILE_STMT:
                    printf("%*c循环语句：\n",indent,' ');
                    printf("%*c循环条件：\n",indent+3,' ');
                    display(T->ptr[0],indent+6);      //显示循环条件
                    printf("%*c循环体：\n",indent+3,' ');
                    display(T->ptr[1],indent+6);      //显示循环体
                    break;
      case FOR_STMT:
                    printf("%*cfor 循环语句: \n",indent,' ');
                    display(T->ptr[0], indent+3);
                    printf("%*c循环体: \n",indent+3,' ');
                    display(T->ptr[1], indent+6);
                    break;
      case BREAK_STMT: 
                    printf("%*c打断语句\n",indent,' ');
                    break;
      case CONTINUE_STMT:
                    printf("%*c继续语句\n",indent,' ');
                    break;
      case FOR_ARGS:
                    printf("%*cfor 循环起始表达式: \n",indent,' ');
                    if (T->ptr[0]) {
                      display(T->ptr[0], indent+3);
                    } else {
	                    printf("%*c无\n",indent+3,' ');
                    }
                    printf("%*cfor 循环条件表达式: \n",indent,' ');
                    if (T->ptr[1]) {
                      display(T->ptr[1], indent+3);
                    } else {
	                    printf("%*c无\n",indent+3,' ');
                    }
                    printf("%*cfor 循环第三表达式: \n",indent,' ');
                    if (T->ptr[2]) {
                      display(T->ptr[2], indent+3);
                    } else {
	                    printf("%*c无\n",indent+3,' ');
                    }
                    break;
      case RETURN_STMT:
                    if (T->ptr[0]) {
                      printf("%*c返回语句：\n",indent,' ');
                      display(T->ptr[0], indent+3);
                    } else {
                      printf("%*c空返回语句\n",indent,' ');
                    }
                    break;
      case LVAL:
                    printf("%*c变量：%s\n",indent,' ',T->type_id);
                    if (T->ptr[1])
                    {
                      /* code */
                    }

                    // display_array;
                    break;
      case INT_CONST:
                    printf("%*cINT：%d\n", indent, ' ', T->type_int);
      break;
      case FLOAT_CONST:
                    printf("%*cFLAOT：%f\n", indent, ' ', T->type_float);
      break; 
      case ASSIGN_EXP:
      case AND_EXP:
      case OR_EXP:
      case RELOP_EXP:
      case ADD_EXP:
      case MINUS_EXP:
      case MUL_EXP:
      case DIV_EXP:
      case MOD_EXP:
                    printf("%*c%s\n", indent, ' ', T->type_id);
                    display(T->ptr[0], indent + 3);
                    display(T->ptr[1], indent + 3);
                    break;
    case NOT:
    case UMINUS:
                    printf("%*c%s\n", indent, ' ', T->type_id);
                    display(T->ptr[0], indent + 3);
                    break;
    case FUNC_CALL:
                    printf("%*c函数调用：\n", indent, ' ');
                    printf("%*c函数名：%s\n", indent + 3, ' ', T->type_id);
                    display(T->ptr[0], indent + 3);
                    break;
    case ARGS:
                    i = 1;
                    while (T) { // ARGS表示实际参数表达式序列结点，其第一棵子树为其一个实际参数表达式，第二棵子树为剩下的。
                      struct node *T0 = T->ptr[0];
                      printf("%*c第%d个实际参数表达式：\n", indent, ' ', i++);
                      display(T0, indent + 3);
                      T = T->ptr[1];
                    }
                    break;
      //   printf("%*c第%d个实际参数表达式：\n",indent,' ',i);
      //   display(T,indent+3);
      // printf("\n");
    case ARRAYS:
                    T0 = T;
                    i = 1;
                    while (T0 != NULL) {
                      printf("%*c第%d维: \n", indent, ' ', i++);
                      display(T0->ptr[0], indent+3);
                      T0 = T0->ptr[1];
                    }
      break;
      default:
        break;
      }
    }
}

void display_funparam(struct node *T)
{
    printf("%s %s" ,T->ptr[0]->type_id,T->ptr[1]->type_id);
}





