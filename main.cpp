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

//La parte que m�s me cost� del TP fue el tema de impresi�n en pantalla. Honestamente creo que se debi� abordar m�s este tema, ya que para alguien como yo imprimir un juego en pantalla
//usando �nicamente caracteres ASCII se me hace algo bastante complicado de lograr. Particularmente lo que se me complic� fue imprimir un arreglo y hacerlo que se mueva (en el caso de la pieza), de todas maneras el tema
//de las colisiones y borrar lineas se me hubiese complicado de igual manera, pero principalmente tuve inconvenientes con imprimir la pieza. Creo que el ejemplo de los autos que est� en la p�gina est� bueno, pero a mi parecer falt� m�s profundidad en este tema
//al menos desde el lado te�rico, y no tanto desde el pr�ctico. Pero bueno, este TP me sirvi� mucho para pulir todo lo que ten�a en duda sobre Clases, Objetos y funciones, tambi�n pude implementar
//bien el tema punteros, el cual me ten�a medio asustado al principio pero logr� entenderlo y usarlo, me llev� eso de esta materia y sobre todo de este trabajo final.

