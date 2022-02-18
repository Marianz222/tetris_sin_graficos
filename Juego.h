#ifndef JUEGO_H
#define JUEGO_H

class Juego {
	
private:
	
	bool juego_terminado;
	int puntos;
	int lineas_eliminadas;
	
public:
	
	Juego();
	int tecla_presionada();
	void iniciar();
	
	//Función gotoxy reimplementada
	void gotoxy(int x, int y);
	
};

#endif

