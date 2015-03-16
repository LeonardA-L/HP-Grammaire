//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_16.h"

#include "Etat_17.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_16::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(EGAL) :
			a.decalage(s, new Etat_17());
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_16::Etat_16 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_16>" << endl;
#endif
    _state_num = 16;
}


Etat_16::~Etat_16 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_16>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
