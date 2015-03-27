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

E* ExprBin::optimise()
{
	E* rightOpt = _exprRight->optimise();
	E* leftOpt = _exprLeft->optimise();
	
	if(rightOpt != NULL) {
		// TODO delete _exprRight;
		_exprRight = rightOpt;
	}
	if(leftOpt != NULL) {
		// TODO delete _exprLeft;
		_exprLeft = leftOpt;
	}
	if((int)(*_exprLeft) == Symbole::VAL && (int)(*_exprRight) == Symbole::VAL){
		Val * result =	new Val();
		result->setValue(this->eval());
		return result;
	}
	return NULL;

}
