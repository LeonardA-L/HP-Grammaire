//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_25.h"
#include "Etat_28.h"
#include "Etat_29.h"
#include "Etat_44.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_25::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		switch(*s)
		{
			case(Symbole::ID) :
				a.decalage(s, new Etat_28());
				break;
			case(Symbole::VAL) :
				a.decalage(s, new Etat_29());
				break;
			case(Symbole::PARENTHESIS_OPEN) :
				a.decalage(s, new Etat_44());
				break;
			default :
				break;
		}
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_25::Etat_25 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_25>" << endl;
#endif
    _state_num = 25;
}


Etat_25::~Etat_25 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_25>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
