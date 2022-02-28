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
	int cronometro = 0;
	int cronometroSpawn = 0;
	
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
	
	Tablero tablero;
	Tablero();
	
	imprimir_entrada();
	
	system("pause");
	system("cls");
	
	tablero.mostrar();
	
	imprimir_controles();
	
	while (!juego_terminado) {
		
		actualizar();
		
	}
	
}

//Coloca una pieza al azar en la cuadrilla

void Juego::generarPieza() { //Debería retornar la pieza creada
	
	int numeroAleatorio;
	
	numeroAleatorio = rand()% 5 + 1; 
	
	switch (numeroAleatorio) {
		
	case 1: {
		
		PiezaO *pieza = new PiezaO();
		pieza->imprimir();
		
		break;
		
		}
	
	case 2: {
		
		PiezaI *pieza = new PiezaI();
		pieza->imprimir();
		
		break;
		
	    }
	
	case 3: {
		
		PiezaT *pieza = new PiezaT();
		pieza->imprimir();
		
		break;
		
	}
	
	case 4: {
		
		PiezaS *pieza = new PiezaS();
		pieza->imprimir();
		
		break;
		
	}
	
	case 5: {
		
		PiezaL *pieza = new PiezaL();
		pieza->imprimir();
		
		break;
		
	}
	}
	
}

/////////////////////////////////
//Métodos de Entrada del Jugador//
/////////////////////////////////

int Juego::tecla_presionada() {
	
	if(kbhit()) { 
		
		int tecla = getch();
		
		switch(tecla) {
			
		case 'a': //Tecla de Movimiento a la izquierda
			
			//Incluir
			
			break;
			
		case 'd': //Tecla de Movimiento a la derecha
			
			//Incluir
			
			break;
			
		case 's': //Tecla de Movimiento hacia abajo
			
			//Incluir
			
			break;
			
		case 'e': //Tecla de Rotación izquierda
			
			break;
			
		case 'r': //Tecla de Rotación derecha
			
			//Incluir
			
			break;
			
		case 'z': //Tecla para salir del juego
			
			gotoxy(0,21);
			
			cout << "- Saliste del juego" << endl;
			
			gotoxy(0,21);
			
			juego_terminado = true;
			
			return 1;
			
		}
		
	}
	
}

////////////////////////////
//Métodos de Actualización//
////////////////////////////

void Juego::actualizar() {
	
	imprimir_puntaje(puntos);
	
	tecla_presionada();
	
	cronometro++;
	cronometroSpawn++;
	
	//Al pasar 2 segundos, la pieza actual baja automáticamente
	
	if ((cronometro = 2000)) {
		
		//Incluir
		
		cronometro = 0;
		
	}
	
	//Cada 3 segundos, se revisa si hay una pieza creada. Si no hay, se crea.
	
	if ((cronometroSpawn = 3000)) {
		
		while (sinPieza) {
			
			generarPieza();
			
			sinPieza = false;
			cronometroSpawn = 0;
			
		}
		
	}
	
}

////////////////////////
//Métodos de Impresión//
////////////////////////

//Muestra un texto como subtítulo

void Juego::imprimir_entrada() {
	
	cout << "Bienvenido a Tetris!" << endl;
	
}

///////////////////////////////////////////////////////////////////

void Juego::imprimir_puntaje(int puntos) {
	
	int puntaje;
	
	puntaje = puntos;
	
	gotoxy(24,4);
	cout << "Tu puntuacion es: ";
	cout << puntaje << endl;
	
	gotoxy(24,5);
	cout << "Lineas liberadas: ";
	cout << lineas_eliminadas << endl;
	
}

///////////////////////////////////////////////////////////////////

void Juego::imprimir_controles() {
	
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

////////////////////////////////
//Método gotoxy reimplementado//
////////////////////////////////

void Juego::gotoxy(int coordenadaX, int coordenadaY) {
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = coordenadaX;
	dwPos.Y = coordenadaY;

	SetConsoleCursorPosition(hCon, dwPos);
	
}
