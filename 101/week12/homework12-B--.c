#include <stdio.h>

int trans(int *s)
{
    int sorted_s[25];
    int min[4], max;
    copy(s, sorted_s);
    sort(sorted_s);
}

void exchange(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int *s)
{
    for (int i = 24; i >= 0; i--)
    {
        for (int n = 1; n <= i; n++)
        {
            if (s[i] < s[i - 1])
            {
                exchange(&s[i], &s[i - 1]);
            }
        }
    }
}

int copy(int *source, int *dest)
{
    for (int i = 0; i < 25; i++)
    {
        dest[i] = source[i];
    }
}

int main()
{
    int s[25];
    while (scanf("%d", &s[0]) != EOF)
    {
        /*input*/
        for (int i = 1; i < 25; i++)
        {
            scanf("%d", &s[i]);
        }
        /*trans*/
        trans(s);
    }
}