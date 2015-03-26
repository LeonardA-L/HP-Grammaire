//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_18.h"
#include "MC.h"
#include "Etat_14.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_18::transition ( Automate & a, Symbole * s )
{
	// MC , id = val
	MC *mc=(MC*) liste.back();
	Val *val=(Val*) liste.front();
	liste.pop_front(); // on enlève le val
	liste.pop_front(); // on enlève le =
	Id * id=(Id*)liste.front();
	id->setVal(val);
	id->setVar(false);
	mc->addId(id);
	a.reductionPush(mc,new Etat_14());
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_18::Etat_18 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_18>" << endl;
#endif
    _state_num = 18;
}


Etat_18::~Etat_18 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_18>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
