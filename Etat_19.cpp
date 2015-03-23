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
		//R6 : D -> const id = val MC ;
		List<Symbole*> list = reductionUnstack(6);
		D_const* d = new D_const();
		list->pop_front();
		d->add(list->front()->getList());
		list->pop_front();
		Val val = list->front();
		list->pop_front();
		list->pop_front();
		Id* id = list->front();
		list->pop_front();
		id->setVal(val)
		d->addId(id);
		void reductionPush(d, new Etat_9();
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
