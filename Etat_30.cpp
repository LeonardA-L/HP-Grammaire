//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_30.h"
#include "Etat_38.h"
#include "ExprPlus.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_30::transition ( Automate & a, Symbole * s )
{
	// (23) opA -> +
	int previousState= a.getPreviousState(1);
	a.reductionUnstack(1);
	switch (previousState)
	{
		case 26:
		case 35: 
		case 45: 
			a.reductionPush(new ExprPlus(), new Etat_38());
			break;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_30::Etat_30 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_30>" << endl;
#endif
    _state_num = 30;
}


Etat_30::~Etat_30 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_30>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
