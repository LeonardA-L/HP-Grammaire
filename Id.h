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
		string getName();
		void setVar(bool v);
		void setDeclared(bool d);
		void setAssigned(bool a);
		void setUsed(bool u);
		Id(string name);
		double eval();
		virtual ~Id();
		Val* getVal();
		void setVal(Val* newVal);
		virtual void print();
		virtual E* optimise();
	
	private :
		string _name;
		bool _var;	// True if var, false if const
		bool _declared;
		bool _assigned;
		bool _used;
		Val* _val;
};

#endif Id_H
