#ifndef PIEZA_H
#define PIEZA_H
#include "Juego.H"

class Pieza : public Juego {
	
protected:
	
	char figura1[4][4];
	char figura2[4][4];
	char figura3[4][4];
	char figura4[4][4];
	
	int estado;
	
public:
	
	Pieza();
	int aplicarCoordenadas(int coordX,int coordY);
	int obtenerY();
	int obtenerX();
	void imprimir();
	void rotarDerecha();
	void rotarIzquierda();
	
};

#endif

