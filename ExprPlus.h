#if ! defined ( ExprPlus_H )
#define ExprPlus_H

#include "ExprBin.h"

using namespace std;

class ExprPlus : public ExprBin {
	
	ExprPlus() : ExprBin(){}
	double eval(map<Id,Val> variables){return _exprLeft->eval() + _exprRight->eval()}


};

#endif ExprPlus_H
