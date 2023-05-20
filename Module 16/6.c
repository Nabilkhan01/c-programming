/*
Pass by reference is a way to pass the memory address of a
variable as an argument to a function, allowing the function
to modify the original variable.
For example: In the following code:
*/

#include <stdio.h>

void passByReference(int *n)
{
    *n = 100;
}

int main()
{
    int x = 10;
    passByReference(&x);

    printf("%d", x);
    return 0;
}

/*
Pass by value: Means that a copy of the value being passed to the function,
leaving the original value unchanged.
For example: In the following code,
the function passByValue receives a copy of the value of x and changes the copy,
leaving the original value of x unchanged.
*/

#include <stdio.h>

void passByValue(int n)
{
    n = n + 1;
}

int main()
{
    int a = 100;
    passByValue(a);
    printf("%d\n", a);
    return 0;
}