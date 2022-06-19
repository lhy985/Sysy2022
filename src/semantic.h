#ifndef SEMANTIC_H
#define SEMANTIC_H
#include "def.h"
void initTable();
void push(symbol x);
int semantic_Analysis(struct node *T);
#endif