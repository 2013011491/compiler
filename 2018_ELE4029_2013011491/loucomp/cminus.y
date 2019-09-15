/****************************************************/
/* File: cminus.y                                     */
/* The TINY Yacc/Bison specification file           */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void); // added 11/2/11 to ensure no conflict with lex
static int savedNum; // for use in assign for cminus
static TokenType savedOp;

%}

%token IF ELSE WHILE RETURN INT VOID 
%token ID NUM 
%token ASSIGN EQ LT PLUS MINUS TIMES OVER LPAREN RPAREN SEMI NE LE GT GE LBRACE RBRACE LCURLY RCURLY COMMA
%token ERROR 


%% /* Grammar for CMINUS */

program     : declar_list
                 { savedTree = $1;} 
            ;

declar_list : declar_list declar
				{ YYSTYPE t = $1;
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = $2;
					$$ = $1; }
				  	else $$ = $2;
				}
            | declar { $$ = $1; }
			;

declar      : var_declar { $$ = $1; } | fun_declar { $$ = $1; }
			;

saveName    : ID 
				{ savedName = yylval; 
				  savedLineNo = lineno;
				}
			;

saveNumber  : NUM
				{ savedNum = atoi(tokenString);
				  savedLineNo = lineno;
				}
			;

var_declar  : type_spec saveName SEMI
			 	{ $$ = newStmtNode(Var_declarK);
			  	  $$->attr.name = savedName;
				  $$->lineno = lineno;
				  $$->child[0] = $1;
				}
			| type_spec saveName LBRACE saveNumber RBRACE SEMI
			    { $$ = newStmtNode(Varar_declarK);
				  $$->attr.name = savedName;
				  $$->lineno = lineno;
				  $$->child[0] = $1;
				}
			;

type_spec   : INT { $$ = newStmtNode(IntK); }
			| VOID { $$ = newStmtNode(VoidK); }
			;

fun_declar  : type_spec saveName 
			    { $$ = newStmtNode(Fun_declarK);
				  $$->attr.name = savedName;
				  $$->lineno = lineno;
				}
			  LPAREN params RPAREN comp_stmt
			    {
				  $$ = $3;
				  $$->child[0] = $1;
				  $$->child[1] = $5;
				  $$->child[2] = $7;
				}
			;

params      : param_list { $$ = $1; }
			| VOID { $$ = newStmtNode(ParamsK); }
			;

param_list  : param_list COMMA param 
				{ YYSTYPE t = $1;
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = $3;
					$$ = $1; }
				  	else $$ = $3;
				}
            | param { $$ = $1; }
			;

param       : type_spec ID 
				{ $$ = newStmtNode(SparamK);
				  $$->child[0] = $1;
				  $$->attr.name = yylval;
				  $$->lineno = lineno;
				}
			| type_spec saveName
			    { $$ = newStmtNode(AparamK);
				  $$->attr.name = savedName;
				  $$->lineno = lineno;
				}
		      LBRACE RBRACE
			    { $$ = $3;
				  $$->child[0] = $1;
				}
			;

comp_stmt   : LCURLY local_declar stmt_list RCURLY
				{ $$ = newStmtNode(CompK);
				  $$->child[0] = $2;
				  $$->child[1] = $3;
				}
			;

local_declar: local_declar var_declar
				{ YYSTYPE t = $1;
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = $2;
					$$ = $1; }
				  	else $$ = $2;
				}
			| empty
			;

stmt_list   : stmt_list stmt 
				{ YYSTYPE t = $1;
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = $2;
					$$ = $1; }
				  	else $$ = $2;
				}
			| empty
			;

stmt        : exp_stmt { $$ = $1; } | comp_stmt { $$ = $1; } 
			| selec_stmt { $$ = $1; } | iter_stmt { $$ = $1; } 
			| return_stmt { $$ = $1; }
			;

exp_stmt    : exp SEMI { $$ = $1; } | SEMI
			;

selec_stmt  : IF LPAREN exp RPAREN stmt
				{ $$ = newStmtNode(IfK);
				  $$->child[0] = $3;
				  $$->child[1] = $5;
				}
			| IF LPAREN exp RPAREN stmt ELSE stmt
				{ $$ = newStmtNode(ElseK);
				  $$->child[0] = $3;
				  $$->child[1] = $5;
				  $$->child[2] = $7;
				}
			;

iter_stmt   : WHILE LPAREN exp RPAREN stmt
				{ $$ = newStmtNode(WhileK);
				  $$->child[0] = $3;
				  $$->child[1] = $5;
				}
			;

return_stmt : RETURN SEMI
			| RETURN exp SEMI
				{ $$ = newStmtNode(ReturnK);
				  $$->child[0] = $2;
				}
			;

exp         : var ASSIGN exp
				{ $$ = newExpNode(AssignK);
				  $$->child[0] = $1;
				  $$->child[1] = $3;
				  $$->attr.op = ASSIGN;
				}
			| simple_exp { $$ = $1; }
			;

var         : ID
				{ $$ = newExpNode(IdK);
				  $$->attr.name = copyString(yylval);
				  $$->lineno = lineno;
				}
			| saveName
			  	{ $$ = newExpNode(IdK);
				  $$->attr.name = savedName;
				  $$->lineno = lineno;
				}
		      LBRACE exp RBRACE
				{ $$ = $2;
				  $$->child[0] = $4;
				}
			;

simple_exp  : addi_exp relop addi_exp 
				{ $$ = newExpNode(OpK);
				  $$->child[0] = $1;
				  $$->child[1] = $3;
				  $$->attr.op = savedOp;
				}
			| addi_exp { $$ = $1; }
			;

relop       : LE { savedOp = LE; }
			| LT { savedOp = LT; } 
			| GT { savedOp = GT; }
			| GE { savedOp = GE; }
			| EQ { savedOp = EQ; }
			| NE { savedOp = NE; }
			;

addi_exp    : addi_exp addop
				{ $$ = newExpNode(OpK);
				  $$->attr.op = savedOp;
				}
			  term
			    { $$ = $3;
				  $$->child[0] = $1;
				  $$->child[1] = $4;
				}
			| term { $$ = $1; }
			;

addop       : PLUS { savedOp = PLUS; }
			| MINUS { savedOp = MINUS; }
			;

term        : term mulop 
				{ $$ = newExpNode(OpK);
				  $$->attr.op = savedOp;
				}
			  factor
			    { $$ = $3;
				  $$->child[0] = $1;
				  $$->child[1] = $4;
				}
			| factor { $$ = $1; }
			;

mulop       : TIMES { savedOp = TIMES; } 
			| OVER { savedOp = OVER; }
			;

factor      : LPAREN exp RPAREN { $$ = $2; }
			| var { $$ = $1; } 
			| call { $$ = $1; }
			| NUM 
				{ $$ = newExpNode(ConstK);
				  $$->attr.val = atoi(tokenString);
				}
			;

call        : saveName 
				{ $$ = newExpNode(CallK);
				  $$->attr.name = savedName;
				  $$->lineno = lineno;
				}
			  LPAREN args RPAREN
				{ $$ = $2;
				  $$->child[0] = $4;
				}
			;

args        : arg_list { $$ = $1; } 
			| empty
			;

arg_list    : arg_list COMMA exp 
				{ YYSTYPE t = $1;
				  if (t != NULL)
				  { while (t->sibling != NULL)
					  t = t->sibling;
					t->sibling = $3;
					$$ = $1; }
				  	else $$ = $3;
				}
			| exp { $$ = $1; }
			;

empty       : { $$ = NULL; }
			;

%%

int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}

