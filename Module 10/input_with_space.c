#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // gets(a); eta o ekta way string input neyar.
    fgets(a, 17, stdin);
    // a[13] = '\0'; jekhane null dimu oikhane oi thaima jaibo.
    printf("%s", a);
    return 0;
}