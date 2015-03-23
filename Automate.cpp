#include "Automate.h"
#include "Etat.h"

using namespace std;
/*
	Automate::Automate(vector<Symbole*> & smbl_table)
	{
		lex=Lexer();
	}
*/
 void Automate::lecture(){
	Symbole * i=lex.getNext();
	
	while(i!=NULL)
	{
		do{
			pileEtats->top()->transition(*(this), i);
		} while(pileSymboles->top() != i);
		i=lex.getNext();
	}
	
}

void Automate::accept()
{
}

void Automate::decalage(Symbole *s, Etat* etat)
{
	pileSymboles->push(s);
	pileEtats->push(etat);
	
}

 list<Symbole*> Automate::reductionUnstack(int nbUnstack)
{
	list<Symbole*> liste;
	for(int i=0; i<nbUnstack; i++)
	{
		liste.push_back(pileSymboles->top());
		pileSymboles->pop();
		pileEtats->pop();
	}
	return liste;
}
void Automate::reductionPush(Symbole* s, Etat* etat)
{
	pileSymboles->push(s);
	pileEtats->push(etat);
}



int Automate::getPreviousState(int value)
{
	if(pileEtats->size()<value){
		return NULL;
	}
	else
	{
		stack<Etat*> tmp;
		for(int i = 0; i < value ; i++){
			tmp.push(pileEtats->top());
			pileEtats->pop();
		}
		Etat * state = pileEtats->top();
		for(int i = 0; i < value ; i++){
			pileEtats->push(tmp.top());
			tmp.pop();
		}
		return state->getNumState();
	}
}
