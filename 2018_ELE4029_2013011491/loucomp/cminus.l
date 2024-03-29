/****************************************************/
/* File: tiny.l_copy                                */
/* Lex specification for TINY                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

%{
#include "globals.h"
#include "util.h"
#include "scan.h"

/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%

"if"            {return IF;}
"else"          {return ELSE;}
"int"			{return INT;}
"return"		{return RETURN;}
"void"			{return VOID;}
"while"			{return WHILE;}
"="	            {return ASSIGN;}
"=="            {return EQ;}
"!="			{return NE;}
"<"             {return LT;}
"<="			{return LE;}
">"				{return GT;}
">="			{return GE;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return OVER;}
"("             {return LPAREN;}
")"             {return RPAREN;}
"{"				{return LCURLY;}
"}"				{return RCURLY;}
"["				{return LBRACE;}
"]"				{return RBRACE;}
";"             {return SEMI;}
","				{return COMMA;}
{number}        {return NUM;}
{identifier}    {yylval = copyString(yytext); return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
"/*"            { char c;
                  do
                  { c = input();
                    if (c == EOF) break;
                    if (c == '\n') lineno++;
					if (c == '*')
					{
						c = input();
						if(c == '/') break;
					}
                  }while(1);

                }
.               {return ERROR;}

%%

TokenType getToken(void)
{ static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime)
  { firstTime = FALSE;
    lineno++;
    yyin = source;
    yyout = listing;
  }
  currentToken = yylex();
  strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan) {
    fprintf(listing,"\t%d: ",lineno);
    printToken(currentToken,tokenString);
  }
  return currentToken;
}

