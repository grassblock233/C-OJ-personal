#include <stdio.h>
#include <math.h>

struct TDate
{
    int year;
    int month;
    int day;
};

struct TTime
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct TDate tdate[2];
    struct TTime ttime[2];
    int listday1[20] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int listday2[20] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int time1 = 0;
    int time2 = 0;
    int time;
    _Bool flag_time = 0;
    _Bool flag_date = 0;
    _Bool flag = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d/%d/%d", &tdate[i].year, &tdate[i].month, &tdate[i].day);
        scanf("%d:%d;%d", &ttime[i].hour, &ttime[i].minute, &ttime[i].second);
    }

    /*time*/
    time1 = ttime[0].hour * 3600 + ttime[0].minute * 60 + ttime[0].second;
    time2 = ttime[1].hour * 3600 + ttime[1].minute * 60 + ttime[1].second;

    time = time1 - time2;
    if (time < 0)
    {
        flag_time = 1;
        time = abs(time);
    }

    if (tdate[0].year < tdate[1].year)
    {
        flag_date = 1;
    }
    else if (tdate[0].month > tdate[1].month)
    {
        flag_date = 1;
    }
    else if (tdate[0].day > tdate[1].day)
    {
        flag_date = 1;
    }

    if (flag_date == 1)
    {
        flag = 1;
    }
    else if (flag_time == 1)
    {
        flag = 1;
    }

    if (flag == 1)
    {
        printf("-");
    }
    printf("%d", abs(tdate[0].year - tdate[1].year));
}