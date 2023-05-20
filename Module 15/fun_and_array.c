#include <stdio.h>
void fun(int *a /*a[]*/, int size) // function johon array recive kortbo tohon sathe sathe size o pathaite hoibo.
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    fun(a, 5); // array pathaile size o pathaite hbe.
    return 0;
}