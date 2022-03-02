#include "PiezaL.h"
#include "Pieza.h"

PiezaL::PiezaL() {
	
	// - - - -
	// - O - -
	// - O - -
	// - O O -
	
	figura1[1][1] = true;
	figura1[2][1] = true;
	figura1[3][1] = true;
	figura1[3][2] = true;
	
	// - - - -
	// O O O -
	// O - - -
	// - - - -
	
	figura2[1][0] = true;
	figura2[2][0] = true;
	figura2[1][1] = true;
	figura2[1][2] = true;
	
	// - O O -
	// - O - -
	// - O - -
	// - - - -
	
	figura3[0][1] = true;
	figura3[1][1] = true;
	figura3[2][1] = true;
	figura3[0][2] = true;
	
	// - - - -
	// - O O O
	// - - - O
	// - - - -
	
	figura4[1][1] = true;
	figura4[1][2] = true;
	figura4[1][3] = true;
	figura4[2][3] = true;
	
}

