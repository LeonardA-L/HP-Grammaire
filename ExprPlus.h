#if ! defined ( ExprPlus_H )
#define ExprPlus_H

#include "ExprBin.h"

using namespace std;

class ExprPlus : public ExprBin {
	public:
		ExprPlus() : ExprBin(){}
		double eval(){return _exprLeft->eval() + _exprRight->eval();}


};

#endif ExprPlus_H
