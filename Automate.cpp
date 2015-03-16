#include "Automate.h"
#include "Etat.h"

using namespace std;

	Automate::Automate()
	{
		lex=Lexer();
	}

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





