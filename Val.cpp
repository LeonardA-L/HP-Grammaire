#include "Val.h"

using namespace std;

void Val::setValue(double value){
	_value=value;
}

double Val::eval(){
	return _value;
}
