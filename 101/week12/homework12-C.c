#include <stdio.h>

int len(char *str)
{
    int length = 0;
    for (int i = 0;; i++)
    {
        if (str[i] == '\0')
        {
            break;
        }
        length++;
    }
    return length;
}
int main()
{
    char str1[1000], str2[1000];
    scanf("%s %s", str1, str2);
    for (int i = len(str1) - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    for (int i = len(str2) - 1; i >= 0; i--)
    {
        printf("%c", str2[i]);
    }
}