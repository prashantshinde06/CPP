#include <iostream>
using std::cout;
using std::endl;

// server side start

class Date
{
private:
    int day_pbs;
    int month_pbs;
    int year_pbs;

public:
    void show()
    {
        cout << this->day_pbs << "/" << this->month_pbs << "/" << this->year_pbs << endl;
    }
};

// server side end

// client side start
int main(void)
{
    // day_pbs month_pbs and year_pbs of myDate_pbs will contain garbage value
    Date myDate_pbs;
    myDate_pbs.show(); // Dtae::show(&myDate_pbs);

    return (0);
}

// client side end