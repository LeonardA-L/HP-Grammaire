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
	
	public: 
		Automate(vector<Symbole*> * smbl_table, istream* is) : lex(smbl_table, is) {};
		void lecture();
		void decalage(Symbole *s, Etat* etat);
		list<Symbole* > reductionUnstack(int nbUnstack);
		void reductionPush(Symbole* s, Etat* etat);
		int getPreviousState(int value);
		void accept();
	
	protected:
		void printProgress(Symbole* next);
		void printStateStack();
		void printSymbolStack();

	private:
		stack<Symbole*> pileSymboles;
		stack<Etat*> pileEtats; 
		// TODO map<Id, Val> variables;
		Lexer lex;
};

#endif Automate_H
