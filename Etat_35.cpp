//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_35.h"
#include "Etat_36.h"
#include "Etat_30.h"
#include "Etat_31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_35::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::POINT_VIRGULE) :
			a.decalage(s,new Etat_36());
			break;
		case(Symbole::PLUS) :
			a.decalage(s, new Etat_30());
			break;
		case(Symbole::MOINS) :
			a.decalage(s, new Etat_31());
			break;	
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_35::Etat_35 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_35>" << endl;
#endif
    _state_num = 35;
}


Etat_35::~Etat_35 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_35>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
