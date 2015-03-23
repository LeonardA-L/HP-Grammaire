	//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_34.h"
#include "Etat_28.h"
#include "Etat_29.h"
#include "Etat_44.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_34::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::ID) :
			a.decalage(s,new Etat_28());
			break;
		case(Symbole::VAL) :
			a.decalage(s, new Etat_29());
			break;
		case(Symbole::PARENTHESIS_OPEN) :
			a.decalage(s, new Etat_44());
			break;	
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_34::Etat_34 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_34>" << endl;
#endif
    _state_num = 34;
}


Etat_34::~Etat_34 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_34>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
