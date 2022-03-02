#ifndef PIEZA_H
#define PIEZA_H

class Pieza {
	
	//Clase madre para todas las variantes de pieza. Cuenta con la matriz en blanco para que las clases hijas dibujen sus figuras.
	//Para la rotaci�n, se almacenan 4 figuras diferentes y se alternan con las teclas E y R
	//Hereda de la clase Juego el m�todo gotoxy reimplementado, para manejar la impresi�n en pantalla
	
protected:
	
	//Variables que definen las variedades de rotaci�n para cada pieza
	bool figura1[4][4];
	bool figura2[4][4];
	bool figura3[4][4];
	bool figura4[4][4];
	
	//Variables de coordenada de la pieza
	int posicionX;
	int posicionY;
	
	//Variable de personalizaci�n. Define el color de la pieza (WIP)
	int color;
	
	//Variable que controla que figura se muestra. Esta variable se modifica al usar el m�todo de rotaci�n
	int estado;
	
public:
	
	Pieza();
	
	//M�todos para cambiar las coordenadas
	void cambiarPosicionY();
	void cambiarPosicionX();
	
	//M�todos para obtener las coordenadas
	int retornarPosicionY();
	int retornarPosicionX();
	
	//M�todos que se encargan de la rotaci�n
	void rotarDerecha();
	void rotarIzquierda();
	
};

#endif

