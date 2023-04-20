#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    scanf("%s", &a);
    int i, len = strlen(a);
    for (i = 0; i < len; i++)
    {
        if (a[i] == ',')
        {
            a[i] = ' ';
        }
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        printf("%c", a[i]);
    }

    return 0;
}