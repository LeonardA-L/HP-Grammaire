//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_44.h"

#include "Etat_28.h"
#include "Etat_29.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_44::transition ( Automate & a, Symbole * s )
{
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
	}	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_44::Etat_44 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_44>" << endl;
#endif
    _state_num = 44;
}


Etat_44::~Etat_44 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_44>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
