#include <stdio.h>
#include <stdbool.h>

void sort(int *number, int count, int mode)
{
    int i, n;
    int swap;
    for (i = count - 1; i > 0; i--)
    {
        if (mode == 0)
        {
            for (n = 1; n <= i; n++)
            {
                if (*(number + n) < *(number + (n - 1)))
                {
                    swap = *(number + (n - 1));
                    *(number + (n - 1)) = *(number + n);
                    *(number + n) = swap;
                }
            }
        }
        else
        {
            for (n = 1; n <= i; n++)
            {
                if (*(number + n) > *(number + (n - 1)))
                {
                    swap = *(number + (n - 1));
                    *(number + (n - 1)) = *(number + n);
                    *(number + n) = swap;
                }
            }
        }
    }
}

int trans(int number, int mode)
{
    int x;
    int temp;
    int count = 0;
    int i;
    int sum;
    int n[20];
    x = 1;
    sum = 0;
    for (temp = number; temp > 0;)
    {
        temp = temp / 10;
        count++;
    }
    temp = number;
    for (i = 0; i < count; i++)
    {
        n[i] = 0;
    }
    for (i = 0; i < count; i++)
    {
        n[i] = temp % 10;
        temp = temp / 10;
    }
    sort(n, count, mode);
    for (i = 0; i < count; i++)
    {
        sum = sum + n[i] * x;
        x = x * 10;
    }
    return sum;
}

int main()
{
    int cud_number[1500];
    int number;
    int i, n;
    int count;
    bool flag = true;
    count = 0;
    scanf("%d", &number);
    cud_number[count] = number;
    printf("%d", cud_number[count]);
    for (i = 0;; i++)
    {
        number = trans(number, 0) - trans(number, 1);
        printf("->%d", number);
        count++;
        cud_number[count] = number;
        for (n = 0; n < count; n++)
        {
            if (cud_number[n] == number)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    return 0;
}