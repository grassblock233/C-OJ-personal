/*NOTE:The key of this problem lies in the calculation of dates*/
#include <stdio.h>
#define DateYearNow 2024
#define DateMonthNow 12
#define DateDayNow 21
#define WeekNow 6

struct Date
{
    int year;
    int month;
    int day;
};

typedef struct Date *list;

_Bool IsLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int DateGap(list date)
{
    int DayInMonth1[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int DayInMonth2[20] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // LeapYear
    int days = 0;

    if (date->year == DateYearNow)
    {
        if (IsLeapYear(date->year) == 1)
        {
            if (date->month == DateMonthNow)
            {
                days = DateDayNow - date->day;
            }
            else
            {
                for (int i = date->month; i <= DateMonthNow; i++)
                {
                    days += DayInMonth2[i];
                }
                days = days - date->day - (DayInMonth2[DateMonthNow] - DateDayNow);
            }
        }
        else
        {
            if (date->month == DateMonthNow)
            {
                days = DateDayNow - date->day;
            }
            else
            {
                for (int i = date->month; i <= DateMonthNow; i++)
                {
                    days += DayInMonth1[i];
                }
                days = days - date->day - (DayInMonth1[DateMonthNow] - DateDayNow);
            }
        }
    }
    else
    {
        for (int i = date->year + 1; i < DateYearNow; i++)
        {
            if (IsLeapYear(i) == 1)
            {
                days += 366;
            }
            else
            {
                days += 365;
            }
        }
        if (IsLeapYear(date->year) == 1)
        {
            for (int i = date->month + 1; i <= 12; i++)
            {
                days += DayInMonth2[i];
            }
            days += DayInMonth2[date->month] - date->day;
            if (IsLeapYear(DateYearNow) == 1)
            {
                for (int i = 1; i < DateMonthNow; i++)
                {
                    days += DayInMonth2[i];
                }
                days += DateDayNow;
            }
            else
            {
                for (int i = 1; i < DateMonthNow; i++)
                {
                    days += DayInMonth1[i];
                }
                days += DateDayNow;
            }
        }
        else
        {
            for (int i = date->month + 1; i <= 12; i++)
            {
                days += DayInMonth1[i];
            }
            days += DayInMonth1[date->month] - date->day;
            if (IsLeapYear(DateYearNow) == 1)
            {
                for (int i = 1; i < DateMonthNow; i++)
                {
                    days += DayInMonth2[i];
                }
                days += DateDayNow;
            }
            else
            {
                for (int i = 1; i < DateMonthNow; i++)
                {
                    days += DayInMonth1[i];
                }
                days += DateDayNow;
            }
        }
    }
    return days;
}

int main()
{
    int gap;
    int week;
    struct Date date;
    while (scanf("%d %d %d", &date.year, &date.month, &date.day) != EOF)
    {
        if (date.year == 0 && date.month == 0 && date.day == 0)
        {
            break;
        }
        gap = DateGap(&date);
        week = WeekNow - gap % 7;
        if (week < 1)
        {
            week = 7 - week;
        }
        printf("%d\n", week);
    }
    return 0;
}