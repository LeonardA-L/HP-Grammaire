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
	switch(*s)
	{
		case(Symbole::ASTERIX) :
			a.decalage(s, new Etat_40());
			break;
		case(Symbole::SLASH) :
			a.decalage(s, new Etat_41());
			break;
		case(Symbole::POINT_VIRGULE) :
		case(Symbole::PLUS) :
		case(Symbole::MOINS) :
		case(Symbole::PARENTHESIS_CLOSE) :
			{
				// (16) E -> E opA T
				int previousState= a.getPreviousState(3);
				list<Symbole*> liste=a.reductionUnstack(3);
				E *exprLeft=(E*)liste.front();
				liste.pop_front();
				ExprBin *exprbin=(ExprBin*)liste.front();
				exprbin->addExprLeft(exprLeft);
				exprbin->addExprRight((E*)liste.back());
				switch (previousState)
				{
					case 25: 
						a.reductionPush(exprbin,new Etat_26());
						break;
					case 34: 
						a.reductionPush(exprbin,new Etat_35());
						break;
					case 44: 
						a.reductionPush(exprbin,new Etat_45());
						break;
				}
			}
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
