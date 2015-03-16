//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_43.h"

#include "Etat_39.h"
#include "Etat_37.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_43::transition ( Automate & a, Symbole * s )
{
	int prev = a.getPreviousState(3);
	if(prev == 37) {
		a.reduction(3, new T(), new Etat_37());
	} else if(prev == 39) {
		a.reduction(3, new T(), new Etat_39());
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_43::Etat_43 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_43>" << endl;
#endif
    _state_num = 43;
}


Etat_43::~Etat_43 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_43>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
