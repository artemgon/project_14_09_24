#include "libs.h"

class Point
{
private:
	float x, y, z;
public:
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Point(float u_x, float u_y, float u_z)
	{
		x = u_x;
		y = u_y;
		z = u_z;
	}
    void printFunc() const
    {
		cout << endl;
		cout << "Point info: " << endl;
		cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
	void setFunc(float u_x_1, float u_y_1, float u_z_1)
	{
		x = u_x_1;
		y = u_y_1;
		z = u_z_1;
	}
	void setX(const float& u_x_2)
	{
		x = u_x_2;
	}
	void setY(const float& u_y_2)
	{
		y = u_y_2;
	}
	void setZ(const float& u_z_2)
	{
		z = u_z_2;
	}
	float getX() const
	{
		return x;
	}
	float getY() const
	{ 
		return y;
	}
	float getZ() const 
	{
		return z;
	}
};