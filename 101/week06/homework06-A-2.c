#include <stdio.h>
int main()
{
    int n; /*input count*/
    int i;
    int number[10000] = {0};
    int count;
    while (scanf("%d", &n) != EOF)
    {
        count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (number[i] < 0)
            {
                count++;
                if (count == n)
                {
                    printf("%d\n", number[i]);
                }
                else
                {
                    printf("%d ", number[i]);
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            if (number[i] >= 0)
            {
                count++;
                if (count == n)
                {
                    printf("%d\n", number[i]);
                }
                else
                {
                    printf("%d ", number[i]);
                }
            }
        }
    }
    return 0;
}