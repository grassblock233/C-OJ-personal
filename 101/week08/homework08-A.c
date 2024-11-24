#include <stdio.h>

int main()
{
    int flag;
    int sum;
    int m, d;
    int BadDay[13][32];
    int i, n;
    int count = 1;
    int x = 0;
    for (i = 1; i <= 12; i++)
    {
        for (n = 1; n <= 31; n++)
        {
            BadDay[i][n] = 0;
        }
    }
    /*计算停电日期*/
    for (n = 7; n <= 8; n++)
    {
        for (i = 1; i <= 31; i++)
        {
            x++;
            if (x == count)
            {
                BadDay[n][i] = 1;
                count++;
                x = 0;
            }
        }
    }
    while (scanf("%d/%d", &m, &d) != EOF)
    {
        sum = 0;
        flag = 0;
        if (m == 0 && d == 0)
        {
            return 0;
        }
        if (m <= 8)
        {
            if (m < 7)
            {
                m = 7;
                d = 1;
            }
            for (n = m; n <= 8; n++)
            {
                if (flag == 0)
                {
                    i = d;
                }
                else
                {
                    i = 1;
                }
                for (; i <= 31; i++)
                {
                    if (BadDay[n][i] == 1)
                    {
                        sum++;
                    }
                }
                flag = 1;
            }
        }
        else
        {
            printf("0\n");
        }
        printf("%d\n", sum);
    }
    return 0;
}