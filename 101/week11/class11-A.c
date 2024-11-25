#include <stdio.h>
#include <stdlib.h>

int Input(int s[])
{
    int i, count;
    count = 0;
    for (i = 0;; i++)
    {
        scanf("%d", (s + i));
        if (*(s + i) == 0)
        {
            break;
        }
        count++;
    }
    return count;
}

void statistics(int n, int s[], int *max, int *min, float *avg)
{
    int i;
    int sum = *(s + 0);
    *min = *(s + 0);
    *max = *(s + 0);
    for (i = 1; i < n; i++)
    {
        if (*(s + i) > *max)
        {
            *max = *(s + i);
        }
        if (*(s + i) < *min)
        {
            *min = *(s + i);
        }
        sum += *(s + i);
    }
    *avg = (float)sum / n;
    printf("Num=%d\n", n);
    printf("Max=%d\n", *max);
    printf("Min=%d\n", *min);
    printf("Avg=%.3f\n", *avg);
}

int main()
{
    float avg;
    int min, max;
    int n;
    int *s = malloc(sizeof(int) * 5000);
    if (s == NULL)
    {
        return -1;
    }
    n = Input(s);
    statistics(n, s, &max, &min, &avg);
    return 0;
}