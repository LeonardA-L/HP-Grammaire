#if ! defined ( I_ECRIRE_H )
#define I_ECRIRE_H

#include <iostream>
#include "SI.h"
#include "E.h"

using namespace std;


class I_Ecrire : public SI{
		
	public :
		I_Ecrire(E *_e) : SI(Symbole::I_ECRIRE), e(_e) { };
		void execute(map<Id,Val> variables){cout << e->eval(variables) << endl;}

	private :
		E *e;
	
};

#endif I_ECRIRE_H
