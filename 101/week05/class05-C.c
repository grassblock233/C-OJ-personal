#include <stdio.h>
int main()
{
    int min, max;
    int x, y, z;
    scanf("%d,%d", &min, &max);
    for (x = min; x <= max; x++)
    {
        for (y = min; y <= max; y++)
        {
            for (z = min; z <= max; z++)
            {
                if (x * x + y * y == z * z && y >= x)
                {
                    printf("%d^2+%d^2=%d^2\n", x, y, z);
                }
            }
        }
    }
    return 0;
}