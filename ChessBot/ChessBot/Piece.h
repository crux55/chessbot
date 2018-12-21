#pragma once
enum Colour { black, white };
class Piece {

	Colour colour;
protected: //protected means no one outside this class can see this, except children, it's different from private where no subclass can see it
	bool upgradable;
public:
	Colour getColour();
	void setColour(Colour colour);
};