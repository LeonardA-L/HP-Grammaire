/*************************************************************************
                           Etat_0  -  description
                             -------------------
    début                : 2015/03/02
    copyright            : (C) 2015 par dfournier, blegrand
*************************************************************************/

//---------- Interface de la classe <Etat_0> (fichier etat_0.cpp) ------
#if ! defined ( ETAT_0_H )
#define ETAT_0_H

//--------------------------------------------------- Interfaces utilisées
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat>
//
//
//------------------------------------------------------------------------ 

class Etat_0 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void transition ( Automate a, Symbole s );
    // Mode d'emploi :
    //  
    // Contrat :
    //  


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    Etat_0 ( );

    virtual ~Etat_0 ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Etat>

#endif // ETAT_0_H
