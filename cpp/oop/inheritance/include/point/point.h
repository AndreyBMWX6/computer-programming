#pragma once
#include <iostream>

class Point
{
protected:
	double x, y, z;
public:
	Point(double x, double y)
	{
		this->x = x; 
		this->y = y;
	}
	virtual void print()
	{
		std::cout << "x=" << x << "   y=" << y;
	}
};
