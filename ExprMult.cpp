#include "ExprMult.h"
#include <iostream>

using namespace std;

double ExprMult::eval()
{
	return _exprLeft->eval() * _exprRight->eval();
}


void ExprMult::print()
{
	_exprLeft->print();
	cout << " * ";
	_exprRight->print();
}
