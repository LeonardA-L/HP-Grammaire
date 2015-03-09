//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
bool Etat::operator == ( const Etat & unEtat)
{
	if(this->_state_num == unEtat._state_num)
	{
		return true;
	}
	return false;
}


//-------------------------------------------- Constructeurs - destructeur
Etat::Etat ( const Etat & unEtat )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat>" << endl;
#endif
    this->_state_num = unEtat._state_num;
}


Etat::Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat>" << endl;
#endif
    _state_num = -1;
}


Etat::~Etat ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
