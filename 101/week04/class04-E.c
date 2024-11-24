#include <stdio.h>
int main()
{
    float n;
    while (scanf("%f", &n) != EOF)
    {
        printf("%6.2f\n", n);
        printf("%6.2f %6.2f\n", n, n);
        printf("%6.2f %6.2f %6.2f\n", n, n, n);
    }
    return 0;
}