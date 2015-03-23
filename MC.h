#if ! defined ( MC_H )
#define MC_H

#include "Symbole.h"
#include "Id.h"
#include "Val.h"
#include <list>

using namespace std;

class MC : public Symbole{
	
	public :
		MC() : Symbole(Symbole::MC){}
		void addId(Id* id);
	
	private :
		list<Id*> listId;
	
};

#endif MC_H
