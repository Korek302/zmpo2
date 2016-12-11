#include "Header.h"
#include <iostream>

using namespace std;

void go(int iHowManyP, int iHowManyR, CPoint2D** pointTab, CRectangle** recTab, int pointTabLength, int rectTabLength, bool bIsCreated)
{
	if (iHowManyP < 0 || iHowManyR < 0)
		cout << "ERROR" << endl;
	else
	{
		pointTabLength = iHowManyP;
		rectTabLength = iHowManyR;
		pointTab = new CPoint2D*[iHowManyP];
		recTab = new CRectangle*[iHowManyR];
		bIsCreated = true;
		cout << "DONE" << endl;
	}
}

void createPoint(int iPosition, double iX, double iY, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		pointTab[iPosition] = new CPoint2D(iX, iY);
		cout << "DONE" << endl;
	}
}

void createPointCopy(int iPosition, int iPositionFrom, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1 || iPositionFrom < 0 || iPositionFrom > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		pointTab[iPosition] = new CPoint2D(*pointTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void setPoint(int iPosition, double iX1, double iY1, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*pointTab[iPosition]).vSetX(iX1);
		(*pointTab[iPosition]).vSetY(iY1);
		cout << "DONE" << endl;
	}
}

void getPointX(int iPosition, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*pointTab[iPosition]).dGetX() << endl;
		cout << "DONE" << endl;
	}
}

void getPointY(int iPosition, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*pointTab[iPosition]).dGetY() << endl;
		cout << "DONE" << endl;
	}
}

void createRectDouble(int iPosition, double iX1, double iY1, double iX2, double iY2, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new CRectangle(iX1, iY1, iX2, iY2);
		cout << "DONE" << endl;
	}
}

void createRectPoints(int iPosition, int iPoint1, int iPoint2, CRectangle** recTab, CPoint2D** pointTab, int pointTabLength, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new CRectangle((*pointTab[iPoint1]), (*pointTab[iPoint2]));
		cout << "DONE" << endl;
	}
}

void createRectCopy(int iPosition, int iPositionFrom, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1 || iPositionFrom < 0 || iPositionFrom > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new CRectangle(*recTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void fieldRect(int iPosition, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*recTab[iPosition]).dArea() << endl;
		cout << "DONE" << endl;
	}
}

void showPoint(int iPosition, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*pointTab[iPosition]).show();
		cout << "DONE" << endl;
	}
}

void showRect(int iPosition, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*recTab[iPosition]).show();
		cout << "DONE" << endl;
	}
}

void assignPoint(int iPosition, int iPositionFrom, CPoint2D** pointTab, int pointTabLength)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1 || iPositionFrom < 0 || iPositionFrom > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*pointTab[iPosition]) = (*pointTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void assignRect(int iPosition, int iPositionFrom, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1 || iPositionFrom < 0 || iPositionFrom > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*recTab[iPosition]) = (*recTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void addPoint(int iPosition, int iPointPosition, CRectangle** recTab, CPoint2D** pointTab, int pointTabLength, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1 || iPointPosition < 0 || iPointPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*recTab[iPosition]) = (*recTab[iPosition]) + (*pointTab[iPointPosition]);
		cout << "DONE" << endl;
	}
}

void addRect(int iPosition, int iPositionAdded, CRectangle** recTab, int rectTabLength)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1 || iPositionAdded < 0 || iPositionAdded > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*recTab[iPosition]) = (*recTab[iPosition]) + (*recTab[iPositionAdded]);
		cout << "DONE" << endl;
	}
}