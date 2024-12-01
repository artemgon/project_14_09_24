#include "classes.h"

int main()
{
	Point p1(5, 6, 7), p2(15, 26, 11), p3;
	p3.setFunc(1, 7, 5);
	p1.printFunc();
	p2.printFunc();
	p3.printFunc();
	Point p4;
	p4.setX(20);
	p4.setY(17);
	p4.setZ(18);
	cout << endl;
	cout << "Info about p4: " << endl;
	cout << "x: " << p4.getX() << endl;
	cout << "y: " << p4.getY() << endl;
	cout << "z: " << p4.getZ() << endl;
	return 0;
}