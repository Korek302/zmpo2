#include "CRectangle.h"

void go(int iHowManyP, int iHowManyR, CPoint2D** pointTab, CRectangle** recTab, int pointTabLength, int rectTabLength, bool bIsCreated);
void createPoint(int iPosition, double iX, double iY, CPoint2D** pointTab, int pointTabLength);
void createPointCopy(int iPosition, int iPositionFrom, CPoint2D** pointTab, int pointTabLength);
void setPoint(int iPosition, double iX1, double iY1, CPoint2D** pointTab, int pointTabLength);
void getPointX(int iPosition, CPoint2D** pointTab, int pointTabLength);
void getPointY(int iPosition, CPoint2D** pointTab, int pointTabLength);
void createRectDouble(int iPosition, double iX1, double iY1, double iX2, double iY2, CRectangle** recTab, int rectTabLength);
void createRectPoints(int iPosition, int iPoint1, int iPoint2, CRectangle** recTab, CPoint2D** pointTab, int pointTabLength, int rectTabLength);
void createRectCopy(int iPosition, int iPositionFrom, CRectangle** recTab, int rectTabLength);
void fieldRect(int iPosition, CRectangle** recTab, int rectTabLength);
void showPoint(int iPosition, CPoint2D** pointTab, int pointTabLength);
void showRect(int iPosition, CRectangle** recTab, int rectTabLength);
void assignPoint(int iPosition, int iPositionFrom, CPoint2D** pointTab, int pointTabLength);
void assignRect(int iPosition, int iPositionFrom, CRectangle** recTab, int rectTabLength);
void addPoint(int iPosition, int iPointPosition, CRectangle** recTab, CPoint2D** pointTab, int pointTabLength, int rectTabLength);
void addRect(int iPosition, int iPositionAdded, CRectangle** recTab, int rectTabLength);