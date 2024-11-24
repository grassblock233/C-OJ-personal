#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size;
    int n; /*people count*/
    int s; /*start*/
    int m; /*end*/
    int i; /*loop*/
    int count;
    int people[2000];
    scanf("%d\n%d\n%d", &n, &s, &m);
    count = 0;
    size = n;
    for (i = 0; i < 2000; i++)
    {
        people[i] = true;
    }

    for (i = s; size > 1; i++)
    {
        if (i > n)
        {
            i = 0;
            continue;
        }
        if (people[i] == true)
        {
            count++;
        }
        else
        {
            continue;
        }
        if (count == m)
        {
            people[i] = false;
            size--;
            count = 0;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (people[i] == 1)
        {
            printf("%d", i);
        }
    }
    return 0;
}