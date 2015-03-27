#include "Inst.h"
#include "SI.h"
#include <algorithm>    // std::for_each

using namespace std;

void Inst::add(SI* s)
{
	_iList.push_back(s); 
}

void Inst::print()
{
	for_each (_iList.begin(), _iList.end(), print_SI);
}

void Inst::print_SI(SI* si){
	si->print();
}
