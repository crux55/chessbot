#pragma once

#include "Square.h"

class Board {
private:
	Square grid[8][8];
public:
	Square** getGrid();
};