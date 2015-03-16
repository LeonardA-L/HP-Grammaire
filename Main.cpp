#include "Lexer.h"
#include "StaticAnalyse.h"
#include "Symbole.h"
#include <vector>

int main(){
	vector<Symbole*> symbol_table;
	
	// Parsing
	cerr << "Parse" << endl;
	Lexer l(&symbol_table);
	Symbole* s;
	do{
		s = l.getNext();
		
		//cout << s << endl;
	}
	while(s != NULL);
	
	// Static analyse
	cerr << "Analyse" << endl;
	if(staticAnalyse(symbol_table)){
		// If the analyse is successful,
		//Transformation
		cerr << "Optimize" << endl;
		
		// Execution
		cerr << "Execute" << endl;
		
	}
	
	// Destroy stuff
	cerr << "Destroy" << endl;
	
	for (vector<Symbole*>::iterator it = symbol_table.begin(); it != symbol_table.end(); ++it){
		Symbole* s = *it;
		delete s;
	}
	
	return 0;
};
