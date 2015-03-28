#if ! defined ( ExprMoins_H )
#define ExprMoins_H

#include "ExprBin.h"

using namespace std;

class ExprMoins : public ExprBin {

	public:
		ExprMoins() : ExprBin(Symbole::EXPR_MOINS, false){}
		double eval();
		virtual void print();
		virtual bool isLeftNeutralElement();
		virtual bool isRightNeutralElement();
};

#endif ExprMoins_H
