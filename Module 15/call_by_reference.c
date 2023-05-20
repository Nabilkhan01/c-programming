#include <stdio.h>
void fun(int *p)
{
    *p = 100;
}
int main()
{
    int x = 90;
    fun(&x); // ekhane address k reference hisebe dhore fun call korsi.ekhetre pointer variable e jabe pore dekhbe oi address e kar value rakha oida chane kore print dibe.
    printf("%d\n", x);
    return 0;
}