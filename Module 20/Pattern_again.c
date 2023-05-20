#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p = n - 1;
    int q = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= p; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int i = 1; i <= q; i++)
            {
                printf("^");
            }
        }
        else if (i % 2 == 0)
        {
            for (int i = 1; i <= q; i++)
            {
                printf("*");
            }
        }
        p--;
        q += 2;
        printf("\n");
    }
    return 0;
}