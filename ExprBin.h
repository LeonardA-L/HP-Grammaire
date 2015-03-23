#if ! defined ( ExprBin_H )
#define ExprBin_H

#include "E.h"

using namespace std;

class ExprBin : public E {
	protected :
		E *_exprLeft;
		E *_exprRight;

	public :
		virtual double eval(map<Id,Val> variables) = 0;
		OpBin() : E(EXPR) {} //TODO Add OpBin to Enum ???
		void addExprLeft(E val);
		void addExprRight(E val);
};

#endif ExprBin_H
