#include <stdio.h>

int prime(int n)
{
    int i;
    int flag = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int inv(int n)
{
    int count;
    int tmp_n;
    tmp_n = n;
    for (count = 1; tmp_n > 0; count = count * 10)
    {
        tmp_n = tmp_n / 10;
    }
    count = count / 10;
    for (tmp_n = 0; n > 0;)
    {
        tmp_n = tmp_n + n % 10 * count;
        n = n / 10;
        count = count / 10;
    }
    return tmp_n;
}

int main()
{
    int m, n;
    int i;
    int flag1, flag2;
    int line;
    line = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        flag1 = prime(i);
        flag2 = prime(inv(i));
        if (flag1 == 1 && flag2 == 1)
        {
            line++;
            printf("%5d", i);
            if (line == 10)
            {
                line = 0;
                printf("\n");
            }
        }
    }
    return 0;
}