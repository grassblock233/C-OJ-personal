#include <stdio.h>
int tran[100010];
int used[100010];
int start;

void Findsize(int k)
{
    used[k] = 1;
    k = tran[k];
    if (start != k)
    {
        Findsize(k);
    }
    else
    {
        return;
    }
}

int main()
{
    int count;
    int T;
    int n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        count = 0;
        for (int k = 1; k <= n; k++)
        {
            scanf("%d", &tran[k]);
            used[k] = 0;
        }
        for (int k = 1; k <= n; k++)
        {
            if (used[k] == 0)
            {
                start = k;
                Findsize(k);
                count++;
            }
        }
        printf("%d\n", count - 1);
    }
    return 0;
}
