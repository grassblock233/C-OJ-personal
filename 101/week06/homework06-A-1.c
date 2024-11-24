#include <stdio.h>
int main()
{
    int n; /*input count*/
    int i;
    int left, right;
    int temp; /*to exchange*/
    int number[30000] = {0};
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
        }
        for (left = 0, right = n - 1; left < right;)
        {
            if (number[left] < 0)
            {
                left++;
            }
            if (number[right] >= 0)
            {
                right--;
            }
            /*exchange*/
            if (number[left] >= 0 && number[right] < 0)
            {
                temp = number[left];
                number[left] = number[right];
                number[right] = temp;
                left++;
                right--;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                printf("%d\n", number[i]);
            }
            else
            {
                printf("%d ", number[i]);
            }
        }
    }
    return 0;
}