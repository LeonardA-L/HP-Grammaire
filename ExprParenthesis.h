#if ! defined ( ExprParenthesis_H )
#define ExprParenthesis_H

#include "E.h"

using namespace std;

class ExprParenthesis : public E {

	private:
		E* e;

	public:
		ExprParenthesis(E* _e) : e(_e) {}
		double eval();
		virtual void print();

};

#endif ExprParenthesis_H
