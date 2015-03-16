//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_36.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_36::transition ( Automate & a, Symbole * s )
{
	Etat_21 *etat21=new Etat_21();
	I *i=new I();
	a.reduction(4,i,etat21);
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_36::Etat_36 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_36>" << endl;
#endif
    _state_num = 0;
}


Etat_36::~Etat_36 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_36>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
