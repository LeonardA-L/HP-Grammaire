#if ! defined ( I_AFFECT_H )
#define I_AFFECT_H


#include "SI.h"
#include "E.h"
#include "Id.h"

using namespace std;


class I_Affect : public SI{
		
	public :
		I_Affect(Id*_id, E*_e) : SI(Symbole::I_AFFECT), id(_id), e(_e)
		{
			id->setAssigned(true);
		}
		virtual ~I_Affect();
		void execute();
		virtual void print();
		virtual void optimise();
	private :
		Id *id;
		E *e;
	
};

#endif I_AFFECT_H
