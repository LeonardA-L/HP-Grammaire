//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_45.h"


#include "Etat_30.h"
#include "Etat_31.h"
#include "Etat_46.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_45::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(PLUS) :
			a.decalage(s, new Etat_30());
			break;
		case(MOINS) :
			a.decalage(s, new Etat_31());
			break;
		case(PARENTHESIS_CLOSE) :
			a.decalage(s, new Etat_46());
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_45::Etat_45 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_45>" << endl;
#endif
    _state_num = 45;
}


Etat_45::~Etat_45 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_45>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
