#include <iostream>
#include <string> 
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

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
		s = "";
		matched = false;
	}
}

void analyse(string line)
{
	char c;
	int i=-1;
	string buff("");
	bool matched = false;
	for(int i=0;i<line.length();i++)
	{
		c = line.at(i);
		switch(c)
		{
			case ',':
			case ' ':
			case ';':
			case '\n':
				//cout << "Special char "<<c<< " buff is :"<< buff<<endl;
				ship(buff,matched);
				continue;
			break;
		}
		string tmp("");
		tmp+=buff+c;
		
		// Continue until it doesn't match anymore
		if(checkRegexMatch(tmp,re_const) 
			or checkRegexMatch(tmp,re_var) 
			or checkRegexMatch(tmp,re_lire) 
			or checkRegexMatch(tmp,re_ecrire) 
			or checkRegexMatch(tmp,re_identifier) 
			or checkRegexMatch(tmp,re_numeral) 
			or checkRegexMatch(tmp,re_equals))
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


int main()
{
	string code;
	while(getline(cin,code)){
		analyse(code);
		//cin.ignore();
	}
	
	return 0;
}
