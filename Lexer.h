#if ! defined ( Lexer_H )
#define Lexer_H

#include <iostream>
#include <string> 
#include <boost/regex.hpp>
#include <stack>

#include "Symbole.h"
#include "ST_const.h"
#include "ST_var.h"
#include "ST_asterix.h"
#include "ST_doublePoint.h"
#include "ST_ecrire.h"
#include "ST_egal.h"
#include "ST_lire.h"
#include "ST_moins.h"
#include "ST_parenthesisClose.h"
#include "ST_parenthesisOpen.h"
#include "ST_plus.h"
#include "ST_ptVirgule.h"
#include "ST_slash.h"
#include "ST_virgule.h"
#include "Id.h"
#include "Val.h"

using namespace std;

class Lexer {
	public:
		void analyse(string line);
		stack<Symbole*>* parseStdin();
	
	private:
		stack<Symbole*> pileSymboles;
		void ship(string& s, bool& matched);
		
};

#endif Lexer_H
