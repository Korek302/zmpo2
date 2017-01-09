#include "CPoint2D.h"

using namespace std;

class CRectangle
{
public:
	CRectangle(double dPoint1x, double dPoint1y, double dPoint2x, double dPoint2y);
	CRectangle(const CPoint2D &p1, const CPoint2D& p2);
	CRectangle(const CRectangle &pcOther);
	~CRectangle();
	void operator=(const CRectangle &pcOther);
	CRectangle operator+(const CRectangle &pcOther);
	CRectangle operator+(const CPoint2D &pcOther);
	double dArea();
	void show();
private:
	CPoint2D point1;
	CPoint2D point2;
};