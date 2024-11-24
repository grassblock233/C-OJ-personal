#include <stdio.h>
#include <string.h>
int main()
{
    int count, temp, i, i1, i2;
    char str[25000];
    scanf("%s", &str);
    count = strlen(str);
    for (i1 = 0, i2 = count - 1; (i1 + 1) <= (count / 2); i1++, i2--)
    {
        temp = str[i1];
        str[i1] = str[i2];
        str[i2] = temp;
    }
    for (i = 0; i < count; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}