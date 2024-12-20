#include <stdio.h>

int main()
{
    int score[20];
    int max;

    scanf("%d", &score[0]);
    max = score[0];
    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (score[i] == max)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}