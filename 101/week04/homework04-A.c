#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int i = 0;
    int count;
    char del;
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i - 1] != '\n');
    del = getchar();
    for (count=0;count<i;count++)
    {
        if (str[count]!=del)
        {
            printf("%c",str[count]);
        }
    }
    return 0;
}