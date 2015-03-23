#include "Id.h"


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
string Id::getName(){
	return _name;
}
void Id::setVar(bool v){
	_var = v;
}
void Id::setDeclared(bool d){
	_declared = d;
}
void Id::setAssigned(bool a){
	_assigned = a;
}
void Id::setUsed(bool u){
	_used = u;
}
Val* Id::getVal(){
	return _val;
}
void Id::setVal(Val* newVal){
	_val = newVal;
}

double Id::eval(){
	return _val->eval();
}

Id::Id (string name)
{
	_var = false;
	_declared = false;
	_assigned = false;
	_used = false;
	_name = name;
}


Id::~Id ( )
{

}
