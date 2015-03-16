#if ! defined ( Automate_H )
#define Automate_H

#include <stack> 
#include "Symbole.h"
#include <map>
#include "Id.h"
#include "Val.h"
#include "Lexer.h"

class Etat;

using namespace std;



class Automate{
	
	public : 
	Automate();
	void lecture();
	void decalage(Symbole *s, Etat* etat);
	void reduction(int nbUnstack, Symbole* s, Etat* etat);
	int getPreviousState(int value);
	
	private :
	stack<Symbole*> *pileSymboles;
	stack<Etat*> *pileEtats; 
	map<Id, Val> variables;
	Lexer lex;
};

#endif Automate_H
