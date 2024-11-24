#include <stdio.h>
int main()
{
    int x, y;         /*loop,locate*/
    int m;            /*size*/
    int a[10][10];    /*square input*/
    double b[10][10]; /*square output*/
    scanf("%d", &m);
    /*input*/
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < m; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < m; y++)
        {
            b[x][y] = a[x][y] / (double)a[x][x];
        }
    }
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < m; y++)
        {
            if (y == m - 1)
            {
                printf("%.2f\n", b[x][y]);
            }
            else
            {
                printf("%.2f ", b[x][y]);
            }
        }
    }
    return 0;
}