//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_36.h"

#include "Etat_21.h"
#include "I_Affect.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_36::transition ( Automate & a, Symbole * s )
{
	Etat_21 *etat21=new Etat_21();
	
	list<Symbole*> liste=a.reductionUnstack(4);
	if(liste.size()==4){
		I_Affect *i=new I_Affect((Id*)liste.front(), (E*)liste.back());
		a.reductionPush(i,etat21);
		return true;
	}
	return false;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_36::Etat_36 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_36>" << endl;
#endif
    _state_num = 36;
}


Etat_36::~Etat_36 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_36>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
