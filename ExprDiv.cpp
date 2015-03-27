#include "ExprDiv.h"
#include <iostream>

using namespace std;

double ExprDiv::eval()
{
	return _exprLeft->eval() / _exprRight->eval();
}

void ExprDiv::print()
{
	_exprLeft->print();
	cout << " / ";
	_exprRight->print();
}

