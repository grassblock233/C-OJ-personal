#include <stdio.h>
#include <string.h>
void trans_BtoD(char str[])
{
    int sum = 0;
    int i, m;
    m = 1;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        sum += (str[i] - '0') * m;
        m = m << 1;
    }
    printf("%d\n", sum);
}

void trans_DtoB(char str[])
{
    int i, m;
    int number;
    int sum[50];
    int count = 0;
    m = 1;
    number = 0;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        number += (str[i] - '0') * m;
        m *= 10;
    }
    for (i = 0; number > 0; i++)
    {
        sum[i] = number % 2;
        number /= 2;
        count++;
    }
    for (i = count; i < 8; i++)
    {
        printf("0");
    }
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    char fm, str[500];
    while (scanf("%c %s", &fm, str) != EOF)
    {
        if (fm == 'B')
        {
            trans_BtoD(str);
        }
        else if (fm == 'D')
        {
            trans_DtoB(str);
        }
        getchar();
    }
}
