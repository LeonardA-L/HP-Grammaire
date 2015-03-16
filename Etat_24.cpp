//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_24.h"
#include "SI.h"
#include "Etat_21.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_24::transition ( Automate & a, Symbole * s )
{
	a.reduction(3, new SI(), new Etat_21());	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_24::Etat_24 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_24>" << endl;
#endif
    _state_num = 24;
}


Etat_24::~Etat_24 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_24>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
