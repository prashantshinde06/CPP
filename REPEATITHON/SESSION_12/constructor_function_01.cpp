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
        this->day_pbs = _day_pbs;
        this->month_pbs = _month_pbs;
        this->year_pbs = _year_pbs;
    }
    void show()
    {
        cout << day_pbs << "/" << month_pbs << "/" << year_pbs << endl;
    }
};

int main(void)
{
    Date myDate_pbs(2, 5, 1888);
    // 12 byte of memory block will be allocated to Date object
    // make call to Date::Date(addr_of_new_object,2,5,1888)
    myDate_pbs.show(); // Date:show(&myDate_pbs)

    return 0;
}