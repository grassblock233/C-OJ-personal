#include <stdio.h>
int main()
{
    /*define part*/
    int count_1, count_2; /*repeat count*/
    int max;
    int x, y, locate_x, locate_y; /*locate*/
    int x1;
    int m; /*square size*/
    int square[6][6] = {0};
    int flag;

    /*input part*/
    scanf("%d", &m);
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < m; y++)
        {
            scanf("%d", &square[x][y]);
        }
    }

    for (x = 0; x < m; x++)
    {
        y = 0;
        flag = 1;
        count_1 = 0;
        count_2 = 0;
        max = square[x][y];
        locate_x = x;
        locate_y = y;
        /*find max in x*/
        for (y = 1; y < m; y++)
        {
            if (square[x][y] > square[x][y - 1])
            {
                max = square[x][y];
                locate_x = x;
                locate_y = y;
            }
        }
        /*x:whether repeat*/
        for (y = 0; y < m; y++)
        {
            if (square[x][y] == max)
            {
                count_1++;
            }
        }
        if (count_1 != 1)
        {
            flag = 0;
        }
        else
        {
            /*check whether min*/
            for (x1 = 0; x1 < m; x1++)
            {
                if (square[x1][locate_y] < square[x][locate_y])
                {
                    flag = 0;
                }
            }
            /*y:whether repeat*/
            for (x1 = 0; x1 < m; x1++)
            {
                if (square[x1][locate_y] == max)
                {
                    count_2++;
                }
            }
            if (count_2 != 1)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("%d %d", locate_x, locate_y);
            return 0;
        }
    }
    printf("NO");
    return 0;
}