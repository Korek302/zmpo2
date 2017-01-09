#include "CRectangle.h"
#include <math.h>
#include <iostream>

using namespace std;

template <typename T> 
double max(T t)
{
	return t;
}

template <typename T, typename... Args> 
double max(T t, Args... args)
{
	double temp = max(args...);
	if (t > temp)
		return t;
	return temp;
}

template <typename T>
double min(T t)
{
	return t;
}

template <typename T, typename... Args>
double min(T t, Args... args)
{
	double temp = min(args...);
	if (t < temp)
		return t;
	return temp;
}

CRectangle::CRectangle(double dPoint1x, double dPoint1y, double dPoint2x, double dPoint2y) : 
	point1(dPoint1x, dPoint1y), point2(dPoint2x, dPoint2y)
{}

CRectangle::CRectangle(const CPoint2D &p1, const CPoint2D &p2) : point1(p1), point2(p2)
{}

CRectangle::CRectangle(const CRectangle &pcOther) : point1(pcOther.point1), point2(pcOther.point2)
{}

CRectangle::~CRectangle()
{}

void CRectangle::operator=(const CRectangle &pcOther)
{
	point1 = pcOther.point1;
	point2 = pcOther.point2;
}

CRectangle CRectangle::operator+(const CRectangle &pcOther)
{
	return CRectangle(CPoint2D(max(point1.dGetX(), point2.dGetX(), pcOther.point1.dGetX(), pcOther.point2.dGetX()), 
		max(point1.dGetY(), point2.dGetY(), pcOther.point1.dGetY(), pcOther.point2.dGetY())),
		CPoint2D(min(point1.dGetX(), point2.dGetX(), pcOther.point1.dGetX(), pcOther.point2.dGetX()), 
		min(point1.dGetY(), point2.dGetY(), pcOther.point1.dGetY(), pcOther.point2.dGetY())));
}

CRectangle CRectangle::operator+(const CPoint2D &pcOther)
{
	return CRectangle(CPoint2D(max(point1.dGetX(), point2.dGetX(), pcOther.dGetX(), pcOther.dGetX()),
		max(point1.dGetY(), point2.dGetY(), pcOther.dGetY(), pcOther.dGetY())),
		CPoint2D(min(point1.dGetX(), point2.dGetX(), pcOther.dGetX(), pcOther.dGetX()),
		min(point1.dGetY(), point2.dGetY(), pcOther.dGetY(), pcOther.dGetY())));
}

double CRectangle::dArea()
{
	return abs(point1.dGetX() - point2.dGetX())*abs(point1.dGetY() - point2.dGetY());
}

void CRectangle::show()
{
	cout << "CRectangle(CPoint(" << point1.dGetX() << ", " << point1.dGetY() << "),CPoint(" << point2.dGetX() << ", " << point2.dGetY() << "))" << endl;
}