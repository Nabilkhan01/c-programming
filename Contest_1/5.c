#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int s, flag = 0, pos = 0;
        scanf("%d", &s);

        for (int i = 0; i < n; i++)
        {
            if (s == a[i] && flag == 0)
            {
                pos = i + 1;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("Case%d: %d\n", i + 1, pos);
        }
        else
        {
            printf("Case%d: Not Found\n", i + 1);
        }
    }
    return 0;
}