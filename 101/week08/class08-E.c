#include <stdio.h>
#include <string.h>
char n1[10000], n2[10000];
int shu[2][10000], sum[20000];

int main()
{
    int count;         /*record sum[] count*/
    int swap;          /*swap to output*/
    int flag;          /*whether to plus one*/
    int i, n, m, x, y; /*loop*/
    int line;          /*how many number groups next*/
    int len[2];        /*length of the string*/
    scanf("%d", &line);
    for (i = 0; i < line; i++)
    {
        for (x = 0; x < 2; x++)
        {
            for (y = 0; y < 10000; y++)
            {
                shu[x][y] = 0;
            }
        }
        for (x = 0; x < 20000; x++)
        {
            sum[x] = 0;
        }
        scanf("%s %s", n1, n2);
        len[0] = strlen(n1);
        len[1] = strlen(n2);
        /*transform string_number to int_number*/
        for (n = 0; n < len[0]; n++)
        {
            shu[0][n] = n1[n] - '0';
        }
        for (n = 0; n < len[1]; n++)
        {
            shu[1][n] = n2[n] - '0';
        }
        /*swap shu[0]*/
        for (n = 0; n < len[0] / 2; n++)
        {
            swap = shu[0][n];
            shu[0][n] = shu[0][len[0] - 1 - n];
            shu[0][len[0] - 1 - n] = swap;
        }
        /*swap shu[1]*/
        for (n = 0; n < len[1] / 2; n++)
        {
            swap = shu[1][n];
            shu[1][n] = shu[1][len[1] - 1 - n];
            shu[1][len[1] - 1 - n] = swap;
        }
        /*add part*/
        n = 0;
        flag = 0;
        for (x = 0, y = 0; x < len[0] || y < len[1]; x++, y++)
        {
            sum[n] = shu[0][x] + shu[1][y];
            if (flag == 1)
            {
                sum[n]++;
                flag = 0;
            }
            if (sum[n] >= 10)
            {
                sum[n] = sum[n] % 10;
                flag = 1;
            }
            n++;
        }
        /**/
        if (flag == 1)
        {
            sum[n]++;
            n++;
        }
        /*swap sum[]*/
        for (m = 0; m < n / 2; m++)
        {
            swap = sum[m];
            sum[m] = sum[n - 1 - m];
            sum[n - 1 - m] = swap;
        }
        /*output the data*/
        for (m = 0; m < n; m++)
        {
            printf("%d", sum[m]);
        }
        printf("\n");
        if (i == line - 1)
        {
            return 0;
        }
    }
}