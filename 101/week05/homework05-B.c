#include <stdio.h>
int main()
{
    char s[100], t[100];
    int pos;
    int i, x;
    scanf("%s", t);
    scanf("%s", s);
    scanf("%d", &pos);
    for (i = 0;; i++)
    {
        if (i + 1 <= pos)
        {
            printf("%c", s[i]);
        }
        else
        {
            break;
        }
    }
    for (x = 0;; x++)
    {
        if (t[x] == '\0')
        {
            break;
        }
        else
        {
            printf("%c", t[x]);
        }
    }
    for (;; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}