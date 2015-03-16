//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_18.h"
#include "MC.h"
#include "Etat_14.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_18::transition ( Automate & a, Symbole * s )
{
	a.reduction(5, new MC(), new Etat_14());
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_18::Etat_18 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_18>" << endl;
#endif
    _state_num = 18;
}


Etat_18::~Etat_18 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_18>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
