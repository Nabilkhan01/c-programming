#include <stdio.h>

int main()
{
    int a, b, dif;
    scanf("%d %d", &a, &b);
    dif = a - b;
    if (dif >= 0)
    {
        printf("%d\n", dif);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}