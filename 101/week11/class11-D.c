#include <stdio.h>
#include <stdlib.h>

void Prime(int n, int m, int *num)
{
    /*create a prime number table*/
    _Bool *notp = malloc(sizeof(int) * m + 2);
    int *prime = malloc(sizeof(int) * m + 2);
    int i, k;
    int count = 0;
    if (notp == NULL)
    {
        return;
    }
    if (prime == NULL)
    {
        return;
    }
    for (i = 0; i < m + 1; i++)
    {
        notp[i] = 1;
    }
    notp[0] = 0;
    notp[1] = 0;
    for (i = 2; i < m + 1; i++)
    {
        if (notp[i] == 1)
        {
            prime[count] = i;
            count++;
        }
        for (k = 0; k < count; k++)
        {
            if (prime[k] * i > m + 1)
            {
                break;
            }
            notp[prime[k] * i] = 0;
            if (i % prime[k] == 0)
            {
                break;
            }
        }
    }
    /*find prime number*/
    for (i = 0; i < count; i++)
    {
        if (prime[i] >= n && prime[i] <= m)
        {
            printf("%d\n", prime[i]);
        }
    }
}

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int *num = malloc(sizeof(int) * (m - n + 10));
    if (num == NULL)
    {
        return -1;
    }
    Prime(n, m, num);
}