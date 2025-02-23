#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

class Date
{
private:
    int day_pbs;
    int month_pbs;
    int year_pbs;

public:
    void init(int init_day_pbs, int init_month_pbs, int init_year_pbs)
    {
        cout << "Date::init():typeof(this) = " << typeid(this).name() << endl;
        this->day_pbs = init_day_pbs;
        this->month_pbs = init_month_pbs;
        this->year_pbs = init_year_pbs;
    }

    void show()
    {
        cout << "Date::show():typeof(this) = " << typeid(this).name() << endl;
        cout << day_pbs << "/" << month_pbs << "/" << year_pbs << endl;
    }
};

int main(void)
{
    Date myDate_pbs;
    myDate_pbs.init(2, 5, 7654);
    myDate_pbs.show();
    return 0;
}