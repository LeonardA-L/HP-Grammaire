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

E* ExprParenthesis::optimise()
{
	int type = (int)(*e);
	if(type == Symbole::ID
		|| type == Symbole::VAL
		|| type == Symbole::EXPR_PAR
		|| type == Symbole::EXPR_MULT
		|| type == Symbole::EXPR_DIV)
	{
		return e;
	}
	return NULL;
}
