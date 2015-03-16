#if ! defined ( Inst_H )
#define Inst_H


#include "Symbole.h"
#include <list>
#include "SI.h"

using namespace std;


class Inst : public Symbole{
	private :
		list<SI> _iList;
	public :
		Inst() : Symbole(Symbole::INST) {}
};

#endif Inst_H
