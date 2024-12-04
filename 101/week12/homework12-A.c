#include <stdio.h>
#include <string.h>

_Bool copystr(int index, char *str1, char *str2)
{
    int p = 0;
    int len = strlen(str1);
    if (index > len)
    {
        return 0;
    }
    for (int i = index - 1; i < len; i++)
    {
        str2[p] = str1[i];
        p++;
    }
}

int main()
{
    char str1[150], str2[150];
    int index;
    gets(str1);
    scanf("%d", &index);
    copystr(index, str1, str2);
    puts(str2);
}