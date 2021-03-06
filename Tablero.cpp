#include <iostream>
#include "Tablero.h"
#include "Juego.h"
#include <conio.h>

using namespace std;

Tablero::Tablero() {
	
	///////////////////////////////////////////
	/* Referencia de valores de la cuadrilla */
	///////////////////////////////////////////
	
	// Valor "0" = Espacio vac?o
	// Valor "1" = Pared
	// Valor "2" = Suelo
	// Valor "3" = Pieza actual
	// Valor "4" = Stack (Piezas acopladas al tablero)
	
	//Ciclo inicial que asigna un espacio en blanco a toda la cuadrilla
	
	for (int x = 0; x < 20; x++) {
		
		for (int y = 0; y < 22; y++) {
			
			cuadrilla[x][y] = 0;
			
		}
		
	}
	
	//Ciclos que marcan los l?mites de la cuadrilla
	
	for (int x = 0; x < 20; x++) {
		
		cuadrilla[x][0] = 1;
		cuadrilla[x][21] = 1;
		
	}
	
	for (int y = 0; y < 22; y++) {
		
		cuadrilla[0][y] = 1;
		
	}
	
	//Ciclo que marca el suelo de la cuadrilla
	
	for (int y = 0; y < 22; y++) {
		
		cuadrilla[19][y] = 2;
		
	}
	
}

void Tablero::mostrar() {
	
	for (int x = 0; x < 12; x++) {
		
		for (int y = 0; y < 22; y++) {
			
			cout << cuadrilla[x][y];
			
		}
		
		cout << endl;
		
	}
	
}

//Retorna qu? valor posee la posici?n pasada por par?metro en la cuadrilla

char Tablero::obtenerValor(int x, int y) {
	
	return cuadrilla[x][y];
	
}

//Modifica el valor de la posici?n de la cuadrilla pasada por par?metro

void Tablero::modificarValor(int x, int y, int valor) {
	
	cuadrilla[x][y] = valor;
	
}
