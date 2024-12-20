#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    int m, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &m, &a, &b, &c);
        if (a >= m)
        {
            if (b + c >= m)
            {
                printf("%d\n", 2 * m);
            }
            else
            {
                printf("%d\n", m + b + c);
            }
        }
        else
        {
            if (b >= m)
            {
                if (c >= m - a)
                {
                    printf("%d\n", 2 * m);
                }
                else
                {
                    printf("%d\n", a + c + m);
                }
            }
            else
            {
                if (c >= 2 * m - a - b)
                {
                    printf("%d\n", 2 * m);
                }
                else
                {
                    printf("%d\n", a + b + c);
                }
            }
        }
    }
}