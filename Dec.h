#if ! defined ( Dec_H )
#define Dec_H


#include "Symbole.h"
#include <vector>
#include "SD.h"

using namespace std;


class Dec : public Symbole{
	
	private :
		
		vector<SD*> _dList;

	public :
		Dec() : Symbole(DEC) {}
		virtual ~Dec();
		void add(SD* s);
		void print();
		void optimise();
		static void print_SD(SD* sd);
};

#endif Dec_H
