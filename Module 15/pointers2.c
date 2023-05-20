#include <stdio.h>

int main()
{
    double x = 5.30;
    double *ptr = &x;
    double *ptr2 = ptr;
    //*ptr = 23.67;
    *ptr2 = 20.69;

    printf("x er value:%.2lf\n", x);
    printf("x er value:%.2lf\n", *ptr);

    return 0;
}