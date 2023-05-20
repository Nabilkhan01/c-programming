#include <stdio.h>
#include <string.h>
void fun(char *a)
{
    a[0] = 'n';
}
int main()
{
    char a[] = "KHAN";
    fun(a);
    printf("%s", a);

    return 0;
}