#include "Dec.h"
#include <algorithm>    // std::for_each

using namespace std;

void Dec::add(SD* s)
{
	_dList.push_back(s);
}

void Dec::print()
{
	for_each (_dList.begin(), _dList.end(), print_SD);
}

void Dec::print_SD(SD* sd){
	sd->print();
}
