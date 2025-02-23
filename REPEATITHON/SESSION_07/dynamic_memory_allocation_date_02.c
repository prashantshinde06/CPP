// header file inclusion
#include <stdio.h>
#include <stdlib.h>

/// structure defination

struct Date
{
    int day_pbs;
    int month_pbs;
    int year_pbs;
};

// function declarartion

struct Date *createDateInstance(int _dya_pbs, int _month_pbs, int _year_pbs);
int getDay(struct Date *pDate_pbs);
int getMonth(struct Date *pDate_pbs);
int getYear(struct Date *pDate_pbs);
void setDay(struct Date *pDate_pbs, int newDay_pbs);
void setMonth(struct Date *pDate_pbs, int newMOnth_pbs);
void setYear(struct Date *pDate_pbs, int newYear_pbs);
void showDate(struct Date *pDate_pbs);
void releaseDateInstance(struct Date *pDate_pbs);

// main Fuction
int main(void)
{
    // client side
    struct Date *pNewDate_pbs = createDateInstance(25, 1, 2025);
    showDate(pNewDate_pbs);
    setDay(pNewDate_pbs, 30);
    setMonth(pNewDate_pbs, 4);
    setYear(pNewDate_pbs, 2025);
    showDate(pNewDate_pbs);
    printf(
        "%d/%d/%d\n", getDay(pNewDate_pbs), getMonth(pNewDate_pbs), getYear(pNewDate_pbs));
    releaseDateInstance(pNewDate_pbs);
    pNewDate_pbs = NULL;
    return (0);
}

// server side

struct Date *createDateInstance(int _day_pbs, int _month_pbs, int _year_pbs)
{
    struct Date *pDate_pbs = NULL;
    pDate_pbs = (struct Date *)malloc(sizeof(struct Date));
    if (NULL == pDate_pbs)
    {
        fprintf(stderr, "malloc():fatal:out of memory\n");
        exit(-1);
    }
    pDate_pbs->day_pbs = _day_pbs;
    pDate_pbs->month_pbs = _month_pbs;
    pDate_pbs->year_pbs = _year_pbs;
    return (pDate_pbs);
}

int getDay(struct Date *pDate_pbs)
{
    return (pDate_pbs->day_pbs);
}

int getMonth(struct Date *pDate_pbs)
{
    return (pDate_pbs->month_pbs);
}

int getYear(struct Date *pDate_pbs)
{
    return (pDate_pbs->year_pbs);
}

void setDay(struct Date *pDate_pbs, int newDay_pbs)
{
    pDate_pbs->day_pbs = newDay_pbs;
}

void setMonth(struct Date *pDate_pbs, int newMonth)
{
    pDate_pbs->month_pbs = newMonth;
}

void setYear(struct Date *pDate_pbs, int newYear)
{
    pDate_pbs->year_pbs = newYear;
}

void showDate(struct Date *pDate_pbs)
{
    printf("%d/%d/%d\n", pDate_pbs->day_pbs, pDate_pbs->month_pbs, pDate_pbs->year_pbs);
}

void releaseDateInstance(struct Date *pDate_pbs)
{
    free(pDate_pbs);
    pDate_pbs = NULL;
}