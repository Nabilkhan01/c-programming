#include <stdio.h>
#include <string.h>
void fun(char /**a*/ a[]) // string er khetre alada kore length dite hoy nh karon length jekono jyga theke access neya jay.
{
    printf("%d\n", strlen(a));
}
int main()
{
    char a[] = "Nabil";
    fun(a);
    return 0;
}