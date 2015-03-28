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
		virtual ~Inst();
		void add(SI* s);
		void print();
		void optimise();
		void execute();
		static void print_SI(SI* si);
		static void optimise_SI(SI* si);
		static void execute_SI(SI* si);
};

#endif Inst_H
