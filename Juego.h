#ifndef JUEGO_H
#define JUEGO_H

class Juego {
	
private:
	
	bool juego_terminado;
	int puntos;
	int lineas_eliminadas;
	
public:
	
	Juego();
	char retornar_tecla();
	void iniciar();
	
};

#endif

