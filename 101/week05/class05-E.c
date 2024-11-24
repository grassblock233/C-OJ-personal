#include <stdio.h>
int Is_palindromic_number(int number)
{
    int flag, temp, i1, i2, count;
    int all_number[5];
    flag = 1;
    for (temp = number, i1 = 0, count = 0; temp > 0; i1++, count++)
    {
        all_number[i1] = temp % 10;
        temp = temp / 10;
    }
    for (i1 = 0, i2 = count - 1; (i1 + 1) <= (count / 2); i1++, i2--)
    {
        if (all_number[i1] != all_number[i2])
        {
            flag = 0;
        }
    }
    return flag;
}

int Is_prime_number(int number)
{
    int i;
    int flag;
    flag = 1;
    for (i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int min, max;
    int i, flag_palindromic_number, flag_prime_number;
    int count_line;
    count_line = 0;
    scanf("%d %d", &min, &max);
    for (i = min; i <= max; i++)
    {
        flag_palindromic_number = 0;
        flag_prime_number = 0;
        flag_palindromic_number = Is_palindromic_number(i);
        if (flag_palindromic_number == 1)
        {
            flag_prime_number = Is_prime_number(i);
        }
        if (flag_palindromic_number == 1 && flag_prime_number == 1)
        {
            printf("%6d", i);
            count_line++;
            if (count_line == 5)
            {
                count_line = 0;
                printf("\n");
            }
        }
    }
    return 0;
}