#if ! defined ( ExprPlus_H )
#define ExprPlus_H

#include "ExprBin.h"

using namespace std;

class ExprPlus : public ExprBin {
	public:
		ExprPlus() : ExprBin(Symbole::PLUS){}
		double eval();
		virtual void print();

};

#endif ExprPlus_H
