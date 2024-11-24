#include <stdio.h>
int main()
{
    unsigned int n, n1, n2;
    int i;
    int su[3] = {0, 0, 0};
    while (scanf("%d", &n) != EOF)
    {
        n1 = n;
        n = n * n;
        n = n * n1;
        for (i = 0; i < 3; i++)
        {
            su[i] = n % 10;
            n = n / 10;
        }
        for (i = 2; i >= 0; i--)
        {
            printf("%d", su[i]);
        }
        printf("\n");
    }
    return 0;
}