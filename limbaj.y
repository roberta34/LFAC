%code requires {
  #include <string>
  using namespace std;
}

%{
#include <iostream>
#include <cstdlib>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
int errorCount = 0;
%}

%union {
     string* Str;
     int Int;
     float Float;
}


%token BPROGRAM EPROGRAM 
%token BMAIN EMAIN
%token ASSIGN 
%token BIF THEN ELSE EIF 
%token BWHILE DO EWHILE
%token BFOR FROM TO EFOR
%token DECLARE
%token TRUE FALSE
%token AND OR NOT
%token EQ NEQ LE GE LT GT 
%token PLUS MINUS MUL DIV 
%token BCLASS ECLASS PRIVATE PUBLIC PROTECTED 
%token NEW RETURN 
%token DOT COMMA
%token LEFTP RIGHTP LEFTB RIGHTB
%token PRINT
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
program : BPROGRAM global_declarations main_block EPROGRAM {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

global_declarations :  decl  
	      |  global_declarations decl    
	      ;

decl       :  TYPE ID ';' { 
                              delete $1;
                              delete $2;
                          }
              | TYPE ID  LEFTP list_param RIGHTP ';'
               {
                    delete $1;
                    delete $2;
               }
              | BCLASS ID LEFTB class_body RIGHTB ECLASS 
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

main_block : BMAIN list EMAIN
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

statement: assign
         | declaration
         | function_call 		 
         | if_statement 
         | while_statement
         | for_statement
         | print_statement 
         | return_statement
         ;
     
assign : ID ASSIGN expression
          {
               delete $1;
          }
        ;  

declaration: DECLARE ID
          {
               delete $2;
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

if_statement: BIF bool_expression THEN statement EIF
               | BIF bool_expression THEN list ELSE list EIF
               ;

for_statement : BFOR ID FROM expression TO expression DO list EFOR
               {
                    delete $2;
               }          
          ;

print_statement: PRINT LEFTP expression RIGHTP;

return_statement: RETURN expression;

call_parametres : expression
           | call_parametres COMMA expression
           ;

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
          | NEW ID 
               {
                    delete $2;
               }
          | function_call
          | expression PLUS expression
          | expression MINUS expression
          | MINUS expression %prec UMINUS
          | expression MUL expression
          | expression DIV expression
          | LEFTP expression RIGHTP
          ;

while_statement: BWHILE bool_expression DO list EWHILE
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
     yyparse();
     return (errorCount == 0) ? 0 : 1;
} 
