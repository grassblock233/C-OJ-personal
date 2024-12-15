#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str_input[50], str[50] = {'T', 'o', 'm', 'o', 'r', 'i'};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str_input);
        if (strcmp(str_input, str) == 0)
        {
            puts(str_input);
            printf("Haruhikage\n");
        }
        else
        {
            puts(str_input);
        }
    }
    return 0;
}