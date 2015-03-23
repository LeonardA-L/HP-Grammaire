//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_2.h"

#include "Etat_3.h"
#include "Etat_10.h"
#include "Etat_20.h"

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
		case(Symbole::CONST) :
			a.decalage(s, new Etat_10());
			break;
		case(Symbole::VAR) :
			a.decalage(s, new Etat_3());
			break;
		default :
			void reductionPush(new Inst(), new Etat_20());
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
