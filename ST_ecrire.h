#if ! defined ( STEC_H )
#define STEC_H


#include "Symbole.h"

using namespace std;


class ST_ecrire : public Symbole{
	
public :
	ST_ecrire() : Symbole(ECRIRE) {}

};

#endif STEC_H
