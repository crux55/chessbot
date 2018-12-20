#pragma once

#include <string>
#include "Piece.h"

class Square {
private:
	std::string row;
	std::string col;
	Piece piece;
public:
	std::string getRow();
	std::string getCol();
	bool containsPiece();
};