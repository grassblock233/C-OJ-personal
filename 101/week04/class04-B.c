#include <stdio.h>
int find(int number)
{
    int i, sum;
    for (i = 1, sum = 0; i < number; i++)
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
    int a, b, line, i;
    int sum1, sum2, number;
    while (scanf("%d", &line) != EOF)
    {
        for (i = 1; i <= line; i++)
        {
            scanf("%d %d", &a, &b);
            sum1 = find(a);
            sum2 = find(b);
            if (sum1 == b && sum2 == a)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}