#include "Lexer.h"
#include "StaticAnalyse.h"
#include "Symbole.h"
#include <vector>

int main(){
	vector<Symbole*> symbol_table;
	
	Lexer l;
	Symbole* s;
	do{
		s = l.getNext();
		symbol_table.push_back(s);
		//cout << s << endl;
	}
	while(s != NULL);
	
	// Static analyse
	if(staticAnalyse(symbol_table)){
		// If the analyse is successful,
		cout << "Execution" << endl;
		//Transformation
		
		// Execution
		
	}
	
	// Destroy stuff
	cout << "Destroy" << endl;
	return 0;
};
