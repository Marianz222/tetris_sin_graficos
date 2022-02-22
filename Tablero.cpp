#include <iostream>
#include "Tablero.h"
#include "Juego.h"
#include <conio.h>

using namespace std;

Tablero::Tablero() {
	
	//Ciclo inicial que asigna un espacio en blanco a toda la cuadrilla
	
	for (int x; x < 12; x++) {
		
		for (int y; y < 24; y++) {
			
			cuadrilla[x][y] = 'O';
			
		}
		
	}
	
	//Ciclos que marcan los límites de la cuadrilla
	
	for (int x; x < 12; x++) {
		
		cuadrilla[x][0] = 'X';
		cuadrilla[x][21] = 'X';
		
	}
	
	for (int y; y < 22; y++) {
		
		cuadrilla[0][y] = 'X';
		cuadrilla[15][y] = 'X';
		
	}
	
	//Ciclo que marca el suelo de la cuadrilla
	
	for (int y; y < 22; y++) {
		
		cuadrilla[15][y] = 'O';
		
	}
	
}

void Tablero::mostrar() {
	
	for (int x; x < 12; x++) {
		
		for (int y; y < 22; y++) {
			
			cout << cuadrilla[x][y] << " ";
			
		}
		
		cout << endl;
		
	}
	
	
}
