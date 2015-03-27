//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_43.h"

#include "Etat_39.h"
#include "Etat_37.h"
#include "ExprBin.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_43::transition ( Automate & a, Symbole * s )
{
	// (18) T -> T opM F
	int prev = a.getPreviousState(3);
	list<Symbole*> liste = a.reductionUnstack(3);
	E *rightE=(E*) liste.front();
	liste.pop_front();
	ExprBin *exprMult=(ExprBin*)liste.front();
	exprMult->addExprLeft((E*)liste.back());
	exprMult->addExprRight(rightE);
	switch(prev){
		case 25 :
		case 34 :
		case 44 :
			a.reductionPush(exprMult, new Etat_37());
			break;
		case 38 :
			a.reductionPush(exprMult, new Etat_39());
			break;
	}
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_43::Etat_43 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_43>" << endl;
#endif
    _state_num = 43;
}


Etat_43::~Etat_43 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_43>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
