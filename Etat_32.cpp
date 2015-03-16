//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_32.h"
#include "Etat_37.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_32::transition ( Automate & a, Symbole * s )
{
	T *t = new T();
	Etat_37 *etat37= new Etat_37();
	a.reduction(1,t,etat37);
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_32::Etat_32 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_32::~Etat_32 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
