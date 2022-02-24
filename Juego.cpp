#include <iostream>
#include "Juego.h"
#include "Tablero.h"
#include "Pieza.h"
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>

#include "PiezaO.h"

using namespace std;

Juego::Juego() {
	
	srand (time(NULL));
	
	juego_terminado = false;
	
	puntos = 0;
	lineas_eliminadas = 0;
	
	bool sinPieza = true;
	
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
	
	imprimir_puntaje(puntos);
	imprimir_controles();
	
	while (!juego_terminado) {
		
		actualizar();
		
		tecla_presionada();
	 
	}
	
}

//Coloca una pieza al azar en la cuadrilla

void Juego::generarPieza() {
	
	int numeroAleatorio;
	
	numeroAleatorio = rand()% 4 + 1; 
	
	PiezaO *pieza = new PiezaO;
	
	switch (numeroAleatorio) {
		
	case 1:
		
		break;
		
	case 2:
		
		break;
		
	case 3:
		
		break;
		
	case 4:
		
		break;
		
	}
	
	pieza->imprimir();
	
}

/////////////////////////////////
//Métodos de Entrada del Jugador//
/////////////////////////////////

int Juego::tecla_presionada() {
	
	while(true){
		
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
				
				//Incluir
				
				break;
				
			case 'r': //Tecla de Rotación derecha
				
				//Incluir
				
				break;
				
			case 'z': //Tecla para salir del juego
				
				juego_terminado = true;
				
				gotoxy(90,20);
				
				return 1;
				
				break;
				
			}
			
		}
		
	}
	
}

////////////////////////////
//Métodos de Actualización//
////////////////////////////

void Juego::actualizar() {
	
	//Variables de control
	int cronometro = 0;
	int cronometroSpawn = 0;
	
	while(true) {
		
		cronometro++;
		cronometroSpawn++;
		
		//Al pasar 1 segundo, la pieza actual baja automáticamente
		
		if ((cronometro = 1000)) {
			
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
