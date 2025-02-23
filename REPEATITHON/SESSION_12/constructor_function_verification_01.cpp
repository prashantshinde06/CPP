#include <iostream>

using std::cout;
using std::endl;

class Date
{
private:
    int day_pbs;
    int month_pbs;
    int year_pbs;

public:
    // constructor function
    Date(int _day_pbs, int _month_pbs, int _year_pbs)
    {
        cout << "*****Date CONSTRUCTOR ENTER*****" << endl;
        cout << "Address of newly allocated object:" << this << endl;
        this->day_pbs = _day_pbs;
        this->month_pbs = _month_pbs;
        this->year_pbs = _year_pbs;
        cout << "*****Date CONSTRUCTOR LEAVE*****" << endl;
    }

    void show()
    {
        cout << "*****Date::show() ENTER*****" << endl;
        cout << "Address of object whose members must be shown:" << this << endl;
        cout << day_pbs << "/" << month_pbs << "/" << year_pbs << endl;
        cout << "*****Date::show() LEAVE*****" << endl;
    }
};

int main(void)
{
    // Memory allocation of 12 bytes of stack frame of main() + call to constructor
    Date myBirthDate_pbs(20, 7, 1986);

    // Memory allocation of 12 bytes of stack frame of main() + call to constructor
    Date cpaBirthDate_pbs(1, 12, 2009);

    cout << "main():address of myBirthDate:" << &myBirthDate_pbs << endl;
    cout << "main():address of cpaBirthDate:" << &cpaBirthDate_pbs << endl;

    cpaBirthDate_pbs.show();
    myBirthDate_pbs.show();

    return 0;
}
