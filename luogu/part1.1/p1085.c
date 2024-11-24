#include <stdio.h>
int main()
{
    int i, time1, time2, count, max;
    int sum[7];
    int judge[7];
    count = 0;
    for (i = 0; i < 7; i++)
    {
        judge[i] = -1;
        scanf("%d %d", &time1, &time2);
        sum[i] = time1 + time2;
        if (sum[i] > 8)
        {
            count++;
            judge[i] = sum[i];
        }
    }
    if (count == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        max = judge[0];
        for (i = 1; i < 7; i++)
        {
            if (max <= judge[i])
            {
                max = judge[i];
            }
        }
        for (i = 0; i < 7; i++)
        {
            if (judge[i]==max)
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }
}