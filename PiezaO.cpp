#include "PiezaO.h"
#include "Pieza.h"

const int alturaTablero = 12;
const int anchuraTablero = 22;

PiezaO::PiezaO() {
	
	//Caso de pieza especial. Todas sus figuras son iguales al rotarse
	
	// - - - -
	// - O O -
	// - O O -
	// - - - -
	
	figura1[1][2] = true; figura2[1][2] = true; figura3[1][2] = true; figura4[1][2] = true;
	figura1[2][2] = true; figura2[2][2] = true; figura3[2][2] = true; figura4[2][2] = true;
	figura1[1][1] = true; figura2[1][1] = true; figura3[1][1] = true; figura4[1][1] = true;
	figura1[2][1] = true; figura2[2][1] = true; figura3[2][1] = true; figura4[2][1] = true;
	
}

