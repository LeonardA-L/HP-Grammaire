#if ! defined ( Symbole_H )
#define Symbole_H

using namespace std;


//A créer : ID, VAL

class Symbole{
	protected : 
		int ident;

	public :
		Symbole(){};
		Symbole(int id) : ident(id) {}
		virtual ~Symbole(){};
		operator int() const {return ident;}
		void print(){};
	
	enum symbole_t { ASTERIX, CONST, DOUBLE_POINT_EGAL, ECRIRE, EGAL, LIRE, MOINS, 
				PARENTHESIS_CLOSE, PARENTHESIS_OPEN, PLUS, POINT_VIRGULE, SLASH, 
				VAR, VIRGULE, ID, VAL, DOLLAR}; 
	enum symbole_nt { P=100, DEC, D, EXPR, I, INST, MC, MV, F, T, OPA, OPM, I_AFFECT, I_ECRIRE, I_LIRE };
};


#endif Symbole_H
