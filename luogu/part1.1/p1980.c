#include <stdio.h>
int main()
{
    int n, x, i, tmp, judge ,count;
    count = 0;
    scanf("%d %d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        tmp = i;
        for (;tmp>0;)
        {
            judge = tmp%10;
            tmp = tmp/10;
            if(judge == x)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}