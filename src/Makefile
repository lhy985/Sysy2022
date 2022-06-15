parser: parser.tab.c ast.c lex.yy.c symtable.c
	gcc parser.tab.c ast.c lex.yy.c  symtable.c -o parser 
parser.tab.c: mysysy.y 
	bison -d mysysy.y  -o parser.tab.c
lex.yy.c: sysy.l 
	flex sysy.l	