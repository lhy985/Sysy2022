#ifndef SYMTABLE_H
#define SYMTABLE_H
#include "def.h"
int curlevel = 0;//当前层次
symbol cursymbol;//当前符号
symbolTable * initTable();
void push(symbolTable * tb, symbol x);
void DisplaySymTable(symbolTable * tb);
void creatSymTb(struct node *T ,symbolTable * tb, int level);
#endif