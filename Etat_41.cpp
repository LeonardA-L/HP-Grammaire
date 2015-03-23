//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_41.h"
#include "Etat_42.h"
#include "ExprDiv.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_41::transition ( Automate & a, Symbole * s )
{
	a.reductionUnstack(1);
	a.reductionPush(new ExprDiv(), new Etat_42());
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_41::Etat_41 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_41>" << endl;
#endif
    _state_num = 41;
}


Etat_41::~Etat_41 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_41>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
