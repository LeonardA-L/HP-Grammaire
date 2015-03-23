#if ! defined ( MC_H )
#define MC_H

#include "Symbole.h"
#include "Id.h"
#include "Val.h"

using namespace std;

class MC : public Symbole{
	
	public :
		MC() : Symbole(Symbole::MC){}
		void addIdVal(Id* id, Val* val);
	
	private :
		list<pair<Id*,Val*>> listIdVal;
	
};

#endif MC_H
