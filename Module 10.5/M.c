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

    // find max & mini index
    int min_index = 0;
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < (a[min_index]))
        {
            min_index = i;
        }
        if (a[i] > (a[max_index]))
        {
            max_index = i;
        }
    }
    // swap max & mini value
    int tmp;
    tmp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = tmp;
    // print
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}