#include "Header.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	CPoint2D** pointTab = NULL;
	CRectangle** recTab = NULL;
	int pointTabLength;
	int rectTabLength;
	bool bIsCreated = false;
	string sChoice;
	do
	{
		cin >> sChoice;
		if (sChoice == "!go")
		{
			if (bIsCreated)
				cout << "table already created" << endl;
			else
			{
				int iHowManyP;
				int iHowManyR;
				cin >> iHowManyP;
				cin >> iHowManyR;
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
				createPoint(iPosition, dX1, dY1, pointTab, pointTabLength);
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
				createPointCopy(iPosition, iPositionFrom, pointTab, pointTabLength);
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
				setPoint(iPosition, dX1, dY1, pointTab, pointTabLength);
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
				getPointX(iPosition, pointTab, pointTabLength);
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
				getPointY(iPosition, pointTab, pointTabLength);
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
				createRectDouble(iPosition, dX1, dY1, dX2, dY2, recTab, rectTabLength);
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
				createRectPoints(iPosition, iPoint1, iPoint2, recTab, pointTab, pointTabLength, rectTabLength);
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
				createRectCopy(iPosition, iPositionFrom, recTab, rectTabLength);
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
				fieldRect(iPosition, recTab, rectTabLength);
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
				showRect(iPosition, recTab, rectTabLength);
			}
		}
		else if (sChoice == "!showPoint")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				cin >> iPosition;
				showPoint(iPosition, pointTab, pointTabLength);
			}
		}
		else if (sChoice == "!assignPoint")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPositionFrom;
				cin >> iPosition;
				cin >> iPositionFrom;
				assignPoint(iPosition, iPositionFrom, pointTab, pointTabLength);
			}
		}
		else if (sChoice == "!assignRect")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPositionFrom;
				cin >> iPosition;
				cin >> iPositionFrom;
				assignRect(iPosition, iPositionFrom, recTab, rectTabLength);
			}
		}
		else if (sChoice == "!addPoint")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPointPosition;
				cin >> iPosition;
				cin >> iPointPosition;
				addPoint(iPosition, iPointPosition, recTab, pointTab, pointTabLength, rectTabLength);
			}
		}
		else if (sChoice == "!addRect")
		{
			if (!bIsCreated)
				cout << "table not created" << endl;
			else
			{
				int iPosition;
				int iPositionAdded;
				cin >> iPosition;
				cin >> iPositionAdded;
				addRect(iPosition, iPositionAdded, recTab, rectTabLength);
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