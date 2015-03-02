/*************************************************************************
                           Etat  -  description
                             -------------------
    début                : 2015/03/02
    copyright            : (C) 2015 par dfournier, blegrand
*************************************************************************/

//---------- Réalisation de la classe <Etat> (fichier etat.cpp) --

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
// type Etat::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//------------------------------------------------- Surcharge d'opérateurs
bool Etat::operator == ( const Etat & unEtat)
// Algorithme :
//
{
	if(this->_state_num == unEtat._state_num)
	{
		return true;
	}
	return false;
} //----- Fin de operator ==


//-------------------------------------------- Constructeurs - destructeur
Etat::Etat ( const Etat & unEtat )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat>" << endl;
#endif
    this->_state_num = unEtat._state_num;
} //----- Fin de Etat (constructeur de copie)


Etat::Etat ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat>" << endl;
#endif
    _state_num = -1;
} //----- Fin de Etat


Etat::~Etat ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat>" << endl;
#endif
} //----- Fin de ~Etat


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
