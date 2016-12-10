#include "C_Rectangle.h"
#include <math.h>
#include <iostream>

C_Rectangle::C_Rectangle(double dPoint1x, double dPoint1y, double dPoint2x, double dPoint2y) : 
	point1(dPoint1x, dPoint1y), point2(dPoint2x, dPoint2y)
{
	
}

C_Rectangle::C_Rectangle(const C_Point2D &p1, const C_Point2D &p2) : point1(p1), point2(p2)
{
	
}

C_Rectangle::C_Rectangle(const C_Rectangle &pcOther) : point1(pcOther.point1), point2(pcOther.point2)
{
	
}

C_Rectangle::~C_Rectangle()
{

}

double C_Rectangle::dArea()
{
	return abs(point1.dGetX() - point2.dGetX())*abs(point1.dGetY() - point2.dGetY());
}

void C_Rectangle::vPrintRectangle()
{
	cout << "CRectangle(CPoint(" << point1.dGetX() << ", " << point1.dGetY() << "),CPoint(" << point2.dGetX() << ", " << point2.dGetY() << "))" << endl;
}