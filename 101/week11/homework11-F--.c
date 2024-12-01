#include <stdio.h>
#include <string.h>

int trans(char str)
{
    return ((int)str - '0');
}

int main()
{
    _Bool Iszero;
    _Bool flag;
    char str1[500], str2[500];
    int *a, *b; /*min_length--b*/
    char *min, *max;
    int p;
    int count;
    int fint1, fint2;
    int ffloat1[500], ffloat2[500];
    int sum[500], sum2;
    while (scanf("%d.%s %d.%s", &fint1, str1, &fint2, str2) != EOF)
    {
        /*init*/
        /*trans*/
        p = 0;
        for (int i = 0; i < strlen(str1); i++)
        {
            ffloat1[p] = trans(str1[i]);
            p++;
        }
        p = 0;
        for (int i = 0; i < strlen(str2); i++)
        {
            ffloat2[p] = trans(str2[i]);
            p++;
        }
        /*compare length*/
        if (strlen(str1) >= strlen(str2))
        {
            a = ffloat1;
            b = ffloat2;
            max = str1;
            min = str2;
        }
        else
        {
            a = ffloat2;
            b = ffloat1;
            max = str2;
            min = str1;
        }
        /*add ffloat part*/
        p = strlen(max) - 1;
        flag = 0;
        for (int i = p; i >= strlen(min); i--)
        {
            sum[i] = a[i];
        }
        for (int i = strlen(max) - 1; i >= 0; i--)
        {
            sum[i] = a[i] + b[i];
            if (flag == 1)
            {
                sum[i]++;
            }
            if (sum[i] == 10)
            {
                sum[i] = 0;
                flag = 1;
            }
            else if (sum[i] > 10)
            {
                sum[i] /= 10;
                flag = 1;
            }
        }
        /*add fint part*/
        sum2 = fint1 + fint2;
        if (flag == 1)
        {
            sum2++;
        }
        /*output part*/
        Iszero = 0;
        count = 0;
        for (int i = strlen(max) - 1; i >= 0; i--)
        {
            if (sum[i] != 0 && Iszero == 0)
            {
                Iszero = 1;
                count++;
                continue;
            }
            if (Iszero == 1)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d", sum2);
        }
        else
        {
            printf("%d", sum2);
            printf(".");
            for (int i = 0; i < strlen(max); i++)
            {
                if (sum[i] != 0 && Iszero == 0)
                {
                    Iszero = 1;
                    printf("%d", sum[i]);
                }
                else
                {
                    printf("%d", sum[i]);
                }
            }
        }
        printf("\n");
    }
}