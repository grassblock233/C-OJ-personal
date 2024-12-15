#include <stdio.h>
#include <stdlib.h>

// 自定义排序函数
void sort(int **p, int n)
{
    int i, j;
    int *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*p[j] > *p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }
        int *arr = (int *)malloc(n * sizeof(int));
        int **p = (int **)malloc(n * sizeof(int *));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            p[i] = &arr[i];
        }

        sort(p, n);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", *p[i]);
        }
        printf("\n");

        free(arr);
        free(p);
    }

    return 0;
}
