#include <stdio.h>
void fun(int i)
{
    if (i == 0)
        return;
    printf("%d\n", i);
    fun(i - 1);
}
int main()
{
    int i = 5;
    fun(i);
    return 0;
}