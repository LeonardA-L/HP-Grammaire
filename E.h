#if ! defined ( E_H )
#define E_H

#include <map>
#include "Symbole.h"
class Id;
class Val;

using namespace std;


class E : public Symbole{
	
	public :
		virtual double eval(map<Id,Val> variables) = 0;
		E() : Symbole(EXPR) {}
		E(int id) : Symbole(id) {}

};

#endif E_H
