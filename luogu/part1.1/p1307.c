#include <stdio.h>
int main()
{
    int count, number, su[10], i;
    scanf("%d", &number);
    if (number < 0)
    {
        number = 0 - number;
        printf("-");
    }
    if (number == 0)
    {
        printf("0");
        return 0;
    }
    for (i = 0, count = 0; number > 0; i++, count++)
    {
        su[i] = number % 10;
        number = number / 10;
    }
    for (i = 0; i < count; i++)
    {
        if (su[i] != 0)
        {
            break;
        }
    }
    for (; i < count; i++)
    {
        printf("%d", su[i]);
    }
    return 0;
}