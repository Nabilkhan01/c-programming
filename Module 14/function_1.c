// Return + Parameter
#include <stdio.h>

// return_type function_name (parameter)
//{
// code
// return what?
//}
int sum(int a, int b) // parameter e always veriable name hoy,tai datatype diye variable nisi.
{
    int sum = a + b; // ei sum kintu function er sum nh..eta nolo variable.
    return sum;      // ekhane jeta return korbo oida holo
}
int main()
{
    // main function e input tohon e nimu johon parameter thakbo.
    // int s = sum(10, 20); eta ekta process
    // printf("%d", s);
    printf("%d\n", sum(10, 20)); // eta arek ta process.
    int a, b;                    // eta arek ta process.
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}