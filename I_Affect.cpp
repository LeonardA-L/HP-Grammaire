#include "I_Affect.h"

#include "Val.h"
using namespace std;

void I_Affect::execute(){
	Val* val = new Val();
	val->setValue(e->eval());
	id->setVal(val);
}
