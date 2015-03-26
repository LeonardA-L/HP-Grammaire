#if ! defined ( ST_PARENTHESISCLOSE_H )
#define ST_PARENTHESISCLOSE_HH

#include "Symbole.h"

using namespace std;

class ST_parenthesisClose : public Symbole {

public :
	ST_parenthesisClose() : Symbole(PARENTHESIS_CLOSE) {}

};

#endif ST_PARENTHESISCLOSE_H
