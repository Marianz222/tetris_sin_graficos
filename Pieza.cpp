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

//Rota la pieza hacia la izquierda

void Pieza::rotarIzquierda() {
	
	estado--;
	
}

//Rota la pieza hacia la derecha

void Pieza::rotarDerecha() {
	
	estado++;
	
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

