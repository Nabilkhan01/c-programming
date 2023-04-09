#include <stdio.h>

int main()
{
    int i, n;
    long long int sum = 0; // long long use korsi karon sum er value 9 bit er beshi. r long long use kormu tohon oi johon value 9 bit er beshi hobe.
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}