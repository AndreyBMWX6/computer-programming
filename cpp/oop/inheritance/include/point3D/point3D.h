#pragma once
#include "point.h"

class Point3D : public Point
{
	double z;
public:
	Point3D(double x, double y, double z):
		Point(x, y)
	{
		this->z = z;
	}
	void print()
	{
		Point::print();
		std::cout << "   z=" << z;
	}
};
