#ifndef SEMANTIC_H
#define SEMANTIC_H
#include "def.h"
#define FUN 400
#define POINTER 401
#define ERROR 402
void initTable();
void push(symbol x);
int semantic_Analysis(struct node *T);
#endif