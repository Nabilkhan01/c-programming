#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // jodi reverse print korte bolto taile for(int j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}