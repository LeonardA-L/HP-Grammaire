#include "P.h"

using namespace std;

void P::print(){
	_dec->print();
	_inst->print();
}

void P::optimise(){
	_inst->optimise();
	_dec->optimise();
}
