#include <stdio.h> //2246
#include <stdlib.h>
int main()
{
    int compare(int a, int b);
    void change(int *a, int *b);
    int num[25], *max, *min, i, j, n, temp, decrease, *tmp;
    while (scanf("%d", &num[0]) != EOF)
    {
        max = &num[0];
        min = &num[0];
        for (i = 1; i < 25; i++)
        {
            scanf("%d", &num[i]);
            if (compare(*max, num[i]) < 0)
                max = &num[i];
            if (compare(*min, num[i]) > 0)
                min = &num[i];
        }
        if (min == &num[12])
            min = max;
        if (max != &num[12])
            change(max, &num[12]);
        change(min, &num[0]);
        min = &num[0];
        for (i = 1; i < 4; i++)
        {
            decrease = num[12] - num[0];
            for (j = 0; j < 25; j++)
                if (compare(num[j], *min) > 0 && decrease > compare(num[j], *min))
                {
                    decrease = compare(num[j], *min);
                    tmp = &num[j];
                }
            if (i == 1)
            {
                change(tmp, &num[4]);
                min = &num[4];
            }
            else if (i == 2)
            {
                change(tmp, &num[20]);
                min = &num[20];
            }
            else if (i == 3)
            {
                change(tmp, &num[24]);
                min = &num[24];
            }
        }
        for (i = 0; i < 25; i++)
        {
            printf("%d ", num[i]);
            if ((i + 1) % 5 == 0)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
int compare(int a, int b)
{
    return a - b;
}
void change(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}