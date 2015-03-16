//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_5.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_5::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		switch(*s)
		{
			case(POINT_VIRGULE) :
				a.decalage(s, new Etat_8());
				break;
			case(VIRGULE) :
				a.decalage(s, new Etat_6());
				break;
			default :
				break;

		}
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_5::Etat_5 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_5>" << endl;
#endif
    _state_num = 5;
}


Etat_5::~Etat_5 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_5>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées