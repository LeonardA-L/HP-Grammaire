//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_8.h"
#include "Etat_9.h"
#include "SD.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_8::transition ( Automate & a, Symbole * s )
{
	if(*s >= 100)
	{
		//Symboles non terminaux
	}else
	{
		//R5 : D -> var id MV ;
		List<Symbole*> list = reductionUnstack(4);
		D_var d = new D_var();
		list->pop_front();
		d.add(list->front()->getList());
		list->pop_front();
		d.addId(list->front());
		void reductionPush(d, new Etat_9());
	}
	
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
