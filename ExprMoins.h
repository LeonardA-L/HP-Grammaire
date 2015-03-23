#if ! defined ( ExprMoins_H )
#define ExprMoins_H

#include "ExprBin.h"

using namespace std;

class ExprMoins : public ExprBin {

		ExprMoins() : ExprBin(){}
		double eval(){return _exprLeft->eval() - _exprRight->eval();}

};

#endif ExprMoins_H
