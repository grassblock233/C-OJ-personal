#include <stdio.h>
#define PI 3.1415926535
int main()
{
    int r, rr, v1, v2;
    double t1, t2;
    while (scanf("%d %d %d", &r, &v1, &v2) != EOF)
    {
        rr = (double)(v1 * r) / v2;
        t1 = (double)(r - rr) / v1;
        t2 = (double)r * PI / v2;
        if (t2 > t1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}