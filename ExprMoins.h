#if ! defined ( ExprMoins_H )
#define ExprMoins_H

#include "ExprBin.h"

using namespace std;

class ExprMoins : public ExprBin {

	public:
		ExprMoins() : ExprBin(){}
		double eval();
		virtual void print();

};

#endif ExprMoins_H
