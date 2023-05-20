#include <stdio.h>

void fun(int x)
{
    x = 100;
}
int main()
{
    int x = 10;
    fun(x); // call by value te just value tai copy hoy variable nh tai x=100 er kono impact pore nai.
    printf("main er x er value:%d\n", x);

    return 0;
}