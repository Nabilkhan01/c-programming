#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n]; // ar[n] emn vabe neyar mane hocche eda variable sized array.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = n - 1; i >= 0; i--) // this is the reverse loop.
    {
        printf("%d ", ar[i]);
    }

    return 0;
}