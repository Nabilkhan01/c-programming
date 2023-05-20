#include <stdio.h>
void pri(int n)
{
    if (n == 0)
        return;
    printf("%d%s", n, n != 0 ? " " : "");
    pri(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    pri(n);
    return 0;
}
