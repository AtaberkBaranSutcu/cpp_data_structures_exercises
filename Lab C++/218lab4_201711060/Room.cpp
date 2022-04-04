#include "Room.h"
#include <iostream>

Room::Room(){
	
}
void Room::setSize(int width, int height){
	
	size.width = width;
	size.height = height;
	density.clear();
	for(int i = 0; i < size.height; i++){
		vector<int> v;
		for(int j = 0; j < size.width; j++){
			v.push_back(0);	
		}
		density.push_back(v);
	}
}

void Room::showDensity(){
	for(int i = 0; i < density.size(); i++){
		for(int j = 0; j < density[i].size(); j++){
			cout<<density[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Room::incDensity(int x, int y){
	density[y][x]++;
}

bool Room::checkDensity(){
	bool all_visited = true;
	for(int i = 0; i < density.size(); i++){
		for(int j = 0; j < density[i].size(); j++){
			if ( density[i][j] == 0){
				return false;
			}
		}
	}
	return true;
}
