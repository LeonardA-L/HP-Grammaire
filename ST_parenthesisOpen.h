#if ! defined ( ST_PARENTHESISOPEN_H )
#define ST_PARENTHESISOPEN_H

#include "Symbole.h"

using namespace std;

class ST_parenthesisOpen : public Symbole {

public :
	ST_parenthesisOpen() : Symbole(PARENTHESIS_OPEN) {}

};

#endif ST_PARENTHESISOPEN_H