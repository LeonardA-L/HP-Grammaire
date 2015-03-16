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
			Etat_34 *etat34=new Etat_34();
			a.decalage(s,etat34);
			break;
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_33::Etat_33 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_0>" << endl;
#endif
    _state_num = 0;
}


Etat_33::~Etat_33 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_0>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
