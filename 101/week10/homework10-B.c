#include <stdio.h>
int find(int n)
{
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int temp;
    int max;  /*count max*/
    int swap; /*to sort*/
    int i, k; /*loop*/
    int n;    /*input count*/
    int loc;  /*to output*/
    int number[500];
    while (scanf("%d", &n) != EOF)
    {
        /*input*/
        for (i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
        }
        /*sort*/
        for (i = n - 1; i > 0; i--)
        {
            for (k = 1; k <= i; k++)
            {
                if (number[k] < number[k - 1])
                {
                    swap = number[k];
                    number[k] = number[k - 1];
                    number[k - 1] = swap;
                }
            }
        }
        loc = 0;
        max = find(number[0]);
        for (i = 1; i < n; i++)
        {
            temp = find(number[i]);
            if (temp > max)
            {
                max = temp;
                loc = i;
            }
        }
        printf("%d\n", number[loc]);
    }
}
