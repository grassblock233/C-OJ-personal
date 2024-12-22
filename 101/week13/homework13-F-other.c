#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a, b;
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d", &a, &b);
        }
        printf("%d\n", n - m);
    }
}