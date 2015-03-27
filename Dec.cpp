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

void Dec::optimise(){
	for(int i = _dList.size()-1;i>=0;i--){
		if(((int)*_dList[i]) == Symbole::D_CONST){
  			_dList.erase(_dList.begin()+i);
		}
	}
}
