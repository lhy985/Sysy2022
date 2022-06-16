parser: parser.tab.c ast.c lex.yy.c symtable.cpp
	g++ parser.tab.c ast.c lex.yy.c  symtable.cpp -o parser 
parser.tab.c: sysy.y 
	bison -d sysy.y  -o parser.tab.c
lex.yy.c: sysy.l 
	flex sysy.l	