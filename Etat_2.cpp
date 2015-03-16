//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_2.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_2::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(CONST) :
			a.decalage(s, new Etat_10());
			break;
		case(VAR) :
			a.decalage(s, new Etat_3());
			break;
		default :
			a.reduction(0, new Inst(), new Etat_20());
			break;
	}
}

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_2::Etat_2 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_2>" << endl;
#endif
    _state_num = 2;
}


Etat_2::~Etat_2 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_2>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
