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
