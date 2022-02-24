#include <iostream>
#include "Tablero.h"
#include "Juego.h"
#include <conio.h>

using namespace std;

Tablero::Tablero() {
	
	//Ciclo inicial que asigna un espacio en blanco a toda la cuadrilla
	
	for (int x = 0; x < 20; x++) {
		
		for (int y = 0; y < 22; y++) {
			
			cuadrilla[x][y] = ' ';
			
		}
		
	}
	
	//Ciclos que marcan los límites de la cuadrilla
	
	for (int x = 0; x < 20; x++) {
		
		cuadrilla[x][0] = 178;
		cuadrilla[x][21] = 178;
		
	}
	
	for (int y = 0; y < 22; y++) {
		
		cuadrilla[0][y] = 178;
		
	}
	
	//Ciclo que marca el suelo de la cuadrilla
	
	for (int y = 0; y < 22; y++) {
		
		cuadrilla[19][y] = 176;
		
	}
	
}

//Imprime la cuadrilla del tablero en pantalla

void Tablero::mostrar() {
	
	for (int x = 0; x < 20; x++) {
		
		for (int y = 0; y < 22; y++) {
			
			cout << cuadrilla[x][y];
			
		}
		
		cout << endl;
		
	}
	
}

//Retorna qué valor posee la posición pasada por parámetro en la cuadrilla

char Tablero::obtenerValor(int x, int y) {
	
	return cuadrilla[x][y];
	
}

//Modifica el valor de la posición de la cuadrilla pasada por parámetro

void Tablero::modificarValor(int x, int y, char valor) {
	
	cuadrilla[x][y] = valor;
	
}
