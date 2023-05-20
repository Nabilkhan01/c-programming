#include <stdio.h>
void fun(int i)
{
    if (i == 6)
        return; // Base Case(Recursion k stop korar montro)
    printf("%d\n", i);
    fun(i + 1); // recursion control:mane kon way te print hbe ta.
}
int main()
{
    int i = 1;
    fun(i);
    return 0;
}