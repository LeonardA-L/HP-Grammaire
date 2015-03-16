//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_46.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_46::transition ( Automate & a, Symbole * s )
{
	a.reduction(3, new F(), new Etat_43());
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_46::Etat_46 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_46>" << endl;
#endif
    _state_num = 46;
}


Etat_46::~Etat_46 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_46>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées