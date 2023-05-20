#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int flag = 0;                   // johon vitore flag =1 dimu tohon baire flag =0 dimu.
    for (int i = 0; i < n - 1; i++) // i<n-1 disi karon i last index er 1 age sesh hoy.
    {
        for (int j = i + 1; j < n; j++) // j=i+1 disi karon j i er 1 pore suru hoy.
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}