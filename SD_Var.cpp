#if ! defined ( SD_Var_H )
#define SD_Var_H


#include "Symbole.h"

using namespace std;


class SD_Var : public SD{

list<Variable> listVar;

public :
	SD_Var() : Symbole(Symbole::D) {}		
	
};

#endif SD_Var_H
