#include "I_Lire.h"
#include <iostream>
#include <string>     // std::string, std::stod

#include "Val.h"
#include "Lexer.h"

using namespace std;
using namespace boost;

I_Lire::I_Lire(Id *_id) : SI(Symbole::I_LIRE){
	id=_id;
	id->setUsed(true);
	id->setAssigned(true);
}

void I_Lire::execute(){
	double x;
	string s;
	boost::regex re_numeral("(\\d+)");
	do {
		cout << "Lecture de " << id->getName() << " : ";
		cin >> s;
	} while(!checkRegexMatch(s, re_numeral));
	Val* val = new Val();
	val->setValue(stod(s, NULL));
	id->setVal(val);
}

void I_Lire::print()
{
	cout << "lire " << id->getName() << ";"<< endl;
}
