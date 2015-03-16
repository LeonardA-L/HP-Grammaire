//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_3.h"
#include "Etat_4.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_3::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		switch(*s)
		{
			case(ID) :
				a.decalage(s, new Etat_4());
				break;
			default :
				break;
		}
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_3::Etat_3 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_3>" << endl;
#endif
    _state_num = 3;
}


Etat_3::~Etat_3 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_3>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
