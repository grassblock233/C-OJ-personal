#include <stdio.h>
int factorsum(int number)
{
    int i;
    int sum;
    sum = 0;
    for (i = 1; i <= number / 2 + 1; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int i;
    int a, b;
    int min, max;
    int count;
    int number[10000];
    count = 0;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    if (min == 1)
    {
        min++;
    }
    for (i = min; i <= max; i++)
    {
        if (factorsum(i) == i)
        {
            number[count] = i;
            count++;
        }
    }
    for (i = 0; i < count; i++)
    {
        if (i == count - 1)
        {
            printf("%d", number[i]);
        }
        else
        {
            printf("%d ", number[i]);
        }
    }
    return 0;
}