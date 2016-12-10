using namespace std;

class CPoint2D
{
public:
	CPoint2D(double dVal1, double dVal2);
	CPoint2D(const CPoint2D &pcOther);
	~CPoint2D();
	void operator=(const CPoint2D &pcOther);
	double dGetX() const;
	double dGetY() const;
	void vSetX(double dVal);
	void vSetY(double dVal);
	void show();
private:
	double* pd_x;
	double* pd_y;
};