#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

typedef struct Date *list;

int days(list date)
{
    int listday2[20] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int listday1[20] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = 0;
    _Bool flag;
    if ((date->year % 4 == 0 && date->year % 100 != 0) || (date->year % 400 == 0))
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    if (flag == 1)
    {
        for (int i = 0; i < date->month - 1; i++)
        {
            count += listday1[i];
        }
        count += date->day;
    }
    else
    {
        for (int i = 0; i < date->month - 1; i++)
        {
            count += listday2[i];
        }
        count += date->day;
    }
    return count;
}

int main()
{
    struct Date date;
    scanf("%d.%d.%d", &date.year, &date.month, &date.day);
    printf("%d", days(&date));
}