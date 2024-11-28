#include <stdio.h>

void Multi(int a[][3], int b[][2], int c[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][n] += a[i][k] * b[k][n];
            }
        }
    }
}

int main()
{
    int a[2][3], b[3][2], c[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 3; n++)
        {
            scanf("%d", &a[i][n]);
        }
    }
    getchar();
    for (int i = 0; i < 3; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            scanf("%d", &b[i][n]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            c[i][n] = 0;
        }
    }
    Multi(a, b, c);
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("%d", c[i][n]);
            if (n != 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}