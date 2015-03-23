#if ! defined ( ExprMoins_H )
#define ExprMoins_H

#include "ExprBin.h"

using namespace std;

class ExprMoins : public ExprBin {

		ExprMoins() : ExprBin(){}
		double eval(map<Id,Val> variables){return _exprLeft->eval(variables) - _exprRight->eval(variables);}

};

#endif ExprMoins_H
