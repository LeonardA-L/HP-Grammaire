#if ! defined ( Lexer_H )
#define Lexer_H

#include <iostream>
#include <string> 
#include <boost/regex.hpp>
#include <queue>
#include <map>

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

bool checkRegexMatch(string s, boost::regex re);

class Lexer {
	public:
		Symbole* getNext();
		Lexer(vector<Symbole*> * symbol_table, istream* is);
	
	private:
		Symbole* ship(string& s, bool& matched);
		Symbole* analyse();
		void parseStdin();
		vector<Symbole*> * smbl_table;
		istream* sin;
		
};

#endif Lexer_H
