#include <stdio.h>
#define size 1000
int main()
{
    int n; /*money*/
    int k; /*vagetable total count*/
    char name[size][100];
    int price[size], total[size];
    double sum;
    int i, x; /*loop*/
    int swap;
    while (scanf("%d %d", &n, &k) != EOF)
    {
        /*exit part*/
        if (n == 0 && k == 0)
        {
            return 0;
        }
        sum = 0;
        for (i = 0; i < k; i++)
        {
            scanf("%s %d %d", name[i], &price[i], &total[i]);
        }
        /*sort: find lowest price*/
        for (x = k - 1; x > 0; x--)
        {
            for (i = 1; i <= x; i++)
            {
                if (price[i] < price[i - 1])
                {
                    swap = price[i];
                    price[i] = price[i - 1];
                    price[i - 1] = swap;
                    swap = total[i];
                    total[i] = total[i - 1];
                    total[i - 1] = swap;
                }
            }
        }
        /*to buy something~*/
        for (i = 0; i < k; i++)
        {
            if (n >= price[i] * total[i])
            {
                n = n - price[i] * total[i];
                sum += total[i];
            }
            else
            {
                sum += (double)n / price[i];
                break;
            }
        }
        /*output part*/
        printf("%.0f\n", sum);
    }
}