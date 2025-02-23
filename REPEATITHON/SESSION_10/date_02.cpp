#include <iostream>

using std::cout;
using std::endl;

class Date
{
public:
    int day_pbs;
    int month_pbs;
    int year_pbs;

    void show()
    {
        cout << "Enter Date::show" << endl;
        cout << "Adress of object used for making the current call" << this << endl;
        cout << this->day_pbs << "/" << "/" << this->month_pbs << this->year_pbs << endl;
        cout << "Leave Date::show()" << endl;
    }
};

int main(void)
{
    Date d1_pbs;
    Date d2_pbs;
    Date d3_pbs;

    // Setting day month of d1_pbs
    d1_pbs.day_pbs = 2;
    d1_pbs.month_pbs = 4;
    d1_pbs.year_pbs = 2343;

    // Setting day month year of d2_pbs
    d2_pbs.day_pbs = 3;
    d2_pbs.month_pbs = 3;
    d2_pbs.year_pbs = 1919;

    // Settting day month year of d3_pbs
    d3_pbs.day_pbs = 2;
    d3_pbs.month_pbs = 6;
    d3_pbs.year_pbs = 1976;

    cout << "main(): Making use of object 'd1_pbs' to make a call to Date::show() " << endl;
    cout << "main():Address of object 'd1_pbs' is:" << &d1_pbs << endl; 
    d1_pbs.show(); // == Date::show(&d1_pbs); // formal parameter will be 'this' pointer  

    cout << "main(): Making use of object 'd2_pbs' to make a call to Date::show() " << endl;
    cout << "main():Address of object 'd2_pbs' is:" << &d2_pbs << endl; 
    d2_pbs.show(); // == Date::show(&d2_pbs); // formal parameter will be 'this' pointer  

    cout << "main(): Making use of object 'd3_pbs' to make a call to Date::show() " << endl;
    cout << "main():Address of object 'd1_pbs' is:" << &d3_pbs << endl; 
    d3_pbs.show(); // == Date::show(&d3_pbs); // formal parameter will be 'this' pointer  

    return (0);
}