//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_31.h"
#include "Etat_38.h"
#include "ExprMoins.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_31::transition ( Automate & a, Symbole * s )
{
	// (24) opA ->  -
	int previousState= a.getPreviousState(1);
	a.reductionUnstack(1);
	switch (previousState)
	{
		case 26:
		case 35: 
		case 45: 
			a.reductionPush(new ExprMoins(), new Etat_38());
			break;
	}
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
