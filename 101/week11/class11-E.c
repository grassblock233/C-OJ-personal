#include <stdio.h>
#include <stdlib.h>

int strcmp(char *p1, char *p2)
{
    int out;
    int i;
    int len1, len2;
    _Bool flag = 0;
    len1 = 0;
    len2 = 0;
    for (i = 0; p1[i] != '\0'; i++)
    {
        len1++;
    }
    for (i = 0; p2[i] != '\0'; i++)
    {
        len2++;
    }
    for (i = 0;; i++)
    {
        if (p1[i] == '\0' || p2[i] == '\0')
        {
            break;
        }
        else
        {
            if (p1[i] == p2[i])
            {
                continue;
            }
            else
            {
                flag = 1;
                out = p1[i] - p2[i];
                break;
            }
        }
    }
    if (flag == 0 && len1 == len2)
    {
        out = 0;
    }
    return out;
}

int main()
{
    int n;
    char str1[200], str2[200];
    while (scanf("%d", &n) != EOF)
    {
        scanf("%s", str1);
        scanf("%s", str2);
        printf("%d\n", strcmp(str1, str2));
    }
}