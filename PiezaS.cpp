#include "PiezaS.h"
#include "Pieza.h"

PiezaS::PiezaS() {
	
	// - - - -
	// - - O -
	// - O O -
	// - O - -
	
	figura1[1][2] = 219; figura3[1][2] = 219;
	figura1[2][2] = 219; figura3[1][2] = 219;
	figura1[1][1] = 219; figura3[1][2] = 219;
	figura1[1][3] = 219; figura3[1][2] = 219;
	
	// - - - -
	// O O - -
	// - O O -
	// - - - -
	
	figura2[1][0] = 219;
	figura2[1][1] = 219;
	figura2[2][1] = 219;
	figura2[2][2] = 219;
	
	// - - O -
	// - O O -
	// - O - -
	// - - - -
	
	figura3[1][2] = 219;
	figura3[2][2] = 219;
	figura3[1][1] = 219;
	figura3[1][3] = 219;
	
}

