#include "I_Lire.h"

using namespace std;

I_Lire::I_Lire(Id *_id) {
				SI(Symbole::I_ECRIRE);
				id=_id;
				val=new Val();
}

void I_Lire::execute(){
	double x;
	cin >> x;
	val.setValue(x);
}
