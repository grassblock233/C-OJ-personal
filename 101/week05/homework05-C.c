#include <stdio.h>
int main()
{
    int m, m2, m3;
    int out_m;
    int i;
    int flag1, flag2, flag3;
    int count1, count2, count3;
    int number_m[10], number_m2[10], number_m3[10];
    scanf("%d", &m);
    m2 = m * m;
    m3 = m * m * m;
    out_m = m;
    flag1 = 1;
    flag2 = 1;
    flag3 = 1;
    for (i = 0, count1 = 0;; i++)
    {
        if (m > 0)
        {
            number_m[i] = m % 10;
            m = m / 10;
            count1++;
        }
        else
        {
            break;
        }
    }
    for (i = 0, count2 = 0;; i++)
    {
        if (m2 > 0)
        {
            number_m2[i] = m2 % 10;
            m2 = m2 / 10;
        }
        else
        {
            break;
        }
    }
    for (i = 0, count3 = 0;; i++)
    {
        if (m3 > 0)
        {
            number_m3[i] = m3 % 10;
            m3 = m3 / 10;
        }
        else
        {
            break;
        }
    }
    for (i = 0, count1--; (i + 1) < (count1 / 2); i++)
    {
        if (number_m[i] != number_m[count1 - i])
        {
            flag1 = 0;
        }
    }
    for (i = 0, count2--; (i + 1) < (count2 / 2); i++)
    {
        if (number_m2[i] != number_m2[count2 - i])
        {
            flag2 = 0;
        }
    }
    for (i = 0, count3--; (i + 1) < (count3 / 2); i++)
    {
        if (number_m3[i] != number_m3[count3 - i])
        {
            flag3 = 0;
        }
    }
    if (flag1 == 1 && flag2 == 1 && flag3 == 1)
    {
        printf("%d是三重回文数", out_m);
    }
    else
    {
        printf("%d不是三重回文数", out_m);
    }
    return 0;
}