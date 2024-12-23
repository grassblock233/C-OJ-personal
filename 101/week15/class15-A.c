#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int m, n;
    int *f, *g;
    int p = 0, q = 0;
    scanf("%d %d", &m, &n);
    f = malloc(sizeof(int) * m + sizeof(int) * 10);
    g = malloc(sizeof(int) * n + sizeof(int) * 10);
    if (f == NULL)
        return -1;
    if (g == NULL)
        return -1;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &f[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &g[i]);
    }
    for (; p < m && q < n;)
    {
        if (f[p] <= g[q])
        {
            p++;
            count += q;
        }
        else
        {
            if (q + 1 == n)
            {
                p++;
                count += q + 1;
            }
            else
            {
                q++;
            }
        }
    }
    printf("%d", count);
}