#if ! defined ( P_H )
#define P_H


#include "Symbole.h"
#include "Dec.h"
#include "Inst.h"

using namespace std;


class P : public Symbole{
	
	private :
		Dec *_dec;
		Inst *_inst;
	public :
		P() : Symbole(Symbole::P) {}
	
};

#endif P_H
