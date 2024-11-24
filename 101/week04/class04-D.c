#include <stdio.h>
int main()
{
    int a, b, min, max, i;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a <= b)
        {
            min = b;
            max = a;
        }
        else
        {
            min = a;
            max = b;
        }
        for (i = min;; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                printf("%d ", i);
                break;
            }
        }
        for (i = max;; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}