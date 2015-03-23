#if ! defined ( I_LIRE_H )
#define I_LIRE_H


#include "SI.h"
#include "Id.h"

using namespace std;


class I_Lire : public SI{
		
	public :
		I_Lire(Id *_id);
		void execute();
	private :
		Id *id;
	
};

#endif I_LIRE_H
