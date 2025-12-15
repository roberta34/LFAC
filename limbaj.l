%{
#include <stdio.h>
#include "limbaj.tab.h"
#include <string>
%}
%option noyywrap
%%
"int"|"float"|"string"|"bool" {yylval.Str = new std::string(yytext); return TYPE;}
"begin_program" {return BGIN;}
"end_program" {return END;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"class" {return CLASS;}
"Print" {return PRINT;}
"true" {return TRUE;}
"false" {return FALSE;}
"->" {return ASSIGN;}
"&&" {return AND;}
"||" {return OR;}
"!" {return NOT;}
"==" {return EQ;}
[a-zA-Z][a-zA-Z0-9]* {yylval.Str = new std::string(yytext); return ID;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}