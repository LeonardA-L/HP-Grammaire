#if ! defined ( P_H )
#define P_H


#include "Symbole.h"
#include "Dec.h"
#include "Inst.h"
#define NULL 0

using namespace std;


class P : public Symbole{
	
	private :
		Dec *_dec = NULL;
		Inst *_inst = NULL;
	public :
		P(Dec* dec, Inst* inst) : Symbole(Symbole::P), _dec(dec), _inst(inst) {}
		virtual ~P();
		void print();
		void optimise();
		void execute();
};

#endif P_H
