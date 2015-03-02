#include <iostream>
#include <string> 
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

void checkRegexMatch(string s, regex re){
	try
	{
	   if (!regex_match(s, re))
	   {
		  throw "The string doesn't match the regex";
	   }
	}
	catch (regex_error& e)
	{
	   cerr << "The regexp " << re << " is invalid!" << endl;
	   throw(e);
	}
	catch (char const* msg)
	{
		cout << msg << endl;
	}
}

void analyse()
{
	//char c;
	//string buff("");
	/*while(cin >> c)
	{*/
	//buff += c;
	regex re("ok");
	string a("ok");
	string b("12");
	checkRegexMatch(a,re);
	checkRegexMatch(b,re);
	//}
}


int main()
{
	cout << "coucou" << endl;
	analyse();
	return 0;
}
