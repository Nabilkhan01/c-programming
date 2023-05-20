#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    int k = len_a;
    for (int i = 0; i <= len_b; i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s %s", a, b);
    return 0;
}