#include <iostream>
#include "Juego.h"
#include "Tablero.h"
#include "Pieza.h"
#include <windows.h>
#include <conio2.h>
#include <cstdlib>
#include <time.h>

#include "PiezaO.h"
#include "PiezaI.h"
#include "PiezaT.h"
#include "PiezaS.h"
#include "PiezaL.h"

using namespace std;

Juego::Juego() {
	
	//Variables de control de tiempo
	int tiempoCaida = 0;
	int tiempoSpawn = 0;
	int tiempoImpresion = 0;
	
	//Variables de control de puntaje
	puntos = 0;
	lineas_eliminadas = 0;
	
	//Variables lógicas
	juego_terminado = false;
	sinPieza = true;
	
}
////////////////////////////////
//Métodos de Gestión del juego//
////////////////////////////////

//Método principal que inicia el juego

void Juego::iniciar() {
	
	imprimirEntrada();
	
	pausarSistema();
	system("cls");
	
	Tablero tablero;
	tablero.mostrar();
	
	while (!juego_terminado) {
		
		imprimirPuntaje(puntos);
		imprimirControles();
		
		obtenerTecla();
		
		tiempoCaida++;
		tiempoSpawn++;
		tiempoImpresion++;
		
		//Al pasar 2 segundos, la pieza actual baja automáticamente
		
		if ((tiempoCaida = 2000)) {
			
			//Incluir
			
			tiempoCaida = 0;
			
		}
		
		//Cada 3 segundos, se revisa si hay una pieza creada. Si no hay, se crea.
		
		if ((tiempoSpawn = 3000)) {
			
			while (sinPieza) {
				
				generarPieza();
				
				sinPieza = false;
				
				tiempoSpawn = 0;
				
			}
			
		}
		
	}
	
}

//Coloca una pieza al azar en la cuadrilla

Pieza* Juego::generarPieza() {
	
	int nAleatorio;
	
	nAleatorio = (rand()% 5) + 1; 
	
	switch (nAleatorio) {
		
	case 1: {
		
		return new PiezaO();
		
		break;
		
		}
	
	case 2: {
		
		return new PiezaI();
		
		break;
		
	    }
	
	case 3: {
		
		return new PiezaT();
		
		break;
		
	}
	
	case 4: {
		
		return new PiezaS();
		
		break;
		
	}
	
	case 5: {
		
		return new PiezaL();
		
		break;
		
	}
	
	}
	
	return 0;
	
}

/////////////////////////////////
//Métodos de Entrada del Jugador//
/////////////////////////////////

char Juego::obtenerTecla() {
	
	if(kbhit()) { 
		
		int tecla = getch();
		
		switch (tecla) {
			
		case 'a':
			
			//Incluir (Mueve a la izquierda)
			
		case 'd':
			
			//Incluir (Mueve a la derecha)
			
		case 's':
			
			//Incluir (Incrementa la velocidad de caída de la pieza)
			
		case 'z':
			
			gotoxy(0,21);
			
			cout << "- Saliste del juego" << endl;
			
			gotoxy(0,21);
			
			juego_terminado = true;
			
			return 1;
			
		}
		
	}
	
	return 0;
	
}

////////////////////////////
//Métodos de Actualización//
////////////////////////////

//Incluir de ser necesario

////////////////////////
//Métodos de Impresión//
////////////////////////

//Muestra un texto como subtítulo

void Juego::imprimirEntrada() {
	
	cout << "Bienvenido a Tetris!" << endl;
	
}

///////////////////////////////////////////////////////////////////

void Juego::imprimirPuntaje(int puntos) {
	
	int puntaje;
	
	puntaje = puntos;
	
	gotoxy(24,4);
	cout << "Tu puntuacion es: ";
	cout << puntaje << endl;
	
	gotoxy(24,5);
	cout << "Lineas eliminadas: ";
	cout << lineas_eliminadas << endl;
	
}

///////////////////////////////////////////////////////////////////

void Juego::imprimirControles() {
	
	cout << endl;
	
	gotoxy(24,7);
	cout << "Mover la pieza: -A- para la izquierda, -D- para la derecha" << endl;
	gotoxy(24,8);
	cout << "Acelerar pieza: -S-" << endl;
	gotoxy(24,9);
	cout << "Rotar la pieza: -E- para la izquierda, -R- para la derecha" << endl;
	gotoxy(24,10);
	cout << "Salir del juego: -Z-" << endl;
	
}

void Juego::pausarSistema() {
	
	system("pause");
	
}

////////////////////////////////
//Función gotoxy reimplementada//
////////////////////////////////

void Juego::gotoxy(int coordenadaX, int coordenadaY) {
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = coordenadaX;
	dwPos.Y = coordenadaY;

	SetConsoleCursorPosition(hCon, dwPos);
	
}
