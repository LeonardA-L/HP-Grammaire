#if ! defined ( ExprBin_H )
#define ExprBin_H

#include "E.h"

using namespace std;

class ExprBin : public E {
	private :
		E *_exprLeft;
		E *_exprRight;
};

#endif ExprBin_H
