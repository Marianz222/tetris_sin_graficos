#include<iostream>
#include "Juego.H"
#include <ctime>

#include <windows.h>

using namespace std;

int main (int argc, char *argv[]) {
	
	//Reinicia la semilla de la funci�n rand y crea un objeto de juego, llamando a su funci�n de inicio
	
	srand (time(NULL));
	
	Juego juego_principal;
	juego_principal.iniciar();
	
	return 0;
}

