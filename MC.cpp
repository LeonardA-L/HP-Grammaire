#include "MC.h"

using namespace std;

void MC::addId(Id* id){
	listId.push_back(id);
	id->setDeclared(true);
}
