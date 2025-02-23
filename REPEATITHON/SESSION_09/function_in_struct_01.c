#include <stdio.h>

/*
 As per c-standered function can not defined inside a structure
*/

struct Date
{
    int day_pbs;   /*data defination statement*/
    int month_pbs; /*data defination statement*/
    int year_pbs;  /*data defination statement*/
    // Function defination - > not allowed inside
    // CTE (uncomment entire function defination to see the error)

    // int get_day()
    // {
    //     return (day);
    // }
};
