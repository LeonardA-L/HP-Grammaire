#if ! defined ( MV_H )
#define MV_H

#include <map>
#include <list>
#include "Symbole.h"
#include "Id.h"

using namespace std;

class MV : public Symbole{
	
	public :
		MV() : Symbole(Symbole::MV) { }
		
		void addId(Id* id);
		list<Id*> getList(){return listId;};
	
	private :
		list<Id*> listId;
	
};

#endif MV_H
