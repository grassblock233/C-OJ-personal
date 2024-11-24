#include <stdio.h>
int main()
{
    int box_type_count[7];
    int i, size_left, count, tmp;
    count = 0;
    for (i = 1; i < 7; i++)
    {
        scanf("%d", &box_type_count[i]);
    }
    count = count + box_type_count[6];
    count = count + box_type_count[5];
    count = count + box_type_count[4];
    if (box_type_count[3] % 4 == 0)
    {
        count = count + box_type_count[3] / 4;
    }
    else
    {
        count = count + box_type_count[3] / 4 + 1;
    }

    if (box_type_count[2] % 6)
    {
        tmp = box_type_count[2] / 6;
    }
    else
    {
        tmp = box_type_count[2] / 6 + 1;
    }

    if (box_type_count[4] >= tmp)
    {
        count = count + 0;
    }
    else
    {
        if (box_type_count[3] % 4 == 0)
        {
            count = count + box_type_count[2] % 6 / 9;
        }
        if (box_type_count[3] % 4 == 1)
        {
            count = count + box_type_count[2] % 6 / 5;
        }
        if (box_type_count[3] % 4 == 2)
        {
            count = count + box_type_count[2] % 6 / 3;
        }
        if (box_type_count[3] % 4 == 3)
        {
            count = count + box_type_count[2] % 6 / 1;
        }
    }
    size_left = count * 36 - box_type_count[6] * 36 - box_type_count[5] * 25 - box_type_count[4] * 16 - box_type_count[3] * 9 - box_type_count[2] * 4;
    if (box_type_count[1] <= size_left)
    {
        count = count - 0;
    }
    else
    {
        if (box_type_count[1] % 36 == 0)
        {
            count = count + box_type_count[1] / 36;
        }
        else
        {
            count = count + box_type_count[1] / 36 + 1;
        }
    }
    printf("%d", count);
    return 0;
}