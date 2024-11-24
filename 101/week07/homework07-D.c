#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    int i, n; /*loop*/
    char str[1100];
    char outstr[1100];
    while (gets(str))
    {
        len = strlen(str);
        n = 0;
        for (i = 0; i < 1100; i++)
        {
            outstr[i] = '\0';
        }
        for (i = 0;;)
        {
            if (str[i] == '\0')
            {
                break;
            }
            if (str[i] == 'w' && str[i + 1] == 'e')
            {
                strcat(outstr, "you");
                i = i + 2;
                n = n + 3;
            }
            else
            {
                outstr[n] = str[i];
                n++;
                i++;
            }
        }
        puts(outstr);
    }
    return 0;
}