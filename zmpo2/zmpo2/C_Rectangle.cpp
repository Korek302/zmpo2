#include "C_Rectangle.h"
#include <math.h>
#include <iostream>

C_Rectangle::C_Rectangle(double dPoint1x, double dPoint1y, double dPoint2x, double dPoint2y)
{
	point1.vSetX(dPoint1x);
	point1.vSetY(dPoint1y);
	point2.vSetX(dPoint2x);
	point2.vSetY(dPoint2y);
}

C_Rectangle::C_Rectangle(C_Point2D p1, C_Point2D p2)
{
	point1.vSetX(p1.dGetX());
	point1.vSetY(p1.dGetY());
	point2.vSetX(p2.dGetX());
	point2.vSetY(p2.dGetY());
}

C_Rectangle::C_Rectangle(C_Rectangle &pcOther)
{
	point1.vSetX(pcOther.point1.dGetX());
	point1.vSetY(pcOther.point1.dGetY());
	point2.vSetX(pcOther.point2.dGetX());
	point2.vSetY(pcOther.point2.dGetY());
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