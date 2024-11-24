#include <stdio.h>
#include <stdbool.h>
bool notp[65540];
int prime[10000];

int main()
{
    int a, b; /*input*/
    int min, max;
    int i, n, m, x, y;
    int sum;   /*sum prime*/
    int count; /*to write prime number*/
    count = 0;
    prime[0] = false;
    prime[1] = false;
    /*create prime number table*/
    for (i = 2; i < 65540; i++)
    {
        notp[i] = true;
    }
    for (i = 2; i < 65540; i++)
    {
        if (notp[i] == true)
        {
            prime[count] = i;
            count++;
        }
        for (n = 0; n <= count; n++)
        {
            if (prime[n] * i > 65540)
            {
                break;
            }
            notp[i * prime[n]] = false;
            if (i % prime[n] == 0)
            {
                break;
            }
        }
    }
    while (scanf("%d %d", &a, &b) != EOF)
    {
        /*find min and max*/
        if (a <= b)
        {
            min = a;
            max = b;
        }
        else
        {
            min = b;
            max = a;
        }
        /*sum prime*/
        sum = 0;
        for (x = 0;; x++)
        {
            if (prime[x] > min)
            {
                break;
            }
        }
        for (y = 0;; y++)
        {
            if (prime[y] >= max)
            {
                y--;
                break;
            }
        }
        for (m = x; m <= y; m++)
        {
            sum = sum + prime[m];
        }
        printf("%d\n", sum);
    }
    return 0;
}