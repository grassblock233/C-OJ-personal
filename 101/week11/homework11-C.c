/*这里使用暴力解法*/
#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    int p_str, p_fdstr;
    char str[50], fdstr[50];
    scanf("%s %s", str, fdstr);
    for (p_str = 0, p_fdstr = 0; p_str < strlen(str); p_str++)
    {
        if (str[p_str] == fdstr[p_fdstr])
        {
            p_fdstr++;
        }
        if (p_fdstr == strlen(fdstr))
        {
            p_fdstr = 0;
            count++;
        }
    }
    printf("%d", count);
}