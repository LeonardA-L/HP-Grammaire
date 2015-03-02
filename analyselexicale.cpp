#include <iostream>
#include <string> 
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

// Keywords
regex re_const("const");
regex re_var("var");
regex re_lire("lire");
regex re_ecrire("ecrire");
// Symbols
regex re_oppA("(\+|-)");
regex re_oppM("(*|/)");
regex re_equals("=");
regex re_affects(":=");
// Terminal
regex re_identifier("(^(?!const|var|lire|ecrire)(\w+)|^\w+(const|var|lire|ecrire)|(const|var|lire|ecrire)\w+)");
regex re_numeral("(\d+)");

void checkRegexMatch(string s, regex re){
	try
	{
	   if (!regex_match(s, re))
	   {
		  throw "The string doesn't match the regex";
	   }
	   else
	   {
		  throw "The string matches the regex";
	   }
	}
	catch (regex_error& e)
	{
	   cerr << "The regexp " << re << " is invalid!" << endl;
	   throw(e);
	}
	catch (char const* msg)
	{
		cerr << msg << endl;
	}
}

void analyse()
{
	char c;
	string buff("");
	while(cin >> c)
	{
		switch(c)
		{
			case ' ':
			continue;
			break;
		}
		buff += c;
		
		/*
		regex re("ok");
		string a("ok");
		string b("12");
		checkRegexMatch(a,re);
		checkRegexMatch(b,re);
		*/
	}
}


int main()
{
	cout << "coucou" << endl;
	analyse();
	return 0;
}
