//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_37.h"
#include "Etat_40.h"
#include "Etat_41.h"
#include "Etat_26.h"
#include "Etat_35.h"
#include "Etat_45.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_37::transition ( Automate & a, Symbole * s )
{
	if(*s==Symbole::POINT_VIRGULE || *s==Symbole::PLUS || *s==Symbole::MOINS || *s==Symbole::PARENTHESIS_CLOSE) {
			int previousState= a.getPreviousState(1);
			list<Symbole*> liste=a.reductionUnstack(1);
			switch (previousState)
			{
				case 25: 
					a.reductionPush((E*)liste.front(),new Etat_26());
					break;
				case 34: 
					a.reductionPush((E*)liste.front(),new Etat_35());
					break;
				case 44: 
					a.reductionPush((E*)liste.front(),new Etat_45());
					break;
			}
			return true;
	}
	
	switch(*s)
	{
		case(Symbole::ASTERIX) :
			a.decalage(s,new Etat_40());
			break;
		case(Symbole::SLASH) :
			a.decalage(s, new Etat_41());
			break;
		case(Symbole::POINT_VIRGULE) :
		case(Symbole::PLUS) :
		case(Symbole::MOINS) :
		case(Symbole::PARENTHESIS_CLOSE) :
			{
				// (17) E -> T
				int previousState= a.getPreviousState(1);
				list<Symbole*> liste=a.reductionUnstack(1);
				switch (previousState)
				{
					case 25: 
						a.reductionPush((E*)liste.front(),new Etat_26());
						break;
					case 34: 
						a.reductionPush((E*)liste.front(),new Etat_35());
						break;
					case 44: 
						a.reductionPush((E*)liste.front(),new Etat_45());
						break;
				}
			}
			break;	
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_37::Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_37>" << endl;
#endif
    _state_num = 37;
}


Etat_37::~Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_37>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
