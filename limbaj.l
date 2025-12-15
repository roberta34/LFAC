%{
#include <stdio.h>
#include <stdlib.h>
#include "limbaj.tab.h"
#include <string>
%}


%option noyywrap

INT_NUMBER (0|[1-9][0-9]*)
FLOAT_NUMBER [0-9]+\.[0-9]+
STRING_LIT \"([^\\\"]|\\.)*\"

%%
"int"|"float"|"string"|"bool" {yylval.Str = new std::string(yytext); return TYPE;}
"begin_program" {return BGIN;}
"end_program" {return END;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"class" {return CLASS;}
"private" {return PRIVATE;}
"public" {return PUBLIC;}
"protected" {return PROTECTED;}
"Print" {return PRINT;}
"true" {return TRUE;}
"false" {return FALSE;}
"=" {return ASSIGN;}
"&&" {return AND;}  
"||" {return OR;}
"!" {return NOT;}
"==" {return EQ;}
"<>" {return NEQ;}
"<=" {return LE;}
">=" {return GE;}
"<" {return LT;}
">" {return GT;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"." {return DOT;}
"," {return COMMA;}
"(" {return LEFTP;}
")" {return RIGHTP;}
"{" {return LEFTB;}
"}" {return RIGHTB;}

{FLOAT_NUMBER} 
{
    yylval.Float=(float)atof(yytext);
    return FLOAT_NR;
}
{INT_NUMBER}
{
    yylval.Int=(int)atoi(yytext);
    return INT_NR;
}

{STRING_LIT}
{
    yylval.Str=new string(yytext);
    return STRING_S;
}

[a-zA-Z][a-zA-Z0-9]* {yylval.Str = new std::string(yytext); return ID;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
%%