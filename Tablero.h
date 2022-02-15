#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
	
private:
	
	char cuadrilla[10][20];
	
public:
	
	Tablero();	
	void dibujar_entrada();
	void dibujar_cuadrilla();
	void dibujar_puntaje(int puntos);
	void dibujar_controles();
	
};

#endif

