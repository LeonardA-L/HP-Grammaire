#include "ExprParenthesis.h"
#include <iostream>

using namespace std;

double ExprParenthesis::eval()
{
	return e->eval();
}


void ExprParenthesis::print()
{
	cout << " ( ";
	e->print();
	cout << " ) ";
}

E* ExprParenthesis::optimise(bool hasPriority)
{
	E* newExpr = e->optimise(false);
	
	if(newExpr == NULL){	// No optimisation
		return NULL;
	}

	if(shouldDelete(e)) {
		delete e;
	}
	int type = (int)(*newExpr);
	if(type == Symbole::ID
		|| type == Symbole::VAL
		|| type == Symbole::EXPR_PAR
		|| type == Symbole::EXPR_MULT
		|| type == Symbole::EXPR_DIV
		|| !hasPriority)
	{
		e = NULL;
		return newExpr;
	} else {
		e = newExpr;		
		return NULL;
	}
}

ExprParenthesis::~ExprParenthesis(){
	if(shouldDelete(e)) {
		delete e;
	}
}


