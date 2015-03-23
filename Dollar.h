#if ! defined ( Dollar_H )
#define Dollar_H

#include <map>
#include "Symbole.h"

using namespace std;

class Dollar : public Symbole{
	
	public :
		Dollar() : Symbole(DOLLAR) {}
	
};

#endif Dollar_H