// Return + No parameter
#include <stdio.h>

int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b); // amr sum function e oi input niye nisi karon parameternei. r parameter nh thakle main function e input nite hoy.
    int sum = a + b;
    return sum;
}
int main()
{
    int s = sum();
    printf("%d", s);
    return 0;
}