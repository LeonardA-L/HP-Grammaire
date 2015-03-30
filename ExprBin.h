#if ! defined ( ExprBin_H )
#define ExprBin_H

#include "E.h"

#define NULL 0

using namespace std;

class ExprBin : public E {
	private :
		bool hasPriority;

	protected :
		E *_exprLeft = NULL;
		E *_exprRight = NULL;
		
		virtual bool isLeftNeutralElement() = 0;
		virtual bool isRightNeutralElement() = 0;

	public :
		virtual double eval() = 0;
		ExprBin(int val, bool priority) : E(val), hasPriority(priority) {}
		virtual ~ExprBin();
		void addExprLeft(E* val);
		void addExprRight(E* val);
		virtual E* optimise(bool _hasPriority);
};

#endif ExprBin_H
