#include <iostream>
#include <string> 
#include <boost/regex.hpp>
#include <stack>

#include "Symbole.h"
#include "ST_const.h"
#include "ST_var.h"
#include "ST_asterix.h"
#include "ST_doublePoint.h"
#include "ST_ecrire.h"
#include "ST_egal.h"
#include "ST_lire.h"
#include "ST_moins.h"
#include "ST_parenthesisClose.h"
#include "ST_parenthesisOpen.h"
#include "ST_plus.h"
#include "ST_ptVirgule.h"
#include "ST_slash.h"
#include "ST_virgule.h"
#include "Id.h"
#include "Val.h"


using namespace std;
using namespace boost;

static stack<Symbole*> pileSymboles;

//regex
	// Keywords
	regex re_const("const");
	regex re_var("var");
	regex re_lire("lire");
	regex re_ecrire("ecrire");
	// Symbols
	regex re_oppA("[+-]");
	regex re_oppM("[*/]");
	regex re_equals(":?=?");
	regex re_coma(",");
	regex re_semicolon(";");
	// Terminal
	regex re_identifier("(^(?!const|var|lire|ecrire)(\\w+)|^\w+(const|var|lire|ecrire)|(const|var|lire|ecrire)\\w+)");
	//regex re_identifier("\\w+");
	regex re_numeral("(\\d+)");

bool checkRegexMatch(string s, regex re){
	try
	{
	   if (!regex_match(s, re))
	   {
		  cerr << "The string " << s << " doesn't match the regex" << endl;
		  return false;
	   }
	   else
	   {
		  cerr << "The string " << s << " matches the regex" << endl;
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

void ship(string& s, bool& matched)
{
	if(s != "" && matched){
		cout << "sending "<< s << endl;
		
		//TODO: Send as symbol
		
		Symbole* sbl;
		
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
		else if (checkRegexMatch(s,re_identifier)) {
			sbl = new Id();
		}
		else if (checkRegexMatch(s,re_numeral)) {
			sbl = new Val();
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
		
		pileSymboles.push(sbl);
		
		/*cout << "Top" << pileSymboles.top() << endl;
		pileSymboles.pop();*/
		
		s = "";
		matched = false;
	}
}

void analyse(string line)
{
	line+="|";							// end line character
	char c;
	int i=-1;
	string buff("");
	bool matched = false;
	for(int i=0;i<line.length();i++)
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
			)
		{
			buff+=c;
			matched = true;
			continue;
		}
		
		if(matched){
			ship(buff,matched);
			i--;
		}		
	}
	
}

stack<Symbole*>* parseStdin()
{
	string code;
	while(getline(cin,code)){
		analyse(code);
		//cin.ignore();
	}
	
	return &pileSymboles;
}

int main()
{
	parseStdin();
	return 0;
}
