#include <iostream> 

using std::cout;

class Date 
{
    public: 
        typedef int day_t; 
        typedef int month_t; 
        typedef int year_t; 
    private: 
        day_t day_pbs; 
        month_t month_pbs; 
        year_t year_pbs; 
    public: 
        Date(day_t init_day, month_t init_month, year_t init_year)
        {
            day_pbs = init_day; 
            month_pbs = init_month; 
            year_pbs = init_year; 
        }

        day_t get_day()
        {
            return day_pbs; 
        }

        month_t get_month(){
            return month_pbs;
        }

        year_t get_year()
        {
            return year_pbs; 
        }
}; 

int main(void)
{
    Date myDate_pbs(15, 2, 2025); 
    Date::day_t day_pbs = myDate_pbs.get_day(); // Date::get_day(&myDate_pbs); 
    Date::month_t month_pbs = myDate_pbs.get_month(); 
    Date::year_t year_pbs = myDate_pbs.get_year(); 

    cout << day_pbs << "/" << month_pbs << "/" << year_pbs; 

    
    return (0); 
}

