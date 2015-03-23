//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_13.h"
#include "Etat_14.h"
#include "MC.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_13::transition ( Automate & a, Symbole * s )
{
	a.reductionPush(new MC(), new Etat_14());
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_13::Etat_13 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_13>" << endl;
#endif
    _state_num = 13;
}


Etat_13::~Etat_13 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_13>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
