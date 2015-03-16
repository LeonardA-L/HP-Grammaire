#if ! defined ( Automate_H )
#define Automate_H

#include <stack> 
#include "Symbole.h"
#include <map>
#include "Id.h"
#include "Val.h"
#include "Etat.h"
#include "Lexer.h"

using namespace std;



class Automate{
	
	public : 
		Automate(vector<Symbole*> * smbl_table, istream* is) : lex(smbl_table, is) {};
		void lecture();
		void decalage(Symbole *s, Etat* etat);
		void reduction(int nbUnstack, Symbole* s, Etat* etat);
	
	private :
		stack<Symbole*> *pileSymboles;
		stack<Etat*> *pileEtats; 
		map<Id, Val> variables;
		Lexer lex;
};

#endif Automate_H
