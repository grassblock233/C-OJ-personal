#include <stdio.h>
int IsSame(int a[], int b[], int n)
{
    int i;
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int count = 0;
    int flag;
    int i, m;
    int n;
    int start[1000], mid[1000], end[1000];
    scanf("%d", &n);
    for (i = 0; i < 2 * n; i++)
    {
        start[i] = i + 1;
        mid[i] = i + 1;
        end[i] = i + 1;
    }
    for (;;)
    {
        count++;
        for (i = 0; i < n; i++)
        {
            end[2 * i + 1] = mid[i];
        }
        for (i = n, m = 0; i < 2 * n; i++, m++)
        {
            end[2 * m] = mid[i];
        }
        for (i = 0; i < 2 * n; i++)
        {
            mid[i] = end[i];
        }
        flag = IsSame(start, mid, 2 * n);
        if (flag == 1)
        {
            break;
        }
    }
    printf("经%d次洗牌回到初始状态", count);
    return 0;
}