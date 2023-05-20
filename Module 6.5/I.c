#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    a = n / 10;
    b = n % 10;
    if (a != 0 && b == 0)
    {
        printf("NO\n");
    }

    else if (a % b == 0 || b % a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
