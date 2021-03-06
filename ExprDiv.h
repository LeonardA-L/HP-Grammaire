#if ! defined ( ExprDiv_H )
#define ExprDiv_H

#include "ExprBin.h"

using namespace std;

class ExprDiv : public ExprBin {

	public :
		ExprDiv() : ExprBin(Symbole::EXPR_DIV, true){}
		double eval();
		virtual void print();
		virtual bool isLeftNeutralElement();
		virtual bool isRightNeutralElement();

};

#endif ExprDiv_H
