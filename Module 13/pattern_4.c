#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s, p = 1;
    s = n - 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= p; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            s--;
            p += 2;
        }
        else
        {
            s++;
            p -= 2;
        }
        printf("\n");
    }
    return 0;
}