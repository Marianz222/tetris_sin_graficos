#include <iostream>
#include "Pieza.h"

using namespace std;

Pieza::Pieza() {
	
	estado = 1;
	
	for (int a = 0; a < 4; a++) {
		
		for (int b = 0; b < 4; b++) {
			
			figura1[a][b] = false;
			figura2[a][b] = false;
			figura3[a][b] = false;
			figura4[a][b] = false;
			
		}
		
	}
	
}

//Intercambia la figura de la imagen dependiendo de su estado, el cual en este caso se decrementa

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
