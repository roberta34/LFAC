%code requires {
  #include <string>
  using namespace std;
}

%{
#include <iostream>
#include <cstdlib>
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
     int Int;
     float Float;
}

//%destructor { delete $$; } <Str> 

%token BGIN END ASSIGN IF ELSE WHILE CLASS PRIVATE PUBLIC PROTECTED
%token PLUS MINUS MUL DIV DOT COMMA 
%token LEFTP RIGHTP LEFTB RIGHTB
%token PRINT TRUE FALSE
%token AND OR NOT 
%token EQ NEQ LE GE LT GT
%token<Str> ID TYPE STRING_S
%token<Int> INT_NR
%token<Float> FLOAT_NR 

%start program
%left OR 
%left AND
%right NOT
%left EQ NEQ LT LE GT GE
%left PLUS MINUS
%left MUL DIV
%right UMINUS

%%
program :  global_declarations main_block {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

global_declarations :  decl       
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
                                   delete $1;
                                   delete $2;
                              }
                          }
              | TYPE ID  LEFTP list_param RIGHTP ';'
               {
                    delete $1;
                    delete $2;
               }
              | CLASS ID LEFTB class_body RIGHTB ';'
               {
                    delete $2;
               }
           ;

list_param : param
            | list_param COMMA param 
            ;
            
param : TYPE ID 
          {
               delete $1;
               delete $2;
          }
      ; 
      
class_body : class_body class_member | class_member ;

class_member : TYPE ID ';'
               {
                    delete $1;
                    delete $2;
               }
              | TYPE ID LEFTP list_param RIGHTP ';'
               {
                    delete $1;
                    delete $2;
               }
              | acces_specifier TYPE ID ';'
               {
                    delete $2;
                    delete $3;
               }
              | acces_specifier TYPE ID LEFTP list_param RIGHTP ';'
                 {
                    delete $2;
                    delete $3;
                 }
              ;

acces_specifier: PRIVATE
                | PUBLIC
                | PROTECTED
                ;

main_block : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: assign
         | function_call 		 
         | if_statement 
         | while_statement
         | print_statement 
         ;
        
assign : ID ASSIGN expression
          {
               delete $1;
          }
        ;  

function_call: ID LEFTP call_parametres RIGHTP
               {
                    delete $1;
               }
               |ID DOT ID LEFTP call_parametres RIGHTP
               {
                    delete $1;
                    delete $3;
               }
               ;
call_parametres : expression
           | call_parametres COMMA expression
           ;

if_statement: IF LEFTP bool_expression RIGHTP LEFTB list RIGHTB
               | IF LEFTP bool_expression RIGHTP LEFTB list RIGHTB ELSE LEFTB list RIGHTB
               ;

while_statement: WHILE LEFTP bool_expression RIGHTP LEFTB list RIGHTB
               ;
          
print_statement: PRINT LEFTP expression RIGHTP;

expression: INT_NR
          | FLOAT_NR
          | STRING_S {delete $1;}
          | TRUE
          | FALSE
          | ID {delete $1;}
          | ID DOT ID
               {
                    delete $1;
                    delete $3;
               }
          | expression PLUS expression
          | expression MINUS expression
          | MINUS expression %prec UMINUS
          | expression MUL expression
          | expression DIV expression
          | LEFTP expression RIGHTP
          ;

bool_expression: expression EQ expression
               | expression NEQ expression
               | expression LT expression
               | expression LE expression
               | expression GT expression
               | expression GE expression
               | bool_expression AND bool_expression 
               | bool_expression OR bool_expression
               | NOT bool_expression
               | LEFTP bool_expression RIGHTP
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