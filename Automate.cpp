#include "Automate.h"



using namespace std;
/*
	Automate::Automate(vector<Symbole*> & smbl_table)
	{
		//lex(smbl_table);
			//lex.parseStdin();
	}
*/
 void Automate::lecture(){
	Symbole * i=lex.getNext();
	
	while(i!=NULL)
	{
		pileEtats->top()->transition(*(this), i);
		i=lex.getNext();
	}
	
}

void Automate::decalage(Symbole *s, Etat* etat)
{
	pileSymboles->push(s);
	pileEtats->push(etat);
	
}

void Automate::reduction(int nbUnstack, Symbole* s, Etat* etat)
{
	for(int i=0; i<nbUnstack; i++)
	{
		pileSymboles->pop();
		pileEtats->pop();
	}
	
	pileSymboles->push(s);
	pileEtats->push(etat);
}




