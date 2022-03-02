#ifndef JUEGO_H
#define JUEGO_H

#include "Pieza.h"

class Juego {
	
	//Clase principal. Gestiona aspectos de pantalla, las otras clases y la lógica general
	
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
	
	//Método de entrada del jugador
	char obtenerTecla();
	
	//Métodos de gestión del juego
	void iniciar();
	Pieza* generarPieza();
	
	//Métodos de actualización
	void actualizar();
	
	//Métodos de control de colisión
	bool colisionMuroIzquierdo();
	bool colisionMuroDerecho();
	
	//Métodos de impresión en pantalla
	void imprimirGeneral();
	void imprimirEntrada();
	void imprimirPuntaje(int puntos);
	void imprimirControles();
	void imprimirElementos();
	
	//Métodos de control de sistema
	void pausarSistema();
	void limpiarPantalla();
	
	//Función gotoxy reimplementada
	void gotoxy(int coordenadaX, int coordenadaY);
	
};

#endif

