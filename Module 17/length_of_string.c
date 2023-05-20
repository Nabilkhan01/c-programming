#include <stdio.h>
int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int len = fun(a, i + 1);
    return len + 1;
}
int main()
{
    char a[6] = "NABIL";
    int i = 0;
    int length = fun(a, i);
    printf("%d\n", length);
    return 0;
} // prblm not solved:can't got the logic.