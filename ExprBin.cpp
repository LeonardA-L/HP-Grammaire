#include "ExprBin.h"
#include "Val.h"

void ExprBin::addExprLeft(E* val)
{ 
	_exprLeft = val; 
}

void ExprBin::addExprRight(E* val)
{ 
	_exprRight = val; 
}

E* ExprBin::optimise(bool _hasPriority)
{
	E* rightOpt = _exprRight->optimise(hasPriority);
	E* leftOpt = _exprLeft->optimise(hasPriority);
	
	if(rightOpt != NULL) {
		if(shouldDelete(_exprRight)) {
			delete _exprRight;
		}
		_exprRight = rightOpt;
	}
	if(leftOpt != NULL) {
		if(shouldDelete(_exprLeft)) {
			delete _exprLeft;
		}
		_exprLeft = leftOpt;
	}

	if((int)(*_exprLeft) == Symbole::VAL && (int)(*_exprRight) == Symbole::VAL){
		Val * result =	new Val(false);
		result->setValue(this->eval());
		// Delete
		if(!((Val*)_exprLeft)->isParsed()){
			delete _exprLeft;
		}
		if(!((Val*)_exprRight)->isParsed()){
			delete _exprRight;
		}
		_exprLeft = NULL;
		_exprRight = NULL;
		return result;
	}
	return NULL;
}

ExprBin::~ExprBin(){
	if(shouldDelete(_exprRight)) {
		delete _exprRight;
	}
	if(shouldDelete(_exprLeft)) {
		delete _exprLeft;
	}
}
