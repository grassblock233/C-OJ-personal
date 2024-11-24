#include <stdio.h>
#include <stdbool.h>
#define size 10000

int num(int m, int k, int xx[])
{
    int ctp;
    int notp[size];
    int prime[size];
    int i, n, x;
    int count;
    count = 0;
    x = 0;
    /*create a prime number table*/
    for (i = 0; i < size; i++)
    {
        notp[i] = true;
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
    for (i = m + 1, ctp = 0; ctp <= k; i++)
    {
        for (n = 0; n < count; n++)
        {
            if (i == prime[n])
            {
                xx[x] = i;
                x++;
                ctp++;
                break;
            }
        }
    }
}

int main()
{
    int i;
    int m, k;
    int xx[5000];
    scanf("%d %d", &m, &k);
    num(m, k, xx);
    for (i = 0; i < k; i++)
    {
        printf("%d\n", xx[i]);
    }
    return 0;
}