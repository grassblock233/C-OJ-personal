#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2)
{
    char tmp[20];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
}

void sort(char (*name)[20], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k <= i; k++)
        {
            if (strcmp(name[k], name[k - 1]) < 0)
            {
                swap(name[k], name[k - 1]);
            }
        }
    }
}

void print(char (*name)[20], int n)
{
    for (int i = 0; i < n; i++)
    {
        puts(name[i]);
    }
}

int main()
{
    char name[1000][20];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(name[i]);
    }
    sort(name, n);
    print(name, n);
    return 0;
}