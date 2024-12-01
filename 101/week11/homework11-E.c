#include <stdio.h>
#include <string.h>

int main()
{
    int p;
    char str1[200], str2[200];
    while (scanf("%s", str1) != EOF)
    {
    	p = 0;
        for (int i = 0; i < 200; i++)
        {
            str2[i] = '\0';
        }
        for (int i = strlen(str1) - 1; i >= 0; i--)
        {
            str2[p] = str1[i];
            p++;
        }
        if (strcmp(str1, str2) == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}