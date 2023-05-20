#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }
        s--;
        t += 2;
        printf("\n");
    }
    return 0;
}