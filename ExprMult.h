#if ! defined ( ExprMult_H )
#define ExprMult_H

#include "ExprBin.h"

using namespace std;

class ExprMult : public ExprBin {
	
		ExprMult() : ExprBin(){}
		double eval(map<Id,Val> variables){return _exprLeft->eval(variables) * _exprRight->eval(variables);}

};

#endif ExprMult_H
