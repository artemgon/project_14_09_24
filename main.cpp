#include "classes.h"

int main()
{
    Student student(
        "Kovalenko Ivan Vasylovych", "2000-05-15", "+123456789",
        "Kyiv", "Ukraine",
        "National University", "Kyiv", "Ukraine", 15.5);
    student.printFunc();
    cout << endl;
    cout << "Get full name: " << student.getSNP() << endl;
    student.setCity("Lviv");
    student.setGNumber(202);
    cout << endl;
    cout << "After modifications: " << endl;
    student.printFunc();
	return 0;
}