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

bool ExprPlus::isLeftNeutralElement(){
	return _exprLeft->eval() == 0;
}

bool ExprPlus::isRightNeutralElement(){
	return _exprRight->eval() == 0;
}
