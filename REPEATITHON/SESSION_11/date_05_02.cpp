// header file inclusion
#include <iostream>

// importing symbols 'cout' and 'endl' from standered namespace
using std::cout;
using std::endl;

// server side -> start
class Date
{
private:
    // data layout defination
    int day_pbs;
    int month_pbs;
    int year_pbs;

public:
    // public member functions
    // remember-> first parameter if init() function is DAte* this
    void init(int init_day_pbs, int init_month_pbs, int init_year_pbs)
    {
        this->day_pbs = init_day_pbs;
        this->month_pbs = init_month_pbs;
        this->year_pbs = init_year_pbs;
    }
    // rememebr->first parameter of show() is Date* this
    void show()
    {
        cout << this->day_pbs << "/" << this->month_pbs << "/" << this->year_pbs << endl;
    }
};

// server side end

// client side start
int main(void)
{
    // create an object of class Date
    Date myDate_pbs;
    // use object of class date

    cout << "myDate_pbs object before calling init() function on it" << endl;
    myDate_pbs.show();           // Date::show(&myDate_pbs)
    myDate_pbs.init(8, 2, 2025); // Date::init(&myDate_pbs, 8, 2, 2025)
    cout << "myDate_pbs object after calling init() function on it" << endl;
    myDate_pbs.show();

    return (0);
}

// client side end
