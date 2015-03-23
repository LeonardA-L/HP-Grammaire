#if ! defined ( I_LIRE_H )
#define I_LIRE_H


#include "SI.h"

using namespace std;


class I_Lire : public SI{
		
	public :
		I_Lire(E _e);
		
	private :
		E e;
	
};

#endif I_LIRE_H
