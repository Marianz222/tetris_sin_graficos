#ifndef PIEZA_H
#define PIEZA_H

class Pieza {
	
protected:
	
	int figura_t1[4][4];
	int figura_t2[4][4];
	int figura_t3[4][4];
	int figura_t4[4][4];
	
	int estado;
	
public:
	
	Pieza();
	rotar();
	
};

#endif

