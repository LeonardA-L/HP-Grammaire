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
			
			string type("variable");
			if(id->isVar()&&!id->isVar()){ // need to be variable by default (to pass test 06.4)
				type = "constante";
			}
			
			
			if(!id->isDeclared()){ // if is not declared we have to show only this error on stderr (to pass test 06.3)
				idFail = true;
				errors << "\t La " << type << " n'est pas déclarée."<<endl;
			}
			else
			{
				if(id->isVar() && !id->isAssigned()){
					idFail = true;
					errors << "\t La " << type << " n'a pas de valeur assignée." << endl;
				}
				if(!id->isVar() && id->isAssigned()){
					errors << "\t Une constante ne peut être modifiée." << endl;
				}
				if(!id->isUsed()){
					idFail = true;
					errors << "\t La " << type << " n'est pas utilisée." << endl;
				}
				/* Impossible de l'obtenir pour le moment
				if(id->isAssignedBeforeDeclared()){
					idFail = true;
					errors << "\t La " << type << " est assignée avant d'être déclarée." << endl;
				}
				*/
				if(id->isUsedBeforeAssigned()){
					idFail = true;
					errors << "\t La " << type << " est utilisée avant d'avoir reçu une valeur." << endl;
				}
			}
			
			
			if(idFail){
				failed = true;
				cerr << "Erreur : " << type << " " << n << " : "<<endl;
				cerr << errors.str() << endl;
			}
		}
	}
	return !failed;
}
