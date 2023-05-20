// No return + Parameter
#include <stdio.h>

void sum(int a, int b) // void disi karon no return.
{
    int sum = a + b;
    printf("%d\n", sum);
}
int main()
{
    int a, b; // parameter th dise tai main function e oi input nite parbo.
    scanf("%d %d", &a, &b);
    sum(a, b); // ekhon int s= er moddhe sum k rakhi nai karon ekhon th sum main function e ashe nai(no return).ekhon sudu call kore dibo.
    return 0;
}