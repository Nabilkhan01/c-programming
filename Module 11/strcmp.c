#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b); // 2 ta string compare korarjonno built in function.
    if (v < 0)
    {
        printf("a small\n");
    }
    else if (v > 0)
    {
        printf("b small\n");
    }
    else
    {
        printf("same\n");
    }
    return 0;
}