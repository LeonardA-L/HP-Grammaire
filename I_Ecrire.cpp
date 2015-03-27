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
		// TODO delete e;
		e = newExpr;
	}
}
