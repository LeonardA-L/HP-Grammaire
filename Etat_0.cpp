/*************************************************************************
                           Etat_0  -  description
                             -------------------
    début                : 2015/03/02
    copyright            : (C) 2015 par dfournier, blegrand
*************************************************************************/

//---------- Réalisation de la classe <Etat_0> (fichier etat_0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_0.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

void Etat::transition ( Automate a, Symbole s )
// Algorithme :
{

} 
//----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_0::Etat_0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
} //----- Fin de Etat


Etat_0::~Etat_0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
} //----- Fin de ~Etat


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
