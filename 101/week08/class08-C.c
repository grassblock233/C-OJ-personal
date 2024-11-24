#include <stdio.h>
#include <string.h>
char findshort(char s1[], char s2[])
{
    int loc, min;
    int i, n;
    int count;
    char str[1000][100];
    count = 0;
    n = 0;
    for (i = 0;; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z' || s1[i] >= 'a' && s1[i] <= 'z')
        {
            str[count][n] = s1[i];
            n++;
        }
        else
        {
            if (s1[i] == '\0')
            {
                break;
            }
            else
            {
                if (s1[i + 1] >= 'A' && s1[i + 1] <= 'Z' || s1[i + 1] >= 'a' && s1[i + 1] <= 'z')
                {
                    n = 0;
                    count++;
                }
                else
                {
                    n = 0;
                }
            }
        }
    }
    min = strlen(str[0]);
    loc = 0;
    for (i = 1; i <= count; i++)
    {
        if (strlen(str[i]) < min)
        {
            min = strlen(str[i]);
            loc = i;
        }
    }
    strcpy(s2, str[loc]);
}

int main()
{
    int i;
    char s1[3000], s2[3000];
    for (i = 0; i < 3000; i++)
    {
        s1[i] = '\0';
        s2[i] = '\0';
    }
    gets(s1);
    findshort(s1, s2);
    puts(s2);
    return 0;
}