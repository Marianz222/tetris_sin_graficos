#include "PiezaT.h"
#include "Pieza.h"

PiezaT::PiezaT() {
	
	// - - - -
	// - O O O
	// - - O -
	// - - - -
	
	figura1[1][1] = true;
	figura1[1][2] = true;
	figura1[1][3] = true;
	figura1[2][2] = true;
	
	// - - O -
	// - O O -
	// - - O -
	// - - - -
	
	figura1[1][1] = true;
	figura1[0][2] = true;
	figura1[1][2] = true;
	figura1[2][2] = true;
	
	// - - - -
	// - - O -
	// - O O O
	// - - - -
	
	figura1[2][1] = true;
	figura1[2][2] = true;
	figura1[1][2] = true;
	figura1[2][3] = true;
	
	// - - O -
	// - - O O
	// - - O -
	// - - - -
	
	figura1[0][2] = true;
	figura1[1][2] = true;
	figura1[2][2] = true;
	figura1[1][3] = true;
	
}

