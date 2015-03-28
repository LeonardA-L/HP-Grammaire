#if ! defined ( Val_H )
#define Val_H

#include "E.h"

using namespace std;

class Val : public E {
	private :
		double _value;
		bool _isParsed;
	public :
	 	Val(bool isParsed) : E(Symbole::VAL), _isParsed(isParsed) {}
	 	double eval();	
	 	bool isParsed();	
	 	void setValue(double value);
		virtual void print();
};

#endif Val_H
