#include<iostream>
#include "Juego.H"
#include <ctime>

#include <windows.h>

using namespace std;

int main (int argc, char *argv[]) {
	
	//Reinicia la semilla de la función rand y crea un objeto de juego, llamando a su función de inicio
	
	srand (time(NULL));
	
	Juego juego_principal;
	juego_principal.iniciar();
	
	return 0;
	
}

//La parte que más me costó del TP fue el tema de impresión en pantalla. Honestamente creo que se debió abordar más este tema, ya que para alguien como yo imprimir un juego en pantalla
//usando únicamente caracteres ASCII se me hace algo bastante complicado de lograr. Particularmente lo que se me complicó fue imprimir un arreglo y hacerlo que se mueva (en el caso de la pieza), de todas maneras el tema
//de las colisiones y borrar lineas se me hubiese complicado de igual manera, pero principalmente tuve inconvenientes con imprimir la pieza. Creo que el ejemplo de los autos que está en la página está bueno, pero a mi parecer faltó más profundidad en este tema
//al menos desde el lado teórico, y no tanto desde el práctico. Pero bueno, este TP me sirvió mucho para pulir todo lo que tenía en duda sobre Clases, Objetos y funciones, también pude implementar
//bien el tema punteros, el cual me tenía medio asustado al principio pero logré entenderlo y usarlo, me llevó eso de esta materia y sobre todo de este trabajo final.

