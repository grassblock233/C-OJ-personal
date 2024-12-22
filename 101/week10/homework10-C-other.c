#include <stdio.h>
int main()
{
    int i, a;
    char str[1010];
    while (gets(str))
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] == 's' || str[i] == 'S') && (str[i + 1] == 'a' || str[i + 1] == 'A') && (str[i + 2] == 'l' || str[i + 2] == 'L') && (str[i + 3] == 't' || str[i + 3] == 'T'))
            {
                printf("%s\n", str);
                break;
            }
        }
    }
    return 0;
}