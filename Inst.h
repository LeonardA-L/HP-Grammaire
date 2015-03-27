#if ! defined ( Inst_H )
#define Inst_H


#include "Symbole.h"
#include <list>
#include "SI.h"

using namespace std;


class Inst : public Symbole{
	private :
		list<SI*> _iList;
	public :
		Inst() : Symbole(Symbole::INST) {}
		void add(SI* s);
		void print();
		static void print_SI(SI* si);
};

#endif Inst_H
