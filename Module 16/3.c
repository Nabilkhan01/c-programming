#include <stdio.h>

int count_before_zero(int *num, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (num[i] == 0)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int count = count_before_zero(num, n);
    printf("%d\n", count);
    return 0;
}