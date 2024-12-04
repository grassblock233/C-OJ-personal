#include <stdio.h>
#define MAX(a, b, c) \
    printf("%.3lf", ((a >= b) && (a >= c)) ? a : ((b >= c) ? b : c))
void max(double a, double b, double c)
{
    double max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("%.3lf\n", max);
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    max(a, b, c);
    MAX(a, b, c);
}