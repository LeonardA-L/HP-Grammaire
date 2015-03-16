//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_31.h"
#include "Etat_38.h"
#include "OpA.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_31::transition ( Automate & a, Symbole * s )
{
	OpA *opa = new OpA();
	Etat_38 *etat38= new Etat_38();
	a.reduction(1,opa,etat38);
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_31::Etat_31 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_31>" << endl;
#endif
    _state_num = 0;
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
