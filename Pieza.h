#ifndef PIEZA_H
#define PIEZA_H

class Pieza {
	
	//Clase madre para todas las variantes de pieza. Cuenta con la matriz en blanco para que las clases hijas dibujen sus figuras.
	//Para la rotación, se almacenan 4 figuras diferentes y se alternan con las teclas E y R
	//Hereda de la clase Juego el método gotoxy reimplementado, para manejar la impresión en pantalla
	
protected:
	
	//Variables que definen las variedades de rotación para cada pieza
	bool figura1[4][4];
	bool figura2[4][4];
	bool figura3[4][4];
	bool figura4[4][4];
	
	//Variables de coordenada de la pieza
	int posicionX;
	int posicionY;
	
	//Variable de personalización. Define el color de la pieza (WIP)
	int color;
	
	//Variable que controla que figura se muestra. Esta variable se modifica al usar el método de rotación
	int estado;
	
public:
	
	Pieza();
	
	//Métodos para cambiar las coordenadas
	void cambiarPosicionY();
	void cambiarPosicionX();
	
	//Métodos para obtener las coordenadas
	int retornarPosicionY();
	int retornarPosicionX();
	
	//Métodos que se encargan de la rotación
	void rotarDerecha();
	void rotarIzquierda();
	
};

#endif

