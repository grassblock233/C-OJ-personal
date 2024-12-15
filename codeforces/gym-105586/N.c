#include <stdio.h>
int main()
{
    char name[50][50];
    int vote[50];
    int n;
    int max;
    int loc;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", &name[i], &vote[i]);
    }
    loc = 0;
    max = vote[0];
    for (int i = 1; i < n; i++)
    {
        if (vote[i] > max)
        {
            loc = i;
            max = vote[i];
        }
    }
    puts(name[loc]);
}