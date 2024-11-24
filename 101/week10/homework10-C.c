#include <stdio.h>
#include <string.h>

void trans(char *in_str, char *out_str, unsigned int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (*(in_str + i) > 'A' && *(in_str + i) < 'Z')
        {
            *(out_str + i) = (*(in_str + i) - 'A') + 'a';
        }
        else
        {
            *(out_str + i) = *(in_str + i);
        }
    }
}

int main()
{
    char in_str[5000];
    char trans_str[5000];
    char salt[4] = {'s', 'a', 'l', 't'};
    int next[4];
    while (scanf("%s", in_str) != EOF)
    {
        trans(in_str, trans_str, strlen(in_str));

    }
}