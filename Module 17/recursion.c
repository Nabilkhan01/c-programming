/*Recursion mane oi function er moddhe oi fun ke oi call kora.*/
#include <stdio.h>
void fun()
{
    printf("Fun\n"); // ekhane bar bar fun call hbe  but sob gula same thakbe nh copy function call hbe.
    fun();
}
int main()
{
    fun();
    return 0;
}