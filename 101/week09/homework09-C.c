#include <stdio.h>
int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
}

int main()
{
    int i;
    int number[4];
    for (i = 0; i < 4; i++)
    {
        number[i] = getchar() - '0';
    }
    for (i = 0; i < 4; i++)
    {
        number[i] = (number[i] + 5) % 10;
    }
    swap(&number[0], &number[3]);
    swap(&number[1], &number[2]);
    for (i = 0; i < 4; i++)
    {
        printf("%d", number[i]);
    }
    return 0;
}