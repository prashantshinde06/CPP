// This file will not compile

#include <iostream>

using std::cout;

int compute(int x, int y);

class Date
{
public:
    int day_pbs;
    int month_pbs;
    int year_pbs;

    void show(void)
    {
        cout << day_pbs << "/" << month_pbs << "/" << year_pbs << "\n";
    }

    void show(Date *pDate_pbs)
    {
        cout << pDate_pbs->day_pbs << "/" << pDate_pbs->month_pbs << "/" << pDate_pbs->year_pbs << "\n";
    }

    // EVERY FUNCTION THAT IS WRITTEN INSIDE CLASS DATE EXISTES TO PROCESS OBJECT OF CLASS DATE
    // EVERY SUCH FUNCTION MUST ACCEPT ADDRESS OF DATE OBJECT
    // TO UDERSTAND WICH DATE OBJECT TO PROCESS IN THE CURRENT CALL?
};

// LET C BY ANY CLASS
// LET f() BE ANY FUNCTION THAT WE WANT TO DEFINE IN CLASS

class C
{
public:
    void f(C *pc, /*optional other param*/)
    {
    }

    void g()
    {
    }
};

int main(void)
{
    int result_pbs;

    result_pbs = compute(10, 5);

    Date myBirthDate_pbs;

    myBirthDate_pbs.day_pbs = 20;
    myBirthDate_pbs.month_pbs = 7;
    myBirthDate_pbs.year_pbs = 1029;

    Date::show(&myBirthDate_pbs);

    Date d1_pbs;
    d1_pbs.day_pbs = 1;
    d1_pbs.month_pbs = 2;
    d1_pbs.year_pbs = 1324;

    Date::show(&d1_pbs);

    Date d2_pbs;
    d2_pbs.day_pbs = 1;
    d2_pbs.month_pbs = 3;
    d2_pbs.year_pbs = 3434;

    Date::show(&d2_pbs);
}

int compute(int x, int y)
{
    return (x + y) * (x - y);
}

//////////////////////////////////////////////////////

class Date
{
public:
    int day_pbs;
    int month_pbs;
    int year_pbs;

    void show()
    {
        cout << day_pbs << "/" << month_pbs << "/" << year_pbs << "\n";
    }
};

int main(void)
{

    Date myBirthDate_pbs;

    myBirthDate_pbs.day_pbs = 20;
    myBirthDate_pbs.month_pbs = 7;
    myBirthDate_pbs.year_pbs = 1029;

    // Date::show(&myBirthDate_pbs);
    myBirthDate_pbs.show(); // Date::show(&myBirthDate_pbs);
}

// OBJECT ORIENTED ANALYSIS AND DESIGN WITH
// APPLICATION -> GRADY BOOCH

// FIRST PRINCIPLES

// COMPLEXITY

// OTHER ENGINEERING
