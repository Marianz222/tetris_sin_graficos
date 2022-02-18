#include <iostream>
#include "Tablero.h"
#include <conio.h>

using namespace std;

Tablero::Tablero() {
	
	for (int y; y < 10; y++) {
		
		for (int x; x < 20; x++) {
			
			cuadrilla[y][x] = 'O';
			
		}
		
	}
	
}

void Tablero::dibujar_entrada() {
	
	cout << "Bienvenido a Tetris!" << endl;
	
}

void Tablero::dibujar_cuadrilla() {
	
	for (int y; y < 10; y++) {
		
		for (int x; x < 20; x++) {
			
			cout << cuadrilla[y][x];
			
		}
		
	}
	
	
}

void Tablero::dibujar_puntaje(int puntos) {
	
	int puntaje;
	
	puntaje = puntos;
	
	cout << "Tu puntuacion es: ";
	//textcolor(3);
	cout << puntaje << endl;

}

void Tablero::dibujar_controles() {
	
	cout << endl;
	cout << "Mover la pieza: -A- para la izquierda, -D- para la derecha" << endl;
	cout << "Acelerar pieza: -S-" << endl;
	cout << "Salir del juego: -Z-" << endl;
	
}
