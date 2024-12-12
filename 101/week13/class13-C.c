#include <stdio.h>
#include <stdlib.h>

void trans(int *a, int m, int n)
{
    int p = 0;
    int *ans = malloc(sizeof(int) * n + 10);
    if (ans == NULL)
    {
        return;
    }
    for (int i = n - m; i < n; i++)
    {
        ans[p] = a[i];
        p++;
    }
    for (int i = 0; i < n - m; i++)
    {
        ans[p] = a[i];
        p++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = ans[i];
    }
}

int main()
{
    int n, m;
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n + 10);
    if (a == NULL)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    trans(a, m, n);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}