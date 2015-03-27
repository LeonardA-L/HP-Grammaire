#include "Automate.h"
#include "Etat.h"
#include "Etat_0.h"
#include <iostream>
#include <algorithm>    // std::for_each

using namespace std;
/*
	Automate::Automate(vector<Symbole*> & smbl_table)
	{
		lex=Lexer();
	}
*/
 void Automate::lecture(){
	Symbole * i=lex.getNext();
	pileEtats.push(new Etat_0());
	while(i!=NULL)
	{
		do{
#ifdef DEBUG
			printProgress(i);
#endif
			pileEtats.top()->transition(*(this), i);
		} while(pileSymboles.top() != i && !isAccepted);
		i=lex.getNext();
	}
#ifdef DEBUG
	printProgress(NULL);
#endif
}

void Automate::accept()
{
	isAccepted = true;
}

void Automate::display()
{
	stack<Symbole*> tmp;
	unsigned int size = pileSymboles.size();
	for(int i = 0; i < size ; i++){
		tmp.push(pileSymboles.top());
		pileSymboles.pop();
	}
	for(int i = 0; i < size ; i++){
		pileSymboles.push(tmp.top());
		tmp.top()->print();
		tmp.pop();
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
