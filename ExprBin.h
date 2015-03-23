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
		ExprBin() : E(EXPR) {} //TODO Add ExprBin to Enum ???
		void addExprLeft(E* val){ _exprLeft = val }
		void addExprRight(E* val){ _exprRight = val }
};

#endif ExprBin_H
