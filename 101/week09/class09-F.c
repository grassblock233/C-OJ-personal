#include <stdio.h>
#include <stdbool.h>
#define size 500

int main()
{
    int count = 0;   /*create prime number table*/
    bool notp[size]; /*create prime number table*/
    int prime[size]; /*create prime number table*/
    int n;           /*input*/
    int i, k;        /*loop*/
    int a, b, ans;   /*to extra prime number*/
    int temp;        /*copy input number*/
    int sum;         /*zhishu count*/
    /*create prime number table*/
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
        for (k = 0; k < count; k++)
        {
            if (prime[k] * i > size)
            {
                break;
            }
            notp[prime[k] * i] = false;
            if (i % prime[k] == 0)
            {
                break;
            }
        }
    }

    while (scanf("%d", &n) != EOF)
    {
        printf("%d!=", n);
        /*cu part*/
        for (a = 0; a < count; a++)
        {
            sum = 0;
            temp = n;
            b = prime[a];
            for (;;)
            {
                ans = temp / b;
                b *= prime[a];
                if (ans != 0)
                {
                    sum = sum + ans;
                }
                else
                {
                    break;
                }
            }
            if (sum == 0)
            {
                break;
            }
            else
            {
                printf(" %d", sum);
            }
        }
        printf("\n");
    }
    return 0;
}