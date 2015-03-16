//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_38.h"
#include "Etat_28.h"
#include "Etat_29.h"
#include "Etat_44.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_38::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(ID) :
			Etat_28 *etat28=new Etat_28();
			a.decalage(s,etat28);
			break;
		case(VAL) :
			Etat_29 *etat29=new Etat_29();
			a.decalage(s, etat29);
			break;
		case(PARENTHESIS_OPEN) :
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
Etat_38::Etat_38 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_38::~Etat_38 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
