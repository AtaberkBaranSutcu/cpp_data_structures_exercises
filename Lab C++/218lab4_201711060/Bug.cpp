#include "Bug.h"
#include <cstdlib>

Coord Bug::getCoord(){
	return coord;
}

void Bug::setCoord(Coord coord){
	this->coord=coord;
}

void Bug::setRoomSize(Size size){
	this->roomSize=size;
}

Coord Bug::walk(){
	Coord newCoord;
	int dx, dy;
	newCoord.x=coord.x;
	newCoord.y=coord.y;
	
	int way = rand() % 8;
		
	if (way == 0 && coord.y != 0 && coord.x != (roomSize.width - 1)){
			dx = 1; newCoord.x++;
			dy = -1; newCoord.y--;
	}
	else if (way == 1 && coord.x != (roomSize.width - 1)){
			dx = 1; newCoord.x++;
			dy = 0; 
	}
	else if (way == 2 && coord.y != (roomSize.height - 1) && coord.x != (roomSize.width - 1)){
			dx = 1; newCoord.x++;
			dy = 1; newCoord.y++;
	}
	else if (way == 3 && coord.y != (roomSize.height - 1)){
			dx = 0;
			dy = 1; newCoord.y++;
	}
	else if (way == 4 && coord.x != 0 && coord.y != (roomSize.height - 1)){
			dx = -1; newCoord.x--;
			dy = 1; newCoord.y++;
	}
	else if (way == 5 && coord.x != 0){
			dx = -1; newCoord.x--;
			dy = 0; 
	}
	else if (way == 6 && coord.y != 0 && coord.x != 0){
			dx = -1; newCoord.x--;
			dy = -1; newCoord.y--;
	}
	else if (way == 7 && coord.y != 0 ){
			dx = 0; 
			dy = -1; newCoord.y--; 
	}

	return newCoord;
}
