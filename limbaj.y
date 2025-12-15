%code requires {
  #include <string>
  using namespace std;
}

%{
#include <iostream>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
int errorCount = 0;
%}

%union {
     std::string* Str;
}

//%destructor { delete $$; } <Str> 

%token  BGIN END ASSIGN NR IF ELSE WHILE CLASS 
%token<Str> ID TYPE
%start program
%%
program :  global_declarations main_block {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

global_declarations : decl           
	      |  global_declarations decl    
	      ;

decl       :  TYPE ID ';' { 
                              if(!current->existsId($2)) {
                                    current->addVar($1,$2);
                                    delete $1;
                                    delete $2;
                              } else {
                                   errorCount++; 
                                   yyerror("Variable already defined");
                              }
                          }
              | TYPE ID  '(' list_param ')' ';'
              | CLASS ID '{' class_body '}' ';'
           ;

list_param : param
            | list_param ','  param 
            ;
            
param : TYPE ID 
      ; 
      
class_body : class_body class_member | ;

class_member : TYPE ID ';'
              | TYPE ID '(' list_param ')' ';'
              ;

main_block : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: assign
         | function_call 		 
         | if 
         | else 
         | while 
         ;
        
assign : ID a
call_list : NR
           | call_list ',' NR
           ;
%%
void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     yyparse();
     cout << "Variables:" <<endl;
     current->printVars();
     delete current;
} 