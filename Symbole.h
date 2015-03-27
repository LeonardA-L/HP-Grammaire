#if ! defined ( Symbole_H )
#define Symbole_H

using namespace std;


//A créer : ID, VAL

class Symbole{
	protected : 
		int ident;

	public :
		Symbole(int id) : ident(id) {}
		virtual ~Symbole(){};
		operator int() const {return ident;}
		virtual void print(){};
	
	enum symbole_t { 
			CONST,				//  0	const
			VAR,				//  1	var
			ECRIRE, 			//  2	ecrire
			LIRE,				//  3	lire
			ASTERIX, 			//  4	*
			SLASH, 				//  5	/
			PLUS,				//  6	+
			MOINS, 				//  7	-
			DOUBLE_POINT_EGAL, 	//  8	:=
			EGAL,				//  9	=
			PARENTHESIS_OPEN,	// 10	(
			PARENTHESIS_CLOSE,	// 11	)
			VIRGULE,			// 12	,
			POINT_VIRGULE,		// 13	;
			ID, 				// 14	azerty
			VAL, 				// 15	0123456789
			DOLLAR				// 16	$
		}; 
	enum symbole_nt { P=100, DEC, D, EXPR, I, INST, MC, MV, I_AFFECT, I_ECRIRE, I_LIRE };
};


#endif Symbole_H
