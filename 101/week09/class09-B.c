#include <stdio.h>

int main()
{
    /*input line count*/
    int line;
    scanf("%d", &line);

    /*def part*/
    int length[1000][2]; /*common number start and end*/
    int number[1000];    /*input*/
    int count_co_n;      /*count common numbers*/
    int i;               /*loop*/
    int co_n;            /*common number*/
    int cmp[1000];       /*collect length and compare*/
    int loc;             /*where is the longest*/
    int max;             /*max_length*/

    /*input part*/
    for (i = 0; i < line; i++)
    {
        scanf("%d", &number[i]);
    }

    /*find common number*/
    co_n = number[0];
    for (i = 0; i < line; i++)
    {
        if (number[i] == co_n)
        {
            continue;
        }
        else
        {
            co_n = number[i];
            length[count_co_n][1] = i - 1;
            count_co_n++;
            length[count_co_n][0] = i;
        }
    }
    length[count_co_n][1] = i - 1;
    /*cu length*/
    for (i = 0; i < count_co_n; i++)
    {
        cmp[i] = length[i][1] - length[i][0] + 1;
    }

    /*compare length*/
    max = cmp[0];
    loc = 0;
    for (i = 1; i < count_co_n; i++)
    {
        if (cmp[i] > max)
        {
            max = cmp[i];
            loc = i;
        }
    }

    /*output*/
    if (max == 1)
    {
        printf("No equal number list.");
    }
    else
    {
        printf("The longest equal number list is from %d to %d.", length[loc][0], length[loc][1]);
    }

    return 0;
}