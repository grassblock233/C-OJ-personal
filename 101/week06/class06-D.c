#include <stdio.h>
int main()
{
    int i, m; /*control "for"*/
    int n;    /*total count*/
    int temp; /*to exchange*/
    int nagetive_count;
    int zero_count;
    int try;
    int total; /*to output*/
    int number[200] = {0};
    while (scanf("%d", &n) != EOF)
    {
        /*initialization part*/
        nagetive_count = 0;
        try = 1;
        zero_count = 0;
        total = 1;
        /*input part*/
        for (i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
            if (number[i] < 0)
            {
                nagetive_count++;
            }
            else if (number[i] == 0)
            {
                number[i] = 1;
                zero_count++;
            }
        }
        /*bubble sort*/
        for (m = n; m > 0; m--)
        {
            for (i = 1; i < m; i++)
            {
                if (number[i - 1] > number[i])
                {
                    temp = number[i - 1];
                    number[i - 1] = number[i];
                    number[i] = temp;
                }
            }
        }
        /*output part*/
        if (nagetive_count > 0)
        {
            for (i = 0; i < nagetive_count; i++)
            {
                total = total * number[i];
            }
            if (total < 0)
            {
                total = total / number[nagetive_count - 1];
            }
            for (i = n - 1; i >= nagetive_count; i--)
            {
                total = total * number[i];
            }
        }
        else
        {
            if (zero_count == n)
            {
                total = 0;
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    total = total * number[i];
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}