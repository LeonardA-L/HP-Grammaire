#if ! defined ( STLI_H )
#define STLI_H


#include "Symbole.h"

using namespace std;


class ST_lire : public Symbole{

public :
	ST_lire() : Symbole(LIRE) {}

};

#endif STLI_H
