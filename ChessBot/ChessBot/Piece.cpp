#include "Piece.h"
//all pieces will have to be able to tell their colour, so rather than define them in every class, we define them in the parent and they will all use them the same way
Colour Piece::getColour() {
	return colour;
}

void Piece::setColour(Colour colour) {
	this->colour = colour;
}