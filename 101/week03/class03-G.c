#include <stdio.h>
int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int time1, time2;
    int out, out_s, out_m, out_h;
    while (scanf("%d:%d:%d\n%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2) != EOF)
    {
        time1 = s1 + m1 * 60 + h1 * 3600;
        time2 = s2 + m2 * 60 + h2 * 3600;
        if (time1 >= time2)
        {
            out = time1 - time2;
        }
        else
        {
            out = time2 - time1;
        }
        out_h = out / 3600;
        out_m = out / 60 - out_h * 60;
        out_s = out - out_m * 60 - out_h * 3600;
        printf("%d:", out_h);
        if (out_m >= 0 && out_m <= 9)
        {
            printf("0%d:", out_m);
        }
        else
        {
            printf("%d:", out_m);
        }
        if (out_s >= 0 && out_s <= 9)
        {
            printf("0%d\n", out_s);
        }
        else
        {
            printf("%d\n", out_s);
        }
    }
    return 0;
}