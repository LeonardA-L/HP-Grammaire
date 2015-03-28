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

void P::execute(){
	_inst->execute();
}

P::~P(){
	if(_dec != NULL) {
		delete _dec;
	}
	if(_inst != NULL) {
		delete _inst;
	}
}
