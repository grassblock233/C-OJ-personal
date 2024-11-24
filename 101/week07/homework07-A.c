#include <stdio.h>
#include <string.h>
int main()
{
    char str_1[120];
    char str_2[120];
    int i;
    int count;
    count = 0;
    gets(str_1);
    for (i = 0; i < strlen(str_1); i++)
    {
        if (str_1[i] == 'a' || str_1[i] == 'e' || str_1[i] == 'i' || str_1[i] == 'o' || str_1[i] == 'u')
        {
            str_2[count] = str_1[i];
            count++;
        }
    }
    for (i = 0; i < strlen(str_2); i++)
    {
        printf("%c", str_2[i]);
    }
    return 0;
}