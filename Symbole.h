#if ! defined ( Symbole_H )
#define Symbole_H

using namespace std;

class Symbole{
	protected : 
		int ident;

	public :
		Symbole(int id);
		Symbole();
		virtual ~Symbole();
		void print();
		//operator int();

};


#endif Symbole_H
