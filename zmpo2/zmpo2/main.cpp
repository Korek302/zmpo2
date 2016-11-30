#include "C_Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

C_Point2D** pointTab;
C_Rectangle** recTab;
int pointTabLength;
int rectTabLength;
bool bIsCreated = false;

void go(int iHowManyP, int iHowManyR)
{
	if (iHowManyP < 0 || iHowManyR < 0)
		cout << "ERROR" << endl;
	else
	{
		pointTabLength = iHowManyP;
		rectTabLength = iHowManyR;
		pointTab = new C_Point2D*[iHowManyP];
		recTab = new C_Rectangle*[iHowManyR];
		bIsCreated = true;
		cout << "DONE" << endl;
	}
}

void createPoint(int iPosition, double iX, double iY)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		pointTab[iPosition] = new C_Point2D(iX, iY);
		cout << "DONE" << endl;
	}
}

void createPointCopy(int iPosition, int iPositionFrom)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1 || iPositionFrom < 0 || iPositionFrom > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		pointTab[iPosition] = new C_Point2D(*pointTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void setPoint(int iPosition, double iX1, double iY1)
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

void getPointX(int iPosition)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*pointTab[iPosition]).dGetX() << endl;
		cout << "DONE" << endl;
	}
}

void getPointY(int iPosition)
{
	if (iPosition < 0 || iPosition > pointTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*pointTab[iPosition]).dGetY() << endl;
		cout << "DONE" << endl;
	}
}

void createRectDouble(int iPosition, double iX1, double iY1, double iX2, double iY2)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new C_Rectangle(iX1, iY1, iX2, iY2);
		cout << "DONE" << endl;
	}
}

void createRectPoints(int iPosition, int iPoint1, int iPoint2)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new C_Rectangle((*pointTab[iPoint1]), (*pointTab[iPoint2]));
		cout << "DONE" << endl;
	}
}

void createRectCopy(int iPosition, int iPositionFrom)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		recTab[iPosition] = new C_Rectangle(*recTab[iPositionFrom]);
		cout << "DONE" << endl;
	}
}

void fieldRect(int iPosition)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		cout << (*recTab[iPosition]).dArea() << endl;
		cout << "DONE" << endl;
	}
}

void showRect(int iPosition)
{
	if (iPosition < 0 || iPosition > rectTabLength - 1)
		cout << "ERROR" << endl;
	else
	{
		(*recTab[iPosition]).vPrintRectangle();
		cout << "DONE" << endl;
	}
}


int main()
{
	string sChoice;

	do
	{
		cin >> sChoice;
		if (sChoice == "!go")
		{
			int iHowManyPoints;
			int iHowManyRects;
			cin >> iHowManyPoints;
			cin >> iHowManyRects;
			go(iHowManyPoints, iHowManyRects);
		}
		else if (sChoice == "!createPoint")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dX1;
				double dY1;
				cin >> iPosition;
				cin >> dX1;
				cin >> dY1;
				createPoint(iPosition, dX1, dY1);
			}
		}
		else if (sChoice == "!createPointCopy")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPositionFrom;
				cin >> iPosition;
				cin >> iPositionFrom;
				createPointCopy(iPosition, iPositionFrom);
			}
		}
		else if (sChoice == "!setPoint")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dX1;
				double dY1;
				cin >> iPosition;
				cin >> dX1;
				cin >> dY1;
				setPoint(iPosition, dX1, dY1);
			}
		}
		else if (sChoice == "!getPointX")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				getPointX(iPosition);
			}
		}
		else if (sChoice == "!getPointY")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				getPointY(iPosition);
			}
		}
		else if (sChoice == "!createRectDouble")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				double dX1;
				double dY1;
				double dX2;
				double dY2;
				cin >> iPosition;
				cin >> dX1;
				cin >> dY1;
				cin >> dX2;
				cin >> dY2;
				createRectDouble(iPosition, dX1, dY1, dX2, dY2);
			}
		}
		else if (sChoice == "!createRectPoints")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPoint1;
				int iPoint2;
				cin >> iPosition;
				cin >> iPoint1;
				cin >> iPoint2;
				createRectPoints(iPosition, iPoint1, iPoint2);
			}
		}
		else if (sChoice == "!createRectCopy")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPositionFrom;
				cin >> iPosition;
				cin >> iPositionFrom;
				createRectCopy(iPosition, iPositionFrom);
			}
		}
		else if (sChoice == "!fieldRect")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				fieldRect(iPosition);
			}
		}
		else if (sChoice == "!showRect")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				showRect(iPosition);
			}
		}
		else
		{
			cout << "wrong command" << endl;
		}

	} while (sChoice[0] != '0');

	if (bIsCreated)
	{
		delete pointTab;
		delete recTab;
	}

	getchar();
	return 0;
}


