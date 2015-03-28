#include "D_const.h"
#include <iostream>
#include <algorithm>    // std::for_each

using namespace std;


void D_const::addId(Id* id){
	if(id->isDeclared()){
		cerr << "la constante "<<id->getName()<<" est deja declaree" << endl;
	} else {
		id->setDeclared(true);
		listId.push_back(id);
	}
}

void D_const::add(list<Id*> _listId){
	while(!_listId.empty()){
		addId(_listId.back());
		_listId.pop_back();
	}
}

void D_const::print(){
	for_each (listId.begin(), listId.end(), print_ID);
}

void D_const::print_ID(Id* id){
	cout << "const " << id->getName() << " = " << id->getVal()->eval() << ";"<< endl;
}
