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

void Inst::optimise()
{
	for_each (_iList.begin(), _iList.end(), optimise_SI);
}

void Inst::optimise_SI(SI* si){
	si->optimise();
}

void Inst::execute()
{
	for_each (_iList.begin(), _iList.end(), execute_SI);
}

void Inst::execute_SI(SI* si){
	si->execute();
}
