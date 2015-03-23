#if ! defined ( I_ECRIRE_H )
#define I_ECRIRE_H


#include "SI.h"

using namespace std;


class I_Ecrire : public SI{
		
	public :
		I_Ecrire(E _e);
		
	private :
		E e;
	
};

#endif I_ECRIRE_H
