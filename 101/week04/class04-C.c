#include <stdio.h>
int abs(int n)
{
    if (n < 0)
    {
        n = 0 - n;
        return n;
    }
    else
    {
        return n;
    }
}

int min_distance(int distance, int data)
{
    if (distance >= abs(data))
    {
        distance = abs(data);
    }
    return distance;
}

int main()
{
    int length1, length2;
    int i, a, b;
    int number1[1000], number2[1000];
    int distance;
    while (scanf("%d %d", &length1, &length2) != EOF)
    {
        for (i = 0; i < length1; i++)
        {
            scanf("%d", &number1[i]);
        }
        for (i = 0; i < length2; i++)
        {
            scanf("%d", &number2[i]);
        }
        for (a = 0, b = 0, distance = abs(number1[0] - number2[0]); a < length1 && b < length2;)
        {
            if (number1[a] == number2[b])
            {
                distance = 0;
                printf("%d\n", distance);
                return 0;
            }
            else if (number1[a] < number2[b])
            {
                distance = min_distance(distance, abs(number1[a] - number2[b]));
                a++;
            }
            else if (number1[a] > number2[b])
            {
                distance = min_distance(distance, abs(number1[a] - number2[b]));
                b++;
            }
        }
        printf("%d\n", distance);
    }
}