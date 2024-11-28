#include <stdio.h>
#include <string.h>

int trans(char str)
{
    int number;
    number = str - 'A';
    return number;
}

int main()
{
    char str1[200], str2[200];
    char out[200];
    int number1[200], number2[200];
    int sum, sum1, sum2;
    int count;
    int p;
    while (scanf("%s", str1) != EOF)
    {
        /*input*/
        scanf("%s", str2);
        /*trans char->int*/
        for (int i = 0; i < strlen(str1); i++)
        {
            number1[i] = trans(str1[i]);
        }
        for (int i = 0; i < strlen(str2); i++)
        {
            number2[i] = trans(str2[i]);
        }
        /*trans 26->10*/
        count = 1;
        sum1 = 0;
        for (int i = strlen(str1) - 1; i >= 0; i--)
        {
            sum1 += number1[i] * count;
            count *= 10;
        }
        count = 1;
        sum2 = 0;
        for (int i = strlen(str2) - 1; i >= 0; i--)
        {
            sum2 += number2[i] * count;
            count *= 10;
        }
        /*a+b*/
        sum = sum1 + sum2;
        /*trans 10->26*/
        p = 0;
        for (; sum > 0; p++)
        {
            out[p] = sum % 26 + 'A';
            sum /= 26;
        }
        /*output*/
        for (int i = p; i >= 0; i--)
        {
            printf("%c", out[i]);
        }
        printf("\n");
    }
}