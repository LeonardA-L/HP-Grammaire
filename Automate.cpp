#include "Automate.h"
#include "Etat.h"
#include "Etat_0.h"
#include "P.h"
#include <iostream>
#include <algorithm>    // std::for_each

using namespace std;

Automate::~Automate(){
	while (!pileEtats.empty()){
		delete pileEtats.top();
		pileEtats.pop();
	}
	while (!pileSymboles.empty()){
		delete pileSymboles.top();
		pileSymboles.pop();
	}
}

bool Automate::lecture(){
	Symbole * i=lex.getNext();
	pileEtats.push(new Etat_0());
	while(i!=NULL)
	{
		int lastSymbol;
		int lastState;		
		do{
#ifdef DEBUG
			printProgress(i);
#endif
			shouldRetry = false;
			// Save ctx
			if(pileSymboles.size()>0){
				lastSymbol = (int) *(pileSymboles.top());
			} else {
				lastSymbol = -1;
			}
			lastState = pileEtats.top()->getNumState();
			// Make transition
			pileEtats.top()->transition(*(this), i);
			if(lastSymbol == (int) *(pileSymboles.top()) && lastState == pileEtats.top()->getNumState() && !isAccepted && !shouldRetry){
				cerr << "Erreur inconnue, merci de vérifier le fichier d'entrée" << endl;
				return false;
			}
		} while(pileSymboles.top() != i && !isAccepted || shouldRetry);
		i=lex.getNext();
	}
#ifdef DEBUG
	printProgress(NULL);
#endif
	return true;
}

string Automate::getLineInformations(){
	return lex.getCoord();
}

void Automate::retry(){
	shouldRetry = true;
}

void Automate::accept()
{
	isAccepted = true;
}

void Automate::display()
{
	if(((int)*pileSymboles.top()) == Symbole::P){
		((P*)pileSymboles.top())->print();
	}
}


void Automate::optimise()
{
	if((int)(*pileSymboles.top()) == Symbole::P){
		((P*)pileSymboles.top())->optimise();
	}
}

void Automate::execute()
{
	if((int)(*pileSymboles.top()) == Symbole::P){
		((P*)pileSymboles.top())->execute();
	}
}

void Automate::decalage(Symbole *s, Etat* etat)
{
	pileSymboles.push(s);
	pileEtats.push(etat);
	
}

 list<Symbole*> Automate::reductionUnstack(int nbUnstack)
{
	list<Symbole*> liste;
	for(int i=0; i<nbUnstack; i++)
	{
		liste.push_back(pileSymboles.top());
		pileSymboles.pop();
		delete pileEtats.top();
		pileEtats.pop();
	}
	return liste;
}
void Automate::reductionPush(Symbole* s, Etat* etat)
{
	pileSymboles.push(s);
	pileEtats.push(etat);
}



int Automate::getPreviousState(int value)
{
	if(pileEtats.size()<value){
		return NULL;
	}
	else
	{
		stack<Etat*> tmp;
		for(int i = 0; i < value ; i++){
			tmp.push(pileEtats.top());
			pileEtats.pop();
		}
		Etat * state = pileEtats.top();
		for(int i = 0; i < value ; i++){
			pileEtats.push(tmp.top());
			tmp.pop();
		}
		return state->getNumState();
	}
}

void Automate::printProgress(Symbole* next){
	cout << "####################" << endl;
	if(next == NULL){
		cout << "No more Symbol" << endl;
	} else {
		cout << "Next Symbol : "<< ((int)*next)<<endl;
	}
	printStateStack();
	cout << "--------------------" << endl;
	printSymbolStack();
}

void Automate::printStateStack(){
	stack<Etat*> tmp;
	unsigned int size = pileEtats.size();
	cout << "State Stack :" << endl << "\tSize : " << size << endl << "\tContent : ";
	for(int i = 0; i < size ; i++){
		tmp.push(pileEtats.top());
		pileEtats.pop();
	}
	for(int i = 0; i < size ; i++){
		pileEtats.push(tmp.top());
		cout << tmp.top()->getNumState() << " ";
		tmp.pop();
	}
	cout << endl;
}

void Automate::printSymbolStack(){
	stack<Symbole*> tmp;
	unsigned int size = pileSymboles.size();
	cout << "Symbole Stack :" << endl << "\tSize : " << size << endl << "\tContent : ";
	for(int i = 0; i < size ; i++){
		tmp.push(pileSymboles.top());
		pileSymboles.pop();
	}
	for(int i = 0; i < size ; i++){
		pileSymboles.push(tmp.top());
		cout << ((int)*tmp.top()) << " ";
		tmp.pop();
	}
	cout << endl;
}
