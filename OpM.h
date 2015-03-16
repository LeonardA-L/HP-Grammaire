#if ! defined ( OpM_H )
#define OpM_H

#include <map>
#include "Symbole.h"

using namespace std;

class OpM : public Symbole{
	
	public :
		OpM() : Symbole(OPM) {}
	
};

#endif OpM_H