#include <iostream>
#include "Tablero.h"
#include <conio.h>
#include <stdlib.h>

using namespace std;

Tablero::Tablero() {
	
	for (int y; y < 10; y++) {
		
		for (int x; x < 20; x++) {
			
			cuadrilla[y][x] = 'O';
			
		}
		
	}
	
}

void Tablero::dibujar_entrada() {
	
	cout << "Bienvenido a Tetris! Comienza el juego" << endl;
	
}

void Tablero::dibujar_cuadrilla() {
	
	for (int y; y < 10; y++) {
		
		for (int x; x < 25; x++) {
			
			cout << cuadrilla[y][x];
			
		}
		
	}
	
	
}

void Tablero::dibujar_puntaje(int puntos) {
	
	int puntaje;
	
	puntaje = puntos;
	
	while (true) {
		
		system ("CLS");
		
		cout << "Tu puntuación es: ";
		cout << puntaje;
		
	}
	
}

void Tablero::dibujar_controles() {
	
	cout << "Mover la pieza: -A- para la izquierda, -D- para la derecha" << endl;
	cout << "Acelerar pieza: -S-" << endl;
	cout << "Salir del juego: -Z-" << endl;
	
}
