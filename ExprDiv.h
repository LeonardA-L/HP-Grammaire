#if ! defined ( ExprDiv_H )
#define ExprDiv_H

#include "ExprBin.h"

using namespace std;

class ExprDiv : public ExprBin {

	public :
		ExprDiv() : ExprBin(Symbole::EXPR_DIV){}
		double eval();
		virtual void print();

};

#endif ExprDiv_H
