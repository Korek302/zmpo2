#include "C_Point2D.h"

C_Point2D::C_Point2D(double dVal1, double dVal2)
{
	pd_x = new double();
	pd_y = new double();
	*pd_x = dVal1;
	*pd_y = dVal2;
}

C_Point2D::C_Point2D(const C_Point2D &pcOther)
{
	pd_x = new double();
	pd_y = new double();
	*pd_x = *(pcOther.pd_x);
	*pd_y = *(pcOther.pd_y);
}

C_Point2D::~C_Point2D()
{
	delete pd_x;
	delete pd_y;
}

double C_Point2D::dGetX() const
{
	return *pd_x;
}

double C_Point2D::dGetY() const
{
	return *pd_y;
}

void C_Point2D::vSetX(double val)
{
	*pd_x = val;
}

void C_Point2D::vSetY(double val)
{
	*pd_y = val;
}