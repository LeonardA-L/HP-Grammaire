//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_20.h"

#include "Etat_1.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_20::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(DOLLAR) :
			a.reduction(2, new P(), new Etat_1());
			break;
		case(LIRE) :
			a.decalage(s, new Etat_22());
			break;
		case(ECRIRE) :
			a.decalage(s, new Etat_25());
			break;
		case(ID) :
			a.decalage(s, new Etat_33());
			break;
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_20::Etat_20 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_20>" << endl;
#endif
    _state_num = 20;
}


Etat_20::~Etat_20 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_20>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
