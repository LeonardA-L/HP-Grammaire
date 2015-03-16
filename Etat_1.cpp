//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_1.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_1::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(DOLLAR) :
			a.accept();
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_1::Etat_1 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_1>" << endl;
#endif
    _state_num = 1;
}


Etat_1::~Etat_1 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_1>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
