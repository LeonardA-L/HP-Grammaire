//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_19.h"
#include "Etat_9.h"
#include "SD.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_19::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//Symboles terminaux
		List<Symbole> reductionUnstack(6);
		void reductionPush(new SD(), new Etat_9();
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_19::Etat_19 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_19>" << endl;
#endif
    _state_num = 19;
}


Etat_19::~Etat_19 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_19>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
