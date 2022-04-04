#pragma once
#include "Room.h"
#include "Bug.h"
class App {
protected:
	Room room;
	Bug bug;
public:
	App();
	~App();
	void init(int width, int height, int iterCount, int startX = -1, int startY = -1);
};
