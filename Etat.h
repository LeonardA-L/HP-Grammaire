#if ! defined ( ETAT_H )
#define ETAT_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"
#include "Automate.h"


//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

class Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual bool transition ( Automate & a, Symbole * s ) = 0;


//------------------------------------------------- Surcharge d'opérateurs
    bool operator == ( const Etat & unEtat );



//-------------------------------------------- Constructeurs - destructeur
    Etat ( const Etat & unEtat );

    Etat ( );

    virtual ~Etat ( );

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
