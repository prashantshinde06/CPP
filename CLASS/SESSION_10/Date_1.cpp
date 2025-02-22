#include <iostream>

using std::cout;
using std::endl; // use this for "\n"

class Date
{
public:
    int day;
    int month;
    int year;

    void show()
    {
        cout << "*****Enter Date::show()*****" << endl;
        cout << "Address of object used for making the current cell" << this << endl;
        cout << this->day << "/" << this->month << "/" << this->year << endl;
        cout << "*****Leave Date::show()*****" << endl;
    };
};

int main(void)
{
    Date d1;
    Date d2;
    Date d3;

    // setting day, month,year for d1
    d1.day = 2;
    d1.month = 2;
    d1.year = 2022;

    // setting day, month,year for d2
    d2.day = 22;
    d2.month = 12;
    d2.year = 2023;

    // setting day, month,year for d3
    d3.day = 3;
    d3.month = 8;
    d3.year = 2024;

    cout << "main() : making use of object 'd1' to make a call to Date::show()" << endl;
    cout << "main(): Address of object 'd1' is:" << &d1 << endl;
    d1.show();

    cout << "main() : making use of object 'd2' to make a call to Date::show()" << endl;
    cout << "main(): Address of object 'd1' is:" << &d2 << endl;
    d2.show();

    cout << "main() : making use of object 'd3' to make a call to Date::show()" << endl;
    cout << "main(): Address of object 'd1' is:" << &d3 << endl;
    d3.show();

    return (0);
}