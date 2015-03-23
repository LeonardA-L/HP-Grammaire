#if ! defined ( ExprDiv_H )
#define ExprDiv_H

#include "ExprBin.h"

using namespace std;

class ExprDiv : public ExprBin {

	public :
		ExprDiv() : ExprBin(){}
		double eval(){return _exprLeft->eval() / _exprRight->eval();}

};

#endif ExprDiv_H
