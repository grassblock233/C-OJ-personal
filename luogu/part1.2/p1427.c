#include <stdio.h>
int main()
{
    int i;
    int number[105];
    int count;
    count = 0;
    for (i = 0;; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    for (i = count - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d", number[i]);
        }
        else
        {
            printf("%d ", number[i]);
        }
    }
    return 0;
}