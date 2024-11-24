#include <stdio.h>
int main()
{
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int i, n, m;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] < n)
        {
            printf("%d\n", a[i]);
        }
        else
        {
            break;
        }
    }
    if (i == 10)
    {
        a[10] = n;
        printf("%d", n);
    }
    else
    {
        for (m = 10; m > i; m--)
        {
            a[m] = a[m - 1];
        }
        a[i] = n;
        for (; i < 11; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}