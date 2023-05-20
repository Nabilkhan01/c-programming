#include <stdio.h>
void pri(int n)
{
    if (n < 0)
        return;
    return;
    printf("%d\n", n);
    pri(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    pri(n);
    return 0;
}