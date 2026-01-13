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
<<<<<<< HEAD
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
=======
"integer"|"float"|"text"|"bool"|"void" {yylval.Str = new std::string(yytext); return TYPE;}
"begin_program" {return BPROGRAM;}
"end_program" {return EPROGRAM;}
"begin_main" {return BMAIN;}
"end_main" {return EMAIN;}
"<-" {return ASSIGN;}
"if" {return BIF;}
"then" {return THEN;}
"else" {return ELSE;}
"endif" {return EIF;}
"while" {return BWHILE;}
"do" {return DO;}
"endwhile" {return EWHILE;}
"for" {return BFOR;}
"from" {return FROM;}
"to" {return TO;}
"endfor" {return EFOR;}
"initialize" {return INITIALIZE;}
"true" {return TRUE;}
"false" {return FALSE;}
"and" {return AND;}  
"or" {return OR;}
"not" {return NOT;}
>>>>>>> 6b12b73 (Modificari carina)
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
<<<<<<< HEAD
=======
"begin_class" {return BCLASS;}
"end_class" {return ECLASS;}
"private" {return PRIVATE;}
"public" {return PUBLIC;}
"protected" {return PROTECTED;}
"new" {return NEW; }
"return" {return RETURN; }
"Print" {return PRINT;}
>>>>>>> 6b12b73 (Modificari carina)
"." {return DOT;}
"," {return COMMA;}
"(" {return LEFTP;}
")" {return RIGHTP;}
"{" {return LEFTB;}
"}" {return RIGHTB;}

{FLOAT_NUMBER} {
    yylval.Float=(float)atof(yytext);
<<<<<<< HEAD
    return FLOAT_NR;
=======
   return FLOAT_NR;
>>>>>>> 6b12b73 (Modificari carina)
}
{INT_NUMBER} {
    yylval.Int=(int)atoi(yytext);
    return INT_NR;
}

{STRING_LIT} {
<<<<<<< HEAD
    yylval.Str=new string(yytext);
=======
    yylval.Str=new std::string(yytext);
>>>>>>> 6b12b73 (Modificari carina)
    return STRING_S;
}

[a-zA-Z][a-zA-Z0-9]* {yylval.Str = new std::string(yytext); return ID;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
%%