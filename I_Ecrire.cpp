#include "I_Ecrire.h"
#include <iostream>

using namespace std;

void I_Ecrire::execute(){
	cout << e->eval() << endl;
}


void I_Ecrire::print()
{
	cout << "ecrire ";
	e->print();
	cout << ";"<< endl;
}

void I_Ecrire::optimise(){
	E* newExpr = e->optimise(false);
	if(newExpr != NULL){
		if(E::shouldDelete(e)){
			delete e;
		}
		e = newExpr;
	}
}

I_Ecrire::~I_Ecrire(){
	if(E::shouldDelete(e)){
		delete e;
	}
}
