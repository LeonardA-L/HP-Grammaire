#if ! defined ( Automate_H )
#define Automate_H

#include <stack> 
#include "Symbole.h"
#include <map>
#include "Id.h"
#include "Val.h"

using namespace std;

class Etat;

class Automate{
	
	public : 
	void lecture();
	
	private :
	stack<Symbole> *pileSymboles;
	stack<Etat> *pileEtats; 
	map<Id, Val> variables;
};

#endif Automate_H
