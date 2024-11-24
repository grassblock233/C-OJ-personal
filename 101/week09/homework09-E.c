#include <stdio.h>
#include <stdbool.h>
#define size 10000
int main()
{
    int min, max;
    int notp[size];
    int prime[size];
    int count = 0;
    int i, n; /*loop*/
    /*create a prime number table*/
    for (i = 0; i < size; i++)
    {
        notp[i] = true;
        prime[i] = 0;
    }
    notp[0] = false;
    notp[1] = false;
    for (i = 2; i < size; i++)
    {
        if (notp[i] == true)
        {
            prime[count] = i;
            count++;
        }
        for (n = 0; n < count; n++)
        {
            if (prime[n] * i > size)
            {
                break;
            }
            notp[prime[n] * i] = false;
            if (i % prime[n] == 0)
            {
                break;
            }
        }
    }

    /*find prime numbers*/
    scanf("%d %d", &min, &max);
    for (i = 0;; i++)
    {
        if (prime[i] < min)
        {
            continue;
        }
        else if (prime[i] > max)
        {
            break;
        }
        else if (prime[i + 1] - prime[i] == 2)
        {
            printf("%d %d\n", prime[i], prime[i + 1]);
        }
    }
    return 0;
}