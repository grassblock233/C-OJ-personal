#include <stdio.h>
int main()
{
    int min, max, number, other_number, i, judge;
    scanf("%d %d", &min, &max);
    for (number = min; number <= max; number++)
    {
        for (i = 1, other_number = 0; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                other_number = other_number + i;
            }
        }
        if ((other_number >= min && other_number <= max) && (other_number > number))
        {
            for (i = 1, judge = 0; i <= other_number / 2; i++)
            {
                if (other_number % i == 0)
                {
                    judge = judge + i;
                }
            }
            if (number == judge)
            {
                printf("%d %d\n", number, other_number);
            }
        }
    }
    return 0;
}