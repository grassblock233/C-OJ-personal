#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    int flag;
    int count = 0;
    char repeat[120], str[120];
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        flag = 1;
        for (n = 0; n <= strlen(repeat); n++)
        {
            if (repeat[n] == str[i])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            repeat[count] = str[i];
            count++;
            printf("%c", str[i]);
        }
    }
    return 0;
}