%{
#include <stdio.h>
#include "limbaj.tab.h"
#include <string>
%}


%option noyywrap

INT_NUMBER [1-9][0-9]*
FLOAT_NUMBER [0-9]+\.[0-9]+
STRING_LIT \"([^\\\"]|\\.)*\"

%%
"int"|"float"|"string"|"bool" {yylval.Str = new std::string(yytext); return TYPE;}
"begin_program" {return BGIN;}
"end_program" {return END;}
"if" {return IF;}
"while" {return WHILE;}
"class" {return CLASS;}
"print" {return PRINT;}
"true" {return TRUE;}
"false" {return FALSE;}
"=" {return ASSIGN;}
"&&" {return AND;}
"||" {return OR;}
"!" {return NOT;}
"==" {return EQ;}
"!=" {return NEQ;}
"<=" {return LE;}
">=" {return GE;}
"<" {return LT;}
">" {return GT;}

{FLOAT_NUMBER} 
{
    yylval.Str= new string(yytext);
    return FLOAT_NR;
}
{INT_NUMBER}
{
    yylval.Int=atoi(yytext);
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

 