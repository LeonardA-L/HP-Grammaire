//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_37.h"
#include "Etat_40.h"
#include "Etat_41.h"
#include "Etat_31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_37::transition ( Automate & a, Symbole * s )
{
	switch(*s)
	{
		case(ASTERIX) :
			Etat_40 *etat40=new Etat_40();
			a.decalage(s,etat40);
			break;
		case(SLASH) :
			Etat_41 *etat41=new Etat_41();
			a.decalage(s, etat41);
			break;
		case(POINT_VIRGULE || PLUS || MOINS || PARENTHESIS_CLOSE) :
		Etat_21 *etat21=new Etat_21();
		T *t=new T();
		a.reduction(1,t,etat21);
			break;	
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_37::Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_37::~Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
