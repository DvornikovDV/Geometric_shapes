// Дворников Даниил
#pragma once

#include <vector> 

using std::vector;

class Coordinate
{
public:
	vector<float> coordinate;

	Coordinate(float x, float y) : coordinate{ x, y } {}

	~Coordinate() { coordinate.clear(); }
};