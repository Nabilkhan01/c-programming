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
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) // prblm:n-1 & n 2 ta tei same answer ashe.
    {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++) // n-1 porjonto loop cholbe karon value replace houer por pos onujayi value johon remove hbe tohon last index khali hoye jabe.
    {
        printf("%d ", a[i]);
    }
    return 0;
}