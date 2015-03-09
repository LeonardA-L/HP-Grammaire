#if ! defined ( Lexer_H )
#define Lexer_H

#include "Symbole.h"

using namespace std;

class Lexer {
	Symbole getNext();
	Symbole readNext();	
	
};

#endif Lexer_H
