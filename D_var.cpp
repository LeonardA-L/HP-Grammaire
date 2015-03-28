#include "D_var.h"
#include <algorithm>    // std::for_each
#include <iostream>

using namespace std;

void D_var::addId(Id* id)
{
	if(id->isDeclared()){
		cerr << "la variable "<<id->getName()<<" est deja declaree" << endl;
	} else {
		id->setDeclared(true);
		id->setVar(true);
		listId.push_back(id);
	}
}

void D_var::add(list<Id*> _listId)
{
	while(!_listId.empty()){
		addId(_listId.back());
		_listId.pop_back();
	}
}

void D_var::print(){
	for_each (listId.begin(), listId.end(), print_ID);
}

void D_var::print_ID(Id* id){
	cout << "var " << id->getName() << ";" << endl;
}
