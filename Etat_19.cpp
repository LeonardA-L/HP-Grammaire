//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <list>

//------------------------------------------------------ Include personnel
#include "Etat_19.h"
#include "Etat_9.h"
#include "SD.h"
#include "D_const.h"
#include "MC.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_19::transition ( Automate & a, Symbole * s )
{
	//R6 : D -> const id = val MC ;
	list<Symbole*> list = a.reductionUnstack(6);
	D_const* d = new D_const();
	list.pop_front();
	MC* mc = (MC*)list.front();
	d->add(mc->getList());
	delete mc;
	list.pop_front();
	Val* val = (Val*) list.front();
	list.pop_front();
	list.pop_front();
	Id* id = (Id*) list.front();
	list.pop_front();
	id->setVal(val);
	d->addId(id);
	a.reductionPush(d, new Etat_9());
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
