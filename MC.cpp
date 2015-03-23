#include "MC.h"

using namespace std;

void MC::addIdVal(Id* id, Val* val){
	listIdVal.pushback(new pair<Id*, Val*>(id,val));
}
