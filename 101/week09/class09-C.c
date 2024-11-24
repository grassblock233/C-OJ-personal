#include <stdio.h>
#include <string.h>

int trans(char v)
{
    int n;
    n = v - 'a';
    return n;
}

int main()
{
    char name[2][1000];
    int len1, len2;
    int sum1, sum2, sum;
    int i;
    int count;
    while (scanf("%s %s", name[0], name[1]) != EOF)
    {
        if (strcmp("0", name[0]) == 0 && strcmp("0", name[1]) == 0)
        {
            return 0;
        }
        sum1 = 0;
        sum2 = 0;
        sum = 0;
        count = 1;
        len1 = strlen(name[0]);
        len2 = strlen(name[1]);
        for (i = len1 - 1; i >= 0; i--)
        {
            sum1 = sum1 + trans(name[0][i]) * count;
            count = count * 26;
        }
        count = 1;
        for (i = len2 - 1; i >= 0; i--)
        {
            sum2 = sum2 + trans(name[1][i]) * count;
            count = count * 26;
        }
        sum = sum1 + sum2;
        if (sum % 2 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}