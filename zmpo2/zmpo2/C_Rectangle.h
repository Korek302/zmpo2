#include "C_Point2D.h"

using namespace std;

class C_Rectangle
{
public:
	C_Rectangle(double dPoint1x, double dPoint1y, double dPoint2x, double dPoint2y);
	C_Rectangle(C_Point2D p1, C_Point2D p2);
	C_Rectangle(C_Rectangle &pcOther);
	~C_Rectangle();
	double dArea();
	void vPrintRectangle();
private:
	C_Point2D point1;
	C_Point2D point2;
};