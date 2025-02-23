#include <iostream>

using std::cout;
using std::endl;

class Date
{
public:
    int day_pbs;
    int month_pbs;
    int year_pbs;

    void show()
    {
        cout << "Enter Date::show()" << endl;
        cout << "Address of object use for making the current call:" << this << endl;
        cout << this->day_pbs << "/" << this->month_pbs << "/" << this->year_pbs << endl;
        cout << "LEAVE Date::show()" << endl;
    }
};

int main(void)
{
    //Define three local objects of class Date

    Date d1_pbs;
    Date d2_pbs;
    Date d3_pbs;

    //Define three pointers to class Date

    Date* pDate1_pbs = 0; // pDate1_pbs is a pointer to class Date
    Date* pDate2_pbs = 0;
    Date* pDate3_pbs = 0;

    //Set pointers to address
    pDate1_pbs = &d1_pbs;
    pDate2_pbs = &d2_pbs;
    pDate3_pbs = &d3_pbs;

    //setting day month year of d1_pbs
    pDate1_pbs->day_pbs = 2;
    pDate1_pbs->month_pbs = 3;
    pDate1_pbs->year_pbs =1887;

    //setting day month year of d2_pbs
    pDate2_pbs->day_pbs = 3;
    pDate2_pbs->month_pbs = 12;
    pDate2_pbs->year_pbs = 1262;

    //setting day month year of d3_pbs
    pDate3_pbs->day_pbs = 4;
    pDate3_pbs->month_pbs = 5;
    pDate3_pbs->year_pbs = 1234;

    cout << "main():Making use of pointer pDate1_pbs to make a call to Date::show()" << endl; 
    cout << "main():Address of object 'd1_pbs' is:" << pDate1_pbs << endl; 
    pDate1_pbs->show(); // == Date::show(&d1_pbs); // formal parameter will be 'this' pointer 

    cout << "main():Making use of pointer pDate2_pbs to make a call to Date::show()" << endl; 
    cout << "main():Address of object 'd2_pbs' is:" << pDate2_pbs << endl; 
    pDate2_pbs->show(); // == Date::show(&d2_pbs) // formal parameter will be 'this' pointer 

    cout << "main():Making use of pointer pDate3_pbs to make a call to Date::show()" << endl; 
    cout << "main():Address of object 'd3_pbs' is:" << pDate3_pbs << endl; 
    pDate3_pbs->show(); // == Date::show(&d3_pbs) // formal parameter will be 'this' pointer 

    return (0); 
}

// pDate1->show(); 
// Date::show(pDate1); 

// Date* pDate1; 
// Date* this 

// this = pDate1

// d1.show(); 
// this = &d1; 

// pDate1=&d1;
// this=pDate1
