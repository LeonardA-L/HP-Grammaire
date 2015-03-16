//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_30.h"
#include "Etat_38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_30::transition ( Automate & a, Symbole * s )
{
	OpA *opa = new OpA();
	Etat_38 *etat38= new Etat_38();
	a.reduction(1,opa,etat38);
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_30::Etat_30 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_30>" << endl;
#endif
    _state_num = 0;
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
