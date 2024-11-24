#include <stdio.h>
int main()
{
    int n;
    int i1, i2, i3;
    int prime[200] = {0};
    int count, count_total_prime, count_repeat;
    int sum;
    count_total_prime = 0;
    /*Find prime numbers*/
    for (i1 = 3, i3 = 0; i1 < 200; i1++)
    {
        count = 0;
        for (i2 = 1; i2 <= i1; i2++)
        {
            if (i1 % i2 == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            prime[i3] = i1;
            i3++;
            count_total_prime++;
        }
    }

    while (scanf("%d", &n) != EOF && n != 0)
    {
        count = 0;

        if (n % 2 == 0)
        {
            printf("Error\n");
        }
        else
        {
            for (i1 = 0; i1 < count_total_prime; i1++)
            {
                for (i2 = i1; i2 < count_total_prime; i2++)
                {
                    for (i3 = i2; i3 < count_total_prime; i3++)
                    {
                        sum = prime[i1] + prime[i2] + prime[i3];
                        if (sum == n)
                        {
                            count++;
                        }
                        else if (sum > n)
                        {
                            break;
                        }
                    }
                }
            }
        }

        if (count == 0)
        {
            printf("Error\n");
        }
        else
        {
            printf("%d\n", count);
        }
    }
    return 0;
}