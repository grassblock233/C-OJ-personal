#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > x2)
            {
                printf("%.2lf %.2lf\n", x1, x2);
            }
            else
            {
                printf("%.2lf %.2lf\n", x2, x1);
            }
        }
    }
}