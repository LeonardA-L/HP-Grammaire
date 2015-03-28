//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <list>

//------------------------------------------------------ Include personnel
#include "Etat_8.h"
#include "Etat_9.h"
#include "SD.h"
#include "MV.h"
#include "D_var.h"
#include "Id.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_8::transition ( Automate & a, Symbole * s )
{
	//R5 : D -> var id MV ;
	list<Symbole*> list = a.reductionUnstack(4);
	D_var* d = new D_var();
	list.pop_front();
	MV* mv = (MV *)list.front();
	d->add(mv->getList());
	delete mv;
	list.pop_front();
	Id *id=(Id*)list.front();
	id->setVar(true);
	d->addId(id);
	a.reductionPush(d, new Etat_9());
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_8::Etat_8 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_8>" << endl;
#endif
    _state_num = 8;
}


Etat_8::~Etat_8 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_8>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
