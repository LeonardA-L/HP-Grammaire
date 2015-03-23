#if ! defined ( ExprMult_H )
#define ExprMult_H

#include "ExprBin.h"

using namespace std;

class ExprMult : public ExprBin {
	
		ExprMult() : ExprBin(){}
		double eval(){return _exprLeft->eval() * _exprRight->eval();}

};

#endif ExprMult_H
