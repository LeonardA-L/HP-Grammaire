//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_42.h"
#include "Etat_28.h"
#include "Etat_29.h"
#include "Etat_44.h"


//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_42::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		switch(*s)
		{
			case(ID) :
				a.decalage(s, new Etat_28());
				break;
			case(VAL) :
				a.decalage(s, new Etat_29());
				break;
			case(PARENTHESIS_OPEN) :
				a.decalage(s, new Etat_44());
				break;
			default :
				break;
		}
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_42::Etat_42 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_42>" << endl;
#endif
    _state_num = 42;
}


Etat_42::~Etat_42 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_42>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
