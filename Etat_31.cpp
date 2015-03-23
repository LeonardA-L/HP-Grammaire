//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_31.h"
#include "Etat_38.h"
#include "OpA.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_31::transition ( Automate & a, Symbole * s )
{
	a.reductionUnstack(1);
	a.reductionPush(new ExprMoins(), new Etat_38());
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_31::Etat_31 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_31>" << endl;
#endif
    _state_num = 31;
}


Etat_31::~Etat_31 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_31>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
