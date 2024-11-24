#include <stdio.h>
int main()
{
    int a, n;
    double s;
    while (scanf("%d", &a) != EOF)
    {
        s = 0;
        for (n = 0; s <= a;)
        {
            n++;
            s = s + 1.0 / n;
        }
        printf("s=%.4f,n=%d\n", s, n);
    }
    return 0;
}