#include <stdio.h>

int main()
{
    int n, p, q;
    scanf("%d", &n);
    p = n - 1;
    q = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            printf(" "); // prblm solved:reverse print-tohon p suru hoibo 0 theke r q suru hoibo n+2 theke
        }
        for (int j = 1; j <= q; j++)
        {
            printf("*");
        }
        p--;
        q += 2;
        printf("\n");
    }
    return 0;
}