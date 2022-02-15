#include <iostream>
#include "Juego.h"
#include "Tablero.h"
#include "Pieza.h"
#include <windows.h>
#include <ctime>
#include <conio.h>

using namespace std;

Juego::Juego() {
	
	juego_terminado = false;
	puntos = 0;
	lineas_eliminadas = 0;
	
}

void Juego::iniciar() {
	
	Tablero tablero_principal;
	
	while (!juego_terminado) {
		
		tablero_principal.dibujar_entrada();
		tablero_principal.dibujar_cuadrilla();
		tablero_principal.dibujar_puntaje(puntos);
		tablero_principal.dibujar_controles();
		
	}
	
}

char Juego::retornar_tecla() {
	
	while(true){
		
		if(kbhit()) { 
			
			int tecla = getch();
			
			switch(tecla) {
				
			case 'a': //Tecla de Movimiento a la izquierda
				
				return 'a';
				
				break;
				
			case 'd': //Tecla de Movimiento a la derecha
				
				return 'd';
				
				break;
				
			case 's': //Tecla de Movimiento hacia abajo
				
				return 's';
				
				break;
				
			case 'z': //Tecla para salir del juego
				
				return 1;
				
			}
			
		}
		
	}
	
}
