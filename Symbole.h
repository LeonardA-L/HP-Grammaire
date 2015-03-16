#if ! defined ( Symbole_H )
#define Symbole_H

using namespace std;


//A créer : ID, VAL

class Symbole{

protected : 
	int ident;


public :
	Symbole(int id) : ident(id) {}
	virtual ~Symbole(){}
	void print();
	operator int() const {return ident;}
	
	enum symbole_t { ASTERIX, CONST, DOUBLE_POINT_EGAL, ECRIRE, EGAL, LIRE, MOINS, 
				PARENTHESIS_CLOSE, PARENTHESIS_OPEN, PLUS, POINT_VIRGULE, SLASH, 
				VAR, VIRGULE, ID, VAL, DOLLAR}; 
	enum symbole_nt { P=100, DEC, D, EXPR, I, INST, MC, MV, F, T, OPA, OPM };
};

#endif Symbole_H
