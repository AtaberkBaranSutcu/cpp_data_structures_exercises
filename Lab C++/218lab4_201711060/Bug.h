#pragma once
#include "Coord.h"
#include "Size.h"

class Bug {
protected:
	Coord coord;
	Size roomSize;
	//bool isValid(const Coord& coord);
public:
	// Return the coordinate of the bug.
	Coord walk(void);
	Coord getCoord(void);
	void setCoord(Coord coord);
	void setRoomSize(Size size);

};
