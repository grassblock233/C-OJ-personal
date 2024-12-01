/*高精度加法-Plus*/
/*还是AC不了QAQ*/

#include <stdio.h>
#include <string.h>

/*用于将str中数据录入fint和ffloat，并获取小数部分和整数部分数组长度*/
_Bool trans(char *str, int *fint, int *ffloat, int *lenint, int *lenfloat)
{
    _Bool Isfloat = 0; /*判断是否有小数部分*/
    int p = 0;
    *lenint = 0;
    *lenfloat = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (Isfloat == 0 && str[i] != '.')
        {
            fint[p] = str[i] - '0';
            p++;
        }
        else if (Isfloat == 1 && str[i] != '.')
        {
            ffloat[p] = str[i] - '0';
            p++;
        }
        else if (str[i] == '.')
        {
            *lenint = p;
            Isfloat = 1;
            p = 0;
        }
    }
    if (Isfloat == 1)
    {
        *lenfloat = p;
    }
    return Isfloat;
}

void upsetdown(int *a, int len)
{
    int swap;
    for (int i = 0; i < len / 2 - 1; i++)
    {
        swap = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = swap;
    }
}

void comparelen(int **min, int **max, int *a, int *b, int len_a, int len_b, int *maxlen, int *minlen)
{
    if (len_a >= len_b)
    {
        *min = b;
        *max = a;
        *minlen = len_b;
        *maxlen = len_a;
    }
    else
    {
        *min = a;
        *max = b;
        *minlen = len_a;
        *maxlen = len_b;
    }
}

/*加法计算int，关键在于进位*/
_Bool addint(int *sum, int *max, int *min, int *maxlen, int *minlen, _Bool flagfloat)
{
    _Bool flag = 0; /*是否要进位*/
    for (int i = 0; i < *minlen; i++)
    {
        sum[i] = max[i] + min[i];
        if (flagfloat == 1)
        {
            sum[i]++;
            flagfloat = 0;
        }
        if (flag == 1)
        {
            sum[i]++;
        }
        if (sum[i] > 9)
        {
            sum[i] = sum[i] % 10;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    for (int i = *minlen; i < *maxlen; i++)
    {
        sum[i] = max[i];
        if (flag == 1)
        {
            sum[i]++;
        }
        if (sum[i] > 9)
        {
            sum[i] = sum[i] % 10;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}

/*加法计算float*/
_Bool addfloat(int *sum, int *max, int *min, int *maxlen, int *minlen)
{
    _Bool flag = 0; /*是否要进位*/
    for (int i = 0; i < *maxlen; i++)
    {
        sum[i] = max[i] + min[i];
        if (flag == 1)
        {
            sum[i]++;
        }
        if (sum[i] > 9)
        {
            sum[i] = sum[i] % 10;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    _Bool Isfloat1, Isfloat2;   /*是否含小数部分*/
    _Bool flagint, flagfloat;   /*是否进位*/
    _Bool Iszero;               /*输出时省略0*/
    int lenint1, lenint2;       /*fint1,fint2的长度*/
    int lenfloat1, lenfloat2;   /*ffloat1,ffloat2的长度*/
    int maxlenint, maxlenfloat; /*最长的fint和最长的ffloat*/
    int minlenint, minlenfloat; /*最短的fint和最短的ffloat*/
    int fint1[500], fint2[500];
    int ffloat1[500], ffloat2[500];
    int sumfint[500], sumffloat[500]; /*fint之和,ffloat之和*/
    int *minint, *maxint;             /*指向最短和最长的fint*/
    int *minfloat, *maxfloat;         /*指向最短和最长的ffloat*/
    char str1[1000], str2[1000];      /*以字符串的格式输入*/
    while (scanf("%s %s", str1, str2) != EOF)
    {
        for (int i = 0; i < 500; i++)
        {
            ffloat1[i] = 0;
        }
        for (int i = 0; i < 500; i++)
        {
            ffloat2[i] = 0;
        }
        /*输入并判断是否有小数*/
        Isfloat1 = trans(str1, fint1, ffloat1, &lenint1, &lenfloat1);
        Isfloat2 = trans(str2, fint2, ffloat2, &lenint2, &lenfloat2);
        /*翻转int*/
        upsetdown(fint1, lenint1);
        upsetdown(fint2, lenint2);
        /*比较长度*/
        comparelen(&minint, &maxint, fint1, fint2, lenint1, lenint2, &maxlenint, &minlenint);
        comparelen(&minfloat, &maxfloat, ffloat1, ffloat2, lenfloat1, lenfloat2, &maxlenfloat, &minlenfloat);
        if (Isfloat1 == 1 || Isfloat2 == 1)
        {
            upsetdown(ffloat1, maxlenfloat);
            upsetdown(ffloat2, maxlenfloat);
        }
        /*加法计算*/
        flagfloat = addfloat(sumffloat, maxfloat, minfloat, &maxlenfloat, &minlenfloat);
        flagint = addint(sumfint, maxint, minint, &maxlenint, &minlenint, flagfloat);
        if (flagint == 1)
        {
            sumfint[maxlenint++] = 1;
        }
        /*输出*/
        Iszero = 0;
        for (int i = 0; i < maxlenint; i++)
        {
            printf("%d", sumfint[i]);
        }
        if (Isfloat1 == 1 || Isfloat2 == 1)
        {
            printf(".");
            for (int i = 0; i < maxlenfloat; i++)
            {
                printf("%d", sumffloat[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
