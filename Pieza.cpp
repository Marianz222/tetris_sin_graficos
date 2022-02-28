#include <iostream>
#include "Pieza.h"

using namespace std;

Pieza::Pieza() {
	
	estado = 1;
	
	for (int a = 0; a < 4; a++) {
		
		for (int b = 0; b < 4; b++) {
			
			figura1[a][b] = ' ';
			figura2[a][b] = ' ';
			figura3[a][b] = ' ';
			figura4[a][b] = ' ';
			
		}
		
	}
	
}

//Intercambia la figura de la imagen dependiendo de su estado, el cual en este se decrementa

void Pieza::rotarIzquierda() {
	
	if (estado > 0) {
		
		estado--;
		
	} else {
		
		estado = 4;
		
	}
	
}

//Intercambia la figura de la imagen dependiendo de su estado, el cual en este caso se incrementa

void Pieza::rotarDerecha() {
	
	if (estado < 4) {
		
		estado++;
		
	} else {
		
		estado = 0;
		
	}
	
}

//Comentar

void Pieza::imprimir() {
	
	for (int a = 0; a < 4; a++) {
		
		for (int b = 0; b < 4; b++) {
			
			switch (estado) {
				
			case 1:
				
				cout << figura1[a][b];
				
				break;
				
			case 2:
				
				cout << figura2[a][b];
				
				break;
				
			case 3:
				
				cout << figura3[a][b];
				
				break;
				
			case 4:
				
				cout << figura4[a][b];
				
				break;
			}
			
		}
		
		cout << endl;
		
	}
	
}
