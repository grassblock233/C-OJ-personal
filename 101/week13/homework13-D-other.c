#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    char min = str[0];
    char max = str[0];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < min)
        {
            min = str[i];
        }
        if (str[i] > max)
        {
            max = str[i];
        }
    }

    char new_str[100] = "";
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != min && str[i] != max)
        {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';

    printf("%s\n", new_str);

    return 0;
}