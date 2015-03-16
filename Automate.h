#if ! defined ( Automate_H )
#define Automate_H

#include <stack> 
#include "Symbole.h"
#include <map>
#include "Id.h"
#include "Val.h"
#include "Lexer.h"
#include <list>

class Etat;

using namespace std;



class Automate{
	
	public : 
	Automate();
	void lecture();
	void decalage(Symbole *s, Etat* etat);
	List<Symbole> reductionUnstack(int nbUnstack);
	void reductionPush(Symbole* s, Etat* etat);
	int getPreviousState(int value);
	void accept();
	
	private :
	stack<Symbole*> *pileSymboles;
	stack<Etat*> *pileEtats; 
	map<Id, Val> variables;
	Lexer lex;
};

#endif Automate_H
