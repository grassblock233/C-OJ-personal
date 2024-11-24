#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    int flag_length, flag_a, flag_A, flag_0, flag_other;
    int n;    /*password count*/
    int i, a; /*loop*/
    char password[1000][50];
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        gets(password[i]);
        count = 0;
        flag_a = 0;
        flag_A = 0;
        flag_0 = 0;
        flag_other = 0;
        if (strlen(password[i]) < 6)
        {
            flag_length = 0;
        }
        else
        {
            flag_length = 1;
        }
        for (a = 0; a < strlen(password[i]); a++)
        {
            if (password[i][a] >= 'A' && password[i][a] <= 'Z')
            {
                if (flag_A == 0)
                {
                    count++;
                    flag_A = 1;
                    continue;
                }
                else
                {
                    continue;
                }
            }
            else if (password[i][a] >= 'a' && password[i][a] <= 'z')
            {
                if (flag_a == 0)
                {
                    count++;
                    flag_a = 1;
                    continue;
                }
                else
                {
                    continue;
                }
            }
            else if (password[i][a] >= '0' && password[i][a] <= '9')
            {
                if (flag_0 == 0)
                {
                    count++;
                    flag_0 = 1;
                    continue;
                }
                else
                {
                    continue;
                }
            }
            else if (flag_other == 0)
            {
                if (flag_other == 0)
                {
                    count++;
                    flag_A = 1;
                    continue;
                }
                else
                {
                    continue;
                }
            }
        }
        if (flag_length == 0)
        {
            printf("Not Safe\n");
        }
        else if (count == 1)
        {
            printf("Not Safe\n");
        }
        else if (count == 2)
        {
            printf("Medium Safe\n");
        }
        else if (count >= 3)
        {
            printf("Safe\n");
        }
    }
    return 0;
}