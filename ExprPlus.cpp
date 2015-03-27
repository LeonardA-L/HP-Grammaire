#include "ExprPlus.h"
#include <iostream>

using namespace std;

double ExprPlus::eval()
{
	return _exprLeft->eval() + _exprRight->eval();
}


void ExprPlus::print()
{
	_exprLeft->print();
	cout << " + ";
	_exprRight->print();
}
