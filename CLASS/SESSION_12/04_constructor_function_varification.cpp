#include <iostream>

using std::cout;
using std::endl;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year)
    {
        cout<<"contructore start"<<endl;
        cout<<"address of newly allocated object"<<this <<endl;
        this->day = _day;
        this->month = _month;
        this->year = _year;
        cout<<"contructore end"<<endl;
    }

    void show()
    {
        cout<<"*******Date::show() enter*******"<<endl;
        cout<<"adress of object whose member must be shown"<<this<<endl;
        cout << day << "/" << month << "/" << year << endl;
        cout<<"*******Date::show() end*******"<<endl;
    }
};

int main()
{
    Date myBirthDate(6,7,1995);
    Date cpaBirtDate(1,12,2009);
    //12 bytes of memory block will be allocated to Date object
    //Make call to Date::Date(addr_of_new_object, 9, 2, 2025);

    cout<<"main(): adresss of myBitrthDate"<<&myBirthDate<<endl;
    cout<<"main(): adress of epaBkirtDate"<<&cpaBirtDate<<endl;
    myBirthDate.show();
    cpaBirtDate.show();
    return 0;
}