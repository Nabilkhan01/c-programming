#include <stdio.h>
void pri(int n)
{
    if (n == 0)
        return;
    printf("I love Recursion\n");
    pri(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    pri(n);
    return 0;
}
