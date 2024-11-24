#include <stdio.h>
int main()
{
    int number, tmp_1, tmp_2, i, n;
    while (scanf("%d", &number) != EOF)
    {
        tmp_1 = number;
        for (n = 1; tmp_1 >= 1; n++)
        {
            tmp_1 = tmp_1 / 10;
        }
        for (i = 1; i < n; i++)
        {
            tmp_2 = number % 10;
            number = number / 10;
            printf("%d", tmp_2);
        }
        printf("\n");
    }
    return 0;
}