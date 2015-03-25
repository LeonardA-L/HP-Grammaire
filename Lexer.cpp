#include "Lexer.h"

using namespace std;
using namespace boost;

typedef map<string, Symbole*>MAP;
MAP laTable;
string text;
int i;

	//regex
	// Keywords
	regex re_const("const");
	regex re_var("var");
	regex re_lire("lire");
	regex re_ecrire("ecrire");
	// Symbols
	regex re_oppA("[+-]");
	regex re_oppM("[*/]");
	regex re_equals("=");
	regex re_affect(":=");
	regex re_coma(",");
	regex re_semicolon(";");
	// Terminal
	regex re_identifier("(^(?!const|var|lire|ecrire)(\\w+)|^\w+(const|var|lire|ecrire)|(const|var|lire|ecrire)\\w+)");
	//regex re_identifier("\\w+");
	regex re_numeral("(\\d+)");

Symbole* Lexer::getNext(){
	return analyse();
	/*
	Symbole* s = NULL;
	if(!symboles.empty()){
		s = symboles.front();
	}
	
	symboles.pop();
	return s;*/
}

bool checkRegexMatch(string s, regex re){
	try
	{
	   if (!regex_match(s, re))
	   {
		  //cerr << "The string " << s << " doesn't match the regex" << endl;
		  return false;
	   }
	   else
	   {
		  //cerr << "The string " << s << " matches the regex" << endl;
		  return true;
	   }
	}
	catch (regex_error& e)
	{
	   cout << "The regexp " << re << " is invalid!" << endl;
	   //throw(e);
	}
	catch (char const* msg)
	{
		cout << msg << endl;
	}
}

Symbole* Lexer::ship(string& s, bool& matched)
{
	if(s != "" && matched){
		//cerr << "sending "<< s << endl;
		
		Symbole* sbl;
		
		bool pushedToTable = false;
		
		if(checkRegexMatch(s,re_const)){
			sbl = new ST_const();
		}
		
		else if(checkRegexMatch(s,re_var)){
			sbl = new ST_var();
		}
		else if(checkRegexMatch(s,re_lire)){
			sbl = new ST_lire();
		}
		else if(checkRegexMatch(s,re_ecrire)){
			sbl = new ST_ecrire();
		}
		else if (checkRegexMatch(s,re_numeral)) {
			sbl = new Val();
		}
		else if (checkRegexMatch(s,re_identifier)) {
			pushedToTable = true;
			MAP::const_iterator pos = laTable.find(s);
			if(pos == laTable.end()){
				sbl = new Id(s);
				laTable.insert(make_pair(s,sbl));
				smbl_table->push_back(sbl);
			}
			else{
				sbl = pos->second;
			}
		}
		else if (checkRegexMatch(s,re_affect)) {
			sbl = new ST_doublePoint();
		}
		else if (checkRegexMatch(s,re_equals)) {
			sbl = new ST_egal();
		}
		else if (checkRegexMatch(s,re_coma)) {
			sbl = new ST_virgule();
		}
		else if (checkRegexMatch(s,re_semicolon)) {
			sbl = new ST_ptVirgule();
		}
		
		s = "";
		matched = false;
		
		if(!pushedToTable){
			smbl_table->push_back(sbl);
		}
		
		return sbl;
	}
}

Symbole* Lexer::analyse()
{
	string line = text;
	line+="|";							// end line character
	char c;
	string buff("");
	bool matched = false;
	for(;i<line.length();i++)
	{
		c = line.at(i);

		string tmp("");
		tmp+=buff+c;
		
		// Continue until it doesn't match anymore
		if(checkRegexMatch(tmp,re_const) 
			or checkRegexMatch(tmp,re_var) 
			or checkRegexMatch(tmp,re_lire) 
			or checkRegexMatch(tmp,re_ecrire) 
			or checkRegexMatch(tmp,re_identifier) 
			or checkRegexMatch(tmp,re_numeral) 
			or checkRegexMatch(tmp,re_equals)
			or checkRegexMatch(tmp,re_affect)
			or checkRegexMatch(tmp,re_coma)
			or checkRegexMatch(tmp,re_semicolon)
			)
		{
			buff+=c;
			matched = true;
			continue;
		}
		
		if(matched){
			return ship(buff,matched);
		}		
	}
	
}

Lexer::Lexer(vector<Symbole*> * symbol_table, istream* is){
	smbl_table = symbol_table;
	sin = is;
	parseStdin();
}

void Lexer::parseStdin()
{
	text = "";
	string code;
	while(getline(*sin,code)){
		text+=code;
		//analyse(code);
		//cin.ignore();
	}
}




