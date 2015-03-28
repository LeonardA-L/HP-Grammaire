#include "Val.h"
#include <iostream>

using namespace std;

void Val::setValue(double value){
	_value=value;
}

double Val::eval(){
	return _value;
}

bool Val::isParsed(){
	return _isParsed;
}

void Val::print()
{
	cout << _value;
}


