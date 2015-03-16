//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_34.h"
#include "Etat_28.h"
#include "Etat_29.h"
#include "Etat_44.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_34::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(Symbole::ID) :
			Etat_28 *etat28=new Etat_28();
			a.decalage(s,etat28);
			break;
		case(Symbole::VAL) :
			Etat_29 *etat29=new Etat_29();
			a.decalage(s, etat29);
			break;
		case(Symbole::PARENTHESIS_OPEN) :
			Etat_44 *etat44=new Etat_44();
			a.decalage(s, etat44);
			break;	
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_34::Etat_34 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_34::~Etat_34 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
