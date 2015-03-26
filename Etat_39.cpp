//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_39.h"
#include "Etat_26.h"
#include "Etat_35.h"
#include "Etat_40.h"
#include "Etat_41.h"
#include "Etat_45.h"
#include "ExprBin.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_39::transition ( Automate & a, Symbole * s )
{

	if(*s==Symbole::POINT_VIRGULE || *s==Symbole::PLUS || *s==Symbole::MOINS || *s==Symbole::PARENTHESIS_CLOSE)
	{
		int previousState= a.getPreviousState(3);
		list<Symbole*> liste=a.reductionUnstack(3);
		E *exprLeft=(E*)liste.front();
		liste.pop_front();
		ExprBin *exprbin=(ExprBin*)liste.front();
		exprbin->addExprLeft(exprLeft);
		exprbin->addExprRight((E*)liste.back());
		if(previousState == 34) {
			a.reductionPush(exprbin,new Etat_35());
		} else if(previousState == 25) {
			a.reductionPush(exprbin,new Etat_26());
		} else if(previousState == 44) {
			a.reductionPush(exprbin,new Etat_45());
		}
	}
	
	switch(*s)
	{
		case(Symbole::ASTERIX) :
			a.decalage(s, new Etat_40());
			break;
		case(Symbole::SLASH) :
			a.decalage(s, new Etat_41());
			break;
		default :
			break;
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_39::Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_39>" << endl;
#endif
    _state_num = 39;
}


Etat_39::~Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_39>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
