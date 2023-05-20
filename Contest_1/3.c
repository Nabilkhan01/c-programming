#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // highest mark search
    int highest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (highest < a[i])
        {
            highest = a[i];
        }
    }
    // difference check
    for (int i = 0; i < n; i++)
    {
        printf("%d ", highest - a[i]);
    }
    return 0;
}