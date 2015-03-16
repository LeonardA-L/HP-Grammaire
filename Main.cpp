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
	staticAnalyse(symbol_table);
	// Destroy stuff
	
	
	return 0;
};
