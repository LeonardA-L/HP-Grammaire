//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_27.h"
#include "Etat_21.h"
#include "SI.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_27::transition ( Automate & a, Symbole * s )
{
	Etat_21 *etat21=new Etat_21();
	list<Symbole> liste=a.reductionUnstack(3);
	if(liste.size()==3)
	{
		liste.popfront();
		I_Ecrire *i=new I_Ecrire((E)liste.front());
		a.reductionPush(i,etat21);
		return true;
	}
	return false;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_27::Etat_27 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_27>" << endl;
#endif
    _state_num = 0;
}


Etat_27::~Etat_27 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_27>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
