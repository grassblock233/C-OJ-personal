#include <stdio.h>

int StrCmp(char *p1, char *p2)
{
    for (; (*p1 == *p2) && (*p1 != '\0'); p1++, p2++)
    {
        ;
    }
    return *p1 - *p2;
}

int main()
{
    int n;
    char str1[500], str2[500];
    while (scanf("%d", &n) != EOF)
    {
        scanf("%s %s", str1, str2);
        printf("%d\n", StrCmp(str1, str2));
    }
}