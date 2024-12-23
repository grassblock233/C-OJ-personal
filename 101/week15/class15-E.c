#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ddl, *hpy;
    while (scanf("%d", &n) != EOF)
    {
        ddl = malloc(sizeof(int) * (n + 10));
        hpy = malloc(sizeof(int) * (n + 10));
        if (ddl == NULL)
            return -1;
        if (hpy == NULL)
            return -1;
        
    }
}