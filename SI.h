#if ! defined ( SI_H )
#define SI_H


#include "Symbole.h"

using namespace std;


virtual class SI : public Symbole{
		
	public :
		SI() : Symbole(Symbole::I) {}
	
};

#endif SI_H
