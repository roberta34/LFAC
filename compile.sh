<<<<<<< HEAD
#!/bin/bash

=======
>>>>>>> 6b12b73 (Modificari carina)
echo "compiling $1"
rm -f lex.yy.c
rm -f $1.tab.c $1.tab.h
rm -f $1
bison -d $1.y
lex $1.l
<<<<<<< HEAD
g++ lex.yy.c $1.tab.c -o $1
=======
g++ lex.yy.c $1.tab.c symbol_table.cpp ASTnode.cpp -o $1
>>>>>>> 6b12b73 (Modificari carina)
