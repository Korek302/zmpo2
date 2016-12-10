#include "CPoint2D.h"
#include <iostream>

using namespace std;

CPoint2D::CPoint2D(double dVal1, double dVal2)
{
	pd_x = new double();
	pd_y = new double();
	*pd_x = dVal1;
	*pd_y = dVal2;
}

CPoint2D::CPoint2D(const CPoint2D &pcOther)
{
	pd_x = new double();
	pd_y = new double();
	*this = pcOther;
}

CPoint2D::~CPoint2D()
{
	delete pd_x;
	delete pd_y;
}

void CPoint2D :: operator=(const CPoint2D &point1)
{
	*pd_x = point1.dGetX();
	*pd_y = point1.dGetY();
}

void CPoint2D::show()
{
	cout << "CPoint(" << dGetX() << ", " << dGetY() << ")" << endl;
}

double CPoint2D::dGetX() const
{
	return *pd_x;
}

double CPoint2D::dGetY() const
{
	return *pd_y;
}

void CPoint2D::vSetX(double val)
{
	*pd_x = val;
}

void CPoint2D::vSetY(double val)
{
	*pd_y = val;
}