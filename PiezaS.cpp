#include "PiezaS.h"
#include "Pieza.h"

PiezaS::PiezaS() {
	
	//Caso de pieza especial. Una de sus figuras es igual a otra al rotarse
	
	// - - - -
	// - - O -
	// - O O -
	// - O - -
	
	figura1[1][2] = true; figura3[1][2] = true;
	figura1[2][2] = true; figura3[1][2] = true;
	figura1[1][1] = true; figura3[1][2] = true;
	figura1[1][3] = true; figura3[1][2] = true;
	
	// - - - -
	// O O - -
	// - O O -
	// - - - -
	
	figura2[1][0] = true;
	figura2[1][1] = true;
	figura2[2][1] = true;
	figura2[2][2] = true;
	
	// - - O -
	// - O O -
	// - O - -
	// - - - -
	
	figura3[1][2] = true;
	figura3[2][2] = true;
	figura3[1][1] = true;
	figura3[1][3] = true;
	
}

