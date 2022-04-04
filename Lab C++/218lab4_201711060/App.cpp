#include "App.h"
#include <iostream>

App::App(){
	
}

App::~App(){

}

void App::init(int width, int height, int iterCount, int startX, int startY){
	room.setSize(width, height);
	Size size;
	size.height = height;
	size.width = width;
	bug.setRoomSize(size);
	Coord coord;
	coord.x = startX;
	coord.y = startY;
	bug.setCoord(coord);
	
	for(int i=0; i < iterCount; i++){
		coord = bug.walk();
		room.incDensity(coord.x,coord.y);
		if(room.checkDensity()){
			cout<<iterCount<<endl;
			room.showDensity();
		}
	}
}
