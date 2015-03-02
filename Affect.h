#if ! defined ( Affect_H )
#define Affect_H


#include "I.h"
#include "Id.h"

using namespace std;


class Affect : public I {
		
	private :
		Id *_id;
		E *_value;
	
};

#endif Affect_H
