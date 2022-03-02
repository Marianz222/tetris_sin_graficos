#ifndef TABLERO_H
#define TABLERO_H

const int altura = 12;
const int anchura = 22;

class Tablero {
	
	//Clase que crea el tablero donde se colocan las piezas
	
private:
	
	//Matriz del tablero
	int cuadrilla[altura][anchura];
	
public:
	
	Tablero();
	
	void mostrar();
	
	//Métodos para cambiar u obtener el valor de una posición en el tablero
	char obtenerValor(int x, int y);
	void modificarValor(int x, int y, int valor);
	
};

#endif
