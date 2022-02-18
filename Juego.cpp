#include <iostream>
#include "Juego.h"
#include "Tablero.h"
#include "Pieza.h"
#include <windows.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

Juego::Juego() {
	
	juego_terminado = false;
	puntos = 0;
	lineas_eliminadas = 0;
	
}

void Juego::iniciar() {
	
	//Se crea el objeto de tablero
	Tablero tablero_principal;
	system("cls");
	
	tablero_principal.dibujar_cuadrilla();
	tablero_principal.dibujar_entrada();
	tablero_principal.dibujar_puntaje(puntos);
	tablero_principal.dibujar_controles();
	
	gotoxy(15, 20);
	cout << "A" << endl;
	
	while (!juego_terminado) {
	 
	  tecla_presionada();
	 
	}
	
}

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
				
			case 'z': //Tecla para salir del juego
				
				return 1;
				
			}
			
		}
		
	}
	
}

void Juego::gotoxy(int x, int y) {
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;

	SetConsoleCursorPosition(hCon, dwPos);
	
}
