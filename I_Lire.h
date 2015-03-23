#if ! defined ( I_LIRE_H )
#define I_LIRE_H


#include "SI.h"

using namespace std;


class I_Lire : public SI{
		
	public :
		I_Lire(Id *_id);
		void execute();
		
	private :
		Id *id;
		Val *val;
	
};

#endif I_LIRE_H
