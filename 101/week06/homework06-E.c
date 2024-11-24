#include <stdio.h>
#include <stdbool.h>
#define size 10000
int main()
{
    bool notprime[size];
    int prime[size];
    int count;
    int i, n;   /*loop*/
    int number; /*input*/
    bool flag;  /*control output format*/

    flag = true;
    count = 0;

    /*create a prime number table*/
    for (i = 0; i < size; i++)
    {
        notprime[i] = true;
    }
    notprime[0] = false;
    notprime[1] = false;
    for (i = 2; i < size; i++)
    {
        if (notprime[i] == true)
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
            notprime[prime[n] * i] = false;
            if (i % prime[n] == 0)
            {
                break;
            }
        }
    }

    /*input*/
    scanf("%d", &number);
    printf("%d=", number);
    /*output*/
    for (i = 0; i < count && number > 0;)
    {
        if (number % prime[i] == 0)
        {
            number = number / prime[i];
            if (flag == true)
            {
                printf("%d", prime[i]);
                flag = false;
            }
            else
            {
                printf("*%d", prime[i]);
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}