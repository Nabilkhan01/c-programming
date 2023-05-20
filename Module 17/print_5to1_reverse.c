#include <stdio.h>
void fun(int i)
{
    if (i == 6)
        return;
    fun(i + 1); // 5 4 3 2
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    fun(i);
    return 0;
}