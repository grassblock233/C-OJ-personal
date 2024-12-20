#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void init(char *str)
{
    for (int i = 0; i < 500; i++)
    {
        str[i] = '\0';
    }
}

void trans(char *str_in, char *str_out)
{
    int p = 0;
    int len = strlen(str_in);
    for (int i = len - 1; i >= 0; i--)
    {
        if (str_in[i] == 'p')
        {
            str_out[p] = 'q';
            p++;
        }
        else if (str_in[i] == 'q')
        {
            str_out[p] = 'p';
            p++;
        }
        else
        {
            str_out[p] = str_in[i];
            p++;
        }
    }
}

int main()
{
    int t;
    char str_in[500];
    char str_out[500];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        init(str_in);
        init(str_out);
        scanf("%s", str_in);
        trans(str_in, str_out);
        puts(str_out);
    }
}