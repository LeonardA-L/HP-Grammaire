//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat_37.h"
#include "Etat_40.h"
#include "Etat_41.h"
#include "Etat_26.h"
#include "Etat_35.h"
#include "Etat_45.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Etat_37::transition ( Automate & a, Symbole * s )
{
	if(*s==Symbole::POINT_VIRGULE || *s==Symbole::PLUS || *s==Symbole::MOINS || *s==Symbole::PARENTHESIS_CLOSE) {
			int previousState= a.getPreviousState(1);
			T *t=new T();
			switch (previousState)
			{
				case 25: 
					Etat_26 etat26= new Etat_26();
					a.reduction(1,t,etat26);
					break;
				case 34: 
					Etat_35 etat35= new Etat_35();
					a.reduction(1,t,etat35);
					break;
				case 44: 
				Etat_45 etat45= new Etat_45();
					a.reduction(1,t,etat45);
					break;
			}
			return true;
	}
	
	switch(*s)
	{
		case(Symbole::ASTERIX) :
			Etat_40 *etat40=new Etat_40();
			a.decalage(s,etat40);
			break;
		case(Symbole::SLASH) :
			Etat_41 *etat41=new Etat_41();
			a.decalage(s, etat41);
			break;		
		default : 
			return false;
	}
	return true;
} 

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Etat_37::Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat_37>" << endl;
#endif
    _state_num = 0;
}


Etat_37::~Etat_37 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat_37>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
