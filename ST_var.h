#if ! defined ( ST_VAR_H)
#define ST_VAR_H


#include "Symbole.h"

using namespace std;


class ST_var : public Symbole{
	
public :
	ST_var() : Symbole(VAR) {}	
	
};

#endif ST_VAR_H
