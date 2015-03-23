#if ! defined ( Val_H )
#define Val_H

#include "E.h"

using namespace std;

class Val : public E {
	private :
		double _value;
	public :
	 	Val() : E(VAL) {}
	 	double eval();	
	 	void setValue(double value);
};

#endif Val_H
