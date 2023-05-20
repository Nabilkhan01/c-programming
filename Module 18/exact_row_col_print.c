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
            scanf("%d", &a[i][j]);
        }
    }
    // int e_row; // mane ekhane row stable thakbe kintu col change hbe tai col er upor loop cholbe.
    // scanf("%d", &e_row);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", a[e_row][i]);
    // }
    int e_col; // col stable thake & row er upor loop cholbe.
    scanf("%d", &e_col);
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", a[i][e_col]);
    }
    return 0;
}