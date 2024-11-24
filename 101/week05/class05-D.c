#include <stdio.h>
int main()
{
    int x, y, x_1;
    int size;
    int matrix[6][6];
    int flag;
    scanf("%d", &size);
    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            scanf("%d", &matrix[x][y]);
        }
    }
    for (y = 0, x_1 = 1; y < size; y++, x_1++)
    {
        for (x = x_1; x < size; x++)
        {
            if (matrix[x][y] != 0)
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}