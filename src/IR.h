#ifndef IR_H
#define IR_H
#include "def.h"
#define CHAR_CONST 500
#define GOTO 501
#define LABEL 502
struct codenode* work(struct node *T);
void displaycode(struct codenode* h);
#endif