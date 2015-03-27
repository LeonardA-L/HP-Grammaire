#include "Lexer.h"

#include <string>     // std::string, std::stod

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
	regex re_plus("\\\+");
	regex re_minus("-");
	regex re_mult("\\\*");
	regex re_divide("/");
	regex re_par_open("\\\(");
	regex re_par_close("\\\)");
	regex re_equals(":?=?");
	regex re_equals_simple("=");
	regex re_equals_affect(":=");
	regex re_coma(",");
	regex re_semicolon(";");
	regex re_dollar("\\\$");
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
			sbl = new Symbole(Symbole::CONST);
		}
		else if(checkRegexMatch(s,re_var)){
			sbl = new Symbole(Symbole::VAR);
		}
		else if(checkRegexMatch(s,re_lire)){
			sbl = new Symbole(Symbole::LIRE);
		}
		else if(checkRegexMatch(s,re_ecrire)){
			sbl = new Symbole(Symbole::ECRIRE);
		}
		else if (checkRegexMatch(s,re_numeral)) {
			sbl = new Val();
			((Val*)sbl)->setValue(stod(s, NULL));
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
		else if (checkRegexMatch(s,re_equals_affect)) {
			sbl = new Symbole(Symbole::DOUBLE_POINT_EGAL);
		}
		else if (checkRegexMatch(s,re_equals_simple)) {
			sbl = new Symbole(Symbole::EGAL);
		}
		else if (checkRegexMatch(s,re_coma)) {
			sbl = new Symbole(Symbole::VIRGULE);
		}
		else if (checkRegexMatch(s,re_semicolon)) {
			sbl = new Symbole(Symbole::POINT_VIRGULE);
		}		
		else if (checkRegexMatch(s,re_dollar)) {
			sbl = new Symbole(Symbole::DOLLAR);
		}
		else if (checkRegexMatch(s,re_plus)) {
			sbl = new Symbole(Symbole::PLUS);
		}
		else if (checkRegexMatch(s,re_minus)) {
			sbl = new Symbole(Symbole::MOINS);
		}
		else if (checkRegexMatch(s,re_mult)) {
			sbl = new Symbole(Symbole::ASTERIX);
		}
		else if (checkRegexMatch(s,re_divide)) {
			sbl = new Symbole(Symbole::SLASH);
		}
		else if (checkRegexMatch(s,re_par_open)) {
			sbl = new Symbole(Symbole::PARENTHESIS_OPEN);
		}
		else if (checkRegexMatch(s,re_par_close)) {
			sbl = new Symbole(Symbole::PARENTHESIS_CLOSE);
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
	line+="$|";							// end line character
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
			or checkRegexMatch(tmp,re_coma)
			or checkRegexMatch(tmp,re_semicolon)
			or checkRegexMatch(tmp,re_dollar)
			or checkRegexMatch(tmp,re_minus)
			or checkRegexMatch(tmp,re_plus)
			or checkRegexMatch(tmp,re_mult)
			or checkRegexMatch(tmp,re_divide)
			or checkRegexMatch(tmp,re_par_open)
			or checkRegexMatch(tmp,re_par_close)
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
	return NULL;
	
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




