#include <stdio.h>
#include <string.h>
void move(char *str1, char *str2)
{
    int i, n;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (i = len1, n = 0; n < len2; i++, n++)
    {
        *(str1 + i) = *(str2 + n);
    }
}
void sort(char *str1)
{
    int len1 = strlen(str1);
    int i, n;
    char swap;
    for (n = len1 - 1; n > 0; n--)
    {
        for (i = 1; i <= n; i++)
        {
            if (*(str1 + i) < *(str1 + i - 1))
            {
                swap = *(str1 + i);
                *(str1 + i) = *(str1 + i - 1);
                *(str1 + i - 1) = swap;
            }
        }
    }
}

int main()
{
    char str1[10000];
    char str2[10000];
    scanf("%s", str1);
    scanf("%s", str2);
    move(str1, str2);
    sort(str1);
    puts(str1);
}