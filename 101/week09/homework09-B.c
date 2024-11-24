#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x[4], y[4];
    int i;
    int a, b, c, d;
    bool flag[2];
    while (scanf("%d %d", &x[0], &y[0]) != EOF)
    {
        flag[0] = false;
        flag[1] = false;
        for (i = 1; i < 4; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }
        c = (x[3] - x[0]) * (y[1] - y[0]);
        d = (x[1] - x[0]) * (y[3] - y[0]);
        if (c == d)
        {
            printf("Yes\n");
        }
        else
        {
            if (x[0] == x[1])
            {
                flag[0] = true;
            }
            if (x[2] == x[3])
            {
                flag[1] = true;
            }
            if (flag[0] == true && flag[1] == true)
            {
                printf("No\n");
                continue;
            }
            else if ((flag[0] == true && flag[1] == false) || (flag[0] == false && flag[1] == true))
            {
                printf("Yes\n");
                continue;
            }
            else
            {
                a = (x[1] - x[0]) * (y[1] - y[0]);
                b = (x[3] - x[2]) * (y[3] - y[2]);
                if (a == b)
                {
                    printf("No\n");
                }
                else
                {
                    printf("Yes\n");
                }
            }
        }
    }
}