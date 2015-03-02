#if ! defined ( Automate_H )
#define Automate_H

#include <stack> 
#include "Symbole.h"
#include <map>
#include "Id.h"
#include "Val.h"

using namespace std;

class Automate{
	
	public : 
	void lecture();
	
	private :
	stack<Symbole> *pileSymboles;
	// stack<Etat> *pileEtats;  TODO : mettre la ligne lors de l'intégration avec la partie états
	map<Id, Val> variables;
};

#endif Automate_H
