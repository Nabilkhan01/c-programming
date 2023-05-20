
#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]); // addressing korte vule jai bar bar.
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
                continue; // or if er age else dile o hbe.
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Unit Matrix\n");
    }
    else
    {
        printf("Not a unit matrix\n");
    }
    return 0;
}