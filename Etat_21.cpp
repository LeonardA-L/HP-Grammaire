//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_21.h"
#include "Etat_20.h"
#include "Inst.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_21::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//R7 : Inst -> Inst I
		list<Symbole*> list = a.reductionUnstack(2);
		Inst* inst = (Inst*) list.back();
		inst->add((SI*)list.front());
		a.reductionPush(inst, new Etat_20());
	}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_21::Etat_21 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_21>" << endl;
#endif
    _state_num = 21;
}


Etat_21::~Etat_21 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_21>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
