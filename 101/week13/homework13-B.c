#include <stdio.h>
#include <string.h>

int FindLuckyNumber(int sum)
{
    int ans = 0;
    for (; sum > 0;)
    {
        ans += sum % 10;
        sum /= 10;
    }
    if (ans >= 0 && ans <= 9)
    {
        return ans;
    }
    else
    {
        FindLuckyNumber(ans);
    }
}

int main()
{
    int sum;
    int len;
    char strin[10000];
    while (scanf("%s", strin) != EOF)
    {
        if (strcmp(strin, "0") == 0)
        {
            break;
        }

        /*init*/
        len = strlen(strin);
        sum = 0;

        for (int i = 0; i < len; i++)
        {
            sum += strin[i] - '0';
        }
        if (sum >= 0 && sum <= 9)
        {
            printf("%d\n", sum);
            return 0;
        }
        else
        {
            printf("%d\n", FindLuckyNumber(sum));
        }
    }
}