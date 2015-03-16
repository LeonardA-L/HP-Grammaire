#include "Lexer.h"
#include "StaticAnalyse.h"
#include "Symbole.h"
#include <vector>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;


int main(int argc, char* argv[]){
	 
	 bool display = false;
	 bool analyse = false;
	 bool execute = false;
	 bool optimize = false;
	
	bool source = false;
	string sourceFile;
	
	for (int i = 1; i < argc; i++) {
		string s(argv[i]);
		if (s == "-p") {
			display = true;
		}
		if (s == "-a") {
			analyse = true;
		}
		if (s == "-e") {
			execute = true;
		}
		if (s == "-o") {
			optimize = true;
		}
		
		regex re_source("(\w+).lt");
		if(checkRegexMatch(s,re_source)){
			source = true;
			sourceFile = s;
		}
	}
	
	if(!display && !analyse && !execute && !optimize){	// You do nothing, John Snow
		cout << "Erreur, veuillez specifier des arguments" << endl;
		cout << "  Utilisation :" << endl;
		cout << "    " << argv[0] << " [-p] [-a] [-e] [-o] source.lt" << endl;
		cout << "      [-p] affiche le code source reconnu" << endl;
		cout << "      [-a] analyse le programme de maniere statique" << endl;
		cout << "      [-e] execute interactivement le programme" << endl;
		cout << "      [-o] optimise les expressions et instructions" << endl;
	}
	
	
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
	if(!analyse || staticAnalyse(symbol_table)){
		// If the analyse is successful,

		if(optimize){
			// Transformation
			cerr << "Optimize" << endl;
			//...
		}
		
		if(display){
			// Display
			cerr << "Display" << endl;
			//...
		}
		
		if(execute){
			// Execution
			cerr << "Execute" << endl;
			//...
		}
	}
	
	// Destroy stuff
	cerr << "Destroy" << endl;
	
	for (vector<Symbole*>::iterator it = symbol_table.begin(); it != symbol_table.end(); ++it){
		Symbole* s = *it;
		delete s;
	}
	
	return 0;
};
