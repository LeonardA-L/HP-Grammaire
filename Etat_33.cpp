//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_33.h"
#include "Etat_34.h"


//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_33::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::DOUBLE_POINT_EGAL) : 
			a.decalage(s,new Etat_34());
			break;
		default :
			a.retry();
			cerr << "Erreur syntaxique (" << a.getLineInformations() <<") operateur := attendu" << endl;
			a.decalage(s,new Etat_34());
			break;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_33::Etat_33 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_33>" << endl;
#endif
    _state_num = 33;
}


Etat_33::~Etat_33 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_33>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
