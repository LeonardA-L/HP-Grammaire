/*************************************************************************
                           Etat  -  description
                             -------------------
    début                : 2015/03/02
    copyright            : (C) 2015 par dfournier, blegrand
*************************************************************************/

//---------- Interface de la classe <Etat> (fichier etat.cpp) ------
#if ! defined ( ETAT_H )
#define ETAT_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"
#include "Automate.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat>
//
//
//------------------------------------------------------------------------ 

class Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual void transition ( Automate a, Symbole s ) = 0;
    // Mode d'emploi :
    //  
    // Contrat :
    //  


//------------------------------------------------- Surcharge d'opérateurs
    bool operator == ( const Etat & unEtat );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Etat ( const Etat & unEtat );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
    int _state_num;

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Etat>

#endif // ETAT_H
