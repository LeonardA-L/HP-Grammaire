#if ! defined ( D_var_H )
#define D_var_H

#include <map>
#include "Symbole.h"

using namespace std;

class D_var : public SD{
	
	public :
		D_var() {
		}
		
		void addId(Id* id){ listId.push_back(id); };
		void add(list<Id* > _listId){
			for(int i=0;i<_listId.size();i++)
			{
				listId.push_back(_listId.front());
				_listId.pop_front();
			}
		};
	
	private :
		list<Id*> listId;
	
};

#endif D_var_H