#include <stdio.h>

int main()
{
    int swap;
    int t;
    int n;
    int a[50], b[50];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            scanf("%d %d", &a[k], &b[k]);
        }
        /*sort*/
        for (int k = n - 1; k >= 0; k--)
        {
            for (int m = 1; m <= k; m++)
            {
                if (a[m] < a[m - 1])
                {
                    swap = a[m];
                    a[m] = a[m - 1];
                    a[m - 1] = swap;
                    swap = b[m];
                    b[m] = b[m - 1];
                    b[m - 1] = swap;
                }
            }
        }
        for (int k = 0; k < n; k++)
        {
            for (int m = 0; m < b[k]; m++)
            {
                printf(">+");
                for (int j = 0; j < a[k] - 2; j++)
                {
                    printf("-");
                }
                printf("+>\n");
            }
            printf("\n");
        }
    }
    return 0;
}