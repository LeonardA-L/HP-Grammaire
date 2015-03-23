//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_11.h"

#include "Etat_12.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_11::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::EGAL) :
			a.decalage(s, new Etat_12());
			break;
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_11::Etat_11 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_11>" << endl;
#endif
    _state_num = 11;
}


Etat_11::~Etat_11 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_11>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
