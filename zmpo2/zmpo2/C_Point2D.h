using namespace std;

class C_Point2D
{
public:
	C_Point2D();
	C_Point2D(double dVal1, double dVal2);
	C_Point2D(C_Point2D &pcOther);
	~C_Point2D();
	double dGetX();
	double dGetY();
	void vSetX(double dVal);
	void vSetY(double dVal);
private:
	double* pd_x;
	double* pd_y;
};