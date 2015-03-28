#if ! defined ( ExprPlus_H )
#define ExprPlus_H

#include "ExprBin.h"

using namespace std;

class ExprPlus : public ExprBin {
	public:
		ExprPlus() : ExprBin(Symbole::PLUS, false){}
		double eval();
		virtual void print();

		virtual bool isLeftNeutralElement();
		virtual bool isRightNeutralElement();

};

#endif ExprPlus_H
