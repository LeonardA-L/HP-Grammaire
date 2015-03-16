//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_26.h"
#include "Etat_27.h"
#include "Etat_30.h"
#include "Etat_31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_26::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::POINT_VIRGULE) :
		{
			Etat_27 *etat27=new Etat_27();
			a.decalage(s,etat27);
			break;
		}
		case(Symbole::PLUS) :
		{
			Etat_30 *etat30=new Etat_30();
			a.decalage(s, etat30);
			break;
		}
		case(Symbole::MOINS) :
		{
			Etat_31 *etat31=new Etat_31();
			a.decalage(s, etat31);
			break;	
		}
		// case OPA
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_26::Etat_26 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_26>" << endl;
#endif
    _state_num = 0;
}


Etat_26::~Etat_26 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_26>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
