#include <stdio.h>

void input(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}

void trans(int *a)
{
    int swap;
    int minloc, maxloc;
    int min, max;
    min = a[0];
    max = a[0];
    minloc = 0;
    maxloc = 0;
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxloc = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minloc = i;
        }
    }
    /*swap*/
    if (maxloc == 0)
    {
        maxloc = minloc;
    }
    swap = a[minloc];
    a[minloc] = a[0];
    a[0] = swap;
    swap = a[maxloc];
    a[maxloc] = a[9];
    a[9] = swap;
}

void output(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[20];
    input(a);
    trans(a);
    output(a);
    return 0;
}