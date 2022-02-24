#ifndef PIEZA_H
#define PIEZA_H
#include "Juego.H"

class Pieza : public Juego {
	
	//Clase madre para todas las variantes de pieza. Cuenta con la matriz en blanco para que las clases hijas dibujen sus figuras.
	//Para la rotación, se almacenan 4 figuras diferentes y se alternan con las teclas E y R
	
protected:
	
	char figura1[4][4];
	char figura2[4][4];
	char figura3[4][4];
	char figura4[4][4];
	
	int estado;
	int color;
	
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

