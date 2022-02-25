#include "PiezaT.h"
#include "Pieza.h"

PiezaT::PiezaT() {
	
	// - - - -
	// - O O O
	// - - O -
	// - - - -
	
	figura1[1][1] = 219;
	figura1[1][2] = 219;
	figura1[1][3] = 219;
	figura1[2][2] = 219;
	
	// - - O -
	// - O O -
	// - - O -
	// - - - -
	
	figura1[1][1] = 219;
	figura1[0][2] = 219;
	figura1[1][2] = 219;
	figura1[2][2] = 219;
	
	// - - - -
	// - - O -
	// - O O O
	// - - - -
	
	figura1[2][1] = 219;
	figura1[2][2] = 219;
	figura1[1][2] = 219;
	figura1[2][3] = 219;
	
	// - - O -
	// - - O O
	// - - O -
	// - - - -
	
	figura1[0][2] = 219;
	figura1[1][2] = 219;
	figura1[2][2] = 219;
	figura1[1][3] = 219;
	
}

