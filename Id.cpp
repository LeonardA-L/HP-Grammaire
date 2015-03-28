#include "Id.h"
#include <iostream>


using namespace std;

bool Id::isVar(){
	return _var;
}
bool Id::isDeclared(){
	return _declared;
}
bool Id::isAssigned(){
	return _assigned;
}
bool Id::isUsed(){
	return _used;
}
bool Id::isUsedBeforeAssigned(){
	return _usedBeforeAssigned;
}
string Id::getName(){
return _name;
}
bool Id::isAssignedBeforeDeclared(){
	return _assignedBeforeDeclared;
}
void Id::setVar(bool v){
	_var = v;
}
void Id::setDeclared(bool d){
	_declared = d;
}
void Id::setAssigned(bool a){
	if(!_declared){
		_assignedBeforeDeclared = true;
	}
	_assigned = a;
}
void Id::setUsed(bool u){
	_used = u;
	if(_var && !_assigned){
		_usedBeforeAssigned = true;
	}
}
void Id::setUsedBeforeAssigned(bool u){
	_usedBeforeAssigned = u;
}
void Id::setAssignedBeforeDeclared(bool a){
	_assignedBeforeDeclared = a;
}
Val* Id::getVal(){
	return _val;
}
void Id::setVal(Val* newVal){
	if(_val != NULL){
		delete _val;
	}
	_val = newVal;
}

double Id::eval(){
	return _val->eval();
}

void Id::print(){
	cout << _name;
}

E* Id::optimise(bool hasPriority) {
	if(_var){
		return NULL;
	} else {
		return _val;
	}
}

Id::Id (string name) : E(Symbole::ID)
{
	_var = false;
	_declared = false;
	_assigned = false;
	_used = false;
	_usedBeforeAssigned = false;
	_assignedBeforeDeclared = false;
	_name = name;
}


Id::~Id ( )
{
	if(_val != NULL){
		delete _val;
	}
}
