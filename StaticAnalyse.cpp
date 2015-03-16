#include "StaticAnalyse.h"
#include <sstream>

using namespace std;

bool staticAnalyse(vector<Symbole*> & symbol_table){
	bool failed = false;
	
	for (vector<Symbole*>::iterator it = symbol_table.begin(); it != symbol_table.end(); ++it){
		Symbole* s = *it;
		
		if (Id* id = dynamic_cast<Id*>(s)) {
			string n = id->getName();
			
			bool idFail = false;
			stringstream errors;
			
			string type("constante");
			if(id->isVar()){
				type = "variable";
			}
			
			
			if(!id->isDeclared()){
				idFail = true;
				errors << "\t La " << type << " n'est pas déclarée"<<endl;
			}
			if(!id->isAssigned()){
				idFail = true;
				errors << "\t La " << type << " n'a pas de valeur assignée" << endl;
			}
			if(!id->isUsed()){
				idFail = true;
				errors << "\t La " << type << " n'est pas utilisée" << endl;
			}
			
			if(idFail){
				failed = true;
				cout << "Erreur : " << type << " " << n << " : "<<endl;
				cout << errors.str() << endl;
			}
		}
	}
	return !failed;
}
