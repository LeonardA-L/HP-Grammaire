#if ! defined ( MV_H )
#define MV_H

#include <map>
#include "Symbole.h"

using namespace std;

class MV : public Symbole{
	
	public :
		MV() : Symbole(Symbole::MV) {
		}
		
		void addId(Id* id);
	
	private :
		list<Id*> listId;
	
};

#endif MV_H
