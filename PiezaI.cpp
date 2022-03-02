#include "PiezaI.h"
#include "Pieza.h"

PiezaI::PiezaI() {
	
	//Caso de pieza especial. 2 de sus figuras son iguales al rotarse
	
	// - - O -
	// - - O -
	// - - O -
	// - - O -
	
	figura1[0][2] = true; figura3[0][2] = true;
	figura1[1][2] = true; figura3[1][2] = true;
	figura1[2][2] = true; figura3[2][2] = true;
	figura1[3][2] = true; figura3[3][2] = true;
	
	// - - - -
	// O O O O
	// - - - -
	// - - - -
	
	figura2[1][0] = true; figura4[1][0] = true;
	figura2[1][1] = true; figura4[1][1] = true;
	figura2[1][2] = true; figura4[1][2] = true;
	figura2[1][3] = true; figura4[1][3] = true;
	
}

