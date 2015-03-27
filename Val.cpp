#include "Val.h"
#include <iostream>

using namespace std;

void Val::setValue(double value){
	_value=value;
}

double Val::eval(){
	return _value;
}

void Val::print()
{
	cout << _value;
}
