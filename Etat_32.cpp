//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_32.h"
#include "Etat_37.h"
#include "T.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_32::transition ( Automate & a, Symbole * s )
{
	// (19) T -> F
	list<Symbole* > list = a.reductionUnstack(1);
	a.reductionPush(list.back(), new Etat_37());

	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_32::Etat_32 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_32>" << endl;
#endif
    _state_num = 32;
}


Etat_32::~Etat_32 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_32>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
