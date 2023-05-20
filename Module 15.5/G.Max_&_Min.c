#include <stdio.h>
void array(int a[], int n, int *min, int *max)
{
    *max = a[0];
    *min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (*max < a[i])
        {
            *max = a[i];
        }
        if (*min > a[i])
        {
            *min = a[i];
        }
    }
    printf("%d %d\n", *min, *max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min, max;
    array(a, n, &min, &max);

    return 0;
}
