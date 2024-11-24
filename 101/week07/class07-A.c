#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][120];
    char swap[120];
    int i, n;
    int flag;
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    for (n = 4; n > 0; n--)
    {
        for (i = 1; i <= n; i++)
        {
            flag = strcmp(str[i], str[i - 1]);
            if (flag > 0)
            {
                strcpy(swap, str[i - 1]);
                strcpy(str[i - 1], str[i]);
                strcpy(str[i], swap);
            }
        }
    }
    strcpy(swap, str[0]);
    strcpy(str[0], str[4]);
    strcpy(str[4], swap);
    for (i = 0; i < 5; i++)
    {
        puts(str[i]);
    }
    return 0;
}