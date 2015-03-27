#if ! defined ( ExprBin_H )
#define ExprBin_H

#include "E.h"

using namespace std;

class ExprBin : public E {
	protected :
		E *_exprLeft;
		E *_exprRight;

	public :
		virtual double eval() = 0;
		ExprBin(int val) : E(val) {}
		void addExprLeft(E* val);
		void addExprRight(E* val);
		virtual E* optimise();
};

#endif ExprBin_H
