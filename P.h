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
		P(Dec* dec, Inst* inst) : Symbole(Symbole::P), _dec(dec), _inst(inst) {}
	
};

#endif P_H
