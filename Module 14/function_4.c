#include <stdio.h>

void sum()
{
    int a, b; // no parameter tai ei function e input nisi.
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum); // No return tai ei function e print kore disi.
}

int main()
{
    sum(); // main function just function call korbe.
    return 0;
}