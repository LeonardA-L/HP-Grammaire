#if ! defined ( E_H )
#define E_H

#include <map>
#include "Symbole.h"

using namespace std;

class Id;
class Val;

class E : public Symbole{
	
	public :
		double eval(map<Id,Val> variables);
	
};

#endif E_H
