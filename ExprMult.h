#if ! defined ( ExprMult_H )
#define ExprMult_H

#include "ExprBin.h"

using namespace std;

class ExprMult : public ExprBin {
	public:
		ExprMult() : ExprBin(){}
		double eval();
		virtual void print();

};

#endif ExprMult_H

