#if ! defined ( Inst_H )
#define Inst_H


#include "Symbole.h"
#include <list>

using namespace std;


class Inst : public Symbole{
	private :
		list<I> _iList;
	
};

#endif Inst_H
