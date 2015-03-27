#include "I_Affect.h"
#include <iostream>
#include "Val.h"

using namespace std;

void I_Affect::execute(){
	Val* val = new Val();
	val->setValue(e->eval());
	id->setVal(val);
}

void I_Affect::print()
{
	cout << id->getName() << " := ";
 	e->print();
	cout <<";"<< endl;
}
