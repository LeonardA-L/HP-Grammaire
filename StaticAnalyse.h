#if ! defined ( StatAn_H )
#define StatAn_H

#include <iostream>
#include "Symbole.h"
#include "Id.h"
#include <vector>

using namespace std;

// Returns true if success
bool staticAnalyse(vector<Symbole*> & symbol_table);

#endif StatAn_H
