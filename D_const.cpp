#include "D_const.h"
#include <iostream>
#include <algorithm>    // std::for_each

using namespace std;


void D_const::addId(Id* id){
	listId.push_back(id);
}

void D_const::add(list<Id*> _listId){
	for(int i=0;i<_listId.size();i++)
	{
		listId.push_back(_listId.front());
		listId.pop_front();
	}
}

void D_const::print(){
	for_each (listId.begin(), listId.end(), print_ID);
}

void D_const::print_ID(Id* id){
	cout << "const " << id->getName() << " = " << id->getVal()->eval() << ";"<< endl;
}
