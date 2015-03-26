//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_40.h"
#include "Etat_42.h"
#include "ExprMult.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_40::transition ( Automate & a, Symbole * s )
{
	// (25) opM -> * 
	int previousState= a.getPreviousState(1);
	a.reductionUnstack(1);
	switch (previousState)
	{
		case 39:
		case 37: 
			a.reductionPush(new ExprMult(), new Etat_42());
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_40::Etat_40 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_40>" << endl;
#endif
    _state_num = 40;
}


Etat_40::~Etat_40 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_40>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
