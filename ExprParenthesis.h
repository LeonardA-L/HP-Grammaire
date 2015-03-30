#if ! defined ( ExprParenthesis_H )
#define ExprParenthesis_H

#include "E.h"

#define NULL 0

using namespace std;

class ExprParenthesis : public E {

	private:
		E* e = NULL;

	public:
		ExprParenthesis(E* _e) : E(Symbole::EXPR_PAR), e(_e) {}
		double eval();
		virtual ~ExprParenthesis();
		virtual void print();
		virtual E* optimise(bool hasPriority);
};

#endif ExprParenthesis_H
