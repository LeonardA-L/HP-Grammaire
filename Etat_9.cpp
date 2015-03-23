//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_2.h"
#include "Etat_9.h"
#include "Dec.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_9::transition ( Automate & a, Symbole * s )
{
	//Symboles terminaux
	List<Symbole> reductionUnstack(2);
	void reductionPush(new Dec(), new Etat_2());
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_9::Etat_9 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_9>" << endl;
#endif
    _state_num = 9;
}


Etat_9::~Etat_9 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_9>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
