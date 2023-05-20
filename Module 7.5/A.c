#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    long long int mul;
    if (sum < 0)
    {
        mul = sum * (-1);
        printf("%lld\n", mul);
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}