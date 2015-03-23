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
		void add(SI s){  _iList.push_back(s) };
};

#endif Inst_H
