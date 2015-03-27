#if ! defined ( D_var_H )
#define D_var_H

#include <map>
#include <list>
#include "Symbole.h"
#include "Id.h"
#include "SD.h"

using namespace std;

class D_var : public SD {
	
	public :
		D_var() : SD(Symbole::D_VAR) { }
		
		void addId(Id* id);
		void add(list<Id* > _listId);
		virtual void print();
		static void print_ID(Id* id);
	
	private :
		list<Id*> listId;
	
};

#endif D_var_H
