#if ! defined ( D_const_H )
#define D_const_H

#include <map>
#include "Symbole.h"

using namespace std;

class D_const : public SD{
	
	public :
		D_const() {
		}
		
		void addId(Id id);
		void add(list<Id> _listId){
			for(int i=0;i<_listId;i++)
			{
				listId.push_back(_listId.front());
				_listId.pop_front();
			}
		};
	
	private :
		list<Id> listId;
	
};

#endif D_const_H