#include <stdio.h>

int n, x[1005], y[1005];
int flag;
int i;
int judge()
{
    flag = 0;
    for (i = 2; i <= n + 1; i++)
    {
        int ans = (x[i] - x[i - 2]) * (y[i - 1] - y[i - 2]) - (x[i - 1] - x[i - 2]) * (y[i] - y[i - 2]);
        if (ans > 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    return 0;
}
int main()
{
    int i;
    while (scanf("%d", &n))
    {
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }
        x[n] = x[0];
        y[n] = y[0];
        x[n + 1] = x[1];
        y[n + 1] = y[1];
        if (judge())
            printf("concave\n");
        else
            printf("convex\n");
    }
}