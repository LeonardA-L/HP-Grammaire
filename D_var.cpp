#include "D_var.h"
#include <algorithm>    // std::for_each
#include <iostream>

using namespace std;

void D_var::addId(Id* id)
{
	listId.push_back(id);
}

void D_var::add(list<Id*> _listId)
{
	for(int i=0;i<_listId.size();i++)
	{
		listId.push_back(_listId.front());
		_listId.pop_front();
	}
}

void D_var::print(){
	for_each (listId.begin(), listId.end(), print_ID);
}

void D_var::print_ID(Id* id){
	cout << "var " << id->getName() << ";" << endl;
}
