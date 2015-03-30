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
		virtual ~Automate();
		bool lecture();
		void accept();
		void display();
		void optimise();
		void execute();
		void retry();
		string getLineInformations();
		void decalage(Symbole *s, Etat* etat);
		int getPreviousState(int value);
		void reductionPush(Symbole* s, Etat* etat);
		list<Symbole* > reductionUnstack(int nbUnstack);
	
	protected:
		void printProgress(Symbole* next);
		void printStateStack();
		void printSymbolStack();

	private:
		stack<Symbole*> pileSymboles;
		stack<Etat*> pileEtats; 
		Lexer lex;
		bool isAccepted = false;
		bool shouldRetry = false;
};

#endif Automate_H
