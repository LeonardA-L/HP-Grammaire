#if ! defined ( ExprDiv_H )
#define ExprDiv_H

#include "ExprBin.h"

using namespace std;

class ExprDiv : public ExprBin {

	public :
		ExprDiv() : ExprBin(){}
		double eval(map<Id,Val> variables){return _exprLeft->eval(variables) / _exprRight->eval(variables);}

};

#endif ExprDiv_H
