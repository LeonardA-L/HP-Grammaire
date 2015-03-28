#include "E.h"
#include "Val.h"

using namespace std;

double E::eval(){
	return 0;
}

E* E::optimise(bool hasPriority){
	return NULL;
}

bool E::shouldDelete(E* e){
	if(e != NULL && ((int)*e) != Symbole::ID) {
		if(((int)*e) != Symbole::VAL || !((Val*)e)->isParsed()){
			return true;
		}
	}
	return false;
}
