#include <stdio.h>

int main()
{
    int x = 100;
    int *p = &x;
    // address print
    printf("%p\n", p); // sudu p dile address
    // value print by de-reference
    printf("%d\n", *p); // star p dile value
    // x er value change korte hole *p = new value dite hbe.
    *p = 20;
    printf("%d\n", *p);
    return 0;
}