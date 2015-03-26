#if ! defined ( D_const_H )
#define D_const_H

#include <map>
#include <list>
#include "Symbole.h"
#include "SD.h"
#include "Id.h"

using namespace std;

class D_const : public SD {
	
	public :
		D_const() { }
		
		void addId(Id* id);
		void add(list<Id*> _listId);
		virtual void print();
		static void print_ID(Id* id);
	
	private :
		list<Id*> listId;
	
};

#endif D_const_H
