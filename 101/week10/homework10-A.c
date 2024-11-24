#include <stdio.h>
int main()
{
    int f[10000], g[10000];
    int i, k;  /*loop*/
    int m, n;  /*input*/
    int count; /*count same*/
    count = 0;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &g[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
    for (i = 0, k = 0; i < n && k < m;)
    {
        if (*(f + i) == *(g + k))
        {
            i++;
            k++;
            count++;
        }
        else
        {
            if (*(g + k) < *(f + i))
            {
                k++;
            }
            else
            {
                i++;
            }
        }
    }
    printf("%d", count);
    return 0;
}