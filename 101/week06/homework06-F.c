#include <stdio.h>
char trans(int number)
{
    char str[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    number = number % 10;
    return str[number];
}

int abs(int number)
{
    if (number <= 0)
    {
        number = 0 - number;
        return number;
    }
    else
    {
        return number;
    }
}

int main()
{
    int n, f; /*input*/
    int tmp;
    int sum; /*output*/
    int count;
    int a[1000];
    int i; /*loop*/
    while (scanf("%d %d", &n, &f) != EOF)
    {
        sum = 0;
        tmp = abs(n); /*n<0*/
        count = 0;

        /*n=0*/
        if (n == 0)
        {
            printf("0\n");
        }
        /*n<0*/
        if (n < 0)
        {
            printf("-");
        }

        for (i = 0; tmp > 0; i++)
        {
            a[i] = tmp % f;
            tmp = tmp / f;
            count++;
        }
        for (i = count - 1; i >= 0; i--)
        {
            if (a[i] >= 0 && a[i] <= 9)
            {
                printf("%d", a[i]);
            }
            else
            {
                printf("%c", trans(a[i]));
            }
            if (i == 0)
            {
                printf("\n");
            }
        }
    }
}