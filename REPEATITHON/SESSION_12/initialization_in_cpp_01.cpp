#include <iostream>

using std::cout;
using std::endl;

class Date
{
    int day_pbs;
    int month_pbs;
    int year_pbs;
    public:
    void init(int _day_pbs,int _month_pbs,int _year_pbs)
    {
        this->day_pbs = _day_pbs;
        this->month_pbs = _month_pbs;
        this->year_pbs = _year_pbs;
    }
    void show()
    {
        cout<<this->day_pbs<<"/"<<this->month_pbs<<"/"<<this->year_pbs<<endl;
    }
};

int main(void)
{
    int num_pbs = 100;
    cout<<"num = "<<num_pbs<<endl;
    Date myDate_pbs;// there is no way (as of now)
                    //to initialize an object of Date
                     //we can add init() function to calss

    myDate_pbs.init(2,4,1998);
    //Add show() function
    myDate_pbs.show();
    return 0;
}


// At C++ syntax level, 
// allocate of memory to Date object is done by 
// Date myDate; 

// Setting value for the first time is done by 
// myDate.init(9, 2, 2025); 

// These are two separate steps and therefore 
// do not come under category of initialization 

// If we could do something like 
// Date myDate(9, 2, 2025); 
// then it would come under initialization 

// Date myDate(9, 2, 2025); 
// After reading this line 
// C++ should, first allocate memory of 12 bytes 
// for new object of class Date, name that memory 
// block as myDate. 
// And then INTERNALLY SHOULD CALL init() function 
// on myDate with 9, 2, 2025 as actual params 
