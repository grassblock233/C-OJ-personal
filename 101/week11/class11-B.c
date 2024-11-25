#include <stdio.h>
#include <stdlib.h>

int sort(int *number)
{
    int i, k;
    int swap;
    for (i = 9; i > 0; i--)
    {
        for (k = 1; k <= i; k++)
        {
            if (*(number + k) > *(number + k - 1))
            {
                swap = *(number + k);
                *(number + k) = *(number + k - 1);
                *(number + k - 1) = swap;
            }
        }
    }
}

int main()
{
    int i;
    int *number = malloc(sizeof(int) * 20);
    if (number == NULL)
    {
        return -1;
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", (number + i));
    }
    sort(number);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *(number + i));
    }
}