#include <stdio.h>

struct Date
{
    int day_pbs;
    int month_pbs;
    int year_pbs;
};

int main(void)
{
    int num_pbs = 10;
    printf("num = %d\n", num_pbs); // 10 will be printed

    struct Date myDate_pbs = {9, 1, 1234};
    printf("%d/%d/%d", myDate_pbs.day_pbs, myDate_pbs.month_pbs, myDate_pbs.year_pbs);
    return (0);
}