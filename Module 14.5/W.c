#include <stdio.h>

int main() // prblm not solved: can't figure out.
{
    int n;
    scanf("%d", &n);
    // int s = n - 1, t = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= s; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= t; j++)
    //     {
    //         printf("*");
    //     }
    //     s--;
    //     t += 2;
    // printf("\n");
    //}
    // return 0;
}