%code requires {
  #include <string>
  #include <vector>
  using namespace std;
  #include "symbol_table.hpp"
}

%{
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "symbol_table.hpp"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
int errorCount = 0;

SymbolTable* globalScope=nullptr;
SymbolTable* currentScope=nullptr;
%}

%union {
     string* Str;
     int Int;
     float Float;
     vector<Parameter>* Params;
}


%token BPROGRAM EPROGRAM 
%token BMAIN EMAIN
%token ASSIGN 
%token BIF THEN ELSE EIF 
%token BWHILE DO EWHILE
%token BFOR FROM TO EFOR
%token INITIALIZE
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

%type<Params> list_param

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
                              currentScope->addVariable(*$2,*$1,"-");
                              delete $1;
                              delete $2;
                          }
              | TYPE ID  LEFTP list_param RIGHTP ';'
               {
                    vector<Parameter> params = *$4;

                    currentScope->addFunction(*$2, *$1, params);

                    SymbolTable* saved = currentScope;
                    currentScope = currentScope->createChild("function " + *$2);

                    for (const auto& p : params) {
                    currentScope->addVariable(p.name, p.type, "-");
                    }

                    currentScope = saved;

                    delete $1;
                    delete $2;
                    delete $4;
               }
              | BCLASS ID 
               {

                    currentScope->addClass(*$2);
                    currentScope=currentScope->createChild("class "+*$2);
               }
               LEFTB class_body RIGHTB ECLASS 
               {
                    currentScope=currentScope->getParent();
                    delete $2;
               }
           ;

list_param : TYPE ID 
               {
                    $$=new vector<Parameter>();
                    $$->push_back({*$1,*$2});
                    delete $1;
                    delete $2;
               }
            | list_param COMMA TYPE ID
               {
                    $$=$1;
                    $$->push_back({*$3,*$4});
                    delete $3;
                    delete $4;
               }
            ;
            

      
class_body : class_body class_member | class_member ;

class_member : TYPE ID ';'
               {
                    currentScope->addVariable(*$2,*$1,"-");
                    delete $1;
                    delete $2;
               }
               
              | TYPE ID LEFTP list_param RIGHTP ';'
               {
                    vector<Parameter> params=*$4;

                    currentScope->addFunction(*$2, *$1, params);

                    SymbolTable* saved=currentScope;
                    currentScope=currentScope->createChild("function "+*$2);

                    for(const auto& p : params) {
                         currentScope->addVariable(p.name, p.type, "-");
                    }
                    currentScope=saved;

                    delete $1;
                    delete $2;
                    delete $4;
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

declaration: INITIALIZE ID
          {
               currentScope->addVariable(*$2,"unknown","-");
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
          | expression AND expression
          | expression OR expression
          | NOT expression
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

     globalScope=new SymbolTable("global", nullptr);
     currentScope=globalScope;
     yyparse();
     ofstream fout("tables.txt");
     if(fout.is_open()) {
          globalScope->printAll(fout);
          fout.close();
     }

     delete globalScope;
     return (errorCount == 0) ? 0 : 1;
} 
