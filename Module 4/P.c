#include <stdio.h>

int main()
{
    int X, Digit;
    scanf("%d", &X);
    Digit = X / 1000;
    if (Digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}