#include "Lexer.h"
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
	
	// Destroy stuff
	
	
	return 0;
};
