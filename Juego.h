#ifndef JUEGO_H
#define JUEGO_H

class Juego {
	
	//Clase principal. Gestiona aspectos de pantalla y de l�gica general
	
private:
	
	bool juego_terminado;
	bool juego_iniciado;
	int puntos;
	int lineas_eliminadas;
	bool sinPieza;
	
public:
	
	Juego();
	
	//M�todo de entrada del jugador
	int tecla_presionada();
	
	//M�todos de gesti�n del juego
	void iniciar();
	void generarPieza();
	
	//M�todos de actualizaci�n
	void actualizar();
	
	//M�todos de control de colisi�n
	bool colisionMuroIzquierdo();
	bool colisionMuroDerecho();
	
	//M�todos de impresi�n en pantalla
	void imprimir_entrada();
	void imprimir_puntaje(int puntos);
	void imprimir_controles();
	
	//Funci�n gotoxy reimplementada
	void gotoxy(int coordenadaX, int coordenadaY);
	
};

#endif

