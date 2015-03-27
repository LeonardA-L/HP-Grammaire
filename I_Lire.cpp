#include "I_Lire.h"
#include <iostream>
#include "Val.h"

using namespace std;

I_Lire::I_Lire(Id *_id) : SI(Symbole::I_LIRE){
	id=_id;
	id->setUsed(true);
	id->setAssigned(true);
}

void I_Lire::execute(){
	double x;
	cin >> x;
	Val* val = new Val();
	val->setValue(x);
	id->setVal(val);
}

void I_Lire::print()
{
	cout << "lire " << id->getName() << ";"<< endl;
}
