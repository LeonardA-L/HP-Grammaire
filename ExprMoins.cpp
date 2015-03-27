#include "ExprMoins.h"
#include <iostream>

using namespace std;

double ExprMoins::eval()
{
	return _exprLeft->eval() - _exprRight->eval();
}


void ExprMoins::print()
{
	_exprLeft->print();
	cout << " - ";
	_exprRight->print();
}
