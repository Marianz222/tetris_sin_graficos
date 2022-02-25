#include "PiezaI.h"
#include "Pieza.h"

PiezaI::PiezaI() {
	
	//Caso de pieza especial. 2 de sus figuras son iguales al rotarse
	
	// - - O -
	// - - O -
	// - - O -
	// - - O -
	
	figura1[0][2] = 219; figura3[0][2] = 219;
	figura1[1][2] = 219; figura3[1][2] = 219;
	figura1[2][2] = 219; figura3[2][2] = 219;
	figura1[3][2] = 219; figura3[3][2] = 219;
	
	// - - - -
	// O O O O
	// - - - -
	// - - - -
	
	figura2[1][0] = 219; figura4[1][0] = 219;
	figura2[1][1] = 219; figura4[1][1] = 219;
	figura2[1][2] = 219; figura4[1][2] = 219;
	figura2[1][3] = 219; figura4[1][3] = 219;
	
}

