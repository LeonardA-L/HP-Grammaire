//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_39.h"
#include "Etat_25.h"
#include "Etat_34.h"
#include "Etat_40.h"
#include "Etat_41.h"


//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_39::transition ( Automate & a, Symbole * s )
{

		if(*s==Symbole::POINT_VIRGULE || *s==Symbole::PLUS || *s==Symbole::MOINS || *s==Symbole::PARENTHESIS_CLOSE)
		{
				if(a.getPreviousState(3) == 34)
				{
					list<Symbole> liste=a.reductionUnstack(3);
					if(liste.size()==3)
					{
						E *exprLeft=liste.popfront();
						ExprBin *exprbin=liste.front();
						expbin->addExprLeft(exprLeft);
						expbin->addExprRight(liste.back())
						a.reductionPush(exprbin,new Etat_34());
						return true;
					}
				}else if(a.getPreviousState(3) == 25)
				{
					list<Symbole> liste=a.reductionUnstack(3);
					if(liste.size()==3)
					{
						E *exprLeft=liste.popfront();
						ExprBin *exprbin=liste.front();
						expbin->addExprLeft(exprLeft);
						expbin->addExprRight(liste.back())
						a.reductionPush(exprbin,new Etat_25()););
						return true;
					}
				}
		}
		
		switch(*s)
		{
			case(Symbole::ASTERIX) :
				a.decalage(s, new Etat_40());
				break;
			case(Symbole::SLASH) :
				a.decalage(s, new Etat_41());
				break;
			default :
				break;
		}
	
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_39::Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_39>" << endl;
#endif
    _state_num = 39;
}


Etat_39::~Etat_39 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_39>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
