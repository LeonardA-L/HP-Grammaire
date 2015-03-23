//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_4.h"
#include "Etat_5.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_4::transition ( Automate & a, Symbole * s )
{
	a.reductionPush(new MV(), new Etat_5());

} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_4::Etat_4 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_4>" << endl;
#endif
    _state_num = 4;
}


Etat_4::~Etat_4 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_4>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
