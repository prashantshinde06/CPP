#include <iostream>

using std::cout;
using std::endl;

class Date
{
public:
    int day_pbs;
    int month_pbs;
    int year_pbs;

    void show(Date *pDate_pbs)
    {
        cout << pDate_pbs->day_pbs << "/" << pDate_pbs->month_pbs << "/" << pDate_pbs->year_pbs << "/" << endl;
    }
};

int main(void)
{
    Date myDate_pbs;
    Date d1_pbs;

    myDate_pbs.day_pbs = 8;
    myDate_pbs.month_pbs = 12;
    myDate_pbs.year_pbs = 2029;

    d1_pbs.day_pbs = 8;
    d1_pbs.month_pbs = 12;
    d1_pbs.year_pbs = 1752;

    Date::show(&myDate_pbs);
    Date::show(&d1_pbs);
}

class C
{
public:
    // f() exists to algorithmically process an object of class C
    void f()
    {
        // Which object of class C will be processed in the current
        // call of C::f()
    }
};

class YourClassName
{
private:
    int a_pbs;
    char b_pbs;
    float c_pbs;

public:
    // YourClassName* this-> FIRST FORMAL PARAMETER
    void YourFunctionName(int m_pbs, int n_pbs)
        [this -> data_members this->funtion_member

         this->a_pbs;
         this->b_pbs;
         this->c_pbs;

         m_pbs
             n_pbs

    ]
};

int main(void)
{
    YourClassName YourObjectName;

    YourClassName::YourFunctionName(&YourObjectName);

    YourObjectName.YourFunctionName(10, 20);
}