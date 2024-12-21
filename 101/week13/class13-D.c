#include <stdio.h>
#include <string.h>

void loc(char *str, int *p_e, int *p_start, int *p_end, int len)
{
    for (int i = *p_e - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            *p_start = 0;
        }
        else if (!(str[i] >= '0' && str[i] <= '9' || (str[i] == '.')))
        {
            *p_start = i + 1;
            break;
        }
    }
    for (int i = *p_e + 2; i <= len; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            *p_end = i - 1;
            break;
        }
    }
}

double trans(char *strnum, int len)
{
    int k;
    int point = 0;
    int count = 0;
    int p_e, p_start, p_end, p_point;
    _Bool FlagIsFloat = 0;
    _Bool FlagIsPlus = 0;
    double ans = 0;

    for (int i = 0; i < len; i++)
    {
        if (strnum[i] == '.')
        {
            FlagIsFloat = 1;
            p_point = i;
        }
        if (strnum[i] == '+')
        {
            FlagIsPlus = 1;
        }
        if (strnum[i] == 'e')
        {
            p_e = i;
        }
    }

    loc(strnum, &p_e, &p_start, &p_end, len);

    k = 1;
    for (int i = p_e - 1; i >= 0; i--)
    {
        if (strnum[i] == '.')
        {
            continue;
        }
        else
        {
            point += (strnum[i] - '0') * k;
            k *= 10;
        }
    }

    k = 1;
    for (int i = len - 1; i >= p_e + 2; i--)
    {
        count = (strnum[i] - '0') * k;
        k *= 10;
    }

    ans = (double)point;

    if (FlagIsFloat == 1)
    {
        count -= p_e - p_point - 1;
    }
    if (FlagIsPlus == 1)
    {
        for (int i = 0; i < count; i++)
        {
            ans *= (double)10;
        }
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            ans /= (double)10;
        }
    }

    return ans;
}

int main()
{
    int p = 0;
    int p_e, p_start, p_end;
    int len;
    char strnum[10000];
    char strin[10000];

    fgets(strin, 10000, stdin);
    len = strlen(strin);
    /*locate 'e'*/
    for (int i = 1; i < len; i++)
    {
        if (i + 1 < len && i + 2 < len)
        {
            if ((strin[i - 1] >= '0' && strin[i - 1] <= '9') && strin[i] == 'e' && (strin[i + 1] == '+' || strin[i + 1] == '-') && (strin[i + 2] >= '0' && strin[i + 2] <= '9'))
            {
                p_e = i;
                break;
            }
        }
    }

    /*locate start and end*/
    loc(strin, &p_e, &p_start, &p_end, len);
    for (int i = p_start; i <= p_end; i++)
    {
        strnum[p] = strin[i];
        p++;
    }

    printf("%.6lf", trans(strnum, p));
    return 0;
}