//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_7.h"

#include "Etat_5.h"
#include "MV.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_7::transition ( Automate & a, Symbole * s )
{
	list<Symbole*> liste=a.reductionUnstack(3);
	MV *mv=(MV*)liste.back();
	mv->addId((Id*)liste.front());
	a.reductionPush(mv, new Etat_5());
	return true;
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_7::Etat_7 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_7>" << endl;
#endif
    _state_num = 7;
}


Etat_7::~Etat_7 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_7>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
