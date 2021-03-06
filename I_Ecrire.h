#if ! defined ( I_ECRIRE_H )
#define I_ECRIRE_H

#include <iostream>
#include "SI.h"
#include "E.h"

using namespace std;


class I_Ecrire : public SI{
		
	public :
		I_Ecrire(E *_e) : SI(Symbole::I_ECRIRE), e(_e) { };
		virtual ~I_Ecrire();
		void execute();
		virtual void print();
		virtual void optimise();
	private :
		E *e;
	
};

#endif I_ECRIRE_H
