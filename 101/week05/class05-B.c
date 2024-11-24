#include <stdio.h>
int main()
{
    int matrix[10][10];
    int matrix_trans[10][10];
    int size;
    int a, b;
    scanf("%d", &size);
    for (a = 0; a < size; a++)
    {
        for (b = 0; b < size; b++)
        {
            scanf("%d", &matrix[a][b]);
        }
    }
    for (a = 0; a < size; a++)
    {
        for (b = 0; b < size; b++)
        {
            matrix_trans[b][a] = matrix[a][b];
        }
    }
    for (a = 0; a < size; a++)
    {
        if (a != 0)
        {
            printf("\n");
        }
        for (b = 0; b < size; b++)
        {
            if (b == size - 1)
            {
                printf("%d", matrix_trans[a][b]);
            }
            else
            {
                printf("%d ", matrix_trans[a][b]);
            }
        }
    }
    return 0;
}