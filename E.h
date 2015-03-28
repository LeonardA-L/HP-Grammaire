#if ! defined ( E_H )
#define E_H

#include <map>
#include "Symbole.h"
class Id;

using namespace std;


class E : public Symbole{
	
	public :
		virtual double eval() = 0;
		E() : Symbole(EXPR) {}
		E(int id) : Symbole(id) { }
		virtual ~E(){};
		virtual void print(){ };
		virtual E* optimise(bool hasPriority);
	protected :
		static bool shouldDelete(E* e);

};

#endif E_H
