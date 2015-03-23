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
		void add(SD s)
		{
			_dList.push_back(s);
		}
	
};

#endif Dec_H
