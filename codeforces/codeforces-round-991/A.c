#include <stdio.h>
#include <math.h>

int main()
{
    int loc;
    int t;
    int n, k;
    int a[200];
    int ans;
    int flag;
    int finflag;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        finflag = 0;
        for (int m = 0; m < n; m++)
        {
            scanf("%d", &a[m]);
        }
        for (int m = 0; m < n; m++)
        {
            flag = 0;
            for (int h = 0; h < n; h++)
            {
                if (h == m)
                {
                    continue;
                }
                else
                {
                    if (abs(a[m] - a[h]) % k == 0)
                    {
                        flag = 1;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 0)
            {
                loc = m;
                finflag = 1;
                break;
            }
        }
        if (finflag == 1)
        {
            printf("YES\n");
            printf("%d\n", loc + 1);
        }
        else
        {
            printf("NO\n");
        }
    }
}
