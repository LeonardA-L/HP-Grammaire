#if ! defined ( Lexer_H )
#define Lexer_H

#include <iostream>
#include <string> 
#include <boost/regex.hpp>
#include <queue>
#include <map>

#include "Symbole.h"
#include "Id.h"
#include "Val.h"

using namespace std;

bool checkRegexMatch(string s, boost::regex re);

class Lexer {
	public:
		Symbole* getNext();
		string getCoord();
		Lexer(vector<Symbole*> * symbol_table, istream* is);
	
	private:
		Symbole* ship(string& s, bool& matched);
		Symbole* analyse();
		void parseStdin();
		vector<Symbole*> * smbl_table;
		istream* sin;
		
};

#endif Lexer_H
