#if ! defined ( Dec_H )
#define Dec_H


#include "Symbole.h"
#include <list>
#include "SD.h"

using namespace std;


class Dec : public Symbole{
	
	private :
		
		list<SD> _dList;

	public :
		Dec() : Symbole(DEC) {}
	
};

#endif Dec_H
