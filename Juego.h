#ifndef JUEGO_H
#define JUEGO_H

class Juego {
	
	//Clase principal. Gestiona aspectos de pantalla y de lógica general
	
private:
	
	bool juego_terminado;
	bool juego_iniciado;
	int puntos;
	int lineas_eliminadas;
	bool sinPieza;
	
public:
	
	Juego();
	
	//Método de entrada del jugador
	int tecla_presionada();
	
	//Métodos de gestión del juego
	void iniciar();
	void generarPieza();
	
	//Métodos de actualización
	void actualizar();
	
	//Métodos de control de colisión
	bool colisionMuroIzquierdo();
	bool colisionMuroDerecho();
	
	//Métodos de impresión en pantalla
	void imprimir_entrada();
	void imprimir_puntaje(int puntos);
	void imprimir_controles();
	
	//Función gotoxy reimplementada
	void gotoxy(int coordenadaX, int coordenadaY);
	
};

#endif

