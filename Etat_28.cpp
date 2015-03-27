//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_28.h"
#include "Etat_32.h"
#include "Etat_43.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_28::transition ( Automate & a, Symbole * s )
{
	//(21) F -> id
	int previousState= a.getPreviousState(1);
	list<Symbole* > list = a.reductionUnstack(1);
	switch (previousState)
	{
		case 25:
		case 34: 
		case 38: 
		case 44: 
			a.reductionPush((E*)list.back(),new Etat_32());
			break;
		case 42: 
			a.reductionPush((E*)list.back(),new Etat_43());
			break;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_28::Etat_28 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_28>" << endl;
#endif
    _state_num = 28;
}


Etat_28::~Etat_28 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_28>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
