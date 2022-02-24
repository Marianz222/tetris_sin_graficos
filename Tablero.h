#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
	
private:
	
	char cuadrilla[20][22];
	
public:
	
	Tablero();
	void mostrar();
	char obtenerValor(int x, int y);
	void modificarValor(int x, int y, char valor);
	
};

#endif
