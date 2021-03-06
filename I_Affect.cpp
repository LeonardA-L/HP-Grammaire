#include "I_Affect.h"
#include <iostream>
#include "Val.h"

using namespace std;

void I_Affect::execute(){
	Val* val = new Val(false);
	val->setValue(e->eval());
	id->setVal(val);
}

void I_Affect::print()
{
	cout << id->getName() << " := ";
 	e->print();
	cout <<";"<< endl;
}

void I_Affect::optimise(){
	E* newExpr = e->optimise(false);
	if(newExpr != NULL){
		if(E::shouldDelete(e)){
			delete e;
		}
		e = newExpr;
	}
}

I_Affect::~I_Affect(){
	if(E::shouldDelete(e)){
		delete e;
	}
}
