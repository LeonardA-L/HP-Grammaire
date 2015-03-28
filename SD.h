#if ! defined ( SD_H )
#define SD_H


#include "Symbole.h"

using namespace std;


class SD : public Symbole{

	public :
		SD(int val) : Symbole(val) {}
		virtual ~SD() {};	

};

#endif SD_H
