#if ! defined ( Id_H )
#define Id_H

#include <string>
#include "E.h"

using namespace std;

class Id : public E {	
	private :
		string _name;
	public :
	 	Id() : E(ID) {}	
};

#endif Id_H
