#if ! defined ( SI_H )
#define SI_H


#include "Symbole.h"

using namespace std;


class SI : public Symbole{
		
	public :
		SI() : Symbole(Symbole::I) {}
		SI(int id) : Symbole(id) {}

		virtual void execute()=0; 
};

#endif SI_H
