#include <stdio.h>
#include <string.h>
char trans(char str)
{
    if (str >= 'A' && str <= 'Z')
    {
        str = str + 32;
        return str;
    }
    else
    {
        return str;
    }
}

int main()
{
    char str[120];
    char test1, test2;
    int i, len;
    gets(str);
    len = strlen(str);
    for (i = 0; i < len;)
    {
        test1 = trans(str[i]);
        test2 = trans(str[i + 1]);
        if (test1 == 'i' && test2 == 's')
        {
            i = i + 2;
        }
        else
        {
            printf("%c", str[i]);
            i = i + 1;
        }
    }
    return 0;
}