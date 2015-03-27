#if ! defined ( Id_H )
#define Id_H

#include <string>
#include "E.h"
#include "Val.h"

using namespace std;

class Id : public E {
	public:
		bool isVar();
		bool isDeclared();
		bool isAssigned();
		bool isUsed();
		bool isUsedBeforeAssigned();
		bool isAssignedBeforeDeclared();
		string getName();
		void setVar(bool v);
		void setDeclared(bool d);
		void setAssigned(bool a);
		void setUsed(bool u);
		void setUsedBeforeAssigned(bool u);
		void setAssignedBeforeDeclared(bool a);
		Id(string name);
		double eval();
		virtual ~Id();
		Val* getVal();
		void setVal(Val* newVal);
		virtual void print();
		virtual E* optimise(bool hasPriority);
	
	private :
		string _name;
		bool _var;	// True if var, false if const
		bool _declared;
		bool _assigned;
		bool _used;
		bool _usedBeforeAssigned;
		bool _assignedBeforeDeclared;
		Val* _val;
};

#endif Id_H
