#include <stdio.h>
int factorsum(int number)
{
    int i;
    int sum;
    sum = 0;
    for (i = 1; i < number / 2 + 1; i++)
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
    int a, b;
    int sum_a, sum_b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        sum_a = factorsum(a);
        sum_b = factorsum(b);
        if (b == sum_a && a == sum_b)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}