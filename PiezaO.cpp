#include "PiezaO.h"
#include "Pieza.h"

PiezaO::PiezaO() {
	
	//Caso de pieza especial. Todas sus figuras son iguales al rotarse
	
	// - - - -
	// - O O -
	// - O O -
	// - - - -
	
	figura1[1][2] = 219; figura2[1][2] = 219; figura3[1][2] = 219; figura4[1][2] = 219;
	figura1[2][2] = 219; figura2[2][2] = 219; figura3[2][2] = 219; figura4[2][2] = 219;
	figura1[1][1] = 219; figura2[1][1] = 219; figura3[1][1] = 219; figura4[1][1] = 219;
	figura1[2][1] = 219; figura2[2][1] = 219; figura3[2][1] = 219; figura4[2][1] = 219;
	
}

