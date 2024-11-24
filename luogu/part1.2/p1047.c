#include <stdio.h>
int main()
{
    int road[10005] = {0};
    int l, m;
    int i, n; /*loop*/
    int start, end;
    int count;
    count = 0;
    scanf("%d %d", &l, &m);
    for (i = 0; i <= l; i++)
    {
        road[i] = 1;
    }
    for (n = 1; n <= m; n++)
    {
        scanf("%d %d", &start, &end);
        for (i = start; i <= end; i++)
        {
            road[i] = 0;
        }
    }
    for (i = 0; i <= l; i++)
    {
        if (road[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}