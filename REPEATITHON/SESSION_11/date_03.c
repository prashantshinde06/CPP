// this version of c does not break the abstraction barrier

#include <stdio.h>

// server side start
struct Date
{
    int day_pbs;
    int month_pbs;
    int year_pbs;
};

void show(struct Date *pDate_pbs)
{
    printf("%d/%d/%d\n", pDate_pbs->day_pbs, pDate_pbs->month_pbs, pDate_pbs->year_pbs);
}

// server side end

// client side start
int main(void)
{
    struct Date myDate_pbs = {5, 5, 1123};
    show(&myDate_pbs);
    return (0);
}
// client side end