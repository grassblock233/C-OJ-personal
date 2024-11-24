#include <stdio.h>

void rank(int *number, int count)
{
    int i, n;
    int swap;
    for (i = count - 1; i > 0; i--)
    {
        for (n = 1; n <= i; n++)
        {
            if (*(number + n) < *(number + (n - 1)))
            {
                swap = *(number + (n - 1));
                *(number + (n - 1)) = *(number + n);
                *(number + n) = swap;
            }
        }
    }
}

int main()
{
    int count_ji, count_ou;
    int i, x, y;
    int number[200];
    int number_ji[100], number_ou[100];
    count_ji = 0;
    count_ou = 0;

    /*input and sort*/
    for (i = 0;; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] == 0)
        {
            break;
        }
        else
        {
            if (i % 2 == 0)
            {
                number_ou[count_ou] = number[i];
                count_ou++;
            }
            else
            {
                number_ji[count_ji] = number[i];
                count_ji++;
            }
        }
    }

    /*rank the numbers*/
    rank(number_ji, count_ji);
    rank(number_ou, count_ou);

    /*output*/
    x = 0;
    y = 0;
    for (i = 0; i < count_ji + count_ou; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", number_ou[x]);
            x++;
        }
        else
        {
            printf("%d", number_ji[y]);
            y++;
        }
        if (i == count_ji + count_ou - 1)
        {
            ;
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}