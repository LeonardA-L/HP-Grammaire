//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_24.h"
#include "SI.h"
#include "Etat_21.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_24::transition ( Automate & a, Symbole * s )
{
	list<Symbole> liste =a.reductionUnstack(3);
	if(	liste.size()==3))
	{
		liste.popfront();
		I_Lire *i=new I_Lire((E)liste.front());
		a.reductionPush(i,etat21);
		return true;
	}
	return false;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_24::Etat_24 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_24>" << endl;
#endif
    _state_num = 24;
}


Etat_24::~Etat_24 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_24>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
