#if ! defined ( E_H )
#define E_H

#include <map>
#include "Symbole.h"
class Id;
class Val;

using namespace std;


class E : public Symbole{
	
	public :
		virtual double eval() = 0;
		E() : Symbole(EXPR) {}
		E(int id) : Symbole(id) { }
		virtual void print(){ };
		virtual E* optimise(bool hasPriority);

};

#endif E_H
