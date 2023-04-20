#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    int st = strlen(a);
    int i = 0, j = st - 1, p = 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            p = 0;
            break;
        }
        i++;
        j--;
    }
    if (p == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}