//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_39.h"
#include "Etat_25.h"
#include "Etat_34.h"
#include "Etat_40.h"
#include "Etat_41.h"


//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_39::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		switch(*s)
		{
			case(POINT_VIRGULE) :
			case(PLUS) :
			case(MOINS) :
			case(PARENTHESIS_CLOSE) :
				if(a.getPreviousState(3) == 34)
				{
					a.reduction(3, new E(), new Etat_34());
				}else if(a.getPreviousState(3) == 25)
				{
					a.reduction(3, new E(), new Etat_25());
				}
				break;
			case(ASTERIX) :
				a.decalage(s, new Etat_40());
				break;
			case(SLASH) :
				a.decalage(s, new Etat_41());
				break;
			default :
				break;
		}
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_39::Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_39>" << endl;
#endif
    _state_num = 39;
}


Etat_39::~Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_39>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
