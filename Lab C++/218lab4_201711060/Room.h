#pragma once
#include <vector>
#include "Size.h"
using namespace std;

class Room {
protected:
	Size size;
	vector<vector<int> >density;
public:
	Room();
	void setSize(int width, int height);
	void showDensity(void);
	void incDensity(int x, int y);
	bool checkDensity(void);

};
