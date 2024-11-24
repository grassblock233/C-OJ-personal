#include <stdio.h>
int transform_min(int min, int hour)
{
    int sum;
    sum = min + hour * 60;
    return sum;
}

int main()
{
    int time1, time2;
    int time1_m, time2_m;
    int time_gap_h, time_gap_m;
    int tmp;
    while (scanf("%d %d", &time1, &time2) != EOF)
    {
        tmp = time1 % 100;
        time1 = time1 / 100;
        time1_m = transform_min(tmp, time1);
        tmp = time2 % 100;
        time2 = time2 / 100;
        time2_m = transform_min(tmp, time2);
        time_gap_m = (time2_m - time1_m)%60;
        time_gap_h = (time2_m - time1_m - time_gap_m)/60;
        printf("%d hrs %d mins\n",time_gap_h,time_gap_m);
    }
    return 0;
}