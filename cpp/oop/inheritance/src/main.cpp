#include <iostream>
#include "point/point.h"
#include "point3D/point3D.h"

int main()
{
	Point p1(4.56, 8.91);
	Point3D p2(5.56,7.77,4.867);
	Point* pp;
	pp = &p1;
	pp->print();
	std::cout << "\n\n";
	pp = &p2;
	pp->print();
}
