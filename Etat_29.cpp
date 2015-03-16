//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_29.h"
#include "Etat_32.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_29::transition ( Automate & a, Symbole * s )
{
	F *f = new F();
	Etat_32 *etat32= new Etat_32();
	a.reduction(1,f,etat32);
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_29::Etat_29 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_29::~Etat_29 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
