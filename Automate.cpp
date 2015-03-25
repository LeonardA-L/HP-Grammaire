#include "Automate.h"
#include "Etat.h"
#include <iostream>

using namespace std;
/*
	Automate::Automate(vector<Symbole*> & smbl_table)
	{
		lex=Lexer();
	}
*/
 void Automate::lecture(){
	Symbole * i=lex.getNext();
	printProgress(i);
	while(i!=NULL)
	{
		do{
			pileEtats.top()->transition(*(this), i);
			printProgress(i);
		} while(pileSymboles.top() != i);
		i=lex.getNext();
	}
	printProgress(i);	
}

void Automate::accept()
{
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
		cout << "Fin du flux" << endl;
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