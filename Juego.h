#ifndef JUEGO_H
#define JUEGO_H

#include "Pieza.h"

class Juego {
	
	//Clase principal. Gestiona aspectos de pantalla, las otras clases y la l�gica general
	
private:
	
	int tiempoCaida;
	int tiempoSpawn;
	int tiempoImpresion;
	
	bool juego_terminado;
	bool juego_iniciado;
	
	int puntos;
	int lineas_eliminadas;
	
	bool sinPieza;
	
public:
	
	Juego();
	
	//M�todo de entrada del jugador
	char obtenerTecla();
	
	//M�todos de gesti�n del juego
	void iniciar();
	Pieza* generarPieza();
	
	//M�todos de actualizaci�n
	void actualizar();
	
	//M�todos de control de colisi�n
	bool colisionMuroIzquierdo();
	bool colisionMuroDerecho();
	
	//M�todos de impresi�n en pantalla
	void imprimirGeneral();
	void imprimirEntrada();
	void imprimirPuntaje(int puntos);
	void imprimirControles();
	void imprimirElementos();
	
	//M�todos de control de sistema
	void pausarSistema();
	void limpiarPantalla();
	
	//Funci�n gotoxy reimplementada
	void gotoxy(int coordenadaX, int coordenadaY);
	
};

#endif

