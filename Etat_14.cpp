//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_14.h"

#include "Etat_15.h"
#include "Etat_19.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_14::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(POINT_VIRGULE) :
			a.decalage(s, new Etat_19());
			break;
		case(VIRGULE) :
			a.decalage(s, new Etat_15());
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_14::Etat_14 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_14>" << endl;
#endif
    _state_num = 14;
}


Etat_14::~Etat_14 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_14>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
